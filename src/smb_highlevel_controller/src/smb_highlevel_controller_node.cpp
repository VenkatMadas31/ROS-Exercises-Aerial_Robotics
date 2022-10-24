#include <ros/ros.h>
#include "smb_highlevel_controller/SmbHighlevelController.hpp"
#include <sensor_msgs/Imu.h>
#include "std_msgs/Float32.h"


int main(int argc, char** argv) {
  ros::init(argc, argv, "smb_highlevel_controller");
  ros::NodeHandle nodeHandle;

  smb_highlevel_controller::SmbHighlevelController smbHighlevelController (nodeHandle);

   ros::spin();
  
  return 0;
}







