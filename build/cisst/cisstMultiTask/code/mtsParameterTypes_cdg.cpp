// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/code/../mtsParameterTypes.cdg

#include <cisstMultiTask/mtsParameterTypes.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 10 */
mtsDescriptionComponent::mtsDescriptionComponent(void):
    ProcessName()
    , ComponentName()
    , ClassName()
    , ConstructorArgSerialized()
{}

mtsDescriptionComponent::mtsDescriptionComponent(const mtsDescriptionComponent & other):
    ProcessName(other.ProcessName)
    , ComponentName(other.ComponentName)
    , ClassName(other.ClassName)
    , ConstructorArgSerialized(other.ConstructorArgSerialized)
{}

mtsDescriptionComponent & mtsDescriptionComponent::operator = (const mtsDescriptionComponent & other)
{
    ProcessName = other.ProcessName;
    ComponentName = other.ComponentName;
    ClassName = other.ClassName;
    ConstructorArgSerialized = other.ConstructorArgSerialized;
    return *this;
}

mtsDescriptionComponent::mtsDescriptionComponent(const std::string & newProcessName, const std::string & newComponentName, const std::string & newClassName, const std::string & newConstructorArgSerialized):
    ProcessName(newProcessName)
    , ComponentName(newComponentName)
    , ClassName(newClassName)
    , ConstructorArgSerialized(newConstructorArgSerialized)
{}

mtsDescriptionComponent::~mtsDescriptionComponent(void){}


void mtsDescriptionComponent::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->ProcessName);
    cmnSerializeRaw(outputStream__cdg, this->ComponentName);
    cmnSerializeRaw(outputStream__cdg, this->ClassName);
    cmnSerializeRaw(outputStream__cdg, this->ConstructorArgSerialized);
}


void mtsDescriptionComponent::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->ProcessName);
    cmnDeSerializeRaw(inputStream__cdg, this->ComponentName);
    cmnDeSerializeRaw(inputStream__cdg, this->ClassName);
    cmnDeSerializeRaw(inputStream__cdg, this->ConstructorArgSerialized);
}


void mtsDescriptionComponent::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsDescriptionComponent::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsDescriptionComponent >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsDescriptionComponent >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 15 */
/* source line: 20 */
/* source line: 25 */
/* source line: 30 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionComponent & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionComponent & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsDescriptionComponent::Copy(const mtsDescriptionComponent & source__cdg) {
    cmnData<std::string >::Copy(this->ProcessName, source__cdg.ProcessName);
    cmnData<std::string >::Copy(this->ComponentName, source__cdg.ComponentName);
    cmnData<std::string >::Copy(this->ClassName, source__cdg.ClassName);
    cmnData<std::string >::Copy(this->ConstructorArgSerialized, source__cdg.ConstructorArgSerialized);
}
void mtsDescriptionComponent::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->ProcessName, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->ComponentName, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->ClassName, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->ConstructorArgSerialized, outputStream__cdg);
}
void mtsDescriptionComponent::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->ProcessName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ComponentName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ClassName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ConstructorArgSerialized, inputStream__cdg, localFormat, remoteFormat);
}
void mtsDescriptionComponent::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ProcessName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ComponentName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ClassName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ConstructorArgSerialized, outputStream__cdg, delimiter__cdg);
}
std::string mtsDescriptionComponent::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ProcessName, delimiter__cdg, prefix__cdg + "ProcessName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ComponentName, delimiter__cdg, prefix__cdg + "ComponentName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ClassName, delimiter__cdg, prefix__cdg + "ClassName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ConstructorArgSerialized, delimiter__cdg, prefix__cdg + "ConstructorArgSerialized");
    return description__cdg.str();
}
void mtsDescriptionComponent::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionComponent");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ProcessName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionComponent");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ComponentName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionComponent");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ClassName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionComponent");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ConstructorArgSerialized, inputStream__cdg, delimiter__cdg);
}
std::string mtsDescriptionComponent::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsDescriptionComponent" << std::endl;
    description__cdg << "  ProcessName:" << cmnData<std::string >::HumanReadable(this->ProcessName);
    description__cdg << "  ComponentName:" << cmnData<std::string >::HumanReadable(this->ComponentName);
    description__cdg << "  ClassName:" << cmnData<std::string >::HumanReadable(this->ClassName);
    description__cdg << "  ConstructorArgSerialized:" << cmnData<std::string >::HumanReadable(this->ConstructorArgSerialized);
    return description__cdg.str();
}
bool mtsDescriptionComponent::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->ProcessName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ComponentName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ClassName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ConstructorArgSerialized)
    ;
}
size_t mtsDescriptionComponent::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->ProcessName)
           + cmnData<std::string >::ScalarNumber(this->ComponentName)
           + cmnData<std::string >::ScalarNumber(this->ClassName)
           + cmnData<std::string >::ScalarNumber(this->ConstructorArgSerialized)
    ;
}
std::string mtsDescriptionComponent::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ProcessName, index_cdg - baseIndex__cdg, prefix__cdg + "ProcessName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ComponentName, index_cdg - baseIndex__cdg, prefix__cdg + "ComponentName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ClassName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ClassName, index_cdg - baseIndex__cdg, prefix__cdg + "ClassName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ConstructorArgSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ConstructorArgSerialized, index_cdg - baseIndex__cdg, prefix__cdg + "ConstructorArgSerialized");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsDescriptionComponent index out of range"));
    return "";
}
double mtsDescriptionComponent::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ProcessName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ComponentName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ClassName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ClassName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ConstructorArgSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ConstructorArgSerialized, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsDescriptionComponent index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsDescriptionComponent >::SerializeText(const mtsDescriptionComponent & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsDescriptionComponent::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::SerializeText(this->ComponentName, jsonValue["ComponentName"]);
    cmnDataJSON<std::string >::SerializeText(this->ClassName, jsonValue["ClassName"]);
    cmnDataJSON<std::string >::SerializeText(this->ConstructorArgSerialized, jsonValue["ConstructorArgSerialized"]);
}
template<>
void cmnDataJSON<mtsDescriptionComponent >::DeSerializeText(mtsDescriptionComponent & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsDescriptionComponent::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["ProcessName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ProcessName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ProcessName");
    };
    field__cdg = jsonValue["ComponentName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ComponentName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ComponentName");
    };
    field__cdg = jsonValue["ClassName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ClassName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ClassName");
    };
    field__cdg = jsonValue["ConstructorArgSerialized"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ConstructorArgSerialized, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ConstructorArgSerialized");
    };
}
#endif // CISST_HAS_JSON

/* source line: 41 */

    mtsDescriptionComponent::mtsDescriptionComponent(const std::string & processName, const std::string & componentName):
        ProcessName(processName),
        ComponentName(componentName) {
    }

/* source line: 49 */
mtsDescriptionComponentClass::mtsDescriptionComponentClass(void):
    ClassName()
    , ArgType()
    , ArgTypeId()
{}

mtsDescriptionComponentClass::mtsDescriptionComponentClass(const mtsDescriptionComponentClass & other):
    ClassName(other.ClassName)
    , ArgType(other.ArgType)
    , ArgTypeId(other.ArgTypeId)
{}

mtsDescriptionComponentClass & mtsDescriptionComponentClass::operator = (const mtsDescriptionComponentClass & other)
{
    ClassName = other.ClassName;
    ArgType = other.ArgType;
    ArgTypeId = other.ArgTypeId;
    return *this;
}

mtsDescriptionComponentClass::mtsDescriptionComponentClass(const std::string & newClassName, const std::string & newArgType, const std::string & newArgTypeId):
    ClassName(newClassName)
    , ArgType(newArgType)
    , ArgTypeId(newArgTypeId)
{}

mtsDescriptionComponentClass::~mtsDescriptionComponentClass(void){}


void mtsDescriptionComponentClass::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->ClassName);
    cmnSerializeRaw(outputStream__cdg, this->ArgType);
    cmnSerializeRaw(outputStream__cdg, this->ArgTypeId);
}


void mtsDescriptionComponentClass::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->ClassName);
    cmnDeSerializeRaw(inputStream__cdg, this->ArgType);
    cmnDeSerializeRaw(inputStream__cdg, this->ArgTypeId);
}


