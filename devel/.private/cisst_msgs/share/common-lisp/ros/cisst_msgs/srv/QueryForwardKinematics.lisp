; Auto-generated. Do not edit!


(cl:in-package cisst_msgs-srv)


;//! \htmlinclude QueryForwardKinematics-request.msg.html

(cl:defclass <QueryForwardKinematics-request> (roslisp-msg-protocol:ros-message)
  ((jp
    :reader jp
    :initarg :jp
    :type sensor_msgs-msg:JointState
    :initform (cl:make-instance 'sensor_msgs-msg:JointState)))
)

(cl:defclass QueryForwardKinematics-request (<QueryForwardKinematics-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <QueryForwardKinematics-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'QueryForwardKinematics-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cisst_msgs-srv:<QueryForwardKinematics-request> is deprecated: use cisst_msgs-srv:QueryForwardKinematics-request instead.")))

(cl:ensure-generic-function 'jp-val :lambda-list '(m))
(cl:defmethod jp-val ((m <QueryForwardKinematics-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-srv:jp-val is deprecated.  Use cisst_msgs-srv:jp instead.")
  (jp m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <QueryForwardKinematics-request>) ostream)
  "Serializes a message object of type '<QueryForwardKinematics-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'jp) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <QueryForwardKinematics-request>) istream)
  "Deserializes a message object of type '<QueryForwardKinematics-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'jp) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<QueryForwardKinematics-request>)))
  "Returns string type for a service object of type '<QueryForwardKinematics-request>"
  "cisst_msgs/QueryForwardKinematicsRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'QueryForwardKinematics-request)))
  "Returns string type for a service object of type 'QueryForwardKinematics-request"
  "cisst_msgs/QueryForwardKinematicsRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<QueryForwardKinematics-request>)))
  "Returns md5sum for a message object of type '<QueryForwardKinematics-request>"
  "777a4ccce3ab2f993d2444440e63f814")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'QueryForwardKinematics-request)))
  "Returns md5sum for a message object of type 'QueryForwardKinematics-request"
  "777a4ccce3ab2f993d2444440e63f814")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<QueryForwardKinematics-request>)))
  "Returns full string definition for message of type '<QueryForwardKinematics-request>"
  (cl:format cl:nil "sensor_msgs/JointState jp~%~%================================================================================~%MSG: sensor_msgs/JointState~%# This is a message that holds data to describe the state of a set of torque controlled joints. ~%#~%# The state of each joint (revolute or prismatic) is defined by:~%#  * the position of the joint (rad or m),~%#  * the velocity of the joint (rad/s or m/s) and ~%#  * the effort that is applied in the joint (Nm or N).~%#~%# Each joint is uniquely identified by its name~%# The header specifies the time at which the joint states were recorded. All the joint states~%# in one message have to be recorded at the same time.~%#~%# This message consists of a multiple arrays, one for each part of the joint state. ~%# The goal is to make each of the fields optional. When e.g. your joints have no~%# effort associated with them, you can leave the effort array empty. ~%#~%# All arrays in this message should have the same size, or be empty.~%# This is the only way to uniquely associate the joint name with the correct~%# states.~%~%~%Header header~%~%string[] name~%float64[] position~%float64[] velocity~%float64[] effort~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'QueryForwardKinematics-request)))
  "Returns full string definition for message of type 'QueryForwardKinematics-request"
  (cl:format cl:nil "sensor_msgs/JointState jp~%~%================================================================================~%MSG: sensor_msgs/JointState~%# This is a message that holds data to describe the state of a set of torque controlled joints. ~%#~%# The state of each joint (revolute or prismatic) is defined by:~%#  * the position of the joint (rad or m),~%#  * the velocity of the joint (rad/s or m/s) and ~%#  * the effort that is applied in the joint (Nm or N).~%#~%# Each joint is uniquely identified by its name~%# The header specifies the time at which the joint states were recorded. All the joint states~%# in one message have to be recorded at the same time.~%#~%# This message consists of a multiple arrays, one for each part of the joint state. ~%# The goal is to make each of the fields optional. When e.g. your joints have no~%# effort associated with them, you can leave the effort array empty. ~%#~%# All arrays in this message should have the same size, or be empty.~%# This is the only way to uniquely associate the joint name with the correct~%# states.~%~%~%Header header~%~%string[] name~%float64[] position~%float64[] velocity~%float64[] effort~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <QueryForwardKinematics-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'jp))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <QueryForwardKinematics-request>))
  "Converts a ROS message object to a list"
  (cl:list 'QueryForwardKinematics-request
    (cl:cons ':jp (jp msg))
))
;//! \htmlinclude QueryForwardKinematics-response.msg.html

(cl:defclass <QueryForwardKinematics-response> (roslisp-msg-protocol:ros-message)
  ((cp
    :reader cp
    :initarg :cp
    :type geometry_msgs-msg:PoseStamped
    :initform (cl:make-instance 'geometry_msgs-msg:PoseStamped)))
)

(cl:defclass QueryForwardKinematics-response (<QueryForwardKinematics-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <QueryForwardKinematics-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'QueryForwardKinematics-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cisst_msgs-srv:<QueryForwardKinematics-response> is deprecated: use cisst_msgs-srv:QueryForwardKinematics-response instead.")))

(cl:ensure-generic-function 'cp-val :lambda-list '(m))
(cl:defmethod cp-val ((m <QueryForwardKinematics-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-srv:cp-val is deprecated.  Use cisst_msgs-srv:cp instead.")
  (cp m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <QueryForwardKinematics-response>) ostream)
  "Serializes a message object of type '<QueryForwardKinematics-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'cp) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <QueryForwardKinematics-response>) istream)
  "Deserializes a message object of type '<QueryForwardKinematics-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'cp) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<QueryForwardKinematics-response>)))
  "Returns string type for a service object of type '<QueryForwardKinematics-response>"
  "cisst_msgs/QueryForwardKinematicsResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'QueryForwardKinematics-response)))
  "Returns string type for a service object of type 'QueryForwardKinematics-response"
  "cisst_msgs/QueryForwardKinematicsResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<QueryForwardKinematics-response>)))
  "Returns md5sum for a message object of type '<QueryForwardKinematics-response>"
  "777a4ccce3ab2f993d2444440e63f814")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'QueryForwardKinematics-response)))
  "Returns md5sum for a message object of type 'QueryForwardKinematics-response"
  "777a4ccce3ab2f993d2444440e63f814")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<QueryForwardKinematics-response>)))
  "Returns full string definition for message of type '<QueryForwardKinematics-response>"
  (cl:format cl:nil "geometry_msgs/PoseStamped cp~%~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'QueryForwardKinematics-response)))
  "Returns full string definition for message of type 'QueryForwardKinematics-response"
  (cl:format cl:nil "geometry_msgs/PoseStamped cp~%~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <QueryForwardKinematics-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'cp))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <QueryForwardKinematics-response>))
  "Converts a ROS message object to a list"
  (cl:list 'QueryForwardKinematics-response
    (cl:cons ':cp (cp msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'QueryForwardKinematics)))
  'QueryForwardKinematics-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'QueryForwardKinematics)))
  'QueryForwardKinematics-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'QueryForwardKinematics)))
  "Returns string type for a service object of type '<QueryForwardKinematics>"
  "cisst_msgs/QueryForwardKinematics")