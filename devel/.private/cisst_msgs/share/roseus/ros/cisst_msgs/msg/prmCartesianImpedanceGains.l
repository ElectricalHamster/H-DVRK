;; Auto-generated. Do not edit!


(when (boundp 'cisst_msgs::prmCartesianImpedanceGains)
  (if (not (find-package "CISST_MSGS"))
    (make-package "CISST_MSGS"))
  (shadow 'prmCartesianImpedanceGains (find-package "CISST_MSGS")))
(unless (find-package "CISST_MSGS::PRMCARTESIANIMPEDANCEGAINS")
  (make-package "CISST_MSGS::PRMCARTESIANIMPEDANCEGAINS"))

(in-package "ROS")
;;//! \htmlinclude prmCartesianImpedanceGains.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass cisst_msgs::prmCartesianImpedanceGains
  :super ros::object
  :slots (_header _ForceOrientation _ForcePosition _TorqueOrientation _PosDeadbandPos _PosDeadbandNeg _PosStiffPos _PosStiffNeg _PosDampingPos _PosDampingNeg _ForceBiasPos _ForceBiasNeg _OriDeadbandPos _OriDeadbandNeg _OriStiffPos _OriStiffNeg _OriDampingPos _OriDampingNeg _TorqueBiasPos _TorqueBiasNeg ))

(defmethod cisst_msgs::prmCartesianImpedanceGains
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:ForceOrientation __ForceOrientation) (instance geometry_msgs::Quaternion :init))
    ((:ForcePosition __ForcePosition) (instance geometry_msgs::Vector3 :init))
    ((:TorqueOrientation __TorqueOrientation) (instance geometry_msgs::Quaternion :init))
    ((:PosDeadbandPos __PosDeadbandPos) (instance geometry_msgs::Vector3 :init))
    ((:PosDeadbandNeg __PosDeadbandNeg) (instance geometry_msgs::Vector3 :init))
    ((:PosStiffPos __PosStiffPos) (instance geometry_msgs::Vector3 :init))
    ((:PosStiffNeg __PosStiffNeg) (instance geometry_msgs::Vector3 :init))
    ((:PosDampingPos __PosDampingPos) (instance geometry_msgs::Vector3 :init))
    ((:PosDampingNeg __PosDampingNeg) (instance geometry_msgs::Vector3 :init))
    ((:ForceBiasPos __ForceBiasPos) (instance geometry_msgs::Vector3 :init))
    ((:ForceBiasNeg __ForceBiasNeg) (instance geometry_msgs::Vector3 :init))
    ((:OriDeadbandPos __OriDeadbandPos) (instance geometry_msgs::Vector3 :init))
    ((:OriDeadbandNeg __OriDeadbandNeg) (instance geometry_msgs::Vector3 :init))
    ((:OriStiffPos __OriStiffPos) (instance geometry_msgs::Vector3 :init))
    ((:OriStiffNeg __OriStiffNeg) (instance geometry_msgs::Vector3 :init))
    ((:OriDampingPos __OriDampingPos) (instance geometry_msgs::Vector3 :init))
    ((:OriDampingNeg __OriDampingNeg) (instance geometry_msgs::Vector3 :init))
    ((:TorqueBiasPos __TorqueBiasPos) (instance geometry_msgs::Vector3 :init))
    ((:TorqueBiasNeg __TorqueBiasNeg) (instance geometry_msgs::Vector3 :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _ForceOrientation __ForceOrientation)
   (setq _ForcePosition __ForcePosition)
   (setq _TorqueOrientation __TorqueOrientation)
   (setq _PosDeadbandPos __PosDeadbandPos)
   (setq _PosDeadbandNeg __PosDeadbandNeg)
   (setq _PosStiffPos __PosStiffPos)
   (setq _PosStiffNeg __PosStiffNeg)
   (setq _PosDampingPos __PosDampingPos)
   (setq _PosDampingNeg __PosDampingNeg)
   (setq _ForceBiasPos __ForceBiasPos)
   (setq _ForceBiasNeg __ForceBiasNeg)
   (setq _OriDeadbandPos __OriDeadbandPos)
   (setq _OriDeadbandNeg __OriDeadbandNeg)
   (setq _OriStiffPos __OriStiffPos)
   (setq _OriStiffNeg __OriStiffNeg)
   (setq _OriDampingPos __OriDampingPos)
   (setq _OriDampingNeg __OriDampingNeg)
   (setq _TorqueBiasPos __TorqueBiasPos)
   (setq _TorqueBiasNeg __TorqueBiasNeg)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:ForceOrientation
   (&rest __ForceOrientation)
   (if (keywordp (car __ForceOrientation))
       (send* _ForceOrientation __ForceOrientation)
     (progn
       (if __ForceOrientation (setq _ForceOrientation (car __ForceOrientation)))
       _ForceOrientation)))
  (:ForcePosition
   (&rest __ForcePosition)
   (if (keywordp (car __ForcePosition))
       (send* _ForcePosition __ForcePosition)
     (progn
       (if __ForcePosition (setq _ForcePosition (car __ForcePosition)))
       _ForcePosition)))
  (:TorqueOrientation
   (&rest __TorqueOrientation)
   (if (keywordp (car __TorqueOrientation))
       (send* _TorqueOrientation __TorqueOrientation)
     (progn
       (if __TorqueOrientation (setq _TorqueOrientation (car __TorqueOrientation)))
       _TorqueOrientation)))
  (:PosDeadbandPos
   (&rest __PosDeadbandPos)
   (if (keywordp (car __PosDeadbandPos))
       (send* _PosDeadbandPos __PosDeadbandPos)
     (progn
       (if __PosDeadbandPos (setq _PosDeadbandPos (car __PosDeadbandPos)))
       _PosDeadbandPos)))
  (:PosDeadbandNeg
   (&rest __PosDeadbandNeg)
   (if (keywordp (car __PosDeadbandNeg))
       (send* _PosDeadbandNeg __PosDeadbandNeg)
     (progn
       (if __PosDeadbandNeg (setq _PosDeadbandNeg (car __PosDeadbandNeg)))
       _PosDeadbandNeg)))
  (:PosStiffPos
   (&rest __PosStiffPos)
   (if (keywordp (car __PosStiffPos))
       (send* _PosStiffPos __PosStiffPos)
     (progn
       (if __PosStiffPos (setq _PosStiffPos (car __PosStiffPos)))
       _PosStiffPos)))
  (:PosStiffNeg
   (&rest __PosStiffNeg)
   (if (keywordp (car __PosStiffNeg))
       (send* _PosStiffNeg __PosStiffNeg)
     (progn
       (if __PosStiffNeg (setq _PosStiffNeg (car __PosStiffNeg)))
       _PosStiffNeg)))
  (:PosDampingPos
   (&rest __PosDampingPos)
   (if (keywordp (car __PosDampingPos))
       (send* _PosDampingPos __PosDampingPos)
     (progn
       (if __PosDampingPos (setq _PosDampingPos (car __PosDampingPos)))
       _PosDampingPos)))
  (:PosDampingNeg
   (&rest __PosDampingNeg)
   (if (keywordp (car __PosDampingNeg))
       (send* _PosDampingNeg __PosDampingNeg)
     (progn
       (if __PosDampingNeg (setq _PosDampingNeg (car __PosDampingNeg)))
       _PosDampingNeg)))
  (:ForceBiasPos
   (&rest __ForceBiasPos)
   (if (keywordp (car __ForceBiasPos))
       (send* _ForceBiasPos __ForceBiasPos)
     (progn
       (if __ForceBiasPos (setq _ForceBiasPos (car __ForceBiasPos)))
       _ForceBiasPos)))
  (:ForceBiasNeg
   (&rest __ForceBiasNeg)
   (if (keywordp (car __ForceBiasNeg))
       (send* _ForceBiasNeg __ForceBiasNeg)
     (progn
       (if __ForceBiasNeg (setq _ForceBiasNeg (car __ForceBiasNeg)))
       _ForceBiasNeg)))
  (:OriDeadbandPos
   (&rest __OriDeadbandPos)
   (if (keywordp (car __OriDeadbandPos))
       (send* _OriDeadbandPos __OriDeadbandPos)
     (progn
       (if __OriDeadbandPos (setq _OriDeadbandPos (car __OriDeadbandPos)))
       _OriDeadbandPos)))
  (:OriDeadbandNeg
   (&rest __OriDeadbandNeg)
   (if (keywordp (car __OriDeadbandNeg))
       (send* _OriDeadbandNeg __OriDeadbandNeg)
     (progn
       (if __OriDeadbandNeg (setq _OriDeadbandNeg (car __OriDeadbandNeg)))
       _OriDeadbandNeg)))
  (:OriStiffPos
   (&rest __OriStiffPos)
   (if (keywordp (car __OriStiffPos))
       (send* _OriStiffPos __OriStiffPos)
     (progn
       (if __OriStiffPos (setq _OriStiffPos (car __OriStiffPos)))
       _OriStiffPos)))
  (:OriStiffNeg
   (&rest __OriStiffNeg)
   (if (keywordp (car __OriStiffNeg))
       (send* _OriStiffNeg __OriStiffNeg)
     (progn
       (if __OriStiffNeg (setq _OriStiffNeg (car __OriStiffNeg)))
       _OriStiffNeg)))
  (:OriDampingPos
   (&rest __OriDampingPos)
   (if (keywordp (car __OriDampingPos))
       (send* _OriDampingPos __OriDampingPos)
     (progn
       (if __OriDampingPos (setq _OriDampingPos (car __OriDampingPos)))
       _OriDampingPos)))
  (:OriDampingNeg
   (&rest __OriDampingNeg)
   (if (keywordp (car __OriDampingNeg))
       (send* _OriDampingNeg __OriDampingNeg)
     (progn
       (if __OriDampingNeg (setq _OriDampingNeg (car __OriDampingNeg)))
       _OriDampingNeg)))
  (:TorqueBiasPos
   (&rest __TorqueBiasPos)
   (if (keywordp (car __TorqueBiasPos))
       (send* _TorqueBiasPos __TorqueBiasPos)
     (progn
       (if __TorqueBiasPos (setq _TorqueBiasPos (car __TorqueBiasPos)))
       _TorqueBiasPos)))
  (:TorqueBiasNeg
   (&rest __TorqueBiasNeg)
   (if (keywordp (car __TorqueBiasNeg))
       (send* _TorqueBiasNeg __TorqueBiasNeg)
     (progn
       (if __TorqueBiasNeg (setq _TorqueBiasNeg (car __TorqueBiasNeg)))
       _TorqueBiasNeg)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; geometry_msgs/Quaternion _ForceOrientation
    (send _ForceOrientation :serialization-length)
    ;; geometry_msgs/Vector3 _ForcePosition
    (send _ForcePosition :serialization-length)
    ;; geometry_msgs/Quaternion _TorqueOrientation
    (send _TorqueOrientation :serialization-length)
    ;; geometry_msgs/Vector3 _PosDeadbandPos
    (send _PosDeadbandPos :serialization-length)
    ;; geometry_msgs/Vector3 _PosDeadbandNeg
    (send _PosDeadbandNeg :serialization-length)
    ;; geometry_msgs/Vector3 _PosStiffPos
    (send _PosStiffPos :serialization-length)
    ;; geometry_msgs/Vector3 _PosStiffNeg
    (send _PosStiffNeg :serialization-length)
    ;; geometry_msgs/Vector3 _PosDampingPos
    (send _PosDampingPos :serialization-length)
    ;; geometry_msgs/Vector3 _PosDampingNeg
    (send _PosDampingNeg :serialization-length)
    ;; geometry_msgs/Vector3 _ForceBiasPos
    (send _ForceBiasPos :serialization-length)
    ;; geometry_msgs/Vector3 _ForceBiasNeg
    (send _ForceBiasNeg :serialization-length)
    ;; geometry_msgs/Vector3 _OriDeadbandPos
    (send _OriDeadbandPos :serialization-length)
    ;; geometry_msgs/Vector3 _OriDeadbandNeg
    (send _OriDeadbandNeg :serialization-length)
    ;; geometry_msgs/Vector3 _OriStiffPos
    (send _OriStiffPos :serialization-length)
    ;; geometry_msgs/Vector3 _OriStiffNeg
    (send _OriStiffNeg :serialization-length)
    ;; geometry_msgs/Vector3 _OriDampingPos
    (send _OriDampingPos :serialization-length)
    ;; geometry_msgs/Vector3 _OriDampingNeg
    (send _OriDampingNeg :serialization-length)
    ;; geometry_msgs/Vector3 _TorqueBiasPos
    (send _TorqueBiasPos :serialization-length)
    ;; geometry_msgs/Vector3 _TorqueBiasNeg
    (send _TorqueBiasNeg :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; geometry_msgs/Quaternion _ForceOrientation
       (send _ForceOrientation :serialize s)
     ;; geometry_msgs/Vector3 _ForcePosition
       (send _ForcePosition :serialize s)
     ;; geometry_msgs/Quaternion _TorqueOrientation
       (send _TorqueOrientation :serialize s)
     ;; geometry_msgs/Vector3 _PosDeadbandPos
       (send _PosDeadbandPos :serialize s)
     ;; geometry_msgs/Vector3 _PosDeadbandNeg
       (send _PosDeadbandNeg :serialize s)
     ;; geometry_msgs/Vector3 _PosStiffPos
       (send _PosStiffPos :serialize s)
     ;; geometry_msgs/Vector3 _PosStiffNeg
       (send _PosStiffNeg :serialize s)
     ;; geometry_msgs/Vector3 _PosDampingPos
       (send _PosDampingPos :serialize s)
     ;; geometry_msgs/Vector3 _PosDampingNeg
       (send _PosDampingNeg :serialize s)
     ;; geometry_msgs/Vector3 _ForceBiasPos
       (send _ForceBiasPos :serialize s)
     ;; geometry_msgs/Vector3 _ForceBiasNeg
       (send _ForceBiasNeg :serialize s)
     ;; geometry_msgs/Vector3 _OriDeadbandPos
       (send _OriDeadbandPos :serialize s)
     ;; geometry_msgs/Vector3 _OriDeadbandNeg
       (send _OriDeadbandNeg :serialize s)
     ;; geometry_msgs/Vector3 _OriStiffPos
       (send _OriStiffPos :serialize s)
     ;; geometry_msgs/Vector3 _OriStiffNeg
       (send _OriStiffNeg :serialize s)
     ;; geometry_msgs/Vector3 _OriDampingPos
       (send _OriDampingPos :serialize s)
     ;; geometry_msgs/Vector3 _OriDampingNeg
       (send _OriDampingNeg :serialize s)
     ;; geometry_msgs/Vector3 _TorqueBiasPos
       (send _TorqueBiasPos :serialize s)
     ;; geometry_msgs/Vector3 _TorqueBiasNeg
       (send _TorqueBiasNeg :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; geometry_msgs/Quaternion _ForceOrientation
     (send _ForceOrientation :deserialize buf ptr-) (incf ptr- (send _ForceOrientation :serialization-length))
   ;; geometry_msgs/Vector3 _ForcePosition
     (send _ForcePosition :deserialize buf ptr-) (incf ptr- (send _ForcePosition :serialization-length))
   ;; geometry_msgs/Quaternion _TorqueOrientation
     (send _TorqueOrientation :deserialize buf ptr-) (incf ptr- (send _TorqueOrientation :serialization-length))
   ;; geometry_msgs/Vector3 _PosDeadbandPos
     (send _PosDeadbandPos :deserialize buf ptr-) (incf ptr- (send _PosDeadbandPos :serialization-length))
   ;; geometry_msgs/Vector3 _PosDeadbandNeg
     (send _PosDeadbandNeg :deserialize buf ptr-) (incf ptr- (send _PosDeadbandNeg :serialization-length))
   ;; geometry_msgs/Vector3 _PosStiffPos
     (send _PosStiffPos :deserialize buf ptr-) (incf ptr- (send _PosStiffPos :serialization-length))
   ;; geometry_msgs/Vector3 _PosStiffNeg
     (send _PosStiffNeg :deserialize buf ptr-) (incf ptr- (send _PosStiffNeg :serialization-length))
   ;; geometry_msgs/Vector3 _PosDampingPos
     (send _PosDampingPos :deserialize buf ptr-) (incf ptr- (send _PosDampingPos :serialization-length))
   ;; geometry_msgs/Vector3 _PosDampingNeg
     (send _PosDampingNeg :deserialize buf ptr-) (incf ptr- (send _PosDampingNeg :serialization-length))
   ;; geometry_msgs/Vector3 _ForceBiasPos
     (send _ForceBiasPos :deserialize buf ptr-) (incf ptr- (send _ForceBiasPos :serialization-length))
   ;; geometry_msgs/Vector3 _ForceBiasNeg
     (send _ForceBiasNeg :deserialize buf ptr-) (incf ptr- (send _ForceBiasNeg :serialization-length))
   ;; geometry_msgs/Vector3 _OriDeadbandPos
     (send _OriDeadbandPos :deserialize buf ptr-) (incf ptr- (send _OriDeadbandPos :serialization-length))
   ;; geometry_msgs/Vector3 _OriDeadbandNeg
     (send _OriDeadbandNeg :deserialize buf ptr-) (incf ptr- (send _OriDeadbandNeg :serialization-length))
   ;; geometry_msgs/Vector3 _OriStiffPos
     (send _OriStiffPos :deserialize buf ptr-) (incf ptr- (send _OriStiffPos :serialization-length))
   ;; geometry_msgs/Vector3 _OriStiffNeg
     (send _OriStiffNeg :deserialize buf ptr-) (incf ptr- (send _OriStiffNeg :serialization-length))
   ;; geometry_msgs/Vector3 _OriDampingPos
     (send _OriDampingPos :deserialize buf ptr-) (incf ptr- (send _OriDampingPos :serialization-length))
   ;; geometry_msgs/Vector3 _OriDampingNeg
     (send _OriDampingNeg :deserialize buf ptr-) (incf ptr- (send _OriDampingNeg :serialization-length))
   ;; geometry_msgs/Vector3 _TorqueBiasPos
     (send _TorqueBiasPos :deserialize buf ptr-) (incf ptr- (send _TorqueBiasPos :serialization-length))
   ;; geometry_msgs/Vector3 _TorqueBiasNeg
     (send _TorqueBiasNeg :deserialize buf ptr-) (incf ptr- (send _TorqueBiasNeg :serialization-length))
   ;;
   self)
  )

(setf (get cisst_msgs::prmCartesianImpedanceGains :md5sum-) "e7496f2f1492fd454255a51e4f99f687")
(setf (get cisst_msgs::prmCartesianImpedanceGains :datatype-) "cisst_msgs/prmCartesianImpedanceGains")
(setf (get cisst_msgs::prmCartesianImpedanceGains :definition-)
      "Header header

# vf pos & ori
geometry_msgs/Quaternion  ForceOrientation
geometry_msgs/Vector3     ForcePosition
geometry_msgs/Quaternion  TorqueOrientation

# force gains
geometry_msgs/Vector3     PosDeadbandPos
geometry_msgs/Vector3     PosDeadbandNeg
geometry_msgs/Vector3     PosStiffPos
geometry_msgs/Vector3     PosStiffNeg
geometry_msgs/Vector3     PosDampingPos
geometry_msgs/Vector3     PosDampingNeg
geometry_msgs/Vector3     ForceBiasPos
geometry_msgs/Vector3     ForceBiasNeg

# torque gains
geometry_msgs/Vector3     OriDeadbandPos
geometry_msgs/Vector3     OriDeadbandNeg
geometry_msgs/Vector3     OriStiffPos
geometry_msgs/Vector3     OriStiffNeg
geometry_msgs/Vector3     OriDampingPos
geometry_msgs/Vector3     OriDampingNeg
geometry_msgs/Vector3     TorqueBiasPos
geometry_msgs/Vector3     TorqueBiasNeg

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
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
")



(provide :cisst_msgs/prmCartesianImpedanceGains "e7496f2f1492fd454255a51e4f99f687")


