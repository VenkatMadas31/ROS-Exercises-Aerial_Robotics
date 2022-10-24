#pragma once

#include <ros/ros.h>
// #include "$(find sensor_msgs)/msg/LaserScan.hpp"
#include <sensor_msgs/LaserScan.h>


namespace smb_highlevel_controller {

/*!
 * Class containing the Husky Highlevel Controller
 */
class SmbHighlevelController {



public:
	/*!
	 * Constructor.
	 */
	SmbHighlevelController(ros::NodeHandle& nodeHandle);

public:
  void scanCallBack(const sensor_msgs::LaserScan& scan);
	/*!
	 * Destructor.
	 */
	virtual ~SmbHighlevelController();
	


private:
	ros::NodeHandle nodeHandle_;
};



} /* namespace */
