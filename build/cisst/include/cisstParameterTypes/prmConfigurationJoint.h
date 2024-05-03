// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmConfigurationJoint.cdg

#pragma once
#ifndef _cisstParameterTypes_prmConfigurationJoint_h
#define _cisstParameterTypes_prmConfigurationJoint_h

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
/* source line: 4 */

#include <cisstVector/vctDynamicVectorTypes.h>
#include <cisstMultiTask/mtsGenericObject.h>
#include <cisstParameterTypes/prmJointType.h>
// Always include last
#include <cisstParameterTypes/prmExport.h>

/* source line: 12 */
class CISST_EXPORT prmConfigurationJoint: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmConfigurationJoint(void);
    prmConfigurationJoint(const prmConfigurationJoint & other);
    prmConfigurationJoint & operator = (const prmConfigurationJoint & other);
    ~prmConfigurationJoint();

/* source line: 22 */
 protected:
    vctDynamicVector<std::string> mName; // Name
 public:
    /* accessors is set to: all */
     void GetName(vctDynamicVector<std::string> & placeHolder) const;
     void SetName(const vctDynamicVector<std::string> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<std::string> & Name(void) const;
     vctDynamicVector<std::string> & Name(void);
/* source line: 27 */
 protected:
    vctDynamicVector<prmJointType> mType; // Type
 public:
    /* accessors is set to: all */
     void GetType(vctDynamicVector<prmJointType> & placeHolder) const;
     void SetType(const vctDynamicVector<prmJointType> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<prmJointType> & Type(void) const;
     vctDynamicVector<prmJointType> & Type(void);
/* source line: 32 */
 protected:
    vctDynamicVector<double> mPositionMin; // PositionMin
 public:
    /* accessors is set to: all */
     void GetPositionMin(vctDynamicVector<double> & placeHolder) const;
     void SetPositionMin(const vctDynamicVector<double> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<double> & PositionMin(void) const;
     vctDynamicVector<double> & PositionMin(void);
/* source line: 36 */
 protected:
    vctDynamicVector<double> mPositionMax; // PositionMax
 public:
    /* accessors is set to: all */
     void GetPositionMax(vctDynamicVector<double> & placeHolder) const;
     void SetPositionMax(const vctDynamicVector<double> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<double> & PositionMax(void) const;
     vctDynamicVector<double> & PositionMax(void);
/* source line: 41 */
 protected:
    vctDynamicVector<double> mVelocityMin; // VelocityMin
 public:
    /* accessors is set to: all */
     void GetVelocityMin(vctDynamicVector<double> & placeHolder) const;
     void SetVelocityMin(const vctDynamicVector<double> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<double> & VelocityMin(void) const;
     vctDynamicVector<double> & VelocityMin(void);
/* source line: 45 */
 protected:
    vctDynamicVector<double> mVelocityMax; // VelocityMax
 public:
    /* accessors is set to: all */
     void GetVelocityMax(vctDynamicVector<double> & placeHolder) const;
     void SetVelocityMax(const vctDynamicVector<double> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<double> & VelocityMax(void) const;
     vctDynamicVector<double> & VelocityMax(void);
/* source line: 50 */
 protected:
    vctDynamicVector<double> mAccelerationMin; // AccelerationMin
 public:
    /* accessors is set to: all */
     void GetAccelerationMin(vctDynamicVector<double> & placeHolder) const;
     void SetAccelerationMin(const vctDynamicVector<double> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<double> & AccelerationMin(void) const;
     vctDynamicVector<double> & AccelerationMin(void);
/* source line: 54 */
 protected:
    vctDynamicVector<double> mAccelerationMax; // AccelerationMax
 public:
    /* accessors is set to: all */
     void GetAccelerationMax(vctDynamicVector<double> & placeHolder) const;
     void SetAccelerationMax(const vctDynamicVector<double> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<double> & AccelerationMax(void) const;
     vctDynamicVector<double> & AccelerationMax(void);
/* source line: 59 */
 protected:
    vctDynamicVector<double> mEffortMin; // EffortMin
 public:
    /* accessors is set to: all */
     void GetEffortMin(vctDynamicVector<double> & placeHolder) const;
     void SetEffortMin(const vctDynamicVector<double> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<double> & EffortMin(void) const;
     vctDynamicVector<double> & EffortMin(void);
/* source line: 63 */
 protected:
    vctDynamicVector<double> mEffortMax; // EffortMax
 public:
    /* accessors is set to: all */
     void GetEffortMax(vctDynamicVector<double> & placeHolder) const;
     void SetEffortMax(const vctDynamicVector<double> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<double> & EffortMax(void) const;
     vctDynamicVector<double> & EffortMax(void);
/* source line: 68 */

    private:
        CMN_DECLARE_SERVICES(CMN_DYNAMIC_CREATION, CMN_LOG_ALLOW_DEFAULT);
        /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const prmConfigurationJoint & source);
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

}; // prmConfigurationJoint

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmConfigurationJoint> prmConfigurationJointProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmConfigurationJointProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmConfigurationJoint & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmConfigurationJoint & placeHolder);
/* data functions */
template <> class cmnData<prmConfigurationJoint > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmConfigurationJoint DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmConfigurationJoint & data) {
    outputStream << cmnData<prmConfigurationJoint >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmConfigurationJoint >::SerializeText(const prmConfigurationJoint & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmConfigurationJoint >::DeSerializeText(prmConfigurationJoint & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 75 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmConfigurationJoint);


#endif // _cisstParameterTypes_prmConfigurationJoint_h
