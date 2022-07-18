# 创建catkin 工作空间
参考文献地址：https://wiki.ros.org/catkin/Tutorials/create_a_workspace
```
#初始化ros环境变量
source /opt/ros/melodic/setup.bash
#创建工作空间
mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/
#兼容python3
catkin_make -DPYTHON_EXECUTABLE=/usr/bin/python3
#将当前工作区环境覆盖当前环境(每次编译完package后 要执行该命令使环境生效)
source devel/setup.bash
```
# 创建catkin package
```
cd ~/catkin_ws/src
# catkin_create_pkg <package_name> [depend1] [depend2] [depend3]
catkin_create_pkg beginner_tutorials std_msgs rospy roscpp
```
# 查看beginner_tutorials的一级依赖
```
rospack depends1 beginner_tutorials 
```