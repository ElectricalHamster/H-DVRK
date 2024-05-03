
(cl:in-package :asdf)

(defsystem "cisst_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :sensor_msgs-msg
)
  :components ((:file "_package")
    (:file "QueryForwardKinematics" :depends-on ("_package_QueryForwardKinematics"))
    (:file "_package_QueryForwardKinematics" :depends-on ("_package"))
  ))