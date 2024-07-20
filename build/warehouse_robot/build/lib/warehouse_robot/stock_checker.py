# ~/ros2_ws/src/warehouse_robot/nodes/stock_checker.py

import rclpy
from rclpy.node import Node
from my_interfaces.srv import CheckStock

class StockChecker(Node):

    def __init__(self):
        super().__init__('stock_checker')
        self.stock = {
            'item1': 10,
            'item2': 5,
            'item3': 20
        }
        self.srv = self.create_service(CheckStock, 'check_stock', self.check_stock_callback)
        self.get_logger().info(f'STOCK SERVER START')

    def check_stock_callback(self, request, response):
        item_name = request.item_name
        self.get_logger().info(f'Received request for item: {item_name}')
        if item_name in self.stock:
            response.stock_level = self.stock[item_name]
        else:
            response.stock_level = 0
        self.get_logger().info(f'Stock level for {item_name}: {response.stock_level}')
        return response

def main(args=None):
    rclpy.init(args=args)
    node = StockChecker()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
