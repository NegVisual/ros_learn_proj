#include "ros/ros.h"
#include "beginner_tutorials/AddTwoInts.h"
#include "beginner_tutorials/AddThreeInts.h"

bool add(beginner_tutorials::AddTwoInts::Request  &req,
         beginner_tutorials::AddTwoInts::Response &res)
{
  res.sum = req.a + req.c;
  ROS_INFO("request: x=%ld, y=%ld", (long int)req.a, (long int)req.c);
  ROS_INFO("sending back response: [%ld]", (long int)res.sum);
  return true;
}

bool add3(beginner_tutorials::AddThreeInts::Request  &req,
         beginner_tutorials::AddThreeInts::Response &res)
{
  res.sum = req.a + req.b + req.c;
  ROS_INFO("request: x=%ld, y=%ld, z=%ld", (long int)req.a, (long int)req.b, (long int)req.c);
  ROS_INFO("sending back response: [%ld]", (long int)res.sum);
  return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "add_three_ints_server");
  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("add_two_ints", add3);
  ROS_INFO("Ready to add two ints.");
  ros::spin();

  return 0;
}