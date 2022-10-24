#include <smb_highlevel_controller/SmbHighlevelController.hpp>


namespace smb_highlevel_controller {



void SmbHighlevelController::scanCallBack(const sensor_msgs::LaserScan& msg)
{
  float minDist = 100.0;
  int index = 0;
   	ROS_INFO("The Minimum range is: %f", msg.range_min);
}


// ros::NodeHandle nodeHandle;

SmbHighlevelController::SmbHighlevelController(ros::NodeHandle& nodeHandle)
{
  int queue_size, rate_value;
   std::string topic;
    // if ( !nodeHandle.getParam("/scan", topic) 
    //     || !nodeHandle.getParam("10", queue_size) ) 
    // {
    //     ROS_ERROR("Could not find subscriber params!"); 
    //     ros::requestShutdown();
    // }
    // nodeHandle.getParam("/scan", topic);
    //  nodeHandle.getParam("10", queue_size);
    //  nodeHandle.getParam("20", rate_value);


  ros::Subscriber subscriber = nodeHandle.subscribe("/scan",10, &SmbHighlevelController::scanCallBack, this);
  // ros::Rate loopRate(rate_value);

}

SmbHighlevelController::~SmbHighlevelController()
{
  ROS_INFO("Destructor Called");
}



} /* namespace */





// if (!readParameters()) {
  //   ROS_ERROR("Could not read parameters.");
  //   ros::requestShutdown();
  // }


  // serviceServer_ = nodeHandle_.advertiseService("get_average",
  //                                               &RosPackageTemplate::serviceCallback, this);

  // ros::Subscriber subscriber = nodeHandle_.subscribe("/scan",10, &SmbHighlevelController:: scanCallBack, this);