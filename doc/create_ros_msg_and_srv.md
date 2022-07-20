# rosmsg 自定义
1. 修改package.xml
pacakge.xml 包含了 package 的名称、版本号、内容描述、维护人员、软件许可、编译构建工具、编译依赖、运行依赖等信息。增加自定义rosmsg类型时，需要增加下列两行
```
<build_depend>message_generation</build_depend>
<exec_depend>message_runtime</exec_depend>
```
2. 修改CMakeLists.txt
- 引入编译依赖
```
find_package(catkin REQUIRED COMPONENTS
   roscpp
   rospy
   std_msgs
   message_generation
)
```
- 引入运行时依赖
```
catkin_package(
  ...
  CATKIN_DEPENDS message_runtime ...
  ...)
```
- 增加具体的rosmsg类型文件
```
add_message_files(
  FILES
  Num.msg
)
```
- 添加任何依赖项生成的rosmsg rossrv
```
generate_messages(
  DEPENDENCIES
  std_msgs
)
```
# rossrv 自定义
与rosmsg类似 略
# 遇到的问题
配置好相关xml以及cmake文件，启用catkin_make编译项目时
出现 `ModuleNotFoundError: No module named 'em’`
>$ sudo apt-get install python3-empy