# ~/ros2_ws/src/warehouse_robot/nodes/robot_actions.py

import time
import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.node import Node
from my_interfaces.action import DeliverItem

class WarehouseRobot(Node):

    def __init__(self):
        super().__init__('warehouse_robot')
        self._action_server = ActionServer(
            self,
            DeliverItem,
            'deliver_item',
            execute_callback= self.execute_callback,
            goal_callback= self.goal_callback,
            cancel_callback= self.cancel_callback
        )

    def goal_callback(self, goal_request):
        self.get_logger().info('Received goal request')
        self.quantity = goal_request.quantity
        self.item_name = goal_request.item_name

        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        self.get_logger().info('Received cancel request')
        return CancelResponse.ACCEPT

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        feedback_msg = DeliverItem.Feedback()
        for j in range(1,self.quantity+1):
            self.get_logger().info("Delivering Item " + str(j))
            feedback_msg.status = "Delivering Item " + str(j)
            goal_handle.publish_feedback(feedback_msg)
            for i in range(1, 11):
                feedback_msg.status = f'In progress: {i * 10}%'
                self.get_logger().info(feedback_msg.status)
                goal_handle.publish_feedback(feedback_msg)
                time.sleep(0.5)  # Simulate delivery time

        goal_handle.succeed()

        result = DeliverItem.Result()
        result.success = True
        result.message = "Delivery of " + self.item_name + ": done"
        self.get_logger().info('Delivery completed')
        return result

def main(args=None):
    rclpy.init(args=args)
    node = WarehouseRobot()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
