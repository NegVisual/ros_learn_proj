#include "ros/ros.h"
#include "beginner_tutorials/AddThreeInts.h"
#include <cstdlib>

int main(int argc, char** argv)
{
    ros::init(argc, argv, "add_three_ints_client");
    ros::NodeHandle n;

    ros::ServiceClient client = n.serviceClient<beginner_tutorials::AddThreeInts>("add_two_ints");

    beginner_tutorials::AddThreeInts srv;
    srv.request.a = atoll(argv[1]);
    srv.request.b = atoll(argv[2]);
    srv.request.c = atoll(argv[3]);

    if(client.call(srv)){
        ROS_INFO("Sum: %ld", (long int)srv.response.sum);
    }else{
        ROS_ERROR("Failed to call service add_three_ints");
        return 1;
    }
    return 0;
}