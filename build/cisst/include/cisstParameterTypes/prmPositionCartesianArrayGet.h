// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmPositionCartesianArrayGet.cdg

#pragma once
#ifndef _cisstParameterTypes_prmPositionCartesianArrayGet_h
#define _cisstParameterTypes_prmPositionCartesianArrayGet_h

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

#include <vector>
#include <cisstVector/vctTransformationTypes.h>

// Always include last
#include <cisstParameterTypes/prmExport.h>

/* source line: 12 */
class CISST_EXPORT prmPositionCartesianArrayGet: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmPositionCartesianArrayGet(void);
    prmPositionCartesianArrayGet(const prmPositionCartesianArrayGet & other);
    prmPositionCartesianArrayGet & operator = (const prmPositionCartesianArrayGet & other);
    ~prmPositionCartesianArrayGet();

    typedef std::vector<vctFrm3> Type;
/* source line: 26 */
 protected:
    std::string mReferenceFrame; // Name reference frame
 public:
    /* accessors is set to: all */
     void GetReferenceFrame(std::string & placeHolder) const;
     void SetReferenceFrame(const std::string & newValue);
    /* accessors is set to: all */
     const std::string & ReferenceFrame(void) const;
     std::string & ReferenceFrame(void);
/* source line: 32 */
 protected:
    std::vector<vctFrm3> mPositions; // Positions
 public:
    /* accessors is set to: all */
     void GetPositions(std::vector<vctFrm3> & placeHolder) const;
     void SetPositions(const std::vector<vctFrm3> & newValue);
    /* accessors is set to: all */
     const std::vector<vctFrm3> & Positions(void) const;
     std::vector<vctFrm3> & Positions(void);
/* source line: 37 */

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
    void Copy(const prmPositionCartesianArrayGet & source);
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

}; // prmPositionCartesianArrayGet

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmPositionCartesianArrayGet> prmPositionCartesianArrayGetProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmPositionCartesianArrayGetProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmPositionCartesianArrayGet & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmPositionCartesianArrayGet & placeHolder);
/* data functions */
template <> class cmnData<prmPositionCartesianArrayGet > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmPositionCartesianArrayGet DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmPositionCartesianArrayGet & data) {
    outputStream << cmnData<prmPositionCartesianArrayGet >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmPositionCartesianArrayGet >::SerializeText(const prmPositionCartesianArrayGet & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmPositionCartesianArrayGet >::DeSerializeText(prmPositionCartesianArrayGet & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 43 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmPositionCartesianArrayGet);


#endif // _cisstParameterTypes_prmPositionCartesianArrayGet_h
