#include <iostream>
#include "ros/ros.h"
#include <std_msgs/Int32.h>

int main(int argc, char** argv)                                                 
{
    ros::init(argc,argv,"node");                                            
    ros::NodeHandle n;                                                      
    ros::Publisher = n.advertise<std_msgs::Int32>("/topic",1000);
    ros::Rate loop_rate(1);
    int a;
    while(std::cin >> a)
    {
        pub.publish(a);
        loop_rate.sleep();
    }
    ros::spinOnce();
    return 0;
}
