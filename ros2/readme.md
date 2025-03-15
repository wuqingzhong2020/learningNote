# 资料
[鱼香ros](https://fishros.com/d2lros2/#/)


# 常用命令 
运行节点(常用)
ros2 run <package_name> <executable_name>

查看节点列表(常用)：
ros2 node list


查看节点信息(常用)：
ros2 node info <node_name>


重映射节点名称
ros2 run turtlesim turtlesim_node --ros-args --remap __node:=my_turtle

运行节点时设置参数
ros2 run example_parameters_rclcpp parameters_basic --ros-args -p rcl_log_level:=10


