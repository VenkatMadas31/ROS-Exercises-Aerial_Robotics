# README #
---
##SMB_HIGHLEVEL_CONTROLLER
---

###Package Details

- The `smb_highlevel_controller` package is supposed to subscribe to a `LaserScan` message from the smb robot in the previous exercise and process the incoming data.
- The launch `src` of the package contains the node and the class declaration.
- The code for the subscriber is present in the declaration file along with the callback function -`scanCallBack`.
- The launch file (`smb_gazebo.launch`) can also be found in the launch folder, this launch file also includes the `control.launch` file of the `smb_control` package. The smb robot's description files are present in this package.
- Using the roslaunch command, the `smb_gazebo.launch` can be launched. This will start Rviz (used for visualization) as well as gazebo along with the `teleop_twist` node (Used for controlling the robot).
---
###Problems faced by this package
- The package builds succesfully and the smb_robot works fine after launching the launch file.
- But, in the class declaration file- `SmbHighlevelController.cpp`, the subscriber to the `LaserScan` topic is not working as it is supposed to.
- When the package is launched, the robot does not seem to visualize the `LaserScan` topic in Rviz.
- Moreover, the terminal does not show the output which it supposed to show acording to the `scanCallBack` function.
---