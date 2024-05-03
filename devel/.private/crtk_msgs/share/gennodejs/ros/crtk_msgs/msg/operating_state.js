// Auto-generated. Do not edit!

// (in-package crtk_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class operating_state {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.state = null;
      this.is_homed = null;
      this.is_busy = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('state')) {
        this.state = initObj.state
      }
      else {
        this.state = '';
      }
      if (initObj.hasOwnProperty('is_homed')) {
        this.is_homed = initObj.is_homed
      }
      else {
        this.is_homed = false;
      }
      if (initObj.hasOwnProperty('is_busy')) {
        this.is_busy = initObj.is_busy
      }
      else {
        this.is_busy = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type operating_state
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [state]
    bufferOffset = _serializer.string(obj.state, buffer, bufferOffset);
    // Serialize message field [is_homed]
    bufferOffset = _serializer.bool(obj.is_homed, buffer, bufferOffset);
    // Serialize message field [is_busy]
    bufferOffset = _serializer.bool(obj.is_busy, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type operating_state
    let len;
    let data = new operating_state(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [state]
    data.state = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [is_homed]
    data.is_homed = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [is_busy]
    data.is_busy = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += _getByteLength(object.state);
    return length + 6;
  }

  static datatype() {
    // Returns string type for a message object
    return 'crtk_msgs/operating_state';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b1bd4021639d9d9c5fbfff78d6ff3158';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new operating_state(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.state !== undefined) {
      resolved.state = msg.state;
    }
    else {
      resolved.state = ''
    }

    if (msg.is_homed !== undefined) {
      resolved.is_homed = msg.is_homed;
    }
    else {
      resolved.is_homed = false
    }

    if (msg.is_busy !== undefined) {
      resolved.is_busy = msg.is_busy;
    }
    else {
      resolved.is_busy = false
    }

    return resolved;
    }
};

module.exports = operating_state;
