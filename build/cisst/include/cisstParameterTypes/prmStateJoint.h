// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmStateJoint.cdg

#pragma once
#ifndef _cisstParameterTypes_prmStateJoint_h
#define _cisstParameterTypes_prmStateJoint_h

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
class CISST_EXPORT prmStateJoint: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmStateJoint(void);
    prmStateJoint(const prmStateJoint & other);
    prmStateJoint & operator = (const prmStateJoint & other);
    ~prmStateJoint();

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
    vctDynamicVector<double> mPosition; // Position
 public:
    /* accessors is set to: all */
     void GetPosition(vctDynamicVector<double> & placeHolder) const;
     void SetPosition(const vctDynamicVector<double> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<double> & Position(void) const;
     vctDynamicVector<double> & Position(void);
/* source line: 32 */
 protected:
    vctDynamicVector<double> mVelocity; // Velocity
 public:
    /* accessors is set to: all */
     void GetVelocity(vctDynamicVector<double> & placeHolder) const;
     void SetVelocity(const vctDynamicVector<double> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<double> & Velocity(void) const;
     vctDynamicVector<double> & Velocity(void);
/* source line: 37 */
 protected:
    vctDynamicVector<double> mEffort; // Effort
 public:
    /* accessors is set to: all */
     void GetEffort(vctDynamicVector<double> & placeHolder) const;
     void SetEffort(const vctDynamicVector<double> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<double> & Effort(void) const;
     vctDynamicVector<double> & Effort(void);
/* source line: 42 */

    public:
        inline void SetSize(const size_t & size) {
            Name().SetSize(size);
            Position().SetSize(size);
            Velocity().SetSize(size);
            Effort().SetSize(size);
        }
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
    void Copy(const prmStateJoint & source);
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

}; // prmStateJoint

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmStateJoint> prmStateJointProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmStateJointProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmStateJoint & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmStateJoint & placeHolder);
/* data functions */
template <> class cmnData<prmStateJoint > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmStateJoint DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmStateJoint & data) {
    outputStream << cmnData<prmStateJoint >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmStateJoint >::SerializeText(const prmStateJoint & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmStateJoint >::DeSerializeText(prmStateJoint & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 56 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmStateJoint);


#endif // _cisstParameterTypes_prmStateJoint_h
