;; Auto-generated. Do not edit!


(when (boundp 'cisst_msgs::QueryForwardKinematics)
  (if (not (find-package "CISST_MSGS"))
    (make-package "CISST_MSGS"))
  (shadow 'QueryForwardKinematics (find-package "CISST_MSGS")))
(unless (find-package "CISST_MSGS::QUERYFORWARDKINEMATICS")
  (make-package "CISST_MSGS::QUERYFORWARDKINEMATICS"))
(unless (find-package "CISST_MSGS::QUERYFORWARDKINEMATICSREQUEST")
  (make-package "CISST_MSGS::QUERYFORWARDKINEMATICSREQUEST"))
(unless (find-package "CISST_MSGS::QUERYFORWARDKINEMATICSRESPONSE")
  (make-package "CISST_MSGS::QUERYFORWARDKINEMATICSRESPONSE"))

(in-package "ROS")

(if (not (find-package "SENSOR_MSGS"))
  (ros::roseus-add-msgs "sensor_msgs"))


(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass cisst_msgs::QueryForwardKinematicsRequest
  :super ros::object
  :slots (_jp ))

(defmethod cisst_msgs::QueryForwardKinematicsRequest
  (:init
   (&key
    ((:jp __jp) (instance sensor_msgs::JointState :init))
    )
   (send-super :init)
   (setq _jp __jp)
   self)
  (:jp
   (&rest __jp)
   (if (keywordp (car __jp))
       (send* _jp __jp)
     (progn
       (if __jp (setq _jp (car __jp)))
       _jp)))
  (:serialization-length
   ()
   (+
    ;; sensor_msgs/JointState _jp
    (send _jp :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; sensor_msgs/JointState _jp
       (send _jp :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; sensor_msgs/JointState _jp
     (send _jp :deserialize buf ptr-) (incf ptr- (send _jp :serialization-length))
   ;;
   self)
  )

(defclass cisst_msgs::QueryForwardKinematicsResponse
  :super ros::object
  :slots (_cp ))

(defmethod cisst_msgs::QueryForwardKinematicsResponse
  (:init
   (&key
    ((:cp __cp) (instance geometry_msgs::PoseStamped :init))
    )
   (send-super :init)
   (setq _cp __cp)
   self)
  (:cp
   (&rest __cp)
   (if (keywordp (car __cp))
       (send* _cp __cp)
     (progn
       (if __cp (setq _cp (car __cp)))
       _cp)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/PoseStamped _cp
    (send _cp :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/PoseStamped _cp
       (send _cp :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/PoseStamped _cp
     (send _cp :deserialize buf ptr-) (incf ptr- (send _cp :serialization-length))
   ;;
   self)
  )

(defclass cisst_msgs::QueryForwardKinematics
  :super ros::object
  :slots ())

(setf (get cisst_msgs::QueryForwardKinematics :md5sum-) "777a4ccce3ab2f993d2444440e63f814")
(setf (get cisst_msgs::QueryForwardKinematics :datatype-) "cisst_msgs/QueryForwardKinematics")
(setf (get cisst_msgs::QueryForwardKinematics :request) cisst_msgs::QueryForwardKinematicsRequest)
(setf (get cisst_msgs::QueryForwardKinematics :response) cisst_msgs::QueryForwardKinematicsResponse)

(defmethod cisst_msgs::QueryForwardKinematicsRequest
  (:response () (instance cisst_msgs::QueryForwardKinematicsResponse :init)))

(setf (get cisst_msgs::QueryForwardKinematicsRequest :md5sum-) "777a4ccce3ab2f993d2444440e63f814")
(setf (get cisst_msgs::QueryForwardKinematicsRequest :datatype-) "cisst_msgs/QueryForwardKinematicsRequest")
(setf (get cisst_msgs::QueryForwardKinematicsRequest :definition-)
      "sensor_msgs/JointState jp

================================================================================
MSG: sensor_msgs/JointState
# This is a message that holds data to describe the state of a set of torque controlled joints. 
#
# The state of each joint (revolute or prismatic) is defined by:
#  * the position of the joint (rad or m),
#  * the velocity of the joint (rad/s or m/s) and 
#  * the effort that is applied in the joint (Nm or N).
#
# Each joint is uniquely identified by its name
# The header specifies the time at which the joint states were recorded. All the joint states
# in one message have to be recorded at the same time.
#
# This message consists of a multiple arrays, one for each part of the joint state. 
# The goal is to make each of the fields optional. When e.g. your joints have no
# effort associated with them, you can leave the effort array empty. 
#
# All arrays in this message should have the same size, or be empty.
# This is the only way to uniquely associate the joint name with the correct
# states.


Header header

string[] name
float64[] position
float64[] velocity
float64[] effort

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
---
geometry_msgs/PoseStamped cp


================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
")

(setf (get cisst_msgs::QueryForwardKinematicsResponse :md5sum-) "777a4ccce3ab2f993d2444440e63f814")
(setf (get cisst_msgs::QueryForwardKinematicsResponse :datatype-) "cisst_msgs/QueryForwardKinematicsResponse")
(setf (get cisst_msgs::QueryForwardKinematicsResponse :definition-)
      "sensor_msgs/JointState jp

================================================================================
MSG: sensor_msgs/JointState
# This is a message that holds data to describe the state of a set of torque controlled joints. 
#
# The state of each joint (revolute or prismatic) is defined by:
#  * the position of the joint (rad or m),
#  * the velocity of the joint (rad/s or m/s) and 
#  * the effort that is applied in the joint (Nm or N).
#
# Each joint is uniquely identified by its name
# The header specifies the time at which the joint states were recorded. All the joint states
# in one message have to be recorded at the same time.
#
# This message consists of a multiple arrays, one for each part of the joint state. 
# The goal is to make each of the fields optional. When e.g. your joints have no
# effort associated with them, you can leave the effort array empty. 
#
# All arrays in this message should have the same size, or be empty.
# This is the only way to uniquely associate the joint name with the correct
# states.


Header header

string[] name
float64[] position
float64[] velocity
float64[] effort

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
---
geometry_msgs/PoseStamped cp


================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
")



(provide :cisst_msgs/QueryForwardKinematics "777a4ccce3ab2f993d2444440e63f814")


