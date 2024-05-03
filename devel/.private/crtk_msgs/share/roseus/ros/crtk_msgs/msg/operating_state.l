;; Auto-generated. Do not edit!


(when (boundp 'crtk_msgs::operating_state)
  (if (not (find-package "CRTK_MSGS"))
    (make-package "CRTK_MSGS"))
  (shadow 'operating_state (find-package "CRTK_MSGS")))
(unless (find-package "CRTK_MSGS::OPERATING_STATE")
  (make-package "CRTK_MSGS::OPERATING_STATE"))

(in-package "ROS")
;;//! \htmlinclude operating_state.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass crtk_msgs::operating_state
  :super ros::object
  :slots (_header _state _is_homed _is_busy ))

(defmethod crtk_msgs::operating_state
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:state __state) "")
    ((:is_homed __is_homed) nil)
    ((:is_busy __is_busy) nil)
    )
   (send-super :init)
   (setq _header __header)
   (setq _state (string __state))
   (setq _is_homed __is_homed)
   (setq _is_busy __is_busy)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:state
   (&optional __state)
   (if __state (setq _state __state)) _state)
  (:is_homed
   (&optional (__is_homed :null))
   (if (not (eq __is_homed :null)) (setq _is_homed __is_homed)) _is_homed)
  (:is_busy
   (&optional (__is_busy :null))
   (if (not (eq __is_busy :null)) (setq _is_busy __is_busy)) _is_busy)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _state
    4 (length _state)
    ;; bool _is_homed
    1
    ;; bool _is_busy
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; string _state
       (write-long (length _state) s) (princ _state s)
     ;; bool _is_homed
       (if _is_homed (write-byte -1 s) (write-byte 0 s))
     ;; bool _is_busy
       (if _is_busy (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _state
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _state (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; bool _is_homed
     (setq _is_homed (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _is_busy
     (setq _is_busy (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get crtk_msgs::operating_state :md5sum-) "b1bd4021639d9d9c5fbfff78d6ff3158")
(setf (get crtk_msgs::operating_state :datatype-) "crtk_msgs/operating_state")
(setf (get crtk_msgs::operating_state :definition-)
      "#
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



(provide :crtk_msgs/operating_state "b1bd4021639d9d9c5fbfff78d6ff3158")


