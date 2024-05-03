// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/sawIntuitiveResearchKit/components/code/mtsIntuitiveResearchKitArmTypes.cdg

#pragma once
#ifndef _sawIntuitiveResearchKit_mtsIntuitiveResearchKitArmTypes_h
#define _sawIntuitiveResearchKit_mtsIntuitiveResearchKitArmTypes_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */


// for mts-proxy 
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>

/* source line: 1 */
/* source line: 1 */
class  mtsIntuitiveResearchKitArmTypes
{
 /* default constructors and destructors. */
 public:
    mtsIntuitiveResearchKitArmTypes(void);
    mtsIntuitiveResearchKitArmTypes(const mtsIntuitiveResearchKitArmTypes & other);
    mtsIntuitiveResearchKitArmTypes & operator = (const mtsIntuitiveResearchKitArmTypes & other);
    ~mtsIntuitiveResearchKitArmTypes();

/* source line: 4 */
public:
    enum ControlSpace {UNDEFINED_SPACE, ACTUATOR_SPACE, JOINT_SPACE, CARTESIAN_SPACE, USER_SPACE };
    static std::string ControlSpaceToString(const ControlSpace & value) CISST_THROW(std::runtime_error);
    static ControlSpace ControlSpaceFromString(const std::string & value) CISST_THROW(std::runtime_error);
    static const std::vector<int> & ControlSpaceVectorInt(void);
    static const std::vector<std::string> & ControlSpaceVectorString(void);
/* source line: 23 */
public:
    enum ControlMode {UNDEFINED_MODE, POSITION_MODE, TRAJECTORY_MODE, VELOCITY_MODE, EFFORT_MODE, USER_MODE };
    static std::string ControlModeToString(const ControlMode & value) CISST_THROW(std::runtime_error);
    static ControlMode ControlModeFromString(const std::string & value) CISST_THROW(std::runtime_error);
    static const std::vector<int> & ControlModeVectorInt(void);
    static const std::vector<std::string> & ControlModeVectorString(void);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsIntuitiveResearchKitArmTypes & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // mtsIntuitiveResearchKitArmTypes

// mts-proxy set to true
typedef mtsGenericObjectProxy<mtsIntuitiveResearchKitArmTypes> mtsIntuitiveResearchKitArmTypesProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsIntuitiveResearchKitArmTypesProxy);

/* default functions */
void  cmnSerializeRaw(std::ostream & outputStream, const mtsIntuitiveResearchKitArmTypes & object);
void  cmnDeSerializeRaw(std::istream & inputStream, mtsIntuitiveResearchKitArmTypes & placeHolder);
/* data functions */
template <> class cmnData<mtsIntuitiveResearchKitArmTypes > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsIntuitiveResearchKitArmTypes DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const mtsIntuitiveResearchKitArmTypes & data) {
    outputStream << cmnData<mtsIntuitiveResearchKitArmTypes >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void  cmnDataJSON<mtsIntuitiveResearchKitArmTypes >::SerializeText(const mtsIntuitiveResearchKitArmTypes & data, Json::Value & jsonValue);
template <> void  cmnDataJSON<mtsIntuitiveResearchKitArmTypes >::DeSerializeText(mtsIntuitiveResearchKitArmTypes & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON
std::string  cmnDataHumanReadable_mtsIntuitiveResearchKitArmTypes_ControlSpace(const mtsIntuitiveResearchKitArmTypes::ControlSpace & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(mtsIntuitiveResearchKitArmTypes::ControlSpace, int, cmnDataHumanReadable_mtsIntuitiveResearchKitArmTypes_ControlSpace);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsIntuitiveResearchKitArmTypes::ControlSpace);
#endif // CISST_HAS_JSON
std::string  cmnDataHumanReadable_mtsIntuitiveResearchKitArmTypes_ControlMode(const mtsIntuitiveResearchKitArmTypes::ControlMode & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(mtsIntuitiveResearchKitArmTypes::ControlMode, int, cmnDataHumanReadable_mtsIntuitiveResearchKitArmTypes_ControlMode);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsIntuitiveResearchKitArmTypes::ControlMode);
#endif // CISST_HAS_JSON


#endif // _sawIntuitiveResearchKit_mtsIntuitiveResearchKitArmTypes_h