void mtsDescriptionComponentClass::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsDescriptionComponentClass::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsDescriptionComponentClass >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsDescriptionComponentClass >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 54 */
/* source line: 59 */
/* source line: 64 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionComponentClass & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionComponentClass & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsDescriptionComponentClass::Copy(const mtsDescriptionComponentClass & source__cdg) {
    cmnData<std::string >::Copy(this->ClassName, source__cdg.ClassName);
    cmnData<std::string >::Copy(this->ArgType, source__cdg.ArgType);
    cmnData<std::string >::Copy(this->ArgTypeId, source__cdg.ArgTypeId);
}
void mtsDescriptionComponentClass::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->ClassName, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->ArgType, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->ArgTypeId, outputStream__cdg);
}
void mtsDescriptionComponentClass::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->ClassName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ArgType, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ArgTypeId, inputStream__cdg, localFormat, remoteFormat);
}
void mtsDescriptionComponentClass::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ClassName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ArgType, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ArgTypeId, outputStream__cdg, delimiter__cdg);
}
std::string mtsDescriptionComponentClass::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ClassName, delimiter__cdg, prefix__cdg + "ClassName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ArgType, delimiter__cdg, prefix__cdg + "ArgType");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ArgTypeId, delimiter__cdg, prefix__cdg + "ArgTypeId");
    return description__cdg.str();
}
void mtsDescriptionComponentClass::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionComponentClass");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ClassName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionComponentClass");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ArgType, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionComponentClass");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ArgTypeId, inputStream__cdg, delimiter__cdg);
}
std::string mtsDescriptionComponentClass::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsDescriptionComponentClass" << std::endl;
    description__cdg << "  ClassName:" << cmnData<std::string >::HumanReadable(this->ClassName);
    description__cdg << "  ArgType:" << cmnData<std::string >::HumanReadable(this->ArgType);
    description__cdg << "  ArgTypeId:" << cmnData<std::string >::HumanReadable(this->ArgTypeId);
    return description__cdg.str();
}
bool mtsDescriptionComponentClass::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->ClassName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ArgType)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ArgTypeId)
    ;
}
size_t mtsDescriptionComponentClass::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->ClassName)
           + cmnData<std::string >::ScalarNumber(this->ArgType)
           + cmnData<std::string >::ScalarNumber(this->ArgTypeId)
    ;
}
std::string mtsDescriptionComponentClass::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ClassName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ClassName, index_cdg - baseIndex__cdg, prefix__cdg + "ClassName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ArgType);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ArgType, index_cdg - baseIndex__cdg, prefix__cdg + "ArgType");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ArgTypeId);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ArgTypeId, index_cdg - baseIndex__cdg, prefix__cdg + "ArgTypeId");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsDescriptionComponentClass index out of range"));
    return "";
}
double mtsDescriptionComponentClass::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ClassName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ClassName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ArgType);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ArgType, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ArgTypeId);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ArgTypeId, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsDescriptionComponentClass index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsDescriptionComponentClass >::SerializeText(const mtsDescriptionComponentClass & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsDescriptionComponentClass::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->ClassName, jsonValue["ClassName"]);
    cmnDataJSON<std::string >::SerializeText(this->ArgType, jsonValue["ArgType"]);
    cmnDataJSON<std::string >::SerializeText(this->ArgTypeId, jsonValue["ArgTypeId"]);
}
template<>
void cmnDataJSON<mtsDescriptionComponentClass >::DeSerializeText(mtsDescriptionComponentClass & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsDescriptionComponentClass::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["ClassName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ClassName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ClassName");
    };
    field__cdg = jsonValue["ArgType"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ArgType, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ArgType");
    };
    field__cdg = jsonValue["ArgTypeId"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ArgTypeId, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ArgTypeId");
    };
}
#endif // CISST_HAS_JSON


/* source line: 77 */
mtsDescriptionInterface::mtsDescriptionInterface(void):
    ProcessName()
    , ComponentName()
    , InterfaceRequiredNames()
    , InterfaceProvidedNames()
{}

mtsDescriptionInterface::mtsDescriptionInterface(const mtsDescriptionInterface & other):
    ProcessName(other.ProcessName)
    , ComponentName(other.ComponentName)
    , InterfaceRequiredNames(other.InterfaceRequiredNames)
    , InterfaceProvidedNames(other.InterfaceProvidedNames)
{}

mtsDescriptionInterface & mtsDescriptionInterface::operator = (const mtsDescriptionInterface & other)
{
    ProcessName = other.ProcessName;
    ComponentName = other.ComponentName;
    InterfaceRequiredNames = other.InterfaceRequiredNames;
    InterfaceProvidedNames = other.InterfaceProvidedNames;
    return *this;
}

mtsDescriptionInterface::mtsDescriptionInterface(const std::string & newProcessName, const std::string & newComponentName, const std::vector<std::string> & newInterfaceRequiredNames, const std::vector<std::string> & newInterfaceProvidedNames):
    ProcessName(newProcessName)
    , ComponentName(newComponentName)
    , InterfaceRequiredNames(newInterfaceRequiredNames)
    , InterfaceProvidedNames(newInterfaceProvidedNames)
{}

mtsDescriptionInterface::~mtsDescriptionInterface(void){}


void mtsDescriptionInterface::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->ProcessName);
    cmnSerializeRaw(outputStream__cdg, this->ComponentName);
    cmnSerializeRaw(outputStream__cdg, this->InterfaceRequiredNames);
    cmnSerializeRaw(outputStream__cdg, this->InterfaceProvidedNames);
}


void mtsDescriptionInterface::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->ProcessName);
    cmnDeSerializeRaw(inputStream__cdg, this->ComponentName);
    cmnDeSerializeRaw(inputStream__cdg, this->InterfaceRequiredNames);
    cmnDeSerializeRaw(inputStream__cdg, this->InterfaceProvidedNames);
}


void mtsDescriptionInterface::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsDescriptionInterface::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsDescriptionInterface >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsDescriptionInterface >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 82 */
/* source line: 87 */
/* source line: 92 */
/* source line: 97 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionInterface & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionInterface & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsDescriptionInterface::Copy(const mtsDescriptionInterface & source__cdg) {
    cmnData<std::string >::Copy(this->ProcessName, source__cdg.ProcessName);
    cmnData<std::string >::Copy(this->ComponentName, source__cdg.ComponentName);
    cmnData<std::vector<std::string> >::Copy(this->InterfaceRequiredNames, source__cdg.InterfaceRequiredNames);
    cmnData<std::vector<std::string> >::Copy(this->InterfaceProvidedNames, source__cdg.InterfaceProvidedNames);
}
void mtsDescriptionInterface::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->ProcessName, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->ComponentName, outputStream__cdg);
    cmnData<std::vector<std::string> >::SerializeBinary(this->InterfaceRequiredNames, outputStream__cdg);
    cmnData<std::vector<std::string> >::SerializeBinary(this->InterfaceProvidedNames, outputStream__cdg);
}
void mtsDescriptionInterface::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->ProcessName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ComponentName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<std::string> >::DeSerializeBinary(this->InterfaceRequiredNames, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<std::string> >::DeSerializeBinary(this->InterfaceProvidedNames, inputStream__cdg, localFormat, remoteFormat);
}
void mtsDescriptionInterface::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ProcessName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ComponentName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<std::string> >::SerializeText(this->InterfaceRequiredNames, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<std::string> >::SerializeText(this->InterfaceProvidedNames, outputStream__cdg, delimiter__cdg);
}
std::string mtsDescriptionInterface::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ProcessName, delimiter__cdg, prefix__cdg + "ProcessName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ComponentName, delimiter__cdg, prefix__cdg + "ComponentName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<std::string> >::SerializeDescription(this->InterfaceRequiredNames, delimiter__cdg, prefix__cdg + "InterfaceRequiredNames");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<std::string> >::SerializeDescription(this->InterfaceProvidedNames, delimiter__cdg, prefix__cdg + "InterfaceProvidedNames");
    return description__cdg.str();
}
void mtsDescriptionInterface::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionInterface");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ProcessName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionInterface");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ComponentName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionInterface");
    }
    someData__cdg = true;
    cmnData<std::vector<std::string> >::DeSerializeText(this->InterfaceRequiredNames, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionInterface");
    }
    someData__cdg = true;
    cmnData<std::vector<std::string> >::DeSerializeText(this->InterfaceProvidedNames, inputStream__cdg, delimiter__cdg);
}
std::string mtsDescriptionInterface::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsDescriptionInterface" << std::endl;
    description__cdg << "  ProcessName:" << cmnData<std::string >::HumanReadable(this->ProcessName);
    description__cdg << "  ComponentName:" << cmnData<std::string >::HumanReadable(this->ComponentName);
    description__cdg << "  InterfaceRequiredNames:" << cmnData<std::vector<std::string> >::HumanReadable(this->InterfaceRequiredNames);
    description__cdg << "  InterfaceProvidedNames:" << cmnData<std::vector<std::string> >::HumanReadable(this->InterfaceProvidedNames);
    return description__cdg.str();
}
bool mtsDescriptionInterface::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->ProcessName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ComponentName)
           && cmnData<std::vector<std::string> >::ScalarNumberIsFixed(this->InterfaceRequiredNames)
           && cmnData<std::vector<std::string> >::ScalarNumberIsFixed(this->InterfaceProvidedNames)
    ;
}
size_t mtsDescriptionInterface::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->ProcessName)
           + cmnData<std::string >::ScalarNumber(this->ComponentName)
           + cmnData<std::vector<std::string> >::ScalarNumber(this->InterfaceRequiredNames)
           + cmnData<std::vector<std::string> >::ScalarNumber(this->InterfaceProvidedNames)
    ;
}
std::string mtsDescriptionInterface::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ProcessName, index_cdg - baseIndex__cdg, prefix__cdg + "ProcessName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ComponentName, index_cdg - baseIndex__cdg, prefix__cdg + "ComponentName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->InterfaceRequiredNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::ScalarDescription(this->InterfaceRequiredNames, index_cdg - baseIndex__cdg, prefix__cdg + "InterfaceRequiredNames");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->InterfaceProvidedNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::ScalarDescription(this->InterfaceProvidedNames, index_cdg - baseIndex__cdg, prefix__cdg + "InterfaceProvidedNames");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsDescriptionInterface index out of range"));
    return "";
}
double mtsDescriptionInterface::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ProcessName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ComponentName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->InterfaceRequiredNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::Scalar(this->InterfaceRequiredNames, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->InterfaceProvidedNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::Scalar(this->InterfaceProvidedNames, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsDescriptionInterface index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsDescriptionInterface >::SerializeText(const mtsDescriptionInterface & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsDescriptionInterface::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::SerializeText(this->ComponentName, jsonValue["ComponentName"]);
    cmnDataJSON<std::vector<std::string> >::SerializeText(this->InterfaceRequiredNames, jsonValue["InterfaceRequiredNames"]);
    cmnDataJSON<std::vector<std::string> >::SerializeText(this->InterfaceProvidedNames, jsonValue["InterfaceProvidedNames"]);
}
template<>
void cmnDataJSON<mtsDescriptionInterface >::DeSerializeText(mtsDescriptionInterface & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsDescriptionInterface::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["ProcessName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ProcessName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ProcessName");
    };
    field__cdg = jsonValue["ComponentName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ComponentName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ComponentName");
    };
    field__cdg = jsonValue["InterfaceRequiredNames"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<std::string> >::DeSerializeText(this->InterfaceRequiredNames, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<std::string>>::DeSerializeText: empty JSON value for: InterfaceRequiredNames");
    };
    field__cdg = jsonValue["InterfaceProvidedNames"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<std::string> >::DeSerializeText(this->InterfaceProvidedNames, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<std::string>>::DeSerializeText: empty JSON value for: InterfaceProvidedNames");
    };
}
#endif // CISST_HAS_JSON

/* source line: 105 */
mtsDescriptionInterfaceFullName::mtsDescriptionInterfaceFullName(void):
    ProcessName()
    , ComponentName()
    , InterfaceName()
{}

mtsDescriptionInterfaceFullName::mtsDescriptionInterfaceFullName(const mtsDescriptionInterfaceFullName & other):
    ProcessName(other.ProcessName)
    , ComponentName(other.ComponentName)
    , InterfaceName(other.InterfaceName)
{}

mtsDescriptionInterfaceFullName & mtsDescriptionInterfaceFullName::operator = (const mtsDescriptionInterfaceFullName & other)
{
    ProcessName = other.ProcessName;
    ComponentName = other.ComponentName;
    InterfaceName = other.InterfaceName;
    return *this;
}

mtsDescriptionInterfaceFullName::mtsDescriptionInterfaceFullName(const std::string & newProcessName, const std::string & newComponentName, const std::string & newInterfaceName):
    ProcessName(newProcessName)
    , ComponentName(newComponentName)
    , InterfaceName(newInterfaceName)
{}

mtsDescriptionInterfaceFullName::~mtsDescriptionInterfaceFullName(void){}


void mtsDescriptionInterfaceFullName::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->ProcessName);
    cmnSerializeRaw(outputStream__cdg, this->ComponentName);
    cmnSerializeRaw(outputStream__cdg, this->InterfaceName);
}


void mtsDescriptionInterfaceFullName::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->ProcessName);
    cmnDeSerializeRaw(inputStream__cdg, this->ComponentName);
    cmnDeSerializeRaw(inputStream__cdg, this->InterfaceName);
}


void mtsDescriptionInterfaceFullName::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsDescriptionInterfaceFullName::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsDescriptionInterfaceFullName >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsDescriptionInterfaceFullName >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 110 */
/* source line: 115 */
/* source line: 120 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionInterfaceFullName & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionInterfaceFullName & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsDescriptionInterfaceFullName::Copy(const mtsDescriptionInterfaceFullName & source__cdg) {
    cmnData<std::string >::Copy(this->ProcessName, source__cdg.ProcessName);
    cmnData<std::string >::Copy(this->ComponentName, source__cdg.ComponentName);
    cmnData<std::string >::Copy(this->InterfaceName, source__cdg.InterfaceName);
}
void mtsDescriptionInterfaceFullName::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->ProcessName, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->ComponentName, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->InterfaceName, outputStream__cdg);
}
void mtsDescriptionInterfaceFullName::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->ProcessName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ComponentName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->InterfaceName, inputStream__cdg, localFormat, remoteFormat);
}
void mtsDescriptionInterfaceFullName::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ProcessName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ComponentName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->InterfaceName, outputStream__cdg, delimiter__cdg);
}
std::string mtsDescriptionInterfaceFullName::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ProcessName, delimiter__cdg, prefix__cdg + "ProcessName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ComponentName, delimiter__cdg, prefix__cdg + "ComponentName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->InterfaceName, delimiter__cdg, prefix__cdg + "InterfaceName");
    return description__cdg.str();
}
void mtsDescriptionInterfaceFullName::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionInterfaceFullName");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ProcessName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionInterfaceFullName");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ComponentName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionInterfaceFullName");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->InterfaceName, inputStream__cdg, delimiter__cdg);
}
std::string mtsDescriptionInterfaceFullName::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsDescriptionInterfaceFullName" << std::endl;
    description__cdg << "  ProcessName:" << cmnData<std::string >::HumanReadable(this->ProcessName);
    description__cdg << "  ComponentName:" << cmnData<std::string >::HumanReadable(this->ComponentName);
    description__cdg << "  InterfaceName:" << cmnData<std::string >::HumanReadable(this->InterfaceName);
    return description__cdg.str();
}
bool mtsDescriptionInterfaceFullName::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->ProcessName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ComponentName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->InterfaceName)
    ;
}
size_t mtsDescriptionInterfaceFullName::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->ProcessName)
           + cmnData<std::string >::ScalarNumber(this->ComponentName)
           + cmnData<std::string >::ScalarNumber(this->InterfaceName)
    ;
}
std::string mtsDescriptionInterfaceFullName::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ProcessName, index_cdg - baseIndex__cdg, prefix__cdg + "ProcessName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ComponentName, index_cdg - baseIndex__cdg, prefix__cdg + "ComponentName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->InterfaceName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->InterfaceName, index_cdg - baseIndex__cdg, prefix__cdg + "InterfaceName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsDescriptionInterfaceFullName index out of range"));
    return "";
}
double mtsDescriptionInterfaceFullName::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ProcessName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ComponentName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->InterfaceName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->InterfaceName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsDescriptionInterfaceFullName index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsDescriptionInterfaceFullName >::SerializeText(const mtsDescriptionInterfaceFullName & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsDescriptionInterfaceFullName::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::SerializeText(this->ComponentName, jsonValue["ComponentName"]);
    cmnDataJSON<std::string >::SerializeText(this->InterfaceName, jsonValue["InterfaceName"]);
}
template<>
void cmnDataJSON<mtsDescriptionInterfaceFullName >::DeSerializeText(mtsDescriptionInterfaceFullName & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsDescriptionInterfaceFullName::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["ProcessName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ProcessName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ProcessName");
    };
    field__cdg = jsonValue["ComponentName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ComponentName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ComponentName");
    };
    field__cdg = jsonValue["InterfaceName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->InterfaceName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: InterfaceName");
    };
}
#endif // CISST_HAS_JSON


/* source line: 148 */
mtsDescriptionConnection::mtsDescriptionConnection(void):
    Client()
    , Server()
    , ConnectionID(InvalidConnectionID)
{}

mtsDescriptionConnection::mtsDescriptionConnection(const mtsDescriptionConnection & other):
    Client(other.Client)
    , Server(other.Server)
    , ConnectionID(other.ConnectionID)
{}

mtsDescriptionConnection & mtsDescriptionConnection::operator = (const mtsDescriptionConnection & other)
{
    Client = other.Client;
    Server = other.Server;
    ConnectionID = other.ConnectionID;
    return *this;
}

mtsDescriptionConnection::mtsDescriptionConnection(const mtsDescriptionInterfaceFullName & newClient, const mtsDescriptionInterfaceFullName & newServer, const ConnectionIDType & newConnectionID):
    Client(newClient)
    , Server(newServer)
    , ConnectionID(newConnectionID)
{}

mtsDescriptionConnection::~mtsDescriptionConnection(void){}


void mtsDescriptionConnection::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Client);
    cmnSerializeRaw(outputStream__cdg, this->Server);
    cmnSerializeRaw(outputStream__cdg, this->ConnectionID);
}


void mtsDescriptionConnection::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Client);
    cmnDeSerializeRaw(inputStream__cdg, this->Server);
    cmnDeSerializeRaw(inputStream__cdg, this->ConnectionID);
}


void mtsDescriptionConnection::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsDescriptionConnection::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsDescriptionConnection >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsDescriptionConnection >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 153 */
/* source line: 158 */
/* source line: 163 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionConnection & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionConnection & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsDescriptionConnection::Copy(const mtsDescriptionConnection & source__cdg) {
    cmnData<mtsDescriptionInterfaceFullName >::Copy(this->Client, source__cdg.Client);
    cmnData<mtsDescriptionInterfaceFullName >::Copy(this->Server, source__cdg.Server);
    cmnData<ConnectionIDType >::Copy(this->ConnectionID, source__cdg.ConnectionID);
}
void mtsDescriptionConnection::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsDescriptionInterfaceFullName >::SerializeBinary(this->Client, outputStream__cdg);
    cmnData<mtsDescriptionInterfaceFullName >::SerializeBinary(this->Server, outputStream__cdg);
    cmnData<ConnectionIDType >::SerializeBinary(this->ConnectionID, outputStream__cdg);
}
void mtsDescriptionConnection::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsDescriptionInterfaceFullName >::DeSerializeBinary(this->Client, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsDescriptionInterfaceFullName >::DeSerializeBinary(this->Server, inputStream__cdg, localFormat, remoteFormat);
    cmnData<ConnectionIDType >::DeSerializeBinary(this->ConnectionID, inputStream__cdg, localFormat, remoteFormat);
}
void mtsDescriptionConnection::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsDescriptionInterfaceFullName >::SerializeText(this->Client, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsDescriptionInterfaceFullName >::SerializeText(this->Server, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<ConnectionIDType >::SerializeText(this->ConnectionID, outputStream__cdg, delimiter__cdg);
}
std::string mtsDescriptionConnection::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsDescriptionInterfaceFullName >::SerializeDescription(this->Client, delimiter__cdg, prefix__cdg + "Client");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsDescriptionInterfaceFullName >::SerializeDescription(this->Server, delimiter__cdg, prefix__cdg + "Server");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<ConnectionIDType >::SerializeDescription(this->ConnectionID, delimiter__cdg, prefix__cdg + "ConnectionID");
    return description__cdg.str();
}
void mtsDescriptionConnection::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionConnection");
    }
    someData__cdg = true;
    cmnData<mtsDescriptionInterfaceFullName >::DeSerializeText(this->Client, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionConnection");
    }
    someData__cdg = true;
    cmnData<mtsDescriptionInterfaceFullName >::DeSerializeText(this->Server, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionConnection");
    }
    someData__cdg = true;
    cmnData<ConnectionIDType >::DeSerializeText(this->ConnectionID, inputStream__cdg, delimiter__cdg);
}
std::string mtsDescriptionConnection::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsDescriptionConnection" << std::endl;
    description__cdg << "  Client:" << cmnData<mtsDescriptionInterfaceFullName >::HumanReadable(this->Client);
    description__cdg << "  Server:" << cmnData<mtsDescriptionInterfaceFullName >::HumanReadable(this->Server);
    description__cdg << "  ConnectionID:" << cmnData<ConnectionIDType >::HumanReadable(this->ConnectionID);
    return description__cdg.str();
}
bool mtsDescriptionConnection::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsDescriptionInterfaceFullName >::ScalarNumberIsFixed(this->Client)
           && cmnData<mtsDescriptionInterfaceFullName >::ScalarNumberIsFixed(this->Server)
           && cmnData<ConnectionIDType >::ScalarNumberIsFixed(this->ConnectionID)
    ;
}
size_t mtsDescriptionConnection::ScalarNumber(void) const {
    return 0
           + cmnData<mtsDescriptionInterfaceFullName >::ScalarNumber(this->Client)
           + cmnData<mtsDescriptionInterfaceFullName >::ScalarNumber(this->Server)
           + cmnData<ConnectionIDType >::ScalarNumber(this->ConnectionID)
    ;
}
std::string mtsDescriptionConnection::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsDescriptionInterfaceFullName >::ScalarNumber(this->Client);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsDescriptionInterfaceFullName >::ScalarDescription(this->Client, index_cdg - baseIndex__cdg, prefix__cdg + "Client");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsDescriptionInterfaceFullName >::ScalarNumber(this->Server);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsDescriptionInterfaceFullName >::ScalarDescription(this->Server, index_cdg - baseIndex__cdg, prefix__cdg + "Server");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<ConnectionIDType >::ScalarNumber(this->ConnectionID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<ConnectionIDType >::ScalarDescription(this->ConnectionID, index_cdg - baseIndex__cdg, prefix__cdg + "ConnectionID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsDescriptionConnection index out of range"));
    return "";
}
double mtsDescriptionConnection::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsDescriptionInterfaceFullName >::ScalarNumber(this->Client);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsDescriptionInterfaceFullName >::Scalar(this->Client, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsDescriptionInterfaceFullName >::ScalarNumber(this->Server);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsDescriptionInterfaceFullName >::Scalar(this->Server, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<ConnectionIDType >::ScalarNumber(this->ConnectionID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<ConnectionIDType >::Scalar(this->ConnectionID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsDescriptionConnection index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsDescriptionConnection >::SerializeText(const mtsDescriptionConnection & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsDescriptionConnection::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsDescriptionInterfaceFullName >::SerializeText(this->Client, jsonValue["Client"]);
    cmnDataJSON<mtsDescriptionInterfaceFullName >::SerializeText(this->Server, jsonValue["Server"]);
    cmnDataJSON<ConnectionIDType >::SerializeText(this->ConnectionID, jsonValue["ConnectionID"]);
}
template<>
void cmnDataJSON<mtsDescriptionConnection >::DeSerializeText(mtsDescriptionConnection & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsDescriptionConnection::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Client"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsDescriptionInterfaceFullName >::DeSerializeText(this->Client, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsDescriptionInterfaceFullName>::DeSerializeText: empty JSON value for: Client");
    };
    field__cdg = jsonValue["Server"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsDescriptionInterfaceFullName >::DeSerializeText(this->Server, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsDescriptionInterfaceFullName>::DeSerializeText: empty JSON value for: Server");
    };
    field__cdg = jsonValue["ConnectionID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<ConnectionIDType >::DeSerializeText(this->ConnectionID, field__cdg);
    };
}
#endif // CISST_HAS_JSON


/* source line: 187 */
mtsComponentStatusControl::mtsComponentStatusControl(void):
    ProcessName()
    , ComponentName()
    , DelayInSecond(0.0)
    , Command()
{}

mtsComponentStatusControl::mtsComponentStatusControl(const mtsComponentStatusControl & other):
    ProcessName(other.ProcessName)
    , ComponentName(other.ComponentName)
    , DelayInSecond(other.DelayInSecond)
    , Command(other.Command)
{}

mtsComponentStatusControl & mtsComponentStatusControl::operator = (const mtsComponentStatusControl & other)
{
    ProcessName = other.ProcessName;
    ComponentName = other.ComponentName;
    DelayInSecond = other.DelayInSecond;
    Command = other.Command;
    return *this;
}

mtsComponentStatusControl::mtsComponentStatusControl(const std::string & newProcessName, const std::string & newComponentName, const double & newDelayInSecond, const ComponentStatusCommand & newCommand):
    ProcessName(newProcessName)
    , ComponentName(newComponentName)
    , DelayInSecond(newDelayInSecond)
    , Command(newCommand)
{}

mtsComponentStatusControl::~mtsComponentStatusControl(void){}


void mtsComponentStatusControl::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->ProcessName);
    cmnSerializeRaw(outputStream__cdg, this->ComponentName);
    cmnSerializeRaw(outputStream__cdg, this->DelayInSecond);
    cmnSerializeRaw(outputStream__cdg, this->Command);
}


void mtsComponentStatusControl::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->ProcessName);
    cmnDeSerializeRaw(inputStream__cdg, this->ComponentName);
    cmnDeSerializeRaw(inputStream__cdg, this->DelayInSecond);
    cmnDeSerializeRaw(inputStream__cdg, this->Command);
}


void mtsComponentStatusControl::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsComponentStatusControl::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsComponentStatusControl >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsComponentStatusControl >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 208 */
/* source line: 213 */
/* source line: 218 */
/* source line: 224 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsComponentStatusControl & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsComponentStatusControl & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsComponentStatusControl::Copy(const mtsComponentStatusControl & source__cdg) {
    cmnData<std::string >::Copy(this->ProcessName, source__cdg.ProcessName);
    cmnData<std::string >::Copy(this->ComponentName, source__cdg.ComponentName);
    cmnData<double >::Copy(this->DelayInSecond, source__cdg.DelayInSecond);
    cmnData<ComponentStatusCommand >::Copy(this->Command, source__cdg.Command);
}
void mtsComponentStatusControl::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->ProcessName, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->ComponentName, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->DelayInSecond, outputStream__cdg);
    cmnData<ComponentStatusCommand >::SerializeBinary(this->Command, outputStream__cdg);
}
void mtsComponentStatusControl::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->ProcessName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ComponentName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->DelayInSecond, inputStream__cdg, localFormat, remoteFormat);
    cmnData<ComponentStatusCommand >::DeSerializeBinary(this->Command, inputStream__cdg, localFormat, remoteFormat);
}
void mtsComponentStatusControl::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ProcessName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ComponentName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->DelayInSecond, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<ComponentStatusCommand >::SerializeText(this->Command, outputStream__cdg, delimiter__cdg);
}
std::string mtsComponentStatusControl::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ProcessName, delimiter__cdg, prefix__cdg + "ProcessName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ComponentName, delimiter__cdg, prefix__cdg + "ComponentName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->DelayInSecond, delimiter__cdg, prefix__cdg + "DelayInSecond");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<ComponentStatusCommand >::SerializeDescription(this->Command, delimiter__cdg, prefix__cdg + "Command");
    return description__cdg.str();
}
void mtsComponentStatusControl::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsComponentStatusControl");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ProcessName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsComponentStatusControl");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ComponentName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsComponentStatusControl");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->DelayInSecond, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsComponentStatusControl");
    }
    someData__cdg = true;
    cmnData<ComponentStatusCommand >::DeSerializeText(this->Command, inputStream__cdg, delimiter__cdg);
}
std::string mtsComponentStatusControl::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsComponentStatusControl" << std::endl;
    description__cdg << "  ProcessName:" << cmnData<std::string >::HumanReadable(this->ProcessName);
    description__cdg << "  ComponentName:" << cmnData<std::string >::HumanReadable(this->ComponentName);
    description__cdg << "  DelayInSecond:" << cmnData<double >::HumanReadable(this->DelayInSecond);
    description__cdg << "  Command:" << cmnData<ComponentStatusCommand >::HumanReadable(this->Command);
    return description__cdg.str();
}
bool mtsComponentStatusControl::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->ProcessName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ComponentName)
           && cmnData<double >::ScalarNumberIsFixed(this->DelayInSecond)
           && cmnData<ComponentStatusCommand >::ScalarNumberIsFixed(this->Command)
    ;
}
size_t mtsComponentStatusControl::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->ProcessName)
           + cmnData<std::string >::ScalarNumber(this->ComponentName)
           + cmnData<double >::ScalarNumber(this->DelayInSecond)
           + cmnData<ComponentStatusCommand >::ScalarNumber(this->Command)
    ;
}
std::string mtsComponentStatusControl::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ProcessName, index_cdg - baseIndex__cdg, prefix__cdg + "ProcessName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ComponentName, index_cdg - baseIndex__cdg, prefix__cdg + "ComponentName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->DelayInSecond);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->DelayInSecond, index_cdg - baseIndex__cdg, prefix__cdg + "DelayInSecond");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<ComponentStatusCommand >::ScalarNumber(this->Command);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<ComponentStatusCommand >::ScalarDescription(this->Command, index_cdg - baseIndex__cdg, prefix__cdg + "Command");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsComponentStatusControl index out of range"));
    return "";
}
double mtsComponentStatusControl::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ProcessName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ComponentName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->DelayInSecond);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->DelayInSecond, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<ComponentStatusCommand >::ScalarNumber(this->Command);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<ComponentStatusCommand >::Scalar(this->Command, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsComponentStatusControl index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsComponentStatusControl >::SerializeText(const mtsComponentStatusControl & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsComponentStatusControl::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::SerializeText(this->ComponentName, jsonValue["ComponentName"]);
    cmnDataJSON<double >::SerializeText(this->DelayInSecond, jsonValue["DelayInSecond"]);
    cmnDataJSON<ComponentStatusCommand >::SerializeText(this->Command, jsonValue["Command"]);
}
template<>
void cmnDataJSON<mtsComponentStatusControl >::DeSerializeText(mtsComponentStatusControl & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsComponentStatusControl::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["ProcessName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ProcessName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ProcessName");
    };
    field__cdg = jsonValue["ComponentName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ComponentName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ComponentName");
    };
    field__cdg = jsonValue["DelayInSecond"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->DelayInSecond, field__cdg);
    };
    field__cdg = jsonValue["Command"];
    if (!field__cdg.empty()) {
        cmnDataJSON<ComponentStatusCommand >::DeSerializeText(this->Command, field__cdg);
    } else {
        cmnThrow("cmnDataJson<ComponentStatusCommand>::DeSerializeText: empty JSON value for: Command");
    };
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_mtsComponentStatusControl_ComponentStatusCommand(const mtsComponentStatusControl::ComponentStatusCommand & data) {
    switch (data) {
        case mtsComponentStatusControl::COMPONENT_START:
            return "START";
            break;
        case mtsComponentStatusControl::COMPONENT_STOP:
            return "STOP";
            break;
        case mtsComponentStatusControl::COMPONENT_RESUME:
            return "RESUME";
            break;
        default: return "undefined enum mtsComponentStatusControl::ComponentStatusCommand";
            break;
    }
}

std::string mtsComponentStatusControl::ComponentStatusCommandToString(const mtsComponentStatusControl::ComponentStatusCommand & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case mtsComponentStatusControl::COMPONENT_START:
            return "COMPONENT_START";
            break;
        case mtsComponentStatusControl::COMPONENT_STOP:
            return "COMPONENT_STOP";
            break;
        case mtsComponentStatusControl::COMPONENT_RESUME:
            return "COMPONENT_RESUME";
            break;
        default:
            break;
    }
    cmnThrow("mtsComponentStatusControl::ComponentStatusCommandToString called with invalid enum");
    return "";
}

mtsComponentStatusControl::ComponentStatusCommand mtsComponentStatusControl::ComponentStatusCommandFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "COMPONENT_START") {
        return mtsComponentStatusControl::COMPONENT_START;
    };
    if (value == "COMPONENT_STOP") {
        return mtsComponentStatusControl::COMPONENT_STOP;
    };
    if (value == "COMPONENT_RESUME") {
        return mtsComponentStatusControl::COMPONENT_RESUME;
    };
    std::string message = "mtsComponentStatusControl::ComponentStatusCommandFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = ComponentStatusCommandVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<mtsComponentStatusControl::ComponentStatusCommand >(0);
}

const std::vector<int> & mtsComponentStatusControl::ComponentStatusCommandVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(COMPONENT_START));
        vectorInt.push_back(static_cast<int>(COMPONENT_STOP));
        vectorInt.push_back(static_cast<int>(COMPONENT_RESUME));
    }
    return vectorInt;
}

const std::vector<std::string> & mtsComponentStatusControl::ComponentStatusCommandVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("COMPONENT_START");
        vectorString.push_back("COMPONENT_STOP");
        vectorString.push_back("COMPONENT_RESUME");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsComponentStatusControl::ComponentStatusCommand, int);
#endif // CISST_HAS_JSON

/* source line: 232 */
mtsComponentStateChange::mtsComponentStateChange(void):
    ProcessName()
    , ComponentName()
    , NewState()
{}

mtsComponentStateChange::mtsComponentStateChange(const mtsComponentStateChange & other):
    ProcessName(other.ProcessName)
    , ComponentName(other.ComponentName)
    , NewState(other.NewState)
{}

mtsComponentStateChange & mtsComponentStateChange::operator = (const mtsComponentStateChange & other)
{
    ProcessName = other.ProcessName;
    ComponentName = other.ComponentName;
    NewState = other.NewState;
    return *this;
}

mtsComponentStateChange::mtsComponentStateChange(const std::string & newProcessName, const std::string & newComponentName, const mtsComponentState & newNewState):
    ProcessName(newProcessName)
    , ComponentName(newComponentName)
    , NewState(newNewState)
{}

mtsComponentStateChange::~mtsComponentStateChange(void){}


void mtsComponentStateChange::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->ProcessName);
    cmnSerializeRaw(outputStream__cdg, this->ComponentName);
    cmnSerializeRaw(outputStream__cdg, this->NewState);
}


void mtsComponentStateChange::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->ProcessName);
    cmnDeSerializeRaw(inputStream__cdg, this->ComponentName);
    cmnDeSerializeRaw(inputStream__cdg, this->NewState);
}


void mtsComponentStateChange::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsComponentStateChange::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsComponentStateChange >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsComponentStateChange >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 237 */
/* source line: 242 */
/* source line: 247 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsComponentStateChange & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsComponentStateChange & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsComponentStateChange::Copy(const mtsComponentStateChange & source__cdg) {
    cmnData<std::string >::Copy(this->ProcessName, source__cdg.ProcessName);
    cmnData<std::string >::Copy(this->ComponentName, source__cdg.ComponentName);
    cmnData<mtsComponentState >::Copy(this->NewState, source__cdg.NewState);
}
void mtsComponentStateChange::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->ProcessName, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->ComponentName, outputStream__cdg);
    cmnData<mtsComponentState >::SerializeBinary(this->NewState, outputStream__cdg);
}
void mtsComponentStateChange::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->ProcessName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ComponentName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsComponentState >::DeSerializeBinary(this->NewState, inputStream__cdg, localFormat, remoteFormat);
}
void mtsComponentStateChange::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ProcessName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ComponentName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsComponentState >::SerializeText(this->NewState, outputStream__cdg, delimiter__cdg);
}
std::string mtsComponentStateChange::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ProcessName, delimiter__cdg, prefix__cdg + "ProcessName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ComponentName, delimiter__cdg, prefix__cdg + "ComponentName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsComponentState >::SerializeDescription(this->NewState, delimiter__cdg, prefix__cdg + "NewState");
    return description__cdg.str();
}
void mtsComponentStateChange::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsComponentStateChange");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ProcessName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsComponentStateChange");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ComponentName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsComponentStateChange");
    }
    someData__cdg = true;
    cmnData<mtsComponentState >::DeSerializeText(this->NewState, inputStream__cdg, delimiter__cdg);
}
std::string mtsComponentStateChange::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsComponentStateChange" << std::endl;
    description__cdg << "  ProcessName:" << cmnData<std::string >::HumanReadable(this->ProcessName);
    description__cdg << "  ComponentName:" << cmnData<std::string >::HumanReadable(this->ComponentName);
    description__cdg << "  NewState:" << cmnData<mtsComponentState >::HumanReadable(this->NewState);
    return description__cdg.str();
}
bool mtsComponentStateChange::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->ProcessName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ComponentName)
           && cmnData<mtsComponentState >::ScalarNumberIsFixed(this->NewState)
    ;
}
size_t mtsComponentStateChange::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->ProcessName)
           + cmnData<std::string >::ScalarNumber(this->ComponentName)
           + cmnData<mtsComponentState >::ScalarNumber(this->NewState)
    ;
}
std::string mtsComponentStateChange::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ProcessName, index_cdg - baseIndex__cdg, prefix__cdg + "ProcessName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ComponentName, index_cdg - baseIndex__cdg, prefix__cdg + "ComponentName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsComponentState >::ScalarNumber(this->NewState);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsComponentState >::ScalarDescription(this->NewState, index_cdg - baseIndex__cdg, prefix__cdg + "NewState");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsComponentStateChange index out of range"));
    return "";
}
double mtsComponentStateChange::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ProcessName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ComponentName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ComponentName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsComponentState >::ScalarNumber(this->NewState);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsComponentState >::Scalar(this->NewState, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsComponentStateChange index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsComponentStateChange >::SerializeText(const mtsComponentStateChange & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsComponentStateChange::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::SerializeText(this->ComponentName, jsonValue["ComponentName"]);
    cmnDataJSON<mtsComponentState >::SerializeText(this->NewState, jsonValue["NewState"]);
}
template<>
void cmnDataJSON<mtsComponentStateChange >::DeSerializeText(mtsComponentStateChange & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsComponentStateChange::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["ProcessName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ProcessName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ProcessName");
    };
    field__cdg = jsonValue["ComponentName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ComponentName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ComponentName");
    };
    field__cdg = jsonValue["NewState"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsComponentState >::DeSerializeText(this->NewState, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsComponentState>::DeSerializeText: empty JSON value for: NewState");
    };
}
#endif // CISST_HAS_JSON

/* source line: 255 */
mtsDescriptionLoadLibrary::mtsDescriptionLoadLibrary(void):
    ProcessName()
    , LibraryName()
{}

mtsDescriptionLoadLibrary::mtsDescriptionLoadLibrary(const mtsDescriptionLoadLibrary & other):
    ProcessName(other.ProcessName)
    , LibraryName(other.LibraryName)
{}

mtsDescriptionLoadLibrary & mtsDescriptionLoadLibrary::operator = (const mtsDescriptionLoadLibrary & other)
{
    ProcessName = other.ProcessName;
    LibraryName = other.LibraryName;
    return *this;
}

mtsDescriptionLoadLibrary::mtsDescriptionLoadLibrary(const std::string & newProcessName, const std::string & newLibraryName):
    ProcessName(newProcessName)
    , LibraryName(newLibraryName)
{}

mtsDescriptionLoadLibrary::~mtsDescriptionLoadLibrary(void){}


void mtsDescriptionLoadLibrary::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->ProcessName);
    cmnSerializeRaw(outputStream__cdg, this->LibraryName);
}


void mtsDescriptionLoadLibrary::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->ProcessName);
    cmnDeSerializeRaw(inputStream__cdg, this->LibraryName);
}


void mtsDescriptionLoadLibrary::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsDescriptionLoadLibrary::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsDescriptionLoadLibrary >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsDescriptionLoadLibrary >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 260 */
/* source line: 265 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsDescriptionLoadLibrary & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsDescriptionLoadLibrary & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsDescriptionLoadLibrary::Copy(const mtsDescriptionLoadLibrary & source__cdg) {
    cmnData<std::string >::Copy(this->ProcessName, source__cdg.ProcessName);
    cmnData<std::string >::Copy(this->LibraryName, source__cdg.LibraryName);
}
void mtsDescriptionLoadLibrary::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->ProcessName, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->LibraryName, outputStream__cdg);
}
void mtsDescriptionLoadLibrary::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->ProcessName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->LibraryName, inputStream__cdg, localFormat, remoteFormat);
}
void mtsDescriptionLoadLibrary::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ProcessName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->LibraryName, outputStream__cdg, delimiter__cdg);
}
std::string mtsDescriptionLoadLibrary::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ProcessName, delimiter__cdg, prefix__cdg + "ProcessName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->LibraryName, delimiter__cdg, prefix__cdg + "LibraryName");
    return description__cdg.str();
}
void mtsDescriptionLoadLibrary::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionLoadLibrary");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ProcessName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsDescriptionLoadLibrary");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->LibraryName, inputStream__cdg, delimiter__cdg);
}
std::string mtsDescriptionLoadLibrary::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsDescriptionLoadLibrary" << std::endl;
    description__cdg << "  ProcessName:" << cmnData<std::string >::HumanReadable(this->ProcessName);
    description__cdg << "  LibraryName:" << cmnData<std::string >::HumanReadable(this->LibraryName);
    return description__cdg.str();
}
bool mtsDescriptionLoadLibrary::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->ProcessName)
           && cmnData<std::string >::ScalarNumberIsFixed(this->LibraryName)
    ;
}
size_t mtsDescriptionLoadLibrary::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->ProcessName)
           + cmnData<std::string >::ScalarNumber(this->LibraryName)
    ;
}
std::string mtsDescriptionLoadLibrary::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ProcessName, index_cdg - baseIndex__cdg, prefix__cdg + "ProcessName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->LibraryName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->LibraryName, index_cdg - baseIndex__cdg, prefix__cdg + "LibraryName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsDescriptionLoadLibrary index out of range"));
    return "";
}
double mtsDescriptionLoadLibrary::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ProcessName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ProcessName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->LibraryName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->LibraryName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsDescriptionLoadLibrary index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsDescriptionLoadLibrary >::SerializeText(const mtsDescriptionLoadLibrary & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsDescriptionLoadLibrary::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->ProcessName, jsonValue["ProcessName"]);
    cmnDataJSON<std::string >::SerializeText(this->LibraryName, jsonValue["LibraryName"]);
}
template<>
void cmnDataJSON<mtsDescriptionLoadLibrary >::DeSerializeText(mtsDescriptionLoadLibrary & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsDescriptionLoadLibrary::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["ProcessName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ProcessName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ProcessName");
    };
    field__cdg = jsonValue["LibraryName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->LibraryName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: LibraryName");
    };
}
#endif // CISST_HAS_JSON

/* source line: 273 */
mtsEndUserInterfaceArg::mtsEndUserInterfaceArg(void):
    OriginalInterface()
    , UserName()
    , EndUserInterface()
{}

mtsEndUserInterfaceArg::mtsEndUserInterfaceArg(const mtsEndUserInterfaceArg & other):
    OriginalInterface(other.OriginalInterface)
    , UserName(other.UserName)
    , EndUserInterface(other.EndUserInterface)
{}

mtsEndUserInterfaceArg & mtsEndUserInterfaceArg::operator = (const mtsEndUserInterfaceArg & other)
{
    OriginalInterface = other.OriginalInterface;
    UserName = other.UserName;
    EndUserInterface = other.EndUserInterface;
    return *this;
}

mtsEndUserInterfaceArg::mtsEndUserInterfaceArg(const size_t & newOriginalInterface, const std::string & newUserName, const size_t & newEndUserInterface):
    OriginalInterface(newOriginalInterface)
    , UserName(newUserName)
    , EndUserInterface(newEndUserInterface)
{}

mtsEndUserInterfaceArg::~mtsEndUserInterfaceArg(void){}


void mtsEndUserInterfaceArg::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeSizeRaw(outputStream__cdg, this->OriginalInterface);
    cmnSerializeRaw(outputStream__cdg, this->UserName);
    cmnSerializeSizeRaw(outputStream__cdg, this->EndUserInterface);
}


void mtsEndUserInterfaceArg::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeSizeRaw(inputStream__cdg, this->OriginalInterface);
    cmnDeSerializeRaw(inputStream__cdg, this->UserName);
    cmnDeSerializeSizeRaw(inputStream__cdg, this->EndUserInterface);
}


void mtsEndUserInterfaceArg::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsEndUserInterfaceArg::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsEndUserInterfaceArg >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsEndUserInterfaceArg >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 278 */
/* source line: 283 */
/* source line: 288 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsEndUserInterfaceArg & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsEndUserInterfaceArg & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsEndUserInterfaceArg::Copy(const mtsEndUserInterfaceArg & source__cdg) {
    cmnData<size_t >::Copy(this->OriginalInterface, source__cdg.OriginalInterface);
    cmnData<std::string >::Copy(this->UserName, source__cdg.UserName);
    cmnData<size_t >::Copy(this->EndUserInterface, source__cdg.EndUserInterface);
}
void mtsEndUserInterfaceArg::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<size_t >::SerializeBinary(this->OriginalInterface, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->UserName, outputStream__cdg);
    cmnData<size_t >::SerializeBinary(this->EndUserInterface, outputStream__cdg);
}
void mtsEndUserInterfaceArg::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnDataDeSerializeBinary_size_t(this->OriginalInterface, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->UserName, inputStream__cdg, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->EndUserInterface, inputStream__cdg, localFormat, remoteFormat);
}
void mtsEndUserInterfaceArg::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<size_t >::SerializeText(this->OriginalInterface, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->UserName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<size_t >::SerializeText(this->EndUserInterface, outputStream__cdg, delimiter__cdg);
}
std::string mtsEndUserInterfaceArg::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<size_t >::SerializeDescription(this->OriginalInterface, delimiter__cdg, prefix__cdg + "OriginalInterface");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->UserName, delimiter__cdg, prefix__cdg + "UserName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<size_t >::SerializeDescription(this->EndUserInterface, delimiter__cdg, prefix__cdg + "EndUserInterface");
    return description__cdg.str();
}
void mtsEndUserInterfaceArg::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsEndUserInterfaceArg");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->OriginalInterface, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsEndUserInterfaceArg");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->UserName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsEndUserInterfaceArg");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->EndUserInterface, inputStream__cdg, delimiter__cdg);
}
std::string mtsEndUserInterfaceArg::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsEndUserInterfaceArg" << std::endl;
    description__cdg << "  OriginalInterface:" << cmnData<size_t >::HumanReadable(this->OriginalInterface);
    description__cdg << "  UserName:" << cmnData<std::string >::HumanReadable(this->UserName);
    description__cdg << "  EndUserInterface:" << cmnData<size_t >::HumanReadable(this->EndUserInterface);
    return description__cdg.str();
}
bool mtsEndUserInterfaceArg::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<size_t >::ScalarNumberIsFixed(this->OriginalInterface)
           && cmnData<std::string >::ScalarNumberIsFixed(this->UserName)
           && cmnData<size_t >::ScalarNumberIsFixed(this->EndUserInterface)
    ;
}
size_t mtsEndUserInterfaceArg::ScalarNumber(void) const {
    return 0
           + cmnData<size_t >::ScalarNumber(this->OriginalInterface)
           + cmnData<std::string >::ScalarNumber(this->UserName)
           + cmnData<size_t >::ScalarNumber(this->EndUserInterface)
    ;
}
std::string mtsEndUserInterfaceArg::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->OriginalInterface);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::ScalarDescription(this->OriginalInterface, index_cdg - baseIndex__cdg, prefix__cdg + "OriginalInterface");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->UserName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->UserName, index_cdg - baseIndex__cdg, prefix__cdg + "UserName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->EndUserInterface);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::ScalarDescription(this->EndUserInterface, index_cdg - baseIndex__cdg, prefix__cdg + "EndUserInterface");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsEndUserInterfaceArg index out of range"));
    return "";
}
double mtsEndUserInterfaceArg::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->OriginalInterface);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::Scalar(this->OriginalInterface, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->UserName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->UserName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->EndUserInterface);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::Scalar(this->EndUserInterface, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsEndUserInterfaceArg index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsEndUserInterfaceArg >::SerializeText(const mtsEndUserInterfaceArg & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsEndUserInterfaceArg::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<size_t >::SerializeText(this->OriginalInterface, jsonValue["OriginalInterface"]);
    cmnDataJSON<std::string >::SerializeText(this->UserName, jsonValue["UserName"]);
    cmnDataJSON<size_t >::SerializeText(this->EndUserInterface, jsonValue["EndUserInterface"]);
}
template<>
void cmnDataJSON<mtsEndUserInterfaceArg >::DeSerializeText(mtsEndUserInterfaceArg & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsEndUserInterfaceArg::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["OriginalInterface"];
    if (!field__cdg.empty()) {
        cmnDataJSON<size_t >::DeSerializeText(this->OriginalInterface, field__cdg);
    } else {
        cmnThrow("cmnDataJson<size_t>::DeSerializeText: empty JSON value for: OriginalInterface");
    };
    field__cdg = jsonValue["UserName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->UserName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: UserName");
    };
    field__cdg = jsonValue["EndUserInterface"];
    if (!field__cdg.empty()) {
        cmnDataJSON<size_t >::DeSerializeText(this->EndUserInterface, field__cdg);
    } else {
        cmnThrow("cmnDataJson<size_t>::DeSerializeText: empty JSON value for: EndUserInterface");
    };
}
#endif // CISST_HAS_JSON

/* source line: 296 */
mtsMessage::mtsMessage(void):
    Message()
    , Counter(0)
    , Timestamp()
{}

mtsMessage::mtsMessage(const mtsMessage & other):
    Message(other.Message)
    , Counter(other.Counter)
    , Timestamp(other.Timestamp)
{}

mtsMessage & mtsMessage::operator = (const mtsMessage & other)
{
    Message = other.Message;
    Counter = other.Counter;
    Timestamp = other.Timestamp;
    return *this;
}

mtsMessage::~mtsMessage(void){}


void mtsMessage::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Message);
    cmnSerializeSizeRaw(outputStream__cdg, this->Counter);
    cmnSerializeRaw(outputStream__cdg, this->Timestamp);
}


void mtsMessage::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Message);
    cmnDeSerializeSizeRaw(inputStream__cdg, this->Counter);
    cmnDeSerializeRaw(inputStream__cdg, this->Timestamp);
}


void mtsMessage::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsMessage::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsMessage >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsMessage >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 300 */
/* source line: 305 */
/* source line: 311 */

/* accessors is set to: set-get */
void mtsMessage::GetTimestamp(double & placeHolder) const
{
    placeHolder = this->Timestamp;
}

void mtsMessage::SetTimestamp(const double & newValue)
{
    this->Timestamp = newValue;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsMessage & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsMessage & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsMessage::Copy(const mtsMessage & source__cdg) {
    cmnData<std::string >::Copy(this->Message, source__cdg.Message);
    cmnData<size_t >::Copy(this->Counter, source__cdg.Counter);
    cmnData<double >::Copy(this->Timestamp, source__cdg.Timestamp);
}
void mtsMessage::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Message, outputStream__cdg);
    cmnData<size_t >::SerializeBinary(this->Counter, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->Timestamp, outputStream__cdg);
}
void mtsMessage::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Message, inputStream__cdg, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->Counter, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->Timestamp, inputStream__cdg, localFormat, remoteFormat);
}
void mtsMessage::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Message, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<size_t >::SerializeText(this->Counter, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->Timestamp, outputStream__cdg, delimiter__cdg);
}
std::string mtsMessage::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Message, delimiter__cdg, prefix__cdg + "Message");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<size_t >::SerializeDescription(this->Counter, delimiter__cdg, prefix__cdg + "Counter");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->Timestamp, delimiter__cdg, prefix__cdg + "Timestamp");
    return description__cdg.str();
}
void mtsMessage::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsMessage");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Message, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsMessage");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->Counter, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsMessage");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->Timestamp, inputStream__cdg, delimiter__cdg);
}
std::string mtsMessage::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsMessage" << std::endl;
    description__cdg << "  Message:" << cmnData<std::string >::HumanReadable(this->Message);
    description__cdg << "  Counter:" << cmnData<size_t >::HumanReadable(this->Counter);
    description__cdg << "  Timestamp:" << cmnData<double >::HumanReadable(this->Timestamp);
    return description__cdg.str();
}
bool mtsMessage::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Message)
           && cmnData<size_t >::ScalarNumberIsFixed(this->Counter)
           && cmnData<double >::ScalarNumberIsFixed(this->Timestamp)
    ;
}
size_t mtsMessage::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Message)
           + cmnData<size_t >::ScalarNumber(this->Counter)
           + cmnData<double >::ScalarNumber(this->Timestamp)
    ;
}
std::string mtsMessage::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Message);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Message, index_cdg - baseIndex__cdg, prefix__cdg + "Message");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->Counter);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::ScalarDescription(this->Counter, index_cdg - baseIndex__cdg, prefix__cdg + "Counter");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Timestamp);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->Timestamp, index_cdg - baseIndex__cdg, prefix__cdg + "Timestamp");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsMessage index out of range"));
    return "";
}
double mtsMessage::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Message);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Message, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->Counter);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::Scalar(this->Counter, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Timestamp);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->Timestamp, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsMessage index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsMessage >::SerializeText(const mtsMessage & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsMessage::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Message, jsonValue["Message"]);
    cmnDataJSON<size_t >::SerializeText(this->Counter, jsonValue["Counter"]);
    cmnDataJSON<double >::SerializeText(this->Timestamp, jsonValue["Timestamp"]);
}
template<>
void cmnDataJSON<mtsMessage >::DeSerializeText(mtsMessage & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsMessage::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Message"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Message, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Message");
    };
    field__cdg = jsonValue["Counter"];
    if (!field__cdg.empty()) {
        cmnDataJSON<size_t >::DeSerializeText(this->Counter, field__cdg);
    };
    field__cdg = jsonValue["Timestamp"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->Timestamp, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: Timestamp");
    };
}
#endif // CISST_HAS_JSON

/* source line: 321 */

    #include <cisstMultiTask/mtsManagerLocal.h>
    void mtsMessage::SetMessage(const std::string & message) {
        Timestamp = mtsComponentManager::GetInstance()->GetTimeServer().GetAbsoluteTimeInSeconds();
        Counter++;
        Message = message;
    }

/* source line: 331 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsTaskConstructorArgProxy);

mtsTaskConstructorArg::mtsTaskConstructorArg(void):
    mtsGenericObject()
    , Name()
    , StateTableSize(256)
{}

mtsTaskConstructorArg::mtsTaskConstructorArg(const mtsTaskConstructorArg & other):
    mtsGenericObject(other)
    , Name(other.Name)
    , StateTableSize(other.StateTableSize)
{}

mtsTaskConstructorArg & mtsTaskConstructorArg::operator = (const mtsTaskConstructorArg & other)
{
    mtsGenericObject::operator = (other);
    Name = other.Name;
    StateTableSize = other.StateTableSize;
    return *this;
}

mtsTaskConstructorArg::mtsTaskConstructorArg(const std::string & newName, const unsigned int & newStateTableSize):
    mtsGenericObject()
    , Name(newName)
    , StateTableSize(newStateTableSize)
{}

mtsTaskConstructorArg::~mtsTaskConstructorArg(void){}


void mtsTaskConstructorArg::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->StateTableSize);
}


void mtsTaskConstructorArg::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->StateTableSize);
}


void mtsTaskConstructorArg::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsTaskConstructorArg::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsTaskConstructorArg >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsTaskConstructorArg >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 338 */
/* source line: 343 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsTaskConstructorArg & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsTaskConstructorArg & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsTaskConstructorArg::Copy(const mtsTaskConstructorArg & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<unsigned int >::Copy(this->StateTableSize, source__cdg.StateTableSize);
}
void mtsTaskConstructorArg::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<unsigned int >::SerializeBinary(this->StateTableSize, outputStream__cdg);
}
void mtsTaskConstructorArg::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->StateTableSize, inputStream__cdg, localFormat, remoteFormat);
}
void mtsTaskConstructorArg::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<unsigned int >::SerializeText(this->StateTableSize, outputStream__cdg, delimiter__cdg);
}
std::string mtsTaskConstructorArg::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsGenericObject >::SerializeDescription(*this, delimiter__cdg, userDescription__cdg);
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<unsigned int >::SerializeDescription(this->StateTableSize, delimiter__cdg, prefix__cdg + "StateTableSize");
    return description__cdg.str();
}
void mtsTaskConstructorArg::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsTaskConstructorArg");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsTaskConstructorArg");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsTaskConstructorArg");
    }
    someData__cdg = true;
    cmnData<unsigned int >::DeSerializeText(this->StateTableSize, inputStream__cdg, delimiter__cdg);
}
std::string mtsTaskConstructorArg::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsTaskConstructorArg" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  StateTableSize:" << cmnData<unsigned int >::HumanReadable(this->StateTableSize);
    return description__cdg.str();
}
bool mtsTaskConstructorArg::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->StateTableSize)
    ;
}
size_t mtsTaskConstructorArg::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<unsigned int >::ScalarNumber(this->StateTableSize)
    ;
}
std::string mtsTaskConstructorArg::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<unsigned int >::ScalarNumber(this->StateTableSize);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<unsigned int >::ScalarDescription(this->StateTableSize, index_cdg - baseIndex__cdg, prefix__cdg + "StateTableSize");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsTaskConstructorArg index out of range"));
    return "";
}
double mtsTaskConstructorArg::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<unsigned int >::ScalarNumber(this->StateTableSize);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<unsigned int >::Scalar(this->StateTableSize, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsTaskConstructorArg index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsTaskConstructorArg >::SerializeText(const mtsTaskConstructorArg & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsTaskConstructorArg::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<unsigned int >::SerializeText(this->StateTableSize, jsonValue["StateTableSize"]);
}
template<>
void cmnDataJSON<mtsTaskConstructorArg >::DeSerializeText(mtsTaskConstructorArg & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsTaskConstructorArg::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["StateTableSize"];
    if (!field__cdg.empty()) {
        cmnDataJSON<unsigned int >::DeSerializeText(this->StateTableSize, field__cdg);
    };
}
#endif // CISST_HAS_JSON


/* source line: 358 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsTaskContinuousConstructorArgProxy);

mtsTaskContinuousConstructorArg::mtsTaskContinuousConstructorArg(void):
    mtsGenericObject()
    , Name()
    , StateTableSize(256)
    , NewThread(true)
{}

mtsTaskContinuousConstructorArg::mtsTaskContinuousConstructorArg(const mtsTaskContinuousConstructorArg & other):
    mtsGenericObject(other)
    , Name(other.Name)
    , StateTableSize(other.StateTableSize)
    , NewThread(other.NewThread)
{}

mtsTaskContinuousConstructorArg & mtsTaskContinuousConstructorArg::operator = (const mtsTaskContinuousConstructorArg & other)
{
    mtsGenericObject::operator = (other);
    Name = other.Name;
    StateTableSize = other.StateTableSize;
    NewThread = other.NewThread;
    return *this;
}

mtsTaskContinuousConstructorArg::mtsTaskContinuousConstructorArg(const std::string & newName, const unsigned int & newStateTableSize, const bool & newNewThread):
    mtsGenericObject()
    , Name(newName)
    , StateTableSize(newStateTableSize)
    , NewThread(newNewThread)
{}

mtsTaskContinuousConstructorArg::~mtsTaskContinuousConstructorArg(void){}


void mtsTaskContinuousConstructorArg::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->StateTableSize);
    cmnSerializeRaw(outputStream__cdg, this->NewThread);
}


void mtsTaskContinuousConstructorArg::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->StateTableSize);
    cmnDeSerializeRaw(inputStream__cdg, this->NewThread);
}


void mtsTaskContinuousConstructorArg::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsTaskContinuousConstructorArg::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsTaskContinuousConstructorArg >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsTaskContinuousConstructorArg >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 365 */
/* source line: 370 */
/* source line: 376 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsTaskContinuousConstructorArg & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsTaskContinuousConstructorArg & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsTaskContinuousConstructorArg::Copy(const mtsTaskContinuousConstructorArg & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<unsigned int >::Copy(this->StateTableSize, source__cdg.StateTableSize);
    cmnData<bool >::Copy(this->NewThread, source__cdg.NewThread);
}
void mtsTaskContinuousConstructorArg::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<unsigned int >::SerializeBinary(this->StateTableSize, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->NewThread, outputStream__cdg);
}
void mtsTaskContinuousConstructorArg::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->StateTableSize, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->NewThread, inputStream__cdg, localFormat, remoteFormat);
}
void mtsTaskContinuousConstructorArg::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<unsigned int >::SerializeText(this->StateTableSize, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->NewThread, outputStream__cdg, delimiter__cdg);
}
std::string mtsTaskContinuousConstructorArg::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsGenericObject >::SerializeDescription(*this, delimiter__cdg, userDescription__cdg);
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<unsigned int >::SerializeDescription(this->StateTableSize, delimiter__cdg, prefix__cdg + "StateTableSize");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->NewThread, delimiter__cdg, prefix__cdg + "NewThread");
    return description__cdg.str();
}
void mtsTaskContinuousConstructorArg::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsTaskContinuousConstructorArg");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsTaskContinuousConstructorArg");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsTaskContinuousConstructorArg");
    }
    someData__cdg = true;
    cmnData<unsigned int >::DeSerializeText(this->StateTableSize, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsTaskContinuousConstructorArg");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->NewThread, inputStream__cdg, delimiter__cdg);
}
std::string mtsTaskContinuousConstructorArg::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsTaskContinuousConstructorArg" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  StateTableSize:" << cmnData<unsigned int >::HumanReadable(this->StateTableSize);
    description__cdg << "  NewThread:" << cmnData<bool >::HumanReadable(this->NewThread);
    return description__cdg.str();
}
bool mtsTaskContinuousConstructorArg::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->StateTableSize)
           && cmnData<bool >::ScalarNumberIsFixed(this->NewThread)
    ;
}
size_t mtsTaskContinuousConstructorArg::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<unsigned int >::ScalarNumber(this->StateTableSize)
           + cmnData<bool >::ScalarNumber(this->NewThread)
    ;
}
std::string mtsTaskContinuousConstructorArg::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<unsigned int >::ScalarNumber(this->StateTableSize);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<unsigned int >::ScalarDescription(this->StateTableSize, index_cdg - baseIndex__cdg, prefix__cdg + "StateTableSize");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->NewThread);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->NewThread, index_cdg - baseIndex__cdg, prefix__cdg + "NewThread");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsTaskContinuousConstructorArg index out of range"));
    return "";
}
double mtsTaskContinuousConstructorArg::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<unsigned int >::ScalarNumber(this->StateTableSize);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<unsigned int >::Scalar(this->StateTableSize, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->NewThread);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->NewThread, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsTaskContinuousConstructorArg index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsTaskContinuousConstructorArg >::SerializeText(const mtsTaskContinuousConstructorArg & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsTaskContinuousConstructorArg::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<unsigned int >::SerializeText(this->StateTableSize, jsonValue["StateTableSize"]);
    cmnDataJSON<bool >::SerializeText(this->NewThread, jsonValue["NewThread"]);
}
template<>
void cmnDataJSON<mtsTaskContinuousConstructorArg >::DeSerializeText(mtsTaskContinuousConstructorArg & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsTaskContinuousConstructorArg::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["StateTableSize"];
    if (!field__cdg.empty()) {
        cmnDataJSON<unsigned int >::DeSerializeText(this->StateTableSize, field__cdg);
    };
    field__cdg = jsonValue["NewThread"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->NewThread, field__cdg);
    };
}
#endif // CISST_HAS_JSON


/* source line: 391 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsTaskPeriodicConstructorArgProxy);

mtsTaskPeriodicConstructorArg::mtsTaskPeriodicConstructorArg(void):
    mtsGenericObject()
    , Name()
    , Period()
    , IsHardRealTime(false)
    , StateTableSize(256)
{}

mtsTaskPeriodicConstructorArg::mtsTaskPeriodicConstructorArg(const mtsTaskPeriodicConstructorArg & other):
    mtsGenericObject(other)
    , Name(other.Name)
    , Period(other.Period)
    , IsHardRealTime(other.IsHardRealTime)
    , StateTableSize(other.StateTableSize)
{}

mtsTaskPeriodicConstructorArg & mtsTaskPeriodicConstructorArg::operator = (const mtsTaskPeriodicConstructorArg & other)
{
    mtsGenericObject::operator = (other);
    Name = other.Name;
    Period = other.Period;
    IsHardRealTime = other.IsHardRealTime;
    StateTableSize = other.StateTableSize;
    return *this;
}

mtsTaskPeriodicConstructorArg::mtsTaskPeriodicConstructorArg(const std::string & newName, const double & newPeriod, const bool & newIsHardRealTime, const unsigned int & newStateTableSize):
    mtsGenericObject()
    , Name(newName)
    , Period(newPeriod)
    , IsHardRealTime(newIsHardRealTime)
    , StateTableSize(newStateTableSize)
{}

mtsTaskPeriodicConstructorArg::~mtsTaskPeriodicConstructorArg(void){}


void mtsTaskPeriodicConstructorArg::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->Period);
    cmnSerializeRaw(outputStream__cdg, this->IsHardRealTime);
    cmnSerializeRaw(outputStream__cdg, this->StateTableSize);
}


void mtsTaskPeriodicConstructorArg::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->Period);
    cmnDeSerializeRaw(inputStream__cdg, this->IsHardRealTime);
    cmnDeSerializeRaw(inputStream__cdg, this->StateTableSize);
}


void mtsTaskPeriodicConstructorArg::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsTaskPeriodicConstructorArg::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsTaskPeriodicConstructorArg >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsTaskPeriodicConstructorArg >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 398 */
/* source line: 403 */
/* source line: 408 */
/* source line: 414 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsTaskPeriodicConstructorArg & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsTaskPeriodicConstructorArg & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsTaskPeriodicConstructorArg::Copy(const mtsTaskPeriodicConstructorArg & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<double >::Copy(this->Period, source__cdg.Period);
    cmnData<bool >::Copy(this->IsHardRealTime, source__cdg.IsHardRealTime);
    cmnData<unsigned int >::Copy(this->StateTableSize, source__cdg.StateTableSize);
}
void mtsTaskPeriodicConstructorArg::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->Period, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->IsHardRealTime, outputStream__cdg);
    cmnData<unsigned int >::SerializeBinary(this->StateTableSize, outputStream__cdg);
}
void mtsTaskPeriodicConstructorArg::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->Period, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->IsHardRealTime, inputStream__cdg, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->StateTableSize, inputStream__cdg, localFormat, remoteFormat);
}
void mtsTaskPeriodicConstructorArg::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->Period, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->IsHardRealTime, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<unsigned int >::SerializeText(this->StateTableSize, outputStream__cdg, delimiter__cdg);
}
std::string mtsTaskPeriodicConstructorArg::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsGenericObject >::SerializeDescription(*this, delimiter__cdg, userDescription__cdg);
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->Period, delimiter__cdg, prefix__cdg + "Period");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->IsHardRealTime, delimiter__cdg, prefix__cdg + "IsHardRealTime");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<unsigned int >::SerializeDescription(this->StateTableSize, delimiter__cdg, prefix__cdg + "StateTableSize");
    return description__cdg.str();
}
void mtsTaskPeriodicConstructorArg::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsTaskPeriodicConstructorArg");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsTaskPeriodicConstructorArg");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsTaskPeriodicConstructorArg");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->Period, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsTaskPeriodicConstructorArg");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->IsHardRealTime, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsTaskPeriodicConstructorArg");
    }
    someData__cdg = true;
    cmnData<unsigned int >::DeSerializeText(this->StateTableSize, inputStream__cdg, delimiter__cdg);
}
std::string mtsTaskPeriodicConstructorArg::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsTaskPeriodicConstructorArg" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  Period:" << cmnData<double >::HumanReadable(this->Period);
    description__cdg << "  IsHardRealTime:" << cmnData<bool >::HumanReadable(this->IsHardRealTime);
    description__cdg << "  StateTableSize:" << cmnData<unsigned int >::HumanReadable(this->StateTableSize);
    return description__cdg.str();
}
bool mtsTaskPeriodicConstructorArg::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<double >::ScalarNumberIsFixed(this->Period)
           && cmnData<bool >::ScalarNumberIsFixed(this->IsHardRealTime)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->StateTableSize)
    ;
}
size_t mtsTaskPeriodicConstructorArg::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<double >::ScalarNumber(this->Period)
           + cmnData<bool >::ScalarNumber(this->IsHardRealTime)
           + cmnData<unsigned int >::ScalarNumber(this->StateTableSize)
    ;
}
std::string mtsTaskPeriodicConstructorArg::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Period);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->Period, index_cdg - baseIndex__cdg, prefix__cdg + "Period");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->IsHardRealTime);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->IsHardRealTime, index_cdg - baseIndex__cdg, prefix__cdg + "IsHardRealTime");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<unsigned int >::ScalarNumber(this->StateTableSize);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<unsigned int >::ScalarDescription(this->StateTableSize, index_cdg - baseIndex__cdg, prefix__cdg + "StateTableSize");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsTaskPeriodicConstructorArg index out of range"));
    return "";
}
double mtsTaskPeriodicConstructorArg::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Period);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->Period, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->IsHardRealTime);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->IsHardRealTime, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<unsigned int >::ScalarNumber(this->StateTableSize);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<unsigned int >::Scalar(this->StateTableSize, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsTaskPeriodicConstructorArg index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsTaskPeriodicConstructorArg >::SerializeText(const mtsTaskPeriodicConstructorArg & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsTaskPeriodicConstructorArg::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<double >::SerializeText(this->Period, jsonValue["Period"]);
    cmnDataJSON<bool >::SerializeText(this->IsHardRealTime, jsonValue["IsHardRealTime"]);
    cmnDataJSON<unsigned int >::SerializeText(this->StateTableSize, jsonValue["StateTableSize"]);
}
template<>
void cmnDataJSON<mtsTaskPeriodicConstructorArg >::DeSerializeText(mtsTaskPeriodicConstructorArg & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsTaskPeriodicConstructorArg::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["Period"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->Period, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: Period");
    };
    field__cdg = jsonValue["IsHardRealTime"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->IsHardRealTime, field__cdg);
    };
    field__cdg = jsonValue["StateTableSize"];
    if (!field__cdg.empty()) {
        cmnDataJSON<unsigned int >::DeSerializeText(this->StateTableSize, field__cdg);
    };
}
#endif // CISST_HAS_JSON


