; Auto-generated. Do not edit!


(cl:in-package crtk_msgs-msg)


;//! \htmlinclude operating_state.msg.html

(cl:defclass <operating_state> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (state
    :reader state
    :initarg :state
    :type cl:string
    :initform "")
   (is_homed
    :reader is_homed
    :initarg :is_homed
    :type cl:boolean
    :initform cl:nil)
   (is_busy
    :reader is_busy
    :initarg :is_busy
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass operating_state (<operating_state>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <operating_state>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'operating_state)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name crtk_msgs-msg:<operating_state> is deprecated: use crtk_msgs-msg:operating_state instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <operating_state>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader crtk_msgs-msg:header-val is deprecated.  Use crtk_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'state-val :lambda-list '(m))
(cl:defmethod state-val ((m <operating_state>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader crtk_msgs-msg:state-val is deprecated.  Use crtk_msgs-msg:state instead.")
  (state m))

(cl:ensure-generic-function 'is_homed-val :lambda-list '(m))
(cl:defmethod is_homed-val ((m <operating_state>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader crtk_msgs-msg:is_homed-val is deprecated.  Use crtk_msgs-msg:is_homed instead.")
  (is_homed m))

(cl:ensure-generic-function 'is_busy-val :lambda-list '(m))
(cl:defmethod is_busy-val ((m <operating_state>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader crtk_msgs-msg:is_busy-val is deprecated.  Use crtk_msgs-msg:is_busy instead.")
  (is_busy m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <operating_state>) ostream)
  "Serializes a message object of type '<operating_state>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'state))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'state))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'is_homed) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'is_busy) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <operating_state>) istream)
  "Deserializes a message object of type '<operating_state>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'state) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'state) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:setf (cl:slot-value msg 'is_homed) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'is_busy) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<operating_state>)))
  "Returns string type for a message object of type '<operating_state>"
  "crtk_msgs/operating_state")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'operating_state)))
  "Returns string type for a message object of type 'operating_state"
  "crtk_msgs/operating_state")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<operating_state>)))
  "Returns md5sum for a message object of type '<operating_state>"
  "b1bd4021639d9d9c5fbfff78d6ff3158")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'operating_state)))
  "Returns md5sum for a message object of type 'operating_state"
  "b1bd4021639d9d9c5fbfff78d6ff3158")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<operating_state>)))
  "Returns full string definition for message of type '<operating_state>"
  (cl:format cl:nil "#~%# See https://github.com/collaborative-robotics/documentation/wiki/Robot-API-status~%#~%# Standard states include DISABLED, ENABLED, PAUSED and FAULT~%#~%Header  header~%string  state~%bool    is_homed~%bool    is_busy~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'operating_state)))
  "Returns full string definition for message of type 'operating_state"
  (cl:format cl:nil "#~%# See https://github.com/collaborative-robotics/documentation/wiki/Robot-API-status~%#~%# Standard states include DISABLED, ENABLED, PAUSED and FAULT~%#~%Header  header~%string  state~%bool    is_homed~%bool    is_busy~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <operating_state>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:length (cl:slot-value msg 'state))
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <operating_state>))
  "Converts a ROS message object to a list"
  (cl:list 'operating_state
    (cl:cons ':header (header msg))
    (cl:cons ':state (state msg))
    (cl:cons ':is_homed (is_homed msg))
    (cl:cons ':is_busy (is_busy msg))
))
