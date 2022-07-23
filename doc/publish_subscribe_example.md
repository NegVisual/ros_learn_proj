# 如何创建一个publihsh 节点
1. ros系统初始化
> ros::init(argc, argv, "listener");
2. ros系统句柄声明 管理着一个内部引用数，可以开启和结束一个节点（node）
> ros::NodeHandle n;
3. 创建chatter topic, 并生命msg消息类型，返回一个发布节点chatter_puh
> ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);
4. 构造消息 并 发布 消息
> std_msgs::String msg;
> std::stringstream ss;
> ss << "hello world " << count;
> msg.data = ss.str();
> chatter_pub.publish(msg);

# 如何创建一个subscribe 节点
1. ros系统初始化
> ros::init(argc, argv, "listener");
2. ros系统句柄声明 管理着一个内部引用数，可以开启和结束一个节点（node）
> ros::NodeHandle n;
3. 声明订阅消息后的回调函数
```
void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
    ROS_INFO("I heard: [%s]", msg->data.c_str());
}
```
4. 订阅chatter 主题,以及传入 订阅消息事件回调函数chatterCallback  并 返回一个订阅者sub
> ros::Subscriber sub = n.subscribe("chatter", 1000, chatterCallback);
