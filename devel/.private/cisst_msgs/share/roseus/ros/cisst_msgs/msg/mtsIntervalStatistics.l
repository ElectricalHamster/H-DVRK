;; Auto-generated. Do not edit!


(when (boundp 'cisst_msgs::mtsIntervalStatistics)
  (if (not (find-package "CISST_MSGS"))
    (make-package "CISST_MSGS"))
  (shadow 'mtsIntervalStatistics (find-package "CISST_MSGS")))
(unless (find-package "CISST_MSGS::MTSINTERVALSTATISTICS")
  (make-package "CISST_MSGS::MTSINTERVALSTATISTICS"))

(in-package "ROS")
;;//! \htmlinclude mtsIntervalStatistics.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass cisst_msgs::mtsIntervalStatistics
  :super ros::object
  :slots (_header _PeriodAvg _PeriodStdDev _PeriodMin _PeriodMax _ComputeTimeAvg _ComputeTimeStdDev _ComputeTimeMin _ComputeTimeMax _NumberOfSamples _NumberOfOverruns _StatisticsInterval _UserData ))

(defmethod cisst_msgs::mtsIntervalStatistics
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:PeriodAvg __PeriodAvg) 0.0)
    ((:PeriodStdDev __PeriodStdDev) 0.0)
    ((:PeriodMin __PeriodMin) 0.0)
    ((:PeriodMax __PeriodMax) 0.0)
    ((:ComputeTimeAvg __ComputeTimeAvg) 0.0)
    ((:ComputeTimeStdDev __ComputeTimeStdDev) 0.0)
    ((:ComputeTimeMin __ComputeTimeMin) 0.0)
    ((:ComputeTimeMax __ComputeTimeMax) 0.0)
    ((:NumberOfSamples __NumberOfSamples) 0)
    ((:NumberOfOverruns __NumberOfOverruns) 0)
    ((:StatisticsInterval __StatisticsInterval) 0.0)
    ((:UserData __UserData) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _PeriodAvg (float __PeriodAvg))
   (setq _PeriodStdDev (float __PeriodStdDev))
   (setq _PeriodMin (float __PeriodMin))
   (setq _PeriodMax (float __PeriodMax))
   (setq _ComputeTimeAvg (float __ComputeTimeAvg))
   (setq _ComputeTimeStdDev (float __ComputeTimeStdDev))
   (setq _ComputeTimeMin (float __ComputeTimeMin))
   (setq _ComputeTimeMax (float __ComputeTimeMax))
   (setq _NumberOfSamples (round __NumberOfSamples))
   (setq _NumberOfOverruns (round __NumberOfOverruns))
   (setq _StatisticsInterval (float __StatisticsInterval))
   (setq _UserData (round __UserData))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:PeriodAvg
   (&optional __PeriodAvg)
   (if __PeriodAvg (setq _PeriodAvg __PeriodAvg)) _PeriodAvg)
  (:PeriodStdDev
   (&optional __PeriodStdDev)
   (if __PeriodStdDev (setq _PeriodStdDev __PeriodStdDev)) _PeriodStdDev)
  (:PeriodMin
   (&optional __PeriodMin)
   (if __PeriodMin (setq _PeriodMin __PeriodMin)) _PeriodMin)
  (:PeriodMax
   (&optional __PeriodMax)
   (if __PeriodMax (setq _PeriodMax __PeriodMax)) _PeriodMax)
  (:ComputeTimeAvg
   (&optional __ComputeTimeAvg)
   (if __ComputeTimeAvg (setq _ComputeTimeAvg __ComputeTimeAvg)) _ComputeTimeAvg)
  (:ComputeTimeStdDev
   (&optional __ComputeTimeStdDev)
   (if __ComputeTimeStdDev (setq _ComputeTimeStdDev __ComputeTimeStdDev)) _ComputeTimeStdDev)
  (:ComputeTimeMin
   (&optional __ComputeTimeMin)
   (if __ComputeTimeMin (setq _ComputeTimeMin __ComputeTimeMin)) _ComputeTimeMin)
  (:ComputeTimeMax
   (&optional __ComputeTimeMax)
   (if __ComputeTimeMax (setq _ComputeTimeMax __ComputeTimeMax)) _ComputeTimeMax)
  (:NumberOfSamples
   (&optional __NumberOfSamples)
   (if __NumberOfSamples (setq _NumberOfSamples __NumberOfSamples)) _NumberOfSamples)
  (:NumberOfOverruns
   (&optional __NumberOfOverruns)
   (if __NumberOfOverruns (setq _NumberOfOverruns __NumberOfOverruns)) _NumberOfOverruns)
  (:StatisticsInterval
   (&optional __StatisticsInterval)
   (if __StatisticsInterval (setq _StatisticsInterval __StatisticsInterval)) _StatisticsInterval)
  (:UserData
   (&optional __UserData)
   (if __UserData (setq _UserData __UserData)) _UserData)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float64 _PeriodAvg
    8
    ;; float64 _PeriodStdDev
    8
    ;; float64 _PeriodMin
    8
    ;; float64 _PeriodMax
    8
    ;; float64 _ComputeTimeAvg
    8
    ;; float64 _ComputeTimeStdDev
    8
    ;; float64 _ComputeTimeMin
    8
    ;; float64 _ComputeTimeMax
    8
    ;; int64 _NumberOfSamples
    8
    ;; int64 _NumberOfOverruns
    8
    ;; float64 _StatisticsInterval
    8
    ;; int64 _UserData
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float64 _PeriodAvg
       (sys::poke _PeriodAvg (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _PeriodStdDev
       (sys::poke _PeriodStdDev (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _PeriodMin
       (sys::poke _PeriodMin (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _PeriodMax
       (sys::poke _PeriodMax (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _ComputeTimeAvg
       (sys::poke _ComputeTimeAvg (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _ComputeTimeStdDev
       (sys::poke _ComputeTimeStdDev (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _ComputeTimeMin
       (sys::poke _ComputeTimeMin (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _ComputeTimeMax
       (sys::poke _ComputeTimeMax (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; int64 _NumberOfSamples
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _NumberOfSamples (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _NumberOfSamples) (= (length (_NumberOfSamples . bv)) 2)) ;; bignum
              (write-long (ash (elt (_NumberOfSamples . bv) 0) 0) s)
              (write-long (ash (elt (_NumberOfSamples . bv) 1) -1) s))
             ((and (class _NumberOfSamples) (= (length (_NumberOfSamples . bv)) 1)) ;; big1
              (write-long (elt (_NumberOfSamples . bv) 0) s)
              (write-long (if (>= _NumberOfSamples 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _NumberOfSamples s)(write-long (if (>= _NumberOfSamples 0) 0 #xffffffff) s)))
     ;; int64 _NumberOfOverruns
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _NumberOfOverruns (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _NumberOfOverruns) (= (length (_NumberOfOverruns . bv)) 2)) ;; bignum
              (write-long (ash (elt (_NumberOfOverruns . bv) 0) 0) s)
              (write-long (ash (elt (_NumberOfOverruns . bv) 1) -1) s))
             ((and (class _NumberOfOverruns) (= (length (_NumberOfOverruns . bv)) 1)) ;; big1
              (write-long (elt (_NumberOfOverruns . bv) 0) s)
              (write-long (if (>= _NumberOfOverruns 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _NumberOfOverruns s)(write-long (if (>= _NumberOfOverruns 0) 0 #xffffffff) s)))
     ;; float64 _StatisticsInterval
       (sys::poke _StatisticsInterval (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; int64 _UserData
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _UserData (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _UserData) (= (length (_UserData . bv)) 2)) ;; bignum
              (write-long (ash (elt (_UserData . bv) 0) 0) s)
              (write-long (ash (elt (_UserData . bv) 1) -1) s))
             ((and (class _UserData) (= (length (_UserData . bv)) 1)) ;; big1
              (write-long (elt (_UserData . bv) 0) s)
              (write-long (if (>= _UserData 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _UserData s)(write-long (if (>= _UserData 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float64 _PeriodAvg
     (setq _PeriodAvg (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _PeriodStdDev
     (setq _PeriodStdDev (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _PeriodMin
     (setq _PeriodMin (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _PeriodMax
     (setq _PeriodMax (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _ComputeTimeAvg
     (setq _ComputeTimeAvg (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _ComputeTimeStdDev
     (setq _ComputeTimeStdDev (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _ComputeTimeMin
     (setq _ComputeTimeMin (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _ComputeTimeMax
     (setq _ComputeTimeMax (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; int64 _NumberOfSamples
#+(or :alpha :irix6 :x86_64)
      (setf _NumberOfSamples (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _NumberOfSamples (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; int64 _NumberOfOverruns
#+(or :alpha :irix6 :x86_64)
      (setf _NumberOfOverruns (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _NumberOfOverruns (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; float64 _StatisticsInterval
     (setq _StatisticsInterval (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; int64 _UserData
#+(or :alpha :irix6 :x86_64)
      (setf _UserData (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _UserData (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(setf (get cisst_msgs::mtsIntervalStatistics :md5sum-) "fc177c4951f85470a8a9c80c56822cfb")
(setf (get cisst_msgs::mtsIntervalStatistics :datatype-) "cisst_msgs/mtsIntervalStatistics")
(setf (get cisst_msgs::mtsIntervalStatistics :definition-)
      "Header header

# average period 
float64 PeriodAvg
# deviation on periodicity
float64 PeriodStdDev
# min and max time between
float64 PeriodMin
float64 PeriodMax
# same 4 values for compute time
float64 ComputeTimeAvg
float64 ComputeTimeStdDev
float64 ComputeTimeMin
float64 ComputeTimeMax
# number of samples used to compute these status
int64 NumberOfSamples
# number of overruns base on previous interval average
int64 NumberOfOverruns
# time window covered by these stats
float64 StatisticsInterval

# user data
int64 UserData

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



(provide :cisst_msgs/mtsIntervalStatistics "fc177c4951f85470a8a9c80c56822cfb")


