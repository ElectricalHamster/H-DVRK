; Auto-generated. Do not edit!


(cl:in-package crtk_msgs-srv)


;//! \htmlinclude trigger_operating_state-request.msg.html

(cl:defclass <trigger_operating_state-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass trigger_operating_state-request (<trigger_operating_state-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <trigger_operating_state-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'trigger_operating_state-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name crtk_msgs-srv:<trigger_operating_state-request> is deprecated: use crtk_msgs-srv:trigger_operating_state-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <trigger_operating_state-request>) ostream)
  "Serializes a message object of type '<trigger_operating_state-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <trigger_operating_state-request>) istream)
  "Deserializes a message object of type '<trigger_operating_state-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<trigger_operating_state-request>)))
  "Returns string type for a service object of type '<trigger_operating_state-request>"
  "crtk_msgs/trigger_operating_stateRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'trigger_operating_state-request)))
  "Returns string type for a service object of type 'trigger_operating_state-request"
  "crtk_msgs/trigger_operating_stateRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<trigger_operating_state-request>)))
  "Returns md5sum for a message object of type '<trigger_operating_state-request>"
  "d941a2d049e2c9ac5773fc4a3a8a892d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'trigger_operating_state-request)))
  "Returns md5sum for a message object of type 'trigger_operating_state-request"
  "d941a2d049e2c9ac5773fc4a3a8a892d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<trigger_operating_state-request>)))
  "Returns full string definition for message of type '<trigger_operating_state-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'trigger_operating_state-request)))
  "Returns full string definition for message of type 'trigger_operating_state-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <trigger_operating_state-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <trigger_operating_state-request>))
  "Converts a ROS message object to a list"
  (cl:list 'trigger_operating_state-request
))
;//! \htmlinclude trigger_operating_state-response.msg.html

(cl:defclass <trigger_operating_state-response> (roslisp-msg-protocol:ros-message)
  ((operating_state
    :reader operating_state
    :initarg :operating_state
    :type crtk_msgs-msg:operating_state
    :initform (cl:make-instance 'crtk_msgs-msg:operating_state)))
)

(cl:defclass trigger_operating_state-response (<trigger_operating_state-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <trigger_operating_state-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'trigger_operating_state-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name crtk_msgs-srv:<trigger_operating_state-response> is deprecated: use crtk_msgs-srv:trigger_operating_state-response instead.")))

(cl:ensure-generic-function 'operating_state-val :lambda-list '(m))
(cl:defmethod operating_state-val ((m <trigger_operating_state-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader crtk_msgs-srv:operating_state-val is deprecated.  Use crtk_msgs-srv:operating_state instead.")
  (operating_state m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <trigger_operating_state-response>) ostream)
  "Serializes a message object of type '<trigger_operating_state-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'operating_state) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <trigger_operating_state-response>) istream)
  "Deserializes a message object of type '<trigger_operating_state-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'operating_state) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<trigger_operating_state-response>)))
  "Returns string type for a service object of type '<trigger_operating_state-response>"
  "crtk_msgs/trigger_operating_stateResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'trigger_operating_state-response)))
  "Returns string type for a service object of type 'trigger_operating_state-response"
  "crtk_msgs/trigger_operating_stateResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<trigger_operating_state-response>)))
  "Returns md5sum for a message object of type '<trigger_operating_state-response>"
  "d941a2d049e2c9ac5773fc4a3a8a892d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'trigger_operating_state-response)))
  "Returns md5sum for a message object of type 'trigger_operating_state-response"
  "d941a2d049e2c9ac5773fc4a3a8a892d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<trigger_operating_state-response>)))
  "Returns full string definition for message of type '<trigger_operating_state-response>"
  (cl:format cl:nil "crtk_msgs/operating_state operating_state~%~%~%================================================================================~%MSG: crtk_msgs/operating_state~%#~%# See https://github.com/collaborative-robotics/documentation/wiki/Robot-API-status~%#~%# Standard states include DISABLED, ENABLED, PAUSED and FAULT~%#~%Header  header~%string  state~%bool    is_homed~%bool    is_busy~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'trigger_operating_state-response)))
  "Returns full string definition for message of type 'trigger_operating_state-response"
  (cl:format cl:nil "crtk_msgs/operating_state operating_state~%~%~%================================================================================~%MSG: crtk_msgs/operating_state~%#~%# See https://github.com/collaborative-robotics/documentation/wiki/Robot-API-status~%#~%# Standard states include DISABLED, ENABLED, PAUSED and FAULT~%#~%Header  header~%string  state~%bool    is_homed~%bool    is_busy~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <trigger_operating_state-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'operating_state))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <trigger_operating_state-response>))
  "Converts a ROS message object to a list"
  (cl:list 'trigger_operating_state-response
    (cl:cons ':operating_state (operating_state msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'trigger_operating_state)))
  'trigger_operating_state-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'trigger_operating_state)))
  'trigger_operating_state-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'trigger_operating_state)))
  "Returns string type for a service object of type '<trigger_operating_state>"
  "crtk_msgs/trigger_operating_state")