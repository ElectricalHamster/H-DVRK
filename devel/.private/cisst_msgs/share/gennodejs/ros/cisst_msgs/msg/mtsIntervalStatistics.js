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

//-----------------------------------------------------------

class mtsIntervalStatistics {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.PeriodAvg = null;
      this.PeriodStdDev = null;
      this.PeriodMin = null;
      this.PeriodMax = null;
      this.ComputeTimeAvg = null;
      this.ComputeTimeStdDev = null;
      this.ComputeTimeMin = null;
      this.ComputeTimeMax = null;
      this.NumberOfSamples = null;
      this.NumberOfOverruns = null;
      this.StatisticsInterval = null;
      this.UserData = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('PeriodAvg')) {
        this.PeriodAvg = initObj.PeriodAvg
      }
      else {
        this.PeriodAvg = 0.0;
      }
      if (initObj.hasOwnProperty('PeriodStdDev')) {
        this.PeriodStdDev = initObj.PeriodStdDev
      }
      else {
        this.PeriodStdDev = 0.0;
      }
      if (initObj.hasOwnProperty('PeriodMin')) {
        this.PeriodMin = initObj.PeriodMin
      }
      else {
        this.PeriodMin = 0.0;
      }
      if (initObj.hasOwnProperty('PeriodMax')) {
        this.PeriodMax = initObj.PeriodMax
      }
      else {
        this.PeriodMax = 0.0;
      }
      if (initObj.hasOwnProperty('ComputeTimeAvg')) {
        this.ComputeTimeAvg = initObj.ComputeTimeAvg
      }
      else {
        this.ComputeTimeAvg = 0.0;
      }
      if (initObj.hasOwnProperty('ComputeTimeStdDev')) {
        this.ComputeTimeStdDev = initObj.ComputeTimeStdDev
      }
      else {
        this.ComputeTimeStdDev = 0.0;
      }
      if (initObj.hasOwnProperty('ComputeTimeMin')) {
        this.ComputeTimeMin = initObj.ComputeTimeMin
      }
      else {
        this.ComputeTimeMin = 0.0;
      }
      if (initObj.hasOwnProperty('ComputeTimeMax')) {
        this.ComputeTimeMax = initObj.ComputeTimeMax
      }
      else {
        this.ComputeTimeMax = 0.0;
      }
      if (initObj.hasOwnProperty('NumberOfSamples')) {
        this.NumberOfSamples = initObj.NumberOfSamples
      }
      else {
        this.NumberOfSamples = 0;
      }
      if (initObj.hasOwnProperty('NumberOfOverruns')) {
        this.NumberOfOverruns = initObj.NumberOfOverruns
      }
      else {
        this.NumberOfOverruns = 0;
      }
      if (initObj.hasOwnProperty('StatisticsInterval')) {
        this.StatisticsInterval = initObj.StatisticsInterval
      }
      else {
        this.StatisticsInterval = 0.0;
      }
      if (initObj.hasOwnProperty('UserData')) {
        this.UserData = initObj.UserData
      }
      else {
        this.UserData = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mtsIntervalStatistics
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [PeriodAvg]
    bufferOffset = _serializer.float64(obj.PeriodAvg, buffer, bufferOffset);
    // Serialize message field [PeriodStdDev]
    bufferOffset = _serializer.float64(obj.PeriodStdDev, buffer, bufferOffset);
    // Serialize message field [PeriodMin]
    bufferOffset = _serializer.float64(obj.PeriodMin, buffer, bufferOffset);
    // Serialize message field [PeriodMax]
    bufferOffset = _serializer.float64(obj.PeriodMax, buffer, bufferOffset);
    // Serialize message field [ComputeTimeAvg]
    bufferOffset = _serializer.float64(obj.ComputeTimeAvg, buffer, bufferOffset);
    // Serialize message field [ComputeTimeStdDev]
    bufferOffset = _serializer.float64(obj.ComputeTimeStdDev, buffer, bufferOffset);
    // Serialize message field [ComputeTimeMin]
    bufferOffset = _serializer.float64(obj.ComputeTimeMin, buffer, bufferOffset);
    // Serialize message field [ComputeTimeMax]
    bufferOffset = _serializer.float64(obj.ComputeTimeMax, buffer, bufferOffset);
    // Serialize message field [NumberOfSamples]
    bufferOffset = _serializer.int64(obj.NumberOfSamples, buffer, bufferOffset);
    // Serialize message field [NumberOfOverruns]
    bufferOffset = _serializer.int64(obj.NumberOfOverruns, buffer, bufferOffset);
    // Serialize message field [StatisticsInterval]
    bufferOffset = _serializer.float64(obj.StatisticsInterval, buffer, bufferOffset);
    // Serialize message field [UserData]
    bufferOffset = _serializer.int64(obj.UserData, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mtsIntervalStatistics
    let len;
    let data = new mtsIntervalStatistics(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [PeriodAvg]
    data.PeriodAvg = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [PeriodStdDev]
    data.PeriodStdDev = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [PeriodMin]
    data.PeriodMin = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [PeriodMax]
    data.PeriodMax = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [ComputeTimeAvg]
    data.ComputeTimeAvg = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [ComputeTimeStdDev]
    data.ComputeTimeStdDev = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [ComputeTimeMin]
    data.ComputeTimeMin = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [ComputeTimeMax]
    data.ComputeTimeMax = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [NumberOfSamples]
    data.NumberOfSamples = _deserializer.int64(buffer, bufferOffset);
    // Deserialize message field [NumberOfOverruns]
    data.NumberOfOverruns = _deserializer.int64(buffer, bufferOffset);
    // Deserialize message field [StatisticsInterval]
    data.StatisticsInterval = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [UserData]
    data.UserData = _deserializer.int64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 96;
  }

  static datatype() {
    // Returns string type for a message object
    return 'cisst_msgs/mtsIntervalStatistics';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'fc177c4951f85470a8a9c80c56822cfb';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header
    
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new mtsIntervalStatistics(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.PeriodAvg !== undefined) {
      resolved.PeriodAvg = msg.PeriodAvg;
    }
    else {
      resolved.PeriodAvg = 0.0
    }

    if (msg.PeriodStdDev !== undefined) {
      resolved.PeriodStdDev = msg.PeriodStdDev;
    }
    else {
      resolved.PeriodStdDev = 0.0
    }

    if (msg.PeriodMin !== undefined) {
      resolved.PeriodMin = msg.PeriodMin;
    }
    else {
      resolved.PeriodMin = 0.0
    }

    if (msg.PeriodMax !== undefined) {
      resolved.PeriodMax = msg.PeriodMax;
    }
    else {
      resolved.PeriodMax = 0.0
    }

    if (msg.ComputeTimeAvg !== undefined) {
      resolved.ComputeTimeAvg = msg.ComputeTimeAvg;
    }
    else {
      resolved.ComputeTimeAvg = 0.0
    }

    if (msg.ComputeTimeStdDev !== undefined) {
      resolved.ComputeTimeStdDev = msg.ComputeTimeStdDev;
    }
    else {
      resolved.ComputeTimeStdDev = 0.0
    }

    if (msg.ComputeTimeMin !== undefined) {
      resolved.ComputeTimeMin = msg.ComputeTimeMin;
    }
    else {
      resolved.ComputeTimeMin = 0.0
    }

    if (msg.ComputeTimeMax !== undefined) {
      resolved.ComputeTimeMax = msg.ComputeTimeMax;
    }
    else {
      resolved.ComputeTimeMax = 0.0
    }

    if (msg.NumberOfSamples !== undefined) {
      resolved.NumberOfSamples = msg.NumberOfSamples;
    }
    else {
      resolved.NumberOfSamples = 0
    }

    if (msg.NumberOfOverruns !== undefined) {
      resolved.NumberOfOverruns = msg.NumberOfOverruns;
    }
    else {
      resolved.NumberOfOverruns = 0
    }

    if (msg.StatisticsInterval !== undefined) {
      resolved.StatisticsInterval = msg.StatisticsInterval;
    }
    else {
      resolved.StatisticsInterval = 0.0
    }

    if (msg.UserData !== undefined) {
      resolved.UserData = msg.UserData;
    }
    else {
      resolved.UserData = 0
    }

    return resolved;
    }
};

module.exports = mtsIntervalStatistics;
