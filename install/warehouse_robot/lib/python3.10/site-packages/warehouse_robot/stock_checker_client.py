# ~/ros2_ws/src/warehouse_robot/nodes/stock_check_client.py

import sys
import rclpy
from rclpy.node import Node
from my_interfaces.srv import CheckStock

class StockCheckClient(Node):

    def __init__(self):
        super().__init__('stock_check_client')
        self.client = self.create_client(CheckStock, 'check_stock')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        self.request = CheckStock.Request()

    def send_request(self, item_name):
        self.request.item_name = item_name
        self.future = self.client.call_async(self.request)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

def main(args=None):
    rclpy.init(args=args)
    if len(sys.argv) != 2:
        print("Usage: stock_check_client.py <item_name>")
        item_name = 'item1'
    else:
        item_name = sys.argv[1]
    
    client = StockCheckClient()
    response = client.send_request(item_name)
    client.get_logger().info(f'Stock level for {item_name}: {response.stock_level}')
    rclpy.shutdown()

if __name__ == '__main__':
    main()
