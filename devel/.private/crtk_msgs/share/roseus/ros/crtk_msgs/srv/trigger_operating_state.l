;; Auto-generated. Do not edit!


(when (boundp 'crtk_msgs::trigger_operating_state)
  (if (not (find-package "CRTK_MSGS"))
    (make-package "CRTK_MSGS"))
  (shadow 'trigger_operating_state (find-package "CRTK_MSGS")))
(unless (find-package "CRTK_MSGS::TRIGGER_OPERATING_STATE")
  (make-package "CRTK_MSGS::TRIGGER_OPERATING_STATE"))
(unless (find-package "CRTK_MSGS::TRIGGER_OPERATING_STATEREQUEST")
  (make-package "CRTK_MSGS::TRIGGER_OPERATING_STATEREQUEST"))
(unless (find-package "CRTK_MSGS::TRIGGER_OPERATING_STATERESPONSE")
  (make-package "CRTK_MSGS::TRIGGER_OPERATING_STATERESPONSE"))

(in-package "ROS")





(defclass crtk_msgs::trigger_operating_stateRequest
  :super ros::object
  :slots ())

(defmethod crtk_msgs::trigger_operating_stateRequest
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass crtk_msgs::trigger_operating_stateResponse
  :super ros::object
  :slots (_operating_state ))

(defmethod crtk_msgs::trigger_operating_stateResponse
  (:init
   (&key
    ((:operating_state __operating_state) (instance crtk_msgs::operating_state :init))
    )
   (send-super :init)
   (setq _operating_state __operating_state)
   self)
  (:operating_state
   (&rest __operating_state)
   (if (keywordp (car __operating_state))
       (send* _operating_state __operating_state)
     (progn
       (if __operating_state (setq _operating_state (car __operating_state)))
       _operating_state)))
  (:serialization-length
   ()
   (+
    ;; crtk_msgs/operating_state _operating_state
    (send _operating_state :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; crtk_msgs/operating_state _operating_state
       (send _operating_state :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; crtk_msgs/operating_state _operating_state
     (send _operating_state :deserialize buf ptr-) (incf ptr- (send _operating_state :serialization-length))
   ;;
   self)
  )

(defclass crtk_msgs::trigger_operating_state
  :super ros::object
  :slots ())

(setf (get crtk_msgs::trigger_operating_state :md5sum-) "d941a2d049e2c9ac5773fc4a3a8a892d")
(setf (get crtk_msgs::trigger_operating_state :datatype-) "crtk_msgs/trigger_operating_state")
(setf (get crtk_msgs::trigger_operating_state :request) crtk_msgs::trigger_operating_stateRequest)
(setf (get crtk_msgs::trigger_operating_state :response) crtk_msgs::trigger_operating_stateResponse)

(defmethod crtk_msgs::trigger_operating_stateRequest
  (:response () (instance crtk_msgs::trigger_operating_stateResponse :init)))

(setf (get crtk_msgs::trigger_operating_stateRequest :md5sum-) "d941a2d049e2c9ac5773fc4a3a8a892d")
(setf (get crtk_msgs::trigger_operating_stateRequest :datatype-) "crtk_msgs/trigger_operating_stateRequest")
(setf (get crtk_msgs::trigger_operating_stateRequest :definition-)
      "---
crtk_msgs/operating_state operating_state


================================================================================
MSG: crtk_msgs/operating_state
#
# See https://github.com/collaborative-robotics/documentation/wiki/Robot-API-status
#
# Standard states include DISABLED, ENABLED, PAUSED and FAULT
#
Header  header
string  state
bool    is_homed
bool    is_busy

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
")

(setf (get crtk_msgs::trigger_operating_stateResponse :md5sum-) "d941a2d049e2c9ac5773fc4a3a8a892d")
(setf (get crtk_msgs::trigger_operating_stateResponse :datatype-) "crtk_msgs/trigger_operating_stateResponse")
(setf (get crtk_msgs::trigger_operating_stateResponse :definition-)
      "---
crtk_msgs/operating_state operating_state


================================================================================
MSG: crtk_msgs/operating_state
#
# See https://github.com/collaborative-robotics/documentation/wiki/Robot-API-status
#
# Standard states include DISABLED, ENABLED, PAUSED and FAULT
#
Header  header
string  state
bool    is_homed
bool    is_busy

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
")



(provide :crtk_msgs/trigger_operating_state "d941a2d049e2c9ac5773fc4a3a8a892d")


