# ~/ros2_ws/src/warehouse_robot/nodes/delivery_client.py

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from my_interfaces.action import DeliverItem
import sys

class DeliveryClient(Node):

    def __init__(self):
        super().__init__('delivery_client')
        self._action_client = ActionClient(self, DeliverItem, 'deliver_item')

    def send_goal(self, item_name, quantity):
        self._action_client.wait_for_server()
        goal_msg = DeliverItem.Goal()
        goal_msg.item_name = item_name
        goal_msg.quantity = quantity

        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Result: success={result.success}, message={result.message}')
        rclpy.shutdown()

    def feedback_callback(self, feedback_msg):
        # print(feedback_msg)
        self.get_logger().info(f'Feedback: {feedback_msg.feedback.status}')

def main(args=None):
    rclpy.init(args=args)

    if len(sys.argv) != 3:
        print("Usage: delivery_client.py <item_name> <quantity>")
        return
    item_name = sys.argv[1]
    quantity = int(sys.argv[2])

    client = DeliveryClient()
    client.send_goal(item_name, quantity)
    rclpy.spin(client)

if __name__ == '__main__':
    main()
