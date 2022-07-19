# rosservice 相关命令
## 查看当前所有rosservice
>$ rosservice list
## 查看服务类型
>$ rosservice type [roservice]
## 调用某rosservice服务
>$ rosservice call [rosservice] [args]
## 查看某服务需要的参数
>$ rosservice type [rosservice] | rossrv show
# 关于rossrv 命令
rossrv是用于显示有关ROS服务类型的信息的命令行工具，与 rosmsg 使用语法高度雷同。
```
rossrv show     //显示服务消息详情
rossrv info     //显示服务消息相关信息
rossrv list     //列出所有服务信息
rossrv md5      //显示 md5 加密后的服务消息
rossrv package  //显示某个包下所有服务消息
rossrv packages //显示包含服务消息的所有包
```
# 关于rosparam 参数服务器
参数服务器在ROS中主要用于实现不同节点之间的数据共享。参数服务器相当于是独立于所有节点的一个公共容器，可以将数据存储在该容器中，被不同的节点调用。
## rosparam 用法如下
```
rosparam set            设置参数
rosparam get            获取参数
rosparam load           加载参数
rosparam dump           将参数dump到文件中
rosparam delete         删除参数
rosparam list           查看所有参数
```

