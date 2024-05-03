
(cl:in-package :asdf)

(defsystem "crtk_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :crtk_msgs-msg
)
  :components ((:file "_package")
    (:file "trigger_operating_state" :depends-on ("_package_trigger_operating_state"))
    (:file "_package_trigger_operating_state" :depends-on ("_package"))
  ))