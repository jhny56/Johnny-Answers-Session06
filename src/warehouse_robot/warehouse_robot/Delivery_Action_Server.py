# ~/ros2_ws/src/warehouse_robot/nodes/robot_actions.py
import time
import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from my_interfaces.action import DeliverItem
from my_interfaces.srv import AddOrUpdateStock, CheckStock
from rclpy.callback_groups import ReentrantCallbackGroup, MutuallyExclusiveCallbackGroup

class WarehouseRobot(Node):

    def __init__(self):
        super().__init__('warehouse_robot')

        # Create callback groups
        self.callback_group = MutuallyExclusiveCallbackGroup()
        self.callback_groupStock = ReentrantCallbackGroup()

       
        self.cli_add_update = self.create_client(AddOrUpdateStock, 'add_or_update_stock',callback_group=self.callback_groupStock)
        self.cli_get = self.create_client(CheckStock, 'get_stock_level',callback_group=self.callback_groupStock)
        while not self.cli_add_update.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('AddOrUpdateStock service not available, waiting...')

        while not self.cli_get.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('GetStockLevel service not available, waiting...')
        self.get_logger().info('CONNECTION TO DATABASE COMPLETED')

        self._action_server = ActionServer(
            self,
            DeliverItem,
            'deliver_item',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback,
            callback_group=self.callback_group
        )

        self.get_logger().info('DELIVERING ACTION SERVER START')

    def send_add_update_request(self, item_name, stock_level):
        req = AddOrUpdateStock.Request()
        req.item_name = item_name
        req.stock_level = stock_level

        self.futuresend = self.cli_add_update.call_async(req)
        rclpy.spin_until_future_complete(self, self.futuresend)

        return self.futuresend.result()

    def send_add_update_request_sync(self, item_name, stock_level):
        req = AddOrUpdateStock.Request()
        req.item_name = item_name
        req.stock_level = stock_level

        return self.cli_add_update.call(req)
    
    def send_get_request(self, item_name):
        req = CheckStock.Request()
        req.item_name = item_name

        return self.cli_get.call(req)

    

    def done_callback(self, future):
        self.get_logger().info('CALL BACK ')

        if future.result().stock_level:
            return GoalResponse.ACCEPT

    def goal_callback(self, goal_request):
        self.get_logger().info('Received goal request')
        self.quantity = goal_request.quantity
        self.item_name = goal_request.item_name

        response = self.send_get_request(self.item_name)

        if response.stock_level != 0 and response.stock_level >= self.quantity and self.quantity > 0:
            self.stock_level = response.stock_level
            self.get_logger().info('Goal request ACCEPT')
            return GoalResponse.ACCEPT
        else:
            self.get_logger().info('Goal request REJECT')
            return GoalResponse.REJECT

    def cancel_callback(self, goal_handle):
        self.get_logger().info('Received cancel request')
        return CancelResponse.ACCEPT

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        feedback_msg = DeliverItem.Feedback()
        for j in range(1, self.quantity + 1):
            self.get_logger().info("Delivering Item " + str(j))
            feedback_msg.status = "Delivering Item " + str(j)
            goal_handle.publish_feedback(feedback_msg)
            for i in range(1, 11):
                feedback_msg.status = f'In progress: {i * 10}%'
                self.get_logger().info(feedback_msg.status)
                goal_handle.publish_feedback(feedback_msg)
                time.sleep(0.5)
            getResponse = self.send_get_request(self.item_name)
            addResponse = self.send_add_update_request_sync(self.item_name, getResponse.stock_level - 1)
            self.get_logger().info(f'Response: {addResponse.message}')

        goal_handle.succeed()
        #goal_handle.set_succeeded()

        result = DeliverItem.Result()
        result.success = True
        result.message = "Delivery of " + self.item_name + ": done"
        self.get_logger().info('Delivery completed')
        return result
    
def main(args=None):
    rclpy.init(args=args)
    node = WarehouseRobot()
    response = node.send_add_update_request('item1', 50)
    node.get_logger().info(f'Response: {response.message}')
    
    response = node.send_add_update_request('item2', 50)
    node.get_logger().info(f'Response: {response.message}')

    response = node.send_add_update_request('item3', 50)
    node.get_logger().info(f'Response: {response.message}')

    # node.send_get_request('item1')
    # node.send_get_request('item2')
    # node.send_get_request('item3')

    # Create a multi-threaded executor
    executor = MultiThreadedExecutor(num_threads=8)
    executor.add_node(node)
    
    try:
        executor.spin()
    finally:
        node.get_logger().info(f'Finally Run')
        
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
