# README #
---
##SMB_GAZEBO
---
###Package Details
- This package initiates the simulation of a smb robot along with the `teleop twist` node which helps in controlling the robot.
- It helps in understanding the working of ros packages and thier launching.
- The launch file -`smb_gazebo.launch` for this package is contained in the `launch`. Upon launching this file, the robot is displayed inside `gazebo` client along with the `teleop twist` on the terminal.
- One can use the terminal to control the robot in gazebo.
- Moreover, one can also change the world that gazebo loads the robot in. By changing the world argument,to a valid world whose file is actually present in the `worlds` directory of this package.
---