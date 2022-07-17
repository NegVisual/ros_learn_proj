# ros安装
## 添加ros源
> sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'

## 输入密钥
> sudo apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654
## 安装桌面版(ros版本要和ubuntu版本对应)
> sudo apt-get install ros-melodic-desktop-full
## 配置环境变量
> echo "source /opt/ros/melodic/setup.bash" >> ~/.bashrc
> 
> source ~/.bashrc
## 安装依赖项
> sudo apt install python-rosdep python-rosinstall python-rosinstall-generator python-wstool build-essential
## 初始化rosdep 以及 ros update
> sudo rosdep init
> 
> rosdep update
# 遇到的问题
## ros init 失败
> vi /etc/ros/rosdep/sources.list.d/20-default.list
将以下文本填进去并保存
```
# os-specific listings first
yaml https://ghproxy.com/https://raw.githubusercontent.com/ros/rosdistro/master/rosdep/osx-homebrew.yaml osx

# generic
yaml https://ghproxy.com/https://raw.githubusercontent.com/ros/rosdistro/master/rosdep/base.yaml
yaml https://ghproxy.com/https://raw.githubusercontent.com/ros/rosdistro/master/rosdep/python.yaml
yaml https://ghproxy.com/https://raw.githubusercontent.com/ros/rosdistro/master/rosdep/ruby.yaml
gbpdistro https://ghproxy.com/https://raw.githubusercontent.com/ros/rosdistro/master/releases/fuerte.yaml fuerte

# newer distributions (Groovy, Hydro, ...) must not be listed anymore, they are being fetched from the rosdistro index.yaml instead
```
## ros update 失败
网站https://ghproxy.com/支持github的资源代理，可以用此代理加速rosdep对Github的访问，进而解决rosdep update失败问题。
1. 修改/usr/lib/python2/dist-packages/rosdep2/rep3.py
2. 修改/usr/lib/python2/dist-packages/rosdep2/rep3.py
3. 修改/usr/lib/python2/dist-packages/rosdep2/rep3.py

将REP3_TARGETS_URL 修为以下地址：
```
DEFAULT_INDEX_URL = 'https://ghproxy.com/https://raw.githubusercontent.com/ros/rosdistro/master/index-v4.yaml'
```
# 小乌龟测试
ros安装好之后，可以运行一下命令进行测试
> roscore
> 
> rosrun turtlesim turtlesim_node
> 
> rosrun turtlesim turtle_teleop_key
