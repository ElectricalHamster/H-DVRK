// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/osaConfiguration1394.cdg

#pragma once
#ifndef _sawRobotIO1394_osaConfiguration1394_h
#define _sawRobotIO1394_osaConfiguration1394_h

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

#include <set>
#include <cisstCommon/cmnUnits.h>
#include <cisstVector/vctDynamicMatrixTypes.h>
#include <cisstParameterTypes/prmJointType.h>
#include <cisstParameterTypes/prmActuatorJointCoupling.h>
#include <sawRobotIO1394/sawRobotIO1394Revision.h>
#include <sawRobotIO1394/sawRobotIO1394Export.h>

class AmpIO;

namespace sawRobotIO1394 {
    const size_t MAX_BOARDS = 16;
    const size_t MAX_AXES = 4;

    inline bool osaUnitIsDistance(const std::string & unit) {
        // make sure this is properly sorted?
        static const std::set<std::string> keywords {"cm", "deg", "m", "mm", "rad"};
        return keywords.find(unit) != keywords.end();
    }

    inline bool osaUnitIsDistanceRevolute(const std::string & unit) {
        // make sure this is properly sorted?
        static const std::set<std::string> keywords {"deg", "rad"};
        return keywords.find(unit) != keywords.end();
    }

    inline bool osaUnitIsDistancePrismatic(const std::string & unit) {
        // make sure this is properly sorted?
        static const std::set<std::string> keywords {"cm", "m", "mm"};
        return keywords.find(unit) != keywords.end();
    }

    inline double osaUnitToSIFactor(const std::string & unit) {
        // make sure this is properly sorted?
        static const std::map<std::string, double> factors {
            { "A",   1.0},
            { "cm",  cmn_cm},
            { "deg", cmnPI_180},
            { "m",   cmn_m},
            { "mA",  1.000},
            { "mm",  cmn_mm},
            { "rad", 1.0},
            { "none", 1.0}        
        };
        const auto factor = factors.find(unit);
        if (factor != factors.end()) {
            return factor->second;
        }
        return 0.0;
    }
} // namespace sawRobotIO1394


/* source line: 60 */
class  osaPot1394Location
{
 /* default constructors and destructors. */
 public:
    osaPot1394Location(void);
    osaPot1394Location(const osaPot1394Location & other);
    osaPot1394Location & operator = (const osaPot1394Location & other);
    ~osaPot1394Location();

/* source line: 62 */
public:
    enum Type {POTENTIOMETER_UNDEFINED, POTENTIOMETER_ON_ACTUATORS, POTENTIOMETER_ON_JOINTS };
    static std::string TypeToString(const Type & value) CISST_THROW(std::runtime_error);
    static Type TypeFromString(const std::string & value) CISST_THROW(std::runtime_error);
    static const std::vector<int> & TypeVectorInt(void);
    static const std::vector<std::string> & TypeVectorString(void);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaPot1394Location & source);
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

}; // osaPot1394Location

// mts-proxy set to true
typedef mtsGenericObjectProxy<osaPot1394Location> osaPot1394LocationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(osaPot1394LocationProxy);

