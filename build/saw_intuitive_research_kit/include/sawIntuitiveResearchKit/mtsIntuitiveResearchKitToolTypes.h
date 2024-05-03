// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/sawIntuitiveResearchKit/components/code/mtsIntuitiveResearchKitToolTypes.cdg

#pragma once
#ifndef _sawIntuitiveResearchKit_mtsIntuitiveResearchKitToolTypes_h
#define _sawIntuitiveResearchKit_mtsIntuitiveResearchKitToolTypes_h

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

// Always include last
#include <sawIntuitiveResearchKit/sawIntuitiveResearchKitExport.h>

/* source line: 9 */
class  mtsIntuitiveResearchKitToolTypes
{
 /* default constructors and destructors. */
 public:
    mtsIntuitiveResearchKitToolTypes(void);
    mtsIntuitiveResearchKitToolTypes(const mtsIntuitiveResearchKitToolTypes & other);
    mtsIntuitiveResearchKitToolTypes & operator = (const mtsIntuitiveResearchKitToolTypes & other);
    ~mtsIntuitiveResearchKitToolTypes();

/* source line: 12 */
public:
    enum Detection {AUTOMATIC, MANUAL, FIXED };
    static std::string DetectionToString(const Detection & value) CISST_THROW(std::runtime_error);
    static Detection DetectionFromString(const std::string & value) CISST_THROW(std::runtime_error);
    static const std::vector<int> & DetectionVectorInt(void);
    static const std::vector<std::string> & DetectionVectorString(void);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsIntuitiveResearchKitToolTypes & source);
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

}; // mtsIntuitiveResearchKitToolTypes

// mts-proxy set to true
typedef mtsGenericObjectProxy<mtsIntuitiveResearchKitToolTypes> mtsIntuitiveResearchKitToolTypesProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsIntuitiveResearchKitToolTypesProxy);

/* default functions */
void  cmnSerializeRaw(std::ostream & outputStream, const mtsIntuitiveResearchKitToolTypes & object);
void  cmnDeSerializeRaw(std::istream & inputStream, mtsIntuitiveResearchKitToolTypes & placeHolder);
/* data functions */
template <> class cmnData<mtsIntuitiveResearchKitToolTypes > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsIntuitiveResearchKitToolTypes DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsIntuitiveResearchKitToolTypes & data) {
    outputStream << cmnData<mtsIntuitiveResearchKitToolTypes >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void  cmnDataJSON<mtsIntuitiveResearchKitToolTypes >::SerializeText(const mtsIntuitiveResearchKitToolTypes & data, Json::Value & jsonValue);
template <> void  cmnDataJSON<mtsIntuitiveResearchKitToolTypes >::DeSerializeText(mtsIntuitiveResearchKitToolTypes & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON
std::string  cmnDataHumanReadable_mtsIntuitiveResearchKitToolTypes_Detection(const mtsIntuitiveResearchKitToolTypes::Detection & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(mtsIntuitiveResearchKitToolTypes::Detection, int, cmnDataHumanReadable_mtsIntuitiveResearchKitToolTypes_Detection);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsIntuitiveResearchKitToolTypes::Detection);
#endif // CISST_HAS_JSON

/* source line: 27 */
class CISST_EXPORT mtsIntuitiveResearchKitToolDescription
{
 /* default constructors and destructors. */
 public:
    mtsIntuitiveResearchKitToolDescription(void);
    mtsIntuitiveResearchKitToolDescription(const mtsIntuitiveResearchKitToolDescription & other);
    mtsIntuitiveResearchKitToolDescription & operator = (const mtsIntuitiveResearchKitToolDescription & other);
    ~mtsIntuitiveResearchKitToolDescription();

/* source line: 31 */
public:
    enum Version {VERSION_MIN_DEFAULT = -1, VERSION_MAX_DEFAULT = 9999999 };
    static std::string VersionToString(const Version & value) CISST_THROW(std::runtime_error);
    static Version VersionFromString(const std::string & value) CISST_THROW(std::runtime_error);
    static const std::vector<int> & VersionVectorInt(void);
    static const std::vector<std::string> & VersionVectorString(void);
/* source line: 43 */
 public:
    std::string model; // model
/* source line: 48 */
 public:
    std::vector<std::string> names; // names
/* source line: 53 */
 public:
    std::string description; // description
/* source line: 59 */
 public:
    std::string generation; // generation
/* source line: 65 */
 public:
    std::string file; // file
/* source line: 71 */
 public:
    int version_min; // version_min
/* source line: 78 */
 public:
    int version_max; // version_max
/* source line: 85 */
 public:
    int index; // index
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsIntuitiveResearchKitToolDescription & source);
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

}; // mtsIntuitiveResearchKitToolDescription

// mts-proxy set to true
typedef mtsGenericObjectProxy<mtsIntuitiveResearchKitToolDescription> mtsIntuitiveResearchKitToolDescriptionProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsIntuitiveResearchKitToolDescriptionProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsIntuitiveResearchKitToolDescription & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsIntuitiveResearchKitToolDescription & placeHolder);
/* data functions */
template <> class cmnData<mtsIntuitiveResearchKitToolDescription > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsIntuitiveResearchKitToolDescription DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsIntuitiveResearchKitToolDescription & data) {
    outputStream << cmnData<mtsIntuitiveResearchKitToolDescription >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsIntuitiveResearchKitToolDescription >::SerializeText(const mtsIntuitiveResearchKitToolDescription & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsIntuitiveResearchKitToolDescription >::DeSerializeText(mtsIntuitiveResearchKitToolDescription & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON
std::string CISST_EXPORT cmnDataHumanReadable_mtsIntuitiveResearchKitToolDescription_Version(const mtsIntuitiveResearchKitToolDescription::Version & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(mtsIntuitiveResearchKitToolDescription::Version, int, cmnDataHumanReadable_mtsIntuitiveResearchKitToolDescription_Version);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsIntuitiveResearchKitToolDescription::Version);
#endif // CISST_HAS_JSON


#endif // _sawIntuitiveResearchKit_mtsIntuitiveResearchKitToolTypes_h
