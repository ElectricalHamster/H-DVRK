// Auto-generated. Do not edit!

// (in-package crtk_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

let operating_state = require('../msg/operating_state.js');

//-----------------------------------------------------------

class trigger_operating_stateRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
    }
    else {
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type trigger_operating_stateRequest
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type trigger_operating_stateRequest
    let len;
    let data = new trigger_operating_stateRequest(null);
    return data;
  }

  static getMessageSize(object) {
    return 0;
  }

  static datatype() {
    // Returns string type for a service object
    return 'crtk_msgs/trigger_operating_stateRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd41d8cd98f00b204e9800998ecf8427e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new trigger_operating_stateRequest(null);
    return resolved;
    }
};

class trigger_operating_stateResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.operating_state = null;
    }
    else {
      if (initObj.hasOwnProperty('operating_state')) {
        this.operating_state = initObj.operating_state
      }
      else {
        this.operating_state = new operating_state();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type trigger_operating_stateResponse
    // Serialize message field [operating_state]
    bufferOffset = operating_state.serialize(obj.operating_state, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type trigger_operating_stateResponse
    let len;
    let data = new trigger_operating_stateResponse(null);
    // Deserialize message field [operating_state]
    data.operating_state = operating_state.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += operating_state.getMessageSize(object.operating_state);
    return length;
  }

  static datatype() {
    // Returns string type for a service object
    return 'crtk_msgs/trigger_operating_stateResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd941a2d049e2c9ac5773fc4a3a8a892d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new trigger_operating_stateResponse(null);
    if (msg.operating_state !== undefined) {
      resolved.operating_state = operating_state.Resolve(msg.operating_state)
    }
    else {
      resolved.operating_state = new operating_state()
    }

    return resolved;
    }
};

module.exports = {
  Request: trigger_operating_stateRequest,
  Response: trigger_operating_stateResponse,
  md5sum() { return 'd941a2d049e2c9ac5773fc4a3a8a892d'; },
  datatype() { return 'crtk_msgs/trigger_operating_state'; }
};
