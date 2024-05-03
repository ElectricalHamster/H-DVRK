// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmVelocityCartesianGet.cdg

#pragma once
#ifndef _cisstParameterTypes_prmVelocityCartesianGet_h
#define _cisstParameterTypes_prmVelocityCartesianGet_h

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

#include <cisstVector/vctTransformationTypes.h>

// Always include last
#include <cisstParameterTypes/prmExport.h>

/* source line: 11 */
class CISST_EXPORT prmVelocityCartesianGet: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmVelocityCartesianGet(void);
    prmVelocityCartesianGet(const prmVelocityCartesianGet & other);
    prmVelocityCartesianGet & operator = (const prmVelocityCartesianGet & other);
    ~prmVelocityCartesianGet();

/* source line: 21 */
 protected:
    vct3 mVelocityLinear; // Linear velocity
 public:
    /* accessors is set to: all */
     void GetVelocityLinear(vct3 & placeHolder) const;
     void SetVelocityLinear(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & VelocityLinear(void) const;
     vct3 & VelocityLinear(void);
/* source line: 28 */
 protected:
    vct3 mVelocityAngular; // Angular velocity
 public:
    /* accessors is set to: all */
     void GetVelocityAngular(vct3 & placeHolder) const;
     void SetVelocityAngular(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & VelocityAngular(void) const;
     vct3 & VelocityAngular(void);
/* source line: 35 */
 protected:
    std::string mMovingFrame; // Name of moving frame
 public:
    /* accessors is set to: all */
     void GetMovingFrame(std::string & placeHolder) const;
     void SetMovingFrame(const std::string & newValue);
    /* accessors is set to: all */
     const std::string & MovingFrame(void) const;
     std::string & MovingFrame(void);
/* source line: 42 */
 protected:
    std::string mReferenceFrame; // Name reference frame
 public:
    /* accessors is set to: all */
     void GetReferenceFrame(std::string & placeHolder) const;
     void SetReferenceFrame(const std::string & newValue);
    /* accessors is set to: all */
     const std::string & ReferenceFrame(void) const;
     std::string & ReferenceFrame(void);
/* source line: 55 */

    private:
        CMN_DECLARE_SERVICES(CMN_DYNAMIC_CREATION, CMN_LOG_ALLOW_DEFAULT);


    public:
        inline void SetVelocity(const vct6 & newValue) {
            mVelocityLinear[0] = newValue[0];
            mVelocityLinear[1] = newValue[1];
            mVelocityLinear[2] = newValue[2];
            mVelocityAngular[0] = newValue[3];
            mVelocityAngular[1] = newValue[4];
            mVelocityAngular[2] = newValue[5];
        }

        inline void GetVelocity(vct6 & placeHolder) const {
            placeHolder[0] = mVelocityLinear[0];
            placeHolder[1] = mVelocityLinear[1];
            placeHolder[2] = mVelocityLinear[2];
            placeHolder[3] = mVelocityAngular[0];
            placeHolder[4] = mVelocityAngular[1];
            placeHolder[5] = mVelocityAngular[2];
        }
        /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const prmVelocityCartesianGet & source);
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

}; // prmVelocityCartesianGet

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmVelocityCartesianGet> prmVelocityCartesianGetProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmVelocityCartesianGetProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmVelocityCartesianGet & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmVelocityCartesianGet & placeHolder);
/* data functions */
template <> class cmnData<prmVelocityCartesianGet > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmVelocityCartesianGet DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmVelocityCartesianGet & data) {
    outputStream << cmnData<prmVelocityCartesianGet >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmVelocityCartesianGet >::SerializeText(const prmVelocityCartesianGet & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmVelocityCartesianGet >::DeSerializeText(prmVelocityCartesianGet & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 82 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmVelocityCartesianGet);


#endif // _cisstParameterTypes_prmVelocityCartesianGet_h
