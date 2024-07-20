colcon build
source install/setup.bash
mkdir src
ros2 pkg create --build-type ament_python warehouse_robot
ros2 pkg create my_interfaces

colcon build and source then pkg list to check if everything works fine

colcon build --packages-select <name-of-pkg>

ros2 action send_goal /deliver_item my_interfaces/action/DeliverItem "{item_name: 'Battikh', quantity: 3}" -f



