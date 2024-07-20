# ~/ros2_ws/src/warehouse_robot/launch/warehouse_robot_launch.py

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration,PathJoinSubstitution, TextSubstitution
from launch_ros.actions import Node
import sys
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():


    item_name = LaunchConfiguration('item_name')
    quantity = LaunchConfiguration('quantity')
    check_item_name = LaunchConfiguration('check_item_name')

    item_name_arg = DeclareLaunchArgument(
        'item_name', default_value='item1',
        description='Name of the item to deliver'
    ),
    quantity_arg = DeclareLaunchArgument(
        'quantity', default_value='3',
        description='Quantity of the item to deliver'
    ),
    check_item_name_arg = DeclareLaunchArgument(
        'check_item_name', default_value='item1',
        description='Name of the item to check stock level'
    ),

    return LaunchDescription([
        # LaunchConfiguration('item_name'),
        # LaunchConfiguration('quantity'),
        # LaunchConfiguration('check_item_name'),
        # item_name_arg,
        # quantity_arg,
        # check_item_name_arg,

        # IncludeLaunchDescription(
        #     PythonLaunchDescriptionSource([
        #         PathJoinSubstitution([
        #             FindPackageShare('warehouse_robot'),
        #             'launch',
        #             'warehouse_robot_launch.py'
        #         ])
        #     ]),
        #     launch_arguments={
        #         'item_name': 'item1',
        #         'quantity': 2,
        #     }.items()
        # ),
        Node(
            package='warehouse_robot',  
            executable='delivery_action',
            name='delivery_action',
            output='screen'
        ),
        Node(
            package='warehouse_robot',
            executable='stock_server',
            name='stock_server',
            output='screen'
        ),
        Node(
            package='warehouse_robot',
            executable='delivery_client',
            name='delivery_client',
            output='screen',
            # arguments=[LaunchConfiguration('item_name'), LaunchConfiguration('quantity')],
            # parameters=[
            #     {'item_name': 'default_item'},
            #     {'quantity': 1}
            # ]
        ),
        Node(
            package='warehouse_robot',
            executable='stock_client',
            name='stock_client',
            output='screen',
            # arguments=[LaunchConfiguration('check_item_name')],
            # parameters=[
            #     {'check_item_name': 'item2'},
            # ]
        ),
    ])
