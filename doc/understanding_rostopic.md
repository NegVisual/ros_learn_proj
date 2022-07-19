# rostopic 相关命令
## 查看节点间的通信关系
>$ rosrun rqt_graph rqt_graph
## 查看rostopic子命令
>$ rostopic -h
## 查看某一topic下发布的消息
>$ rostopic echo [topic]
## 查看当前系统的所有topic
>$ rostopic list
## 查看某一topic的消息类型
>$ rostopic type [topic]
## 查看某一消息类型的数据结构
>$ rosmsg show [msgtype]
## 往某一topic发送数据
>$ rostopic pus [topic] [msg_type] [args]
>$ rostopic pub -1 /turtle1/cmd_vel geometry_msgs/Twist -- '[2.0, 0.0, 0.0]' '[0.0, 0.0, 1.8]'
>$ rostopic pub /turtle1/cmd_vel geometry_msgs/Twist -r 1 -- '[2.0, 0.0, 0.0]' '[0.0, 0.0, -1.8]'
## 显示主题的发布率
>$ rostopic hz [topic]
## 画出发布在topic上的数据变化图
>$ rosrun rqt_plot rqt_plots