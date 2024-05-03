// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/code/../mtsParameterTypes.cdg

#pragma once
#ifndef _cisstMultiTask_mtsParameterTypes_h
#define _cisstMultiTask_mtsParameterTypes_h

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

#include <cisstMultiTask/mtsParameterTypesOld.h>
// Always include last
#include <cisstMultiTask/mtsExport.h>

/* source line: 10 */
class CISST_EXPORT mtsDescriptionComponent
{
 /* default constructors and destructors. */
 public:
    mtsDescriptionComponent(void);
    mtsDescriptionComponent(const mtsDescriptionComponent & other);
    mtsDescriptionComponent & operator = (const mtsDescriptionComponent & other);
    ~mtsDescriptionComponent();

/* source line: 15 */
 public:
    std::string ProcessName; // ProcessName
/* source line: 20 */
 public:
    std::string ComponentName; // ComponentName
/* source line: 25 */
 public:
    std::string ClassName; // ClassName
/* source line: 30 */
 public:
    std::string ConstructorArgSerialized; // ConstructorArgSerialized
/* source line: 35 */

    public:
       mtsDescriptionComponent(const std::string & processName, const std::string & componentName);
    
 public:
    /* ctor-all-member is set to: true */
    mtsDescriptionComponent(const std::string & newProcessName, const std::string & newComponentName, const std::string & newClassName, const std::string & newConstructorArgSerialized);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsDescriptionComponent & source);
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

}; // mtsDescriptionComponent

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsDescriptionComponent> mtsDescriptionComponentProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsDescriptionComponentProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionComponent & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionComponent & placeHolder);
/* data functions */
template <> class cmnData<mtsDescriptionComponent > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsDescriptionComponent DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsDescriptionComponent & data) {
    outputStream << cmnData<mtsDescriptionComponent >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionComponent >::SerializeText(const mtsDescriptionComponent & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionComponent >::DeSerializeText(mtsDescriptionComponent & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON


/* source line: 49 */
class CISST_EXPORT mtsDescriptionComponentClass
{
 /* default constructors and destructors. */
 public:
    mtsDescriptionComponentClass(void);
    mtsDescriptionComponentClass(const mtsDescriptionComponentClass & other);
    mtsDescriptionComponentClass & operator = (const mtsDescriptionComponentClass & other);
    ~mtsDescriptionComponentClass();

/* source line: 54 */
 public:
    std::string ClassName; // ClassName
/* source line: 59 */
 public:
    std::string ArgType; // ArgType
/* source line: 64 */
 public:
    std::string ArgTypeId; // ArgTypeId

 public:
    /* ctor-all-member is set to: true */
    mtsDescriptionComponentClass(const std::string & newClassName, const std::string & newArgType, const std::string & newArgTypeId);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsDescriptionComponentClass & source);
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

}; // mtsDescriptionComponentClass

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsDescriptionComponentClass> mtsDescriptionComponentClassProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsDescriptionComponentClassProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionComponentClass & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionComponentClass & placeHolder);
/* data functions */
template <> class cmnData<mtsDescriptionComponentClass > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsDescriptionComponentClass DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsDescriptionComponentClass & data) {
    outputStream << cmnData<mtsDescriptionComponentClass >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionComponentClass >::SerializeText(const mtsDescriptionComponentClass & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionComponentClass >::DeSerializeText(mtsDescriptionComponentClass & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 71 */

typedef std::vector<mtsDescriptionComponentClass> mtsDescriptionComponentClassVec;
typedef mtsGenericObjectProxy<mtsDescriptionComponentClassVec> mtsDescriptionComponentClassVecProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsDescriptionComponentClassVecProxy);

/* source line: 77 */
class CISST_EXPORT mtsDescriptionInterface
{
 /* default constructors and destructors. */
 public:
    mtsDescriptionInterface(void);
    mtsDescriptionInterface(const mtsDescriptionInterface & other);
    mtsDescriptionInterface & operator = (const mtsDescriptionInterface & other);
    ~mtsDescriptionInterface();

/* source line: 82 */
 public:
    std::string ProcessName; // ProcessName
/* source line: 87 */
 public:
    std::string ComponentName; // ComponentName
/* source line: 92 */
 public:
    std::vector<std::string> InterfaceRequiredNames; // InterfaceRequiredNames
/* source line: 97 */
 public:
    std::vector<std::string> InterfaceProvidedNames; // InterfaceProvidedNames

 public:
    /* ctor-all-member is set to: true */
    mtsDescriptionInterface(const std::string & newProcessName, const std::string & newComponentName, const std::vector<std::string> & newInterfaceRequiredNames, const std::vector<std::string> & newInterfaceProvidedNames);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsDescriptionInterface & source);
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

}; // mtsDescriptionInterface

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsDescriptionInterface> mtsDescriptionInterfaceProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsDescriptionInterfaceProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionInterface & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionInterface & placeHolder);
/* data functions */
template <> class cmnData<mtsDescriptionInterface > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsDescriptionInterface DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsDescriptionInterface & data) {
    outputStream << cmnData<mtsDescriptionInterface >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionInterface >::SerializeText(const mtsDescriptionInterface & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionInterface >::DeSerializeText(mtsDescriptionInterface & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 105 */
class CISST_EXPORT mtsDescriptionInterfaceFullName
{
 /* default constructors and destructors. */
 public:
    mtsDescriptionInterfaceFullName(void);
    mtsDescriptionInterfaceFullName(const mtsDescriptionInterfaceFullName & other);
    mtsDescriptionInterfaceFullName & operator = (const mtsDescriptionInterfaceFullName & other);
    ~mtsDescriptionInterfaceFullName();

/* source line: 110 */
 public:
    std::string ProcessName; // ProcessName
/* source line: 115 */
 public:
    std::string ComponentName; // ComponentName
/* source line: 120 */
 public:
    std::string InterfaceName; // InterfaceName

 public:
    /* ctor-all-member is set to: true */
    mtsDescriptionInterfaceFullName(const std::string & newProcessName, const std::string & newComponentName, const std::string & newInterfaceName);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsDescriptionInterfaceFullName & source);
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

}; // mtsDescriptionInterfaceFullName

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsDescriptionInterfaceFullName> mtsDescriptionInterfaceFullNameProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsDescriptionInterfaceFullNameProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionInterfaceFullName & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionInterfaceFullName & placeHolder);
/* data functions */
template <> class cmnData<mtsDescriptionInterfaceFullName > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsDescriptionInterfaceFullName DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsDescriptionInterfaceFullName & data) {
    outputStream << cmnData<mtsDescriptionInterfaceFullName >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionInterfaceFullName >::SerializeText(const mtsDescriptionInterfaceFullName & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionInterfaceFullName >::DeSerializeText(mtsDescriptionInterfaceFullName & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 127 */

typedef std::vector<mtsDescriptionInterfaceFullName> mtsDescriptionInterfaceFullNameVec;
typedef mtsGenericObjectProxy<mtsDescriptionInterfaceFullNameVec> mtsDescriptionInterfaceFullNameVecProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsDescriptionInterfaceFullNameVecProxy);

/* to use description in std::maps */
namespace std {
    template <>
    struct less<mtsDescriptionInterfaceFullName>  {
        bool operator()(const mtsDescriptionInterfaceFullName & a,
                        const mtsDescriptionInterfaceFullName & b) const
        {
            return ((a.ProcessName < b.ProcessName)
                    || (a.ComponentName < b.ComponentName)
                    || (a.InterfaceName < b.InterfaceName));
        }
    };
}

/* source line: 148 */
class CISST_EXPORT mtsDescriptionConnection
{
 /* default constructors and destructors. */
 public:
    mtsDescriptionConnection(void);
    mtsDescriptionConnection(const mtsDescriptionConnection & other);
    mtsDescriptionConnection & operator = (const mtsDescriptionConnection & other);
    ~mtsDescriptionConnection();

/* source line: 153 */
 public:
    mtsDescriptionInterfaceFullName Client; // Client
/* source line: 158 */
 public:
    mtsDescriptionInterfaceFullName Server; // Server
/* source line: 163 */
 public:
    ConnectionIDType ConnectionID; // ConnectionID
/* source line: 169 */

    mtsDescriptionConnection(
        const std::string & clientProcessName,
        const std::string & clientComponentName, const std::string & clientInterfaceRequiredName,
        const std::string & serverProcessName,
        const std::string & serverComponentName, const std::string & serverInterfaceProvidedName,
        const ConnectionIDType connectionId = InvalidConnectionID);
    void Init(void);
    
 public:
    /* ctor-all-member is set to: true */
    mtsDescriptionConnection(const mtsDescriptionInterfaceFullName & newClient, const mtsDescriptionInterfaceFullName & newServer, const ConnectionIDType & newConnectionID);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsDescriptionConnection & source);
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

}; // mtsDescriptionConnection

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsDescriptionConnection> mtsDescriptionConnectionProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsDescriptionConnectionProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionConnection & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionConnection & placeHolder);
/* data functions */
template <> class cmnData<mtsDescriptionConnection > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsDescriptionConnection DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsDescriptionConnection & data) {
    outputStream << cmnData<mtsDescriptionConnection >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionConnection >::SerializeText(const mtsDescriptionConnection & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionConnection >::DeSerializeText(mtsDescriptionConnection & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 180 */

typedef std::vector<mtsDescriptionConnection> mtsDescriptionConnectionVec;
typedef mtsGenericObjectProxy<mtsDescriptionConnectionVec> mtsDescriptionConnectionVecProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsDescriptionConnectionVecProxy);

/* source line: 187 */
class CISST_EXPORT mtsComponentStatusControl
{
 /* default constructors and destructors. */
 public:
    mtsComponentStatusControl(void);
    mtsComponentStatusControl(const mtsComponentStatusControl & other);
    mtsComponentStatusControl & operator = (const mtsComponentStatusControl & other);
    ~mtsComponentStatusControl();

/* source line: 192 */
public:
    enum ComponentStatusCommand {COMPONENT_START = 0, COMPONENT_STOP, COMPONENT_RESUME };
    static std::string ComponentStatusCommandToString(const ComponentStatusCommand & value) CISST_THROW(std::runtime_error);
    static ComponentStatusCommand ComponentStatusCommandFromString(const std::string & value) CISST_THROW(std::runtime_error);
    static const std::vector<int> & ComponentStatusCommandVectorInt(void);
    static const std::vector<std::string> & ComponentStatusCommandVectorString(void);
/* source line: 208 */
 public:
    std::string ProcessName; // ProcessName
/* source line: 213 */
 public:
    std::string ComponentName; // ComponentName
/* source line: 218 */
 public:
    double DelayInSecond; // DelayInSecond
/* source line: 224 */
 public:
    ComponentStatusCommand Command; // Command

 public:
    /* ctor-all-member is set to: true */
    mtsComponentStatusControl(const std::string & newProcessName, const std::string & newComponentName, const double & newDelayInSecond, const ComponentStatusCommand & newCommand);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsComponentStatusControl & source);
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

}; // mtsComponentStatusControl

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsComponentStatusControl> mtsComponentStatusControlProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsComponentStatusControlProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsComponentStatusControl & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsComponentStatusControl & placeHolder);
/* data functions */
template <> class cmnData<mtsComponentStatusControl > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsComponentStatusControl DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsComponentStatusControl & data) {
    outputStream << cmnData<mtsComponentStatusControl >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsComponentStatusControl >::SerializeText(const mtsComponentStatusControl & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsComponentStatusControl >::DeSerializeText(mtsComponentStatusControl & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON
std::string CISST_EXPORT cmnDataHumanReadable_mtsComponentStatusControl_ComponentStatusCommand(const mtsComponentStatusControl::ComponentStatusCommand & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(mtsComponentStatusControl::ComponentStatusCommand, int, cmnDataHumanReadable_mtsComponentStatusControl_ComponentStatusCommand);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsComponentStatusControl::ComponentStatusCommand);
#endif // CISST_HAS_JSON

/* source line: 232 */
class CISST_EXPORT mtsComponentStateChange
{
 /* default constructors and destructors. */
 public:
    mtsComponentStateChange(void);
    mtsComponentStateChange(const mtsComponentStateChange & other);
    mtsComponentStateChange & operator = (const mtsComponentStateChange & other);
    ~mtsComponentStateChange();

/* source line: 237 */
 public:
    std::string ProcessName; // ProcessName
/* source line: 242 */
 public:
    std::string ComponentName; // ComponentName
/* source line: 247 */
 public:
    mtsComponentState NewState; // NewState

 public:
    /* ctor-all-member is set to: true */
    mtsComponentStateChange(const std::string & newProcessName, const std::string & newComponentName, const mtsComponentState & newNewState);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsComponentStateChange & source);
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

}; // mtsComponentStateChange

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsComponentStateChange> mtsComponentStateChangeProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsComponentStateChangeProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsComponentStateChange & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsComponentStateChange & placeHolder);
/* data functions */
template <> class cmnData<mtsComponentStateChange > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsComponentStateChange DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsComponentStateChange & data) {
    outputStream << cmnData<mtsComponentStateChange >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsComponentStateChange >::SerializeText(const mtsComponentStateChange & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsComponentStateChange >::DeSerializeText(mtsComponentStateChange & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 255 */
class CISST_EXPORT mtsDescriptionLoadLibrary
{
 /* default constructors and destructors. */
 public:
    mtsDescriptionLoadLibrary(void);
    mtsDescriptionLoadLibrary(const mtsDescriptionLoadLibrary & other);
    mtsDescriptionLoadLibrary & operator = (const mtsDescriptionLoadLibrary & other);
    ~mtsDescriptionLoadLibrary();

/* source line: 260 */
 public:
    std::string ProcessName; // ProcessName
/* source line: 265 */
 public:
    std::string LibraryName; // LibraryName

 public:
    /* ctor-all-member is set to: true */
    mtsDescriptionLoadLibrary(const std::string & newProcessName, const std::string & newLibraryName);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsDescriptionLoadLibrary & source);
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

}; // mtsDescriptionLoadLibrary

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsDescriptionLoadLibrary> mtsDescriptionLoadLibraryProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsDescriptionLoadLibraryProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionLoadLibrary & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionLoadLibrary & placeHolder);
/* data functions */
template <> class cmnData<mtsDescriptionLoadLibrary > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsDescriptionLoadLibrary DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsDescriptionLoadLibrary & data) {
    outputStream << cmnData<mtsDescriptionLoadLibrary >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionLoadLibrary >::SerializeText(const mtsDescriptionLoadLibrary & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsDescriptionLoadLibrary >::DeSerializeText(mtsDescriptionLoadLibrary & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 273 */
class CISST_EXPORT mtsEndUserInterfaceArg
{
 /* default constructors and destructors. */
 public:
    mtsEndUserInterfaceArg(void);
    mtsEndUserInterfaceArg(const mtsEndUserInterfaceArg & other);
    mtsEndUserInterfaceArg & operator = (const mtsEndUserInterfaceArg & other);
    ~mtsEndUserInterfaceArg();

/* source line: 278 */
 public:
    size_t OriginalInterface; // OriginalInterface
/* source line: 283 */
 public:
    std::string UserName; // UserName
/* source line: 288 */
 public:
    size_t EndUserInterface; // EndUserInterface

 public:
    /* ctor-all-member is set to: true */
    mtsEndUserInterfaceArg(const size_t & newOriginalInterface, const std::string & newUserName, const size_t & newEndUserInterface);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsEndUserInterfaceArg & source);
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

}; // mtsEndUserInterfaceArg

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsEndUserInterfaceArg> mtsEndUserInterfaceArgProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsEndUserInterfaceArgProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsEndUserInterfaceArg & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsEndUserInterfaceArg & placeHolder);
/* data functions */
template <> class cmnData<mtsEndUserInterfaceArg > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsEndUserInterfaceArg DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsEndUserInterfaceArg & data) {
    outputStream << cmnData<mtsEndUserInterfaceArg >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsEndUserInterfaceArg >::SerializeText(const mtsEndUserInterfaceArg & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsEndUserInterfaceArg >::DeSerializeText(mtsEndUserInterfaceArg & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 296 */
class CISST_EXPORT mtsMessage
{
 /* default constructors and destructors. */
 public:
    mtsMessage(void);
    mtsMessage(const mtsMessage & other);
    mtsMessage & operator = (const mtsMessage & other);
    ~mtsMessage();

/* source line: 300 */
 public:
    std::string Message; // Message
/* source line: 305 */
 public:
    size_t Counter; // Counter
/* source line: 311 */
 public:
    double Timestamp; // Timestamp
 public:
    /* accessors is set to: set-get */
     void GetTimestamp(double & placeHolder) const;
     void SetTimestamp(const double & newValue);
/* source line: 317 */

        void SetMessage(const std::string & message);
        /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsMessage & source);
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

}; // mtsMessage

// mts-proxy set to declaration-only
typedef mtsGenericObjectProxy<mtsMessage> mtsMessageProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsMessageProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsMessage & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsMessage & placeHolder);
/* data functions */
template <> class cmnData<mtsMessage > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsMessage DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsMessage & data) {
    outputStream << cmnData<mtsMessage >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsMessage >::SerializeText(const mtsMessage & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsMessage >::DeSerializeText(mtsMessage & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON


/* source line: 331 */
class CISST_EXPORT mtsTaskConstructorArg: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    mtsTaskConstructorArg(void);
    mtsTaskConstructorArg(const mtsTaskConstructorArg & other);
    mtsTaskConstructorArg & operator = (const mtsTaskConstructorArg & other);
    ~mtsTaskConstructorArg();

/* source line: 338 */
 public:
    std::string Name; // Name
/* source line: 343 */
 public:
    unsigned int StateTableSize; // StateTableSize
/* source line: 349 */

        CMN_DECLARE_SERVICES(CMN_DYNAMIC_CREATION, CMN_LOG_ALLOW_DEFAULT);
    
 public:
    /* ctor-all-member is set to: true */
    mtsTaskConstructorArg(const std::string & newName, const unsigned int & newStateTableSize);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsTaskConstructorArg & source);
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

}; // mtsTaskConstructorArg

// mts-proxy set to true
typedef mtsGenericObjectProxy<mtsTaskConstructorArg> mtsTaskConstructorArgProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsTaskConstructorArgProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsTaskConstructorArg & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsTaskConstructorArg & placeHolder);
/* data functions */
template <> class cmnData<mtsTaskConstructorArg > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsTaskConstructorArg DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsTaskConstructorArg & data) {
    outputStream << cmnData<mtsTaskConstructorArg >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsTaskConstructorArg >::SerializeText(const mtsTaskConstructorArg & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsTaskConstructorArg >::DeSerializeText(mtsTaskConstructorArg & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 353 */

    CMN_DECLARE_SERVICES_INSTANTIATION(mtsTaskConstructorArg);

/* source line: 358 */
class CISST_EXPORT mtsTaskContinuousConstructorArg: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    mtsTaskContinuousConstructorArg(void);
    mtsTaskContinuousConstructorArg(const mtsTaskContinuousConstructorArg & other);
    mtsTaskContinuousConstructorArg & operator = (const mtsTaskContinuousConstructorArg & other);
    ~mtsTaskContinuousConstructorArg();

/* source line: 365 */
 public:
    std::string Name; // Name
/* source line: 370 */
 public:
    unsigned int StateTableSize; // StateTableSize
/* source line: 376 */
 public:
    bool NewThread; // NewThread
/* source line: 382 */

        CMN_DECLARE_SERVICES(CMN_DYNAMIC_CREATION, CMN_LOG_ALLOW_DEFAULT);
    
 public:
    /* ctor-all-member is set to: true */
    mtsTaskContinuousConstructorArg(const std::string & newName, const unsigned int & newStateTableSize, const bool & newNewThread);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsTaskContinuousConstructorArg & source);
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

}; // mtsTaskContinuousConstructorArg

// mts-proxy set to true
typedef mtsGenericObjectProxy<mtsTaskContinuousConstructorArg> mtsTaskContinuousConstructorArgProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsTaskContinuousConstructorArgProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsTaskContinuousConstructorArg & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsTaskContinuousConstructorArg & placeHolder);
/* data functions */
template <> class cmnData<mtsTaskContinuousConstructorArg > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsTaskContinuousConstructorArg DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsTaskContinuousConstructorArg & data) {
    outputStream << cmnData<mtsTaskContinuousConstructorArg >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsTaskContinuousConstructorArg >::SerializeText(const mtsTaskContinuousConstructorArg & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsTaskContinuousConstructorArg >::DeSerializeText(mtsTaskContinuousConstructorArg & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 386 */

    CMN_DECLARE_SERVICES_INSTANTIATION(mtsTaskContinuousConstructorArg);

/* source line: 391 */
class CISST_EXPORT mtsTaskPeriodicConstructorArg: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    mtsTaskPeriodicConstructorArg(void);
    mtsTaskPeriodicConstructorArg(const mtsTaskPeriodicConstructorArg & other);
    mtsTaskPeriodicConstructorArg & operator = (const mtsTaskPeriodicConstructorArg & other);
    ~mtsTaskPeriodicConstructorArg();

/* source line: 398 */
 public:
    std::string Name; // Name
/* source line: 403 */
 public:
    double Period; // Period
/* source line: 408 */
 public:
    bool IsHardRealTime; // IsHardRealTime
/* source line: 414 */
 public:
    unsigned int StateTableSize; // StateTableSize
/* source line: 420 */

        CMN_DECLARE_SERVICES(CMN_DYNAMIC_CREATION, CMN_LOG_ALLOW_DEFAULT);
    
 public:
    /* ctor-all-member is set to: true */
    mtsTaskPeriodicConstructorArg(const std::string & newName, const double & newPeriod, const bool & newIsHardRealTime, const unsigned int & newStateTableSize);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsTaskPeriodicConstructorArg & source);
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

}; // mtsTaskPeriodicConstructorArg

// mts-proxy set to true
typedef mtsGenericObjectProxy<mtsTaskPeriodicConstructorArg> mtsTaskPeriodicConstructorArgProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsTaskPeriodicConstructorArgProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsTaskPeriodicConstructorArg & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsTaskPeriodicConstructorArg & placeHolder);
/* data functions */
template <> class cmnData<mtsTaskPeriodicConstructorArg > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsTaskPeriodicConstructorArg DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsTaskPeriodicConstructorArg & data) {
    outputStream << cmnData<mtsTaskPeriodicConstructorArg >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsTaskPeriodicConstructorArg >::SerializeText(const mtsTaskPeriodicConstructorArg & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsTaskPeriodicConstructorArg >::DeSerializeText(mtsTaskPeriodicConstructorArg & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 424 */

    CMN_DECLARE_SERVICES_INSTANTIATION(mtsTaskPeriodicConstructorArg);


#endif // _cisstMultiTask_mtsParameterTypes_h