/* default functions */
void  cmnSerializeRaw(std::ostream & outputStream, const osaPot1394Location & object);
void  cmnDeSerializeRaw(std::istream & inputStream, osaPot1394Location & placeHolder);
/* data functions */
template <> class cmnData<osaPot1394Location > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef osaPot1394Location DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const osaPot1394Location & data) {
    outputStream << cmnData<osaPot1394Location >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void  cmnDataJSON<osaPot1394Location >::SerializeText(const osaPot1394Location & data, Json::Value & jsonValue);
template <> void  cmnDataJSON<osaPot1394Location >::DeSerializeText(osaPot1394Location & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON
std::string  cmnDataHumanReadable_osaPot1394Location_Type(const osaPot1394Location::Type & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(osaPot1394Location::Type, int, cmnDataHumanReadable_osaPot1394Location_Type);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(osaPot1394Location::Type);
#endif // CISST_HAS_JSON

/* source line: 76 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaLinearFunction
{
 /* default constructors and destructors. */
 public:
    osaLinearFunction(void);
    osaLinearFunction(const osaLinearFunction & other);
    osaLinearFunction & operator = (const osaLinearFunction & other);
    ~osaLinearFunction();

/* source line: 80 */
 public:
    double Scale; // Scale
/* source line: 86 */
 public:
    double Offset; // Offset
/* source line: 92 */
 public:
    std::string Unit; // Unit
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaLinearFunction & source);
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

}; // osaLinearFunction
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaLinearFunction> sawRobotIO1394_osaLinearFunctionProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaLinearFunctionProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaLinearFunction & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaLinearFunction & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaLinearFunction > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaLinearFunction DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaLinearFunction & data) {
    outputStream << cmnData<sawRobotIO1394::osaLinearFunction >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaLinearFunction >::SerializeText(const sawRobotIO1394::osaLinearFunction & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaLinearFunction >::DeSerializeText(sawRobotIO1394::osaLinearFunction & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 99 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaDrive1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaDrive1394Configuration(void);
    osaDrive1394Configuration(const osaDrive1394Configuration & other);
    osaDrive1394Configuration & operator = (const osaDrive1394Configuration & other);
    ~osaDrive1394Configuration();

/* source line: 103 */
 public:
    osaLinearFunction EffortToCurrent; // EffortToCurrent
/* source line: 108 */
 public:
    osaLinearFunction CurrentToBits; // CurrentToBits
/* source line: 113 */
 public:
    osaLinearFunction BitsToCurrent; // BitsToCurrent
/* source line: 118 */
 public:
    double EffortCommandLimit; // EffortCommandLimit
/* source line: 123 */
 public:
    double CurrentCommandLimit; // CurrentCommandLimit
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaDrive1394Configuration & source);
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

}; // osaDrive1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaDrive1394Configuration> sawRobotIO1394_osaDrive1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaDrive1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDrive1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDrive1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaDrive1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaDrive1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaDrive1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaDrive1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDrive1394Configuration >::SerializeText(const sawRobotIO1394::osaDrive1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDrive1394Configuration >::DeSerializeText(sawRobotIO1394::osaDrive1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 130 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaEncoder1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaEncoder1394Configuration(void);
    osaEncoder1394Configuration(const osaEncoder1394Configuration & other);
    osaEncoder1394Configuration & operator = (const osaEncoder1394Configuration & other);
    ~osaEncoder1394Configuration();

/* source line: 134 */
 public:
    osaLinearFunction BitsToPosition; // BitsToPosition
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaEncoder1394Configuration & source);
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

}; // osaEncoder1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaEncoder1394Configuration> sawRobotIO1394_osaEncoder1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaEncoder1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaEncoder1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaEncoder1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaEncoder1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaEncoder1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaEncoder1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaEncoder1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaEncoder1394Configuration >::SerializeText(const sawRobotIO1394::osaEncoder1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaEncoder1394Configuration >::DeSerializeText(sawRobotIO1394::osaEncoder1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 141 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaPot1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaPot1394Configuration(void);
    osaPot1394Configuration(const osaPot1394Configuration & other);
    osaPot1394Configuration & operator = (const osaPot1394Configuration & other);
    ~osaPot1394Configuration();

/* source line: 145 */
 public:
    osaLinearFunction BitsToVoltage; // BitsToVoltage
/* source line: 150 */
 public:
    osaLinearFunction VoltageToPosition; // VoltageToPosition
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaPot1394Configuration & source);
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

}; // osaPot1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaPot1394Configuration> sawRobotIO1394_osaPot1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaPot1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPot1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPot1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaPot1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaPot1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaPot1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaPot1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPot1394Configuration >::SerializeText(const sawRobotIO1394::osaPot1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPot1394Configuration >::DeSerializeText(sawRobotIO1394::osaPot1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 157 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaAnalogBrake1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaAnalogBrake1394Configuration(void);
    osaAnalogBrake1394Configuration(const osaAnalogBrake1394Configuration & other);
    osaAnalogBrake1394Configuration & operator = (const osaAnalogBrake1394Configuration & other);
    ~osaAnalogBrake1394Configuration();

