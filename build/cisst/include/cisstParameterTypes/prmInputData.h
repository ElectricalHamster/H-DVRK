// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmInputData.cdg

#pragma once
#ifndef _cisstParameterTypes_prmInputData_h
#define _cisstParameterTypes_prmInputData_h

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

// Always include last
#include <cisstParameterTypes/prmExport.h>

/* source line: 13 */
class CISST_EXPORT prmInputData: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmInputData(void);
    prmInputData(const prmInputData & other);
    prmInputData & operator = (const prmInputData & other);
    ~prmInputData();

/* source line: 22 */
 protected:
    vctDoubleVec mAnalogInputs; // Analog inputs
 public:
    /* accessors is set to: all */
     void GetAnalogInputs(vctDoubleVec & placeHolder) const;
     void SetAnalogInputs(const vctDoubleVec & newValue);
    /* accessors is set to: all */
     const vctDoubleVec & AnalogInputs(void) const;
     vctDoubleVec & AnalogInputs(void);
/* source line: 28 */
 protected:
    vctBoolVec mDigitalInputs; // Digital inputs
 public:
    /* accessors is set to: all */
     void GetDigitalInputs(vctBoolVec & placeHolder) const;
     void SetDigitalInputs(const vctBoolVec & newValue);
    /* accessors is set to: all */
     const vctBoolVec & DigitalInputs(void) const;
     vctBoolVec & DigitalInputs(void);
/* source line: 34 */

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
    void Copy(const prmInputData & source);
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

}; // prmInputData

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmInputData> prmInputDataProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmInputDataProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmInputData & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmInputData & placeHolder);
/* data functions */
template <> class cmnData<prmInputData > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmInputData DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmInputData & data) {
    outputStream << cmnData<prmInputData >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmInputData >::SerializeText(const prmInputData & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmInputData >::DeSerializeText(prmInputData & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 41 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmInputData);


#endif // _cisstParameterTypes_prmInputData_h
