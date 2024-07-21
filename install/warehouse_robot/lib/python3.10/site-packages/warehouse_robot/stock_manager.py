import rclpy
from rclpy.node import Node
from my_interfaces.srv import AddOrUpdateStock, CheckStock
import sqlite3

class StockManager(Node):

    def __init__(self):
        super().__init__('stock_manager')
        self.db_connection = sqlite3.connect('warehouse_stock.db')
        self.cursor = self.db_connection.cursor()

        # Initialize services
        self.add_or_update_stock_service = self.create_service(AddOrUpdateStock, 'add_or_update_stock', self.add_or_update_stock_callback)
        self.get_stock_level_service = self.create_service(CheckStock, 'get_stock_level', self.get_stock_level_callback)

    def add_or_update_stock_callback(self, request, response):
        item_name = request.item_name
        stock_level = request.stock_level

        self.cursor.execute("SELECT * FROM stock WHERE item_name = ?", (item_name,))
        result = self.cursor.fetchone()

        if result:
            self.cursor.execute("UPDATE stock SET stock_level = ? WHERE item_name = ?", (stock_level, item_name))
            self.db_connection.commit()
            response.success = True
            response.message = f'Stock level for item: {item_name} updated to {stock_level}.'
        else:
            self.cursor.execute("INSERT INTO stock (item_name, stock_level) VALUES (?, ?)", (item_name, stock_level))
            self.db_connection.commit()
            response.success = True
            response.message = f'Added new item: {item_name} with stock level: {stock_level}.'

        self.get_logger().info(response.message)
        return response

    def get_stock_level_callback(self, request, response):
        item_name = request.item_name

        self.cursor.execute("SELECT stock_level FROM stock WHERE item_name = ?", (item_name,))
        result = self.cursor.fetchone()

        if result:
            response.stock_level = result[0]
            response.success = True
            response.message = f'Stock level for item: {item_name} is {response.stock_level}.'
        else:
            response.stock_level = 0
            response.success = False
            response.message = f'Item: {item_name} not found in stock.'

        self.get_logger().info(str(response.stock_level))
        return response

def main(args=None):
    rclpy.init(args=args)
    node = StockManager()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
