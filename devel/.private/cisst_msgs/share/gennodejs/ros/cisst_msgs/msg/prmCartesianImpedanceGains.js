// Auto-generated. Do not edit!

// (in-package cisst_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class prmCartesianImpedanceGains {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.ForceOrientation = null;
      this.ForcePosition = null;
      this.TorqueOrientation = null;
      this.PosDeadbandPos = null;
      this.PosDeadbandNeg = null;
      this.PosStiffPos = null;
      this.PosStiffNeg = null;
      this.PosDampingPos = null;
      this.PosDampingNeg = null;
      this.ForceBiasPos = null;
      this.ForceBiasNeg = null;
      this.OriDeadbandPos = null;
      this.OriDeadbandNeg = null;
      this.OriStiffPos = null;
      this.OriStiffNeg = null;
      this.OriDampingPos = null;
      this.OriDampingNeg = null;
      this.TorqueBiasPos = null;
      this.TorqueBiasNeg = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('ForceOrientation')) {
        this.ForceOrientation = initObj.ForceOrientation
      }
      else {
        this.ForceOrientation = new geometry_msgs.msg.Quaternion();
      }
      if (initObj.hasOwnProperty('ForcePosition')) {
        this.ForcePosition = initObj.ForcePosition
      }
      else {
        this.ForcePosition = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('TorqueOrientation')) {
        this.TorqueOrientation = initObj.TorqueOrientation
      }
      else {
        this.TorqueOrientation = new geometry_msgs.msg.Quaternion();
      }
      if (initObj.hasOwnProperty('PosDeadbandPos')) {
        this.PosDeadbandPos = initObj.PosDeadbandPos
      }
      else {
        this.PosDeadbandPos = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('PosDeadbandNeg')) {
        this.PosDeadbandNeg = initObj.PosDeadbandNeg
      }
      else {
        this.PosDeadbandNeg = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('PosStiffPos')) {
        this.PosStiffPos = initObj.PosStiffPos
      }
      else {
        this.PosStiffPos = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('PosStiffNeg')) {
        this.PosStiffNeg = initObj.PosStiffNeg
      }
      else {
        this.PosStiffNeg = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('PosDampingPos')) {
        this.PosDampingPos = initObj.PosDampingPos
      }
      else {
        this.PosDampingPos = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('PosDampingNeg')) {
        this.PosDampingNeg = initObj.PosDampingNeg
      }
      else {
        this.PosDampingNeg = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('ForceBiasPos')) {
        this.ForceBiasPos = initObj.ForceBiasPos
      }
      else {
        this.ForceBiasPos = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('ForceBiasNeg')) {
        this.ForceBiasNeg = initObj.ForceBiasNeg
      }
      else {
        this.ForceBiasNeg = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('OriDeadbandPos')) {
        this.OriDeadbandPos = initObj.OriDeadbandPos
      }
      else {
        this.OriDeadbandPos = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('OriDeadbandNeg')) {
        this.OriDeadbandNeg = initObj.OriDeadbandNeg
      }
      else {
        this.OriDeadbandNeg = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('OriStiffPos')) {
        this.OriStiffPos = initObj.OriStiffPos
      }
      else {
        this.OriStiffPos = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('OriStiffNeg')) {
        this.OriStiffNeg = initObj.OriStiffNeg
      }
      else {
        this.OriStiffNeg = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('OriDampingPos')) {
        this.OriDampingPos = initObj.OriDampingPos
      }
      else {
        this.OriDampingPos = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('OriDampingNeg')) {
        this.OriDampingNeg = initObj.OriDampingNeg
      }
      else {
        this.OriDampingNeg = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('TorqueBiasPos')) {
        this.TorqueBiasPos = initObj.TorqueBiasPos
      }
      else {
        this.TorqueBiasPos = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('TorqueBiasNeg')) {
        this.TorqueBiasNeg = initObj.TorqueBiasNeg
      }
      else {
        this.TorqueBiasNeg = new geometry_msgs.msg.Vector3();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type prmCartesianImpedanceGains
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [ForceOrientation]
    bufferOffset = geometry_msgs.msg.Quaternion.serialize(obj.ForceOrientation, buffer, bufferOffset);
    // Serialize message field [ForcePosition]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.ForcePosition, buffer, bufferOffset);
    // Serialize message field [TorqueOrientation]
    bufferOffset = geometry_msgs.msg.Quaternion.serialize(obj.TorqueOrientation, buffer, bufferOffset);
    // Serialize message field [PosDeadbandPos]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.PosDeadbandPos, buffer, bufferOffset);
    // Serialize message field [PosDeadbandNeg]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.PosDeadbandNeg, buffer, bufferOffset);
    // Serialize message field [PosStiffPos]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.PosStiffPos, buffer, bufferOffset);
    // Serialize message field [PosStiffNeg]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.PosStiffNeg, buffer, bufferOffset);
    // Serialize message field [PosDampingPos]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.PosDampingPos, buffer, bufferOffset);
    // Serialize message field [PosDampingNeg]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.PosDampingNeg, buffer, bufferOffset);
    // Serialize message field [ForceBiasPos]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.ForceBiasPos, buffer, bufferOffset);
    // Serialize message field [ForceBiasNeg]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.ForceBiasNeg, buffer, bufferOffset);
    // Serialize message field [OriDeadbandPos]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.OriDeadbandPos, buffer, bufferOffset);
    // Serialize message field [OriDeadbandNeg]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.OriDeadbandNeg, buffer, bufferOffset);
    // Serialize message field [OriStiffPos]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.OriStiffPos, buffer, bufferOffset);
    // Serialize message field [OriStiffNeg]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.OriStiffNeg, buffer, bufferOffset);
    // Serialize message field [OriDampingPos]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.OriDampingPos, buffer, bufferOffset);
    // Serialize message field [OriDampingNeg]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.OriDampingNeg, buffer, bufferOffset);
    // Serialize message field [TorqueBiasPos]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.TorqueBiasPos, buffer, bufferOffset);
    // Serialize message field [TorqueBiasNeg]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.TorqueBiasNeg, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type prmCartesianImpedanceGains
    let len;
    let data = new prmCartesianImpedanceGains(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [ForceOrientation]
    data.ForceOrientation = geometry_msgs.msg.Quaternion.deserialize(buffer, bufferOffset);
    // Deserialize message field [ForcePosition]
    data.ForcePosition = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [TorqueOrientation]
    data.TorqueOrientation = geometry_msgs.msg.Quaternion.deserialize(buffer, bufferOffset);
    // Deserialize message field [PosDeadbandPos]
    data.PosDeadbandPos = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [PosDeadbandNeg]
    data.PosDeadbandNeg = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [PosStiffPos]
    data.PosStiffPos = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [PosStiffNeg]
    data.PosStiffNeg = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [PosDampingPos]
    data.PosDampingPos = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [PosDampingNeg]
    data.PosDampingNeg = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [ForceBiasPos]
    data.ForceBiasPos = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [ForceBiasNeg]
    data.ForceBiasNeg = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [OriDeadbandPos]
    data.OriDeadbandPos = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [OriDeadbandNeg]
    data.OriDeadbandNeg = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [OriStiffPos]
    data.OriStiffPos = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [OriStiffNeg]
    data.OriStiffNeg = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [OriDampingPos]
    data.OriDampingPos = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [OriDampingNeg]
    data.OriDampingNeg = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [TorqueBiasPos]
    data.TorqueBiasPos = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [TorqueBiasNeg]
    data.TorqueBiasNeg = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 472;
  }

  static datatype() {
    // Returns string type for a message object
    return 'cisst_msgs/prmCartesianImpedanceGains';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'e7496f2f1492fd454255a51e4f99f687';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header
    
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
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new prmCartesianImpedanceGains(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.ForceOrientation !== undefined) {
      resolved.ForceOrientation = geometry_msgs.msg.Quaternion.Resolve(msg.ForceOrientation)
    }
    else {
      resolved.ForceOrientation = new geometry_msgs.msg.Quaternion()
    }

    if (msg.ForcePosition !== undefined) {
      resolved.ForcePosition = geometry_msgs.msg.Vector3.Resolve(msg.ForcePosition)
    }
    else {
      resolved.ForcePosition = new geometry_msgs.msg.Vector3()
    }

    if (msg.TorqueOrientation !== undefined) {
      resolved.TorqueOrientation = geometry_msgs.msg.Quaternion.Resolve(msg.TorqueOrientation)
    }
    else {
      resolved.TorqueOrientation = new geometry_msgs.msg.Quaternion()
    }

    if (msg.PosDeadbandPos !== undefined) {
      resolved.PosDeadbandPos = geometry_msgs.msg.Vector3.Resolve(msg.PosDeadbandPos)
    }
    else {
      resolved.PosDeadbandPos = new geometry_msgs.msg.Vector3()
    }

    if (msg.PosDeadbandNeg !== undefined) {
      resolved.PosDeadbandNeg = geometry_msgs.msg.Vector3.Resolve(msg.PosDeadbandNeg)
    }
    else {
      resolved.PosDeadbandNeg = new geometry_msgs.msg.Vector3()
    }

    if (msg.PosStiffPos !== undefined) {
      resolved.PosStiffPos = geometry_msgs.msg.Vector3.Resolve(msg.PosStiffPos)
    }
    else {
      resolved.PosStiffPos = new geometry_msgs.msg.Vector3()
    }

    if (msg.PosStiffNeg !== undefined) {
      resolved.PosStiffNeg = geometry_msgs.msg.Vector3.Resolve(msg.PosStiffNeg)
    }
    else {
      resolved.PosStiffNeg = new geometry_msgs.msg.Vector3()
    }

    if (msg.PosDampingPos !== undefined) {
      resolved.PosDampingPos = geometry_msgs.msg.Vector3.Resolve(msg.PosDampingPos)
    }
    else {
      resolved.PosDampingPos = new geometry_msgs.msg.Vector3()
    }

    if (msg.PosDampingNeg !== undefined) {
      resolved.PosDampingNeg = geometry_msgs.msg.Vector3.Resolve(msg.PosDampingNeg)
    }
    else {
      resolved.PosDampingNeg = new geometry_msgs.msg.Vector3()
    }

    if (msg.ForceBiasPos !== undefined) {
      resolved.ForceBiasPos = geometry_msgs.msg.Vector3.Resolve(msg.ForceBiasPos)
    }
    else {
      resolved.ForceBiasPos = new geometry_msgs.msg.Vector3()
    }

    if (msg.ForceBiasNeg !== undefined) {
      resolved.ForceBiasNeg = geometry_msgs.msg.Vector3.Resolve(msg.ForceBiasNeg)
    }
    else {
      resolved.ForceBiasNeg = new geometry_msgs.msg.Vector3()
    }

    if (msg.OriDeadbandPos !== undefined) {
      resolved.OriDeadbandPos = geometry_msgs.msg.Vector3.Resolve(msg.OriDeadbandPos)
    }
    else {
      resolved.OriDeadbandPos = new geometry_msgs.msg.Vector3()
    }

    if (msg.OriDeadbandNeg !== undefined) {
      resolved.OriDeadbandNeg = geometry_msgs.msg.Vector3.Resolve(msg.OriDeadbandNeg)
    }
    else {
      resolved.OriDeadbandNeg = new geometry_msgs.msg.Vector3()
    }

    if (msg.OriStiffPos !== undefined) {
      resolved.OriStiffPos = geometry_msgs.msg.Vector3.Resolve(msg.OriStiffPos)
    }
    else {
      resolved.OriStiffPos = new geometry_msgs.msg.Vector3()
    }

    if (msg.OriStiffNeg !== undefined) {
      resolved.OriStiffNeg = geometry_msgs.msg.Vector3.Resolve(msg.OriStiffNeg)
    }
    else {
      resolved.OriStiffNeg = new geometry_msgs.msg.Vector3()
    }

    if (msg.OriDampingPos !== undefined) {
      resolved.OriDampingPos = geometry_msgs.msg.Vector3.Resolve(msg.OriDampingPos)
    }
    else {
      resolved.OriDampingPos = new geometry_msgs.msg.Vector3()
    }

    if (msg.OriDampingNeg !== undefined) {
      resolved.OriDampingNeg = geometry_msgs.msg.Vector3.Resolve(msg.OriDampingNeg)
    }
    else {
      resolved.OriDampingNeg = new geometry_msgs.msg.Vector3()
    }

    if (msg.TorqueBiasPos !== undefined) {
      resolved.TorqueBiasPos = geometry_msgs.msg.Vector3.Resolve(msg.TorqueBiasPos)
    }
    else {
      resolved.TorqueBiasPos = new geometry_msgs.msg.Vector3()
    }

    if (msg.TorqueBiasNeg !== undefined) {
      resolved.TorqueBiasNeg = geometry_msgs.msg.Vector3.Resolve(msg.TorqueBiasNeg)
    }
    else {
      resolved.TorqueBiasNeg = new geometry_msgs.msg.Vector3()
    }

    return resolved;
    }
};

module.exports = prmCartesianImpedanceGains;