/* source line: 161 */
 public:
    int BoardID; // BoardID
/* source line: 166 */
 public:
    int AxisID; // AxisID
/* source line: 171 */
 public:
    osaDrive1394Configuration Drive; // Drive
/* source line: 176 */
 public:
    double ReleaseCurrent; // ReleaseCurrent
/* source line: 181 */
 public:
    double ReleaseTime; // ReleaseTime
/* source line: 186 */
 public:
    double ReleasedCurrent; // ReleasedCurrent
/* source line: 191 */
 public:
    double EngagedCurrent; // EngagedCurrent
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaAnalogBrake1394Configuration & source);
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

}; // osaAnalogBrake1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaAnalogBrake1394Configuration> sawRobotIO1394_osaAnalogBrake1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaAnalogBrake1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaAnalogBrake1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaAnalogBrake1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaAnalogBrake1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaAnalogBrake1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaAnalogBrake1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaAnalogBrake1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaAnalogBrake1394Configuration >::SerializeText(const sawRobotIO1394::osaAnalogBrake1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaAnalogBrake1394Configuration >::DeSerializeText(sawRobotIO1394::osaAnalogBrake1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 198 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaActuator1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaActuator1394Configuration(void);
    osaActuator1394Configuration(const osaActuator1394Configuration & other);
    osaActuator1394Configuration & operator = (const osaActuator1394Configuration & other);
    ~osaActuator1394Configuration();

/* source line: 202 */
 public:
    int BoardID; // BoardID
/* source line: 207 */
 public:
    int AxisID; // AxisID
/* source line: 212 */
 public:
    prmJointType JointType; // JointType
/* source line: 217 */
 public:
    osaDrive1394Configuration Drive; // Drive
/* source line: 222 */
 public:
    osaEncoder1394Configuration Encoder; // Encoder
/* source line: 227 */
 public:
    osaPot1394Configuration Pot; // Pot
/* source line: 232 */
 public:
    osaAnalogBrake1394Configuration * Brake; // Brake
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaActuator1394Configuration & source);
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

}; // osaActuator1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaActuator1394Configuration> sawRobotIO1394_osaActuator1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaActuator1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaActuator1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaActuator1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaActuator1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaActuator1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaActuator1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaActuator1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaActuator1394Configuration >::SerializeText(const sawRobotIO1394::osaActuator1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaActuator1394Configuration >::DeSerializeText(sawRobotIO1394::osaActuator1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 241 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaPotTolerance1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaPotTolerance1394Configuration(void);
    osaPotTolerance1394Configuration(const osaPotTolerance1394Configuration & other);
    osaPotTolerance1394Configuration & operator = (const osaPotTolerance1394Configuration & other);
    ~osaPotTolerance1394Configuration();

/* source line: 245 */
 public:
    int AxisID; // AxisID
/* source line: 250 */
 public:
    double Distance; // Distance
/* source line: 255 */
 public:
    double Latency; // Latency
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaPotTolerance1394Configuration & source);
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

}; // osaPotTolerance1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaPotTolerance1394Configuration> sawRobotIO1394_osaPotTolerance1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaPotTolerance1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPotTolerance1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPotTolerance1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaPotTolerance1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaPotTolerance1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaPotTolerance1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaPotTolerance1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPotTolerance1394Configuration >::SerializeText(const sawRobotIO1394::osaPotTolerance1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPotTolerance1394Configuration >::DeSerializeText(sawRobotIO1394::osaPotTolerance1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 262 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaRobot1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaRobot1394Configuration(void);
    osaRobot1394Configuration(const osaRobot1394Configuration & other);
    osaRobot1394Configuration & operator = (const osaRobot1394Configuration & other);
    ~osaRobot1394Configuration();

/* source line: 266 */
 public:
    std::string Name; // Name
/* source line: 271 */
 public:
    int NumberOfActuators; // NumberOfActuators
/* source line: 277 */
 public:
    int NumberOfJoints; // NumberOfJoints
/* source line: 283 */
 public:
    int SerialNumber; // SerialNumber
/* source line: 288 */
 public:
    int NumberOfBrakes; // NumberOfBrakes
/* source line: 294 */
 public:
    bool OnlyIO; // OnlyIO
/* source line: 300 */
 public:
    bool HasActuatorToJointCoupling; // HasActuatorToJointCoupling
/* source line: 306 */
 public:
    osaPot1394Location::Type PotLocation; // PotLocation
/* source line: 312 */
 public:
    std::vector<osaPotTolerance1394Configuration> PotTolerances; // PotTolerances
/* source line: 317 */
 public:
    std::vector<osaActuator1394Configuration> Actuators; // Actuators
/* source line: 322 */
 public:
    prmActuatorJointCoupling Coupling; // Coupling
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaRobot1394Configuration & source);
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

}; // osaRobot1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaRobot1394Configuration> sawRobotIO1394_osaRobot1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaRobot1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaRobot1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaRobot1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaRobot1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaRobot1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaRobot1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaRobot1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaRobot1394Configuration >::SerializeText(const sawRobotIO1394::osaRobot1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaRobot1394Configuration >::DeSerializeText(sawRobotIO1394::osaRobot1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 329 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaDigitalInput1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaDigitalInput1394Configuration(void);
    osaDigitalInput1394Configuration(const osaDigitalInput1394Configuration & other);
    osaDigitalInput1394Configuration & operator = (const osaDigitalInput1394Configuration & other);
    ~osaDigitalInput1394Configuration();

/* source line: 333 */
 public:
    std::string Name; // Name
/* source line: 338 */
 public:
    int BoardID; // BoardID
/* source line: 343 */
 public:
    int BitID; // BitID
/* source line: 348 */
 public:
    bool TriggerWhenPressed; // TriggerWhenPressed
/* source line: 353 */
 public:
    bool TriggerWhenReleased; // TriggerWhenReleased
/* source line: 358 */
 public:
    bool PressedValue; // PressedValue
/* source line: 363 */
 public:
    double DebounceThreshold; // DebounceThreshold
/* source line: 368 */
 public:
    double DebounceThresholdClick; // DebounceThresholdClick
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaDigitalInput1394Configuration & source);
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

}; // osaDigitalInput1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaDigitalInput1394Configuration> sawRobotIO1394_osaDigitalInput1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaDigitalInput1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDigitalInput1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDigitalInput1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaDigitalInput1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaDigitalInput1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaDigitalInput1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaDigitalInput1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDigitalInput1394Configuration >::SerializeText(const sawRobotIO1394::osaDigitalInput1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDigitalInput1394Configuration >::DeSerializeText(sawRobotIO1394::osaDigitalInput1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 375 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaDigitalOutput1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaDigitalOutput1394Configuration(void);
    osaDigitalOutput1394Configuration(const osaDigitalOutput1394Configuration & other);
    osaDigitalOutput1394Configuration & operator = (const osaDigitalOutput1394Configuration & other);
    ~osaDigitalOutput1394Configuration();

/* source line: 379 */
 public:
    std::string Name; // Name
/* source line: 384 */
 public:
    int BoardID; // BoardID
/* source line: 389 */
 public:
    int BitID; // BitID
/* source line: 394 */
 public:
    double HighDuration; // HighDuration
/* source line: 399 */
 public:
    double LowDuration; // LowDuration
/* source line: 404 */
 public:
    bool IsPWM; // IsPWM
/* source line: 409 */
 public:
    double PWMFrequency; // PWMFrequency
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaDigitalOutput1394Configuration & source);
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

}; // osaDigitalOutput1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaDigitalOutput1394Configuration> sawRobotIO1394_osaDigitalOutput1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaDigitalOutput1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDigitalOutput1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDigitalOutput1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaDigitalOutput1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaDigitalOutput1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaDigitalOutput1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaDigitalOutput1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDigitalOutput1394Configuration >::SerializeText(const sawRobotIO1394::osaDigitalOutput1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDigitalOutput1394Configuration >::DeSerializeText(sawRobotIO1394::osaDigitalOutput1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 416 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaDallasChip1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaDallasChip1394Configuration(void);
    osaDallasChip1394Configuration(const osaDallasChip1394Configuration & other);
    osaDallasChip1394Configuration & operator = (const osaDallasChip1394Configuration & other);
    ~osaDallasChip1394Configuration();

