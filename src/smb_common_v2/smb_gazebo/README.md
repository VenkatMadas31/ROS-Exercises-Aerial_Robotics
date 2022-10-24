# README #
---
##SMB_GAZEBO (v2)
---
###Package Details
- This package corresponds to Exercise 3.
- This package is supposed to drive the smb robot to a target destination (a pillar in this case) using the data from `LaserScan` message.
- The robot uses the data obtained from the subscriber to the `LaserScan` topic and calculate the coordinates/position of the target (piller) and hence use this data to drive itself to that target.
---
###Problems faced by this package
- As stated in the `README.md` file of the package `smb_highlevel_controller`, the smb robot was not able to read the `LaserScan` message from the subscriber that is declared in the class declaration file.
- Hence, the robot is unable to extract the position of the pillar (target) and hence drive itself to it.
---