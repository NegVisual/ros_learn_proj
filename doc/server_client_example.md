# 如何创建一个server 节点
1. ros系统初始化
> ros::init(argc, argv, "server");
2. ros系统句柄声明 管理着一个内部引用数，可以开启和结束一个节点（node）
> ros::NodeHandle n;
3. 创建add_two_ints service, 并配置回调函数add3，返回一个服务节点service
> ros::ServiceServer service = n.advertiseService("add_two_ints", add3);
4. 持续对请求进行处理
> ros::spin();

# 如何创建一个client节点
1. ros系统初始化
> ros::init(argc, argv, "client");
2. ros系统句柄声明 管理着一个内部引用数，可以开启和结束一个节点（node）
> ros::NodeHandle n;
3. 创建add_two_ints client, 并指明该客户端调用的服务名称add_two_ints
> ros::ServiceClient client = n.serviceClient<beginner_tutorials::AddThreeInts>("add_two_ints");