#include <ros/ros.h>
#include <string>

void print_value(const std::string& str){
    ROS_INFO_STREAM(str);
}

int main(int argc, char** argv){
    ros::init(argc, argv, "printing_node");
    ros::NodeHandle p_nh = ros::NodeHandle("~");

    int n;
    std::string s;

    p_nh.getParam("iterations", n);
    p_nh.getParam("string", s);

    for (int i=0; i<n; i++){
        print_value(s);
    }
}