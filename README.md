colcon build
source install/setup.bash
mkdir src
ros2 pkg create --build-type ament_python warehouse_robot
ros2 pkg create my_interfaces

colcon build and source then pkg list to check if everything works fine

colcon build --packages-select <name-of-pkg>

ros2 action send_goal /deliver_item my_interfaces/action/DeliverItem "{item_name: 'Battikh', quantity: 3}" -f

ros2 service call /check_stock my_interfaces/srv/CheckStock "{item_name: 'item1'}"

my_interfaces.action.DeliverItem_FeedbackMessage(goal_id=unique_identifier_msgs.msg.UUID(uuid=array([ 20,  70,  71, 147,   4, 144,  65, 190, 128, 106,  58, 
182,  59, 172,  36,  95], dtype=uint8)), feedback=my_interfaces.action.DeliverItem_Feedback(status='Delivering Item 1'))



ros2 launch warehouse_robot warehouse_robot_launch.py --> to launch the database and the servers

ros2 action send_goal /deliver_item my_interfaces/action/DeliverItem "{item_name: 'item3', quantity: 2}" -f --> test action server