/* source line: 420 */
 public:
    std::string Name; // Name
/* source line: 425 */
 public:
    int BoardID; // BoardID
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaDallasChip1394Configuration & source);
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

}; // osaDallasChip1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaDallasChip1394Configuration> sawRobotIO1394_osaDallasChip1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaDallasChip1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDallasChip1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDallasChip1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaDallasChip1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaDallasChip1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaDallasChip1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaDallasChip1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDallasChip1394Configuration >::SerializeText(const sawRobotIO1394::osaDallasChip1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDallasChip1394Configuration >::DeSerializeText(sawRobotIO1394::osaDallasChip1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 432 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaPort1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaPort1394Configuration(void);
    osaPort1394Configuration(const osaPort1394Configuration & other);
    osaPort1394Configuration & operator = (const osaPort1394Configuration & other);
    ~osaPort1394Configuration();

/* source line: 436 */
 public:
    std::vector<osaRobot1394Configuration> Robots; // Robots
/* source line: 441 */
 public:
    std::vector<osaDigitalInput1394Configuration> DigitalInputs; // DigitalInputs
/* source line: 446 */
 public:
    std::vector<osaDigitalOutput1394Configuration> DigitalOutputs; // DigitalOutputs
/* source line: 451 */
 public:
    std::vector<osaDallasChip1394Configuration> DallasChips; // DallasChips
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaPort1394Configuration & source);
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

}; // osaPort1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaPort1394Configuration> sawRobotIO1394_osaPort1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaPort1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPort1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPort1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaPort1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaPort1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaPort1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaPort1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPort1394Configuration >::SerializeText(const sawRobotIO1394::osaPort1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPort1394Configuration >::DeSerializeText(sawRobotIO1394::osaPort1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 458 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaActuatorMapping
{
 /* default constructors and destructors. */
 public:
    osaActuatorMapping(void);
    osaActuatorMapping(const osaActuatorMapping & other);
    osaActuatorMapping & operator = (const osaActuatorMapping & other);
    ~osaActuatorMapping();

/* source line: 462 */
 public:
    AmpIO * Board; // Board
/* source line: 469 */
 public:
    int BoardID; // BoardID
/* source line: 474 */
 public:
    int Axis; // Axis
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaActuatorMapping & source);
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

}; // osaActuatorMapping
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaActuatorMapping> sawRobotIO1394_osaActuatorMappingProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaActuatorMappingProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaActuatorMapping & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaActuatorMapping & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaActuatorMapping > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaActuatorMapping DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaActuatorMapping & data) {
    outputStream << cmnData<sawRobotIO1394::osaActuatorMapping >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaActuatorMapping >::SerializeText(const sawRobotIO1394::osaActuatorMapping & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaActuatorMapping >::DeSerializeText(sawRobotIO1394::osaActuatorMapping & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 481 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaBrakeMapping
{
 /* default constructors and destructors. */
 public:
    osaBrakeMapping(void);
    osaBrakeMapping(const osaBrakeMapping & other);
    osaBrakeMapping & operator = (const osaBrakeMapping & other);
    ~osaBrakeMapping();

/* source line: 485 */
 public:
    AmpIO * Board; // Board
/* source line: 492 */
 public:
    int BoardID; // BoardID
/* source line: 497 */
 public:
    int Axis; // Axis
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaBrakeMapping & source);
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

}; // osaBrakeMapping
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaBrakeMapping> sawRobotIO1394_osaBrakeMappingProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaBrakeMappingProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaBrakeMapping & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaBrakeMapping & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaBrakeMapping > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaBrakeMapping DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaBrakeMapping & data) {
    outputStream << cmnData<sawRobotIO1394::osaBrakeMapping >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaBrakeMapping >::SerializeText(const sawRobotIO1394::osaBrakeMapping & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaBrakeMapping >::DeSerializeText(sawRobotIO1394::osaBrakeMapping & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON


#endif // _sawRobotIO1394_osaConfiguration1394_h
