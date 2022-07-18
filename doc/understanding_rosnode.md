# rosrun_node 命令
## roscore 命令 
roscore是运行ROS系统的第一个命令，主要作用是启动master节点。其他node首先在master处进行注册， 之后master会将该node纳入整个ROS程序中。node之间的通信也是先由master进行“牵线”， 才能两两的进行点对点通信
>$ roscore
## rosnode 命令
rosnode 命令用来查看当前ros系统运行的节点信息
### 查看当前正在运行的节点列表
> rosnode list
### 查看当前某一具体运行节点的相关信息
> rosnode info [node_name]
### 与指定节点进行连接测试
> rosnode ping [node_name]
## rosrun 命令
### 运行某一节点
> rosrun [package_name] [node_name]