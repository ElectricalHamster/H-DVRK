// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/code/../mtsInterfaceCommon.cdg

#include <cisstMultiTask/mtsInterfaceCommon.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 9 */
mtsCommandVoidDescription::mtsCommandVoidDescription(void):
    Name()
{}

mtsCommandVoidDescription::mtsCommandVoidDescription(const mtsCommandVoidDescription & other):
    Name(other.Name)
{}

mtsCommandVoidDescription & mtsCommandVoidDescription::operator = (const mtsCommandVoidDescription & other)
{
    Name = other.Name;
    return *this;
}

mtsCommandVoidDescription::mtsCommandVoidDescription(const std::string & newName):
    Name(newName)
{}

mtsCommandVoidDescription::~mtsCommandVoidDescription(void){}


void mtsCommandVoidDescription::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
}


void mtsCommandVoidDescription::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
}


void mtsCommandVoidDescription::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsCommandVoidDescription::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsCommandVoidDescription >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsCommandVoidDescription >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 14 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsCommandVoidDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsCommandVoidDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsCommandVoidDescription::Copy(const mtsCommandVoidDescription & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
}
void mtsCommandVoidDescription::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
}
void mtsCommandVoidDescription::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
}
void mtsCommandVoidDescription::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
}
std::string mtsCommandVoidDescription::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    return description__cdg.str();
}
void mtsCommandVoidDescription::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsCommandVoidDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
}
std::string mtsCommandVoidDescription::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsCommandVoidDescription" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    return description__cdg.str();
}
bool mtsCommandVoidDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
    ;
}
size_t mtsCommandVoidDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
    ;
}
std::string mtsCommandVoidDescription::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsCommandVoidDescription index out of range"));
    return "";
}
double mtsCommandVoidDescription::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsCommandVoidDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsCommandVoidDescription >::SerializeText(const mtsCommandVoidDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsCommandVoidDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
}
template<>
void cmnDataJSON<mtsCommandVoidDescription >::DeSerializeText(mtsCommandVoidDescription & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsCommandVoidDescription::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
}
#endif // CISST_HAS_JSON

/* source line: 21 */
mtsCommandWriteDescription::mtsCommandWriteDescription(void):
    Name()
    , ArgumentPrototypeSerialized()
{}

mtsCommandWriteDescription::mtsCommandWriteDescription(const mtsCommandWriteDescription & other):
    Name(other.Name)
    , ArgumentPrototypeSerialized(other.ArgumentPrototypeSerialized)
{}

mtsCommandWriteDescription & mtsCommandWriteDescription::operator = (const mtsCommandWriteDescription & other)
{
    Name = other.Name;
    ArgumentPrototypeSerialized = other.ArgumentPrototypeSerialized;
    return *this;
}

mtsCommandWriteDescription::mtsCommandWriteDescription(const std::string & newName, const std::string & newArgumentPrototypeSerialized):
    Name(newName)
    , ArgumentPrototypeSerialized(newArgumentPrototypeSerialized)
{}

mtsCommandWriteDescription::~mtsCommandWriteDescription(void){}


void mtsCommandWriteDescription::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->ArgumentPrototypeSerialized);
}


void mtsCommandWriteDescription::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->ArgumentPrototypeSerialized);
}


void mtsCommandWriteDescription::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsCommandWriteDescription::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsCommandWriteDescription >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsCommandWriteDescription >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 26 */
/* source line: 31 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsCommandWriteDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsCommandWriteDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsCommandWriteDescription::Copy(const mtsCommandWriteDescription & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<std::string >::Copy(this->ArgumentPrototypeSerialized, source__cdg.ArgumentPrototypeSerialized);
}
void mtsCommandWriteDescription::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->ArgumentPrototypeSerialized, outputStream__cdg);
}
void mtsCommandWriteDescription::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ArgumentPrototypeSerialized, inputStream__cdg, localFormat, remoteFormat);
}
void mtsCommandWriteDescription::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ArgumentPrototypeSerialized, outputStream__cdg, delimiter__cdg);
}
std::string mtsCommandWriteDescription::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ArgumentPrototypeSerialized, delimiter__cdg, prefix__cdg + "ArgumentPrototypeSerialized");
    return description__cdg.str();
}
void mtsCommandWriteDescription::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsCommandWriteDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsCommandWriteDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ArgumentPrototypeSerialized, inputStream__cdg, delimiter__cdg);
}
std::string mtsCommandWriteDescription::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsCommandWriteDescription" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  ArgumentPrototypeSerialized:" << cmnData<std::string >::HumanReadable(this->ArgumentPrototypeSerialized);
    return description__cdg.str();
}
bool mtsCommandWriteDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ArgumentPrototypeSerialized)
    ;
}
size_t mtsCommandWriteDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized)
    ;
}
std::string mtsCommandWriteDescription::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ArgumentPrototypeSerialized, index_cdg - baseIndex__cdg, prefix__cdg + "ArgumentPrototypeSerialized");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsCommandWriteDescription index out of range"));
    return "";
}
double mtsCommandWriteDescription::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ArgumentPrototypeSerialized, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsCommandWriteDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsCommandWriteDescription >::SerializeText(const mtsCommandWriteDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsCommandWriteDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::SerializeText(this->ArgumentPrototypeSerialized, jsonValue["ArgumentPrototypeSerialized"]);
}
template<>
void cmnDataJSON<mtsCommandWriteDescription >::DeSerializeText(mtsCommandWriteDescription & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsCommandWriteDescription::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["ArgumentPrototypeSerialized"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ArgumentPrototypeSerialized, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ArgumentPrototypeSerialized");
    };
}
#endif // CISST_HAS_JSON

/* source line: 38 */
mtsCommandReadDescription::mtsCommandReadDescription(void):
    Name()
    , ArgumentPrototypeSerialized()
{}

mtsCommandReadDescription::mtsCommandReadDescription(const mtsCommandReadDescription & other):
    Name(other.Name)
    , ArgumentPrototypeSerialized(other.ArgumentPrototypeSerialized)
{}

mtsCommandReadDescription & mtsCommandReadDescription::operator = (const mtsCommandReadDescription & other)
{
    Name = other.Name;
    ArgumentPrototypeSerialized = other.ArgumentPrototypeSerialized;
    return *this;
}

mtsCommandReadDescription::mtsCommandReadDescription(const std::string & newName, const std::string & newArgumentPrototypeSerialized):
    Name(newName)
    , ArgumentPrototypeSerialized(newArgumentPrototypeSerialized)
{}

mtsCommandReadDescription::~mtsCommandReadDescription(void){}


void mtsCommandReadDescription::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->ArgumentPrototypeSerialized);
}


void mtsCommandReadDescription::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->ArgumentPrototypeSerialized);
}


void mtsCommandReadDescription::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsCommandReadDescription::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsCommandReadDescription >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsCommandReadDescription >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 43 */
/* source line: 48 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsCommandReadDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsCommandReadDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsCommandReadDescription::Copy(const mtsCommandReadDescription & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<std::string >::Copy(this->ArgumentPrototypeSerialized, source__cdg.ArgumentPrototypeSerialized);
}
void mtsCommandReadDescription::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->ArgumentPrototypeSerialized, outputStream__cdg);
}
void mtsCommandReadDescription::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ArgumentPrototypeSerialized, inputStream__cdg, localFormat, remoteFormat);
}
void mtsCommandReadDescription::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ArgumentPrototypeSerialized, outputStream__cdg, delimiter__cdg);
}
std::string mtsCommandReadDescription::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ArgumentPrototypeSerialized, delimiter__cdg, prefix__cdg + "ArgumentPrototypeSerialized");
    return description__cdg.str();
}
void mtsCommandReadDescription::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsCommandReadDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsCommandReadDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ArgumentPrototypeSerialized, inputStream__cdg, delimiter__cdg);
}
std::string mtsCommandReadDescription::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsCommandReadDescription" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  ArgumentPrototypeSerialized:" << cmnData<std::string >::HumanReadable(this->ArgumentPrototypeSerialized);
    return description__cdg.str();
}
bool mtsCommandReadDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ArgumentPrototypeSerialized)
    ;
}
size_t mtsCommandReadDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized)
    ;
}
std::string mtsCommandReadDescription::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ArgumentPrototypeSerialized, index_cdg - baseIndex__cdg, prefix__cdg + "ArgumentPrototypeSerialized");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsCommandReadDescription index out of range"));
    return "";
}
double mtsCommandReadDescription::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ArgumentPrototypeSerialized, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsCommandReadDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsCommandReadDescription >::SerializeText(const mtsCommandReadDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsCommandReadDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::SerializeText(this->ArgumentPrototypeSerialized, jsonValue["ArgumentPrototypeSerialized"]);
}
template<>
void cmnDataJSON<mtsCommandReadDescription >::DeSerializeText(mtsCommandReadDescription & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsCommandReadDescription::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["ArgumentPrototypeSerialized"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ArgumentPrototypeSerialized, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ArgumentPrototypeSerialized");
    };
}
#endif // CISST_HAS_JSON

/* source line: 55 */
mtsCommandQualifiedReadDescription::mtsCommandQualifiedReadDescription(void):
    Name()
    , Argument1PrototypeSerialized()
    , Argument2PrototypeSerialized()
{}

mtsCommandQualifiedReadDescription::mtsCommandQualifiedReadDescription(const mtsCommandQualifiedReadDescription & other):
    Name(other.Name)
    , Argument1PrototypeSerialized(other.Argument1PrototypeSerialized)
    , Argument2PrototypeSerialized(other.Argument2PrototypeSerialized)
{}

mtsCommandQualifiedReadDescription & mtsCommandQualifiedReadDescription::operator = (const mtsCommandQualifiedReadDescription & other)
{
    Name = other.Name;
    Argument1PrototypeSerialized = other.Argument1PrototypeSerialized;
    Argument2PrototypeSerialized = other.Argument2PrototypeSerialized;
    return *this;
}

mtsCommandQualifiedReadDescription::mtsCommandQualifiedReadDescription(const std::string & newName, const std::string & newArgument1PrototypeSerialized, const std::string & newArgument2PrototypeSerialized):
    Name(newName)
    , Argument1PrototypeSerialized(newArgument1PrototypeSerialized)
    , Argument2PrototypeSerialized(newArgument2PrototypeSerialized)
{}

mtsCommandQualifiedReadDescription::~mtsCommandQualifiedReadDescription(void){}


void mtsCommandQualifiedReadDescription::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->Argument1PrototypeSerialized);
    cmnSerializeRaw(outputStream__cdg, this->Argument2PrototypeSerialized);
}


void mtsCommandQualifiedReadDescription::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->Argument1PrototypeSerialized);
    cmnDeSerializeRaw(inputStream__cdg, this->Argument2PrototypeSerialized);
}


void mtsCommandQualifiedReadDescription::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsCommandQualifiedReadDescription::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsCommandQualifiedReadDescription >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsCommandQualifiedReadDescription >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 60 */
/* source line: 65 */
/* source line: 70 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsCommandQualifiedReadDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsCommandQualifiedReadDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsCommandQualifiedReadDescription::Copy(const mtsCommandQualifiedReadDescription & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<std::string >::Copy(this->Argument1PrototypeSerialized, source__cdg.Argument1PrototypeSerialized);
    cmnData<std::string >::Copy(this->Argument2PrototypeSerialized, source__cdg.Argument2PrototypeSerialized);
}
void mtsCommandQualifiedReadDescription::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->Argument1PrototypeSerialized, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->Argument2PrototypeSerialized, outputStream__cdg);
}
void mtsCommandQualifiedReadDescription::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->Argument1PrototypeSerialized, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->Argument2PrototypeSerialized, inputStream__cdg, localFormat, remoteFormat);
}
void mtsCommandQualifiedReadDescription::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Argument1PrototypeSerialized, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Argument2PrototypeSerialized, outputStream__cdg, delimiter__cdg);
}
std::string mtsCommandQualifiedReadDescription::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Argument1PrototypeSerialized, delimiter__cdg, prefix__cdg + "Argument1PrototypeSerialized");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Argument2PrototypeSerialized, delimiter__cdg, prefix__cdg + "Argument2PrototypeSerialized");
    return description__cdg.str();
}
void mtsCommandQualifiedReadDescription::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsCommandQualifiedReadDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsCommandQualifiedReadDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Argument1PrototypeSerialized, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsCommandQualifiedReadDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Argument2PrototypeSerialized, inputStream__cdg, delimiter__cdg);
}
std::string mtsCommandQualifiedReadDescription::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsCommandQualifiedReadDescription" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  Argument1PrototypeSerialized:" << cmnData<std::string >::HumanReadable(this->Argument1PrototypeSerialized);
    description__cdg << "  Argument2PrototypeSerialized:" << cmnData<std::string >::HumanReadable(this->Argument2PrototypeSerialized);
    return description__cdg.str();
}
bool mtsCommandQualifiedReadDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<std::string >::ScalarNumberIsFixed(this->Argument1PrototypeSerialized)
           && cmnData<std::string >::ScalarNumberIsFixed(this->Argument2PrototypeSerialized)
    ;
}
size_t mtsCommandQualifiedReadDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<std::string >::ScalarNumber(this->Argument1PrototypeSerialized)
           + cmnData<std::string >::ScalarNumber(this->Argument2PrototypeSerialized)
    ;
}
std::string mtsCommandQualifiedReadDescription::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Argument1PrototypeSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Argument1PrototypeSerialized, index_cdg - baseIndex__cdg, prefix__cdg + "Argument1PrototypeSerialized");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Argument2PrototypeSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Argument2PrototypeSerialized, index_cdg - baseIndex__cdg, prefix__cdg + "Argument2PrototypeSerialized");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsCommandQualifiedReadDescription index out of range"));
    return "";
}
double mtsCommandQualifiedReadDescription::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Argument1PrototypeSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Argument1PrototypeSerialized, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Argument2PrototypeSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Argument2PrototypeSerialized, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsCommandQualifiedReadDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsCommandQualifiedReadDescription >::SerializeText(const mtsCommandQualifiedReadDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsCommandQualifiedReadDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::SerializeText(this->Argument1PrototypeSerialized, jsonValue["Argument1PrototypeSerialized"]);
    cmnDataJSON<std::string >::SerializeText(this->Argument2PrototypeSerialized, jsonValue["Argument2PrototypeSerialized"]);
}
template<>
void cmnDataJSON<mtsCommandQualifiedReadDescription >::DeSerializeText(mtsCommandQualifiedReadDescription & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsCommandQualifiedReadDescription::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["Argument1PrototypeSerialized"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Argument1PrototypeSerialized, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Argument1PrototypeSerialized");
    };
    field__cdg = jsonValue["Argument2PrototypeSerialized"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Argument2PrototypeSerialized, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Argument2PrototypeSerialized");
    };
}
#endif // CISST_HAS_JSON

/* source line: 77 */
mtsCommandVoidReturnDescription::mtsCommandVoidReturnDescription(void):
    Name()
    , ResultPrototypeSerialized()
{}

mtsCommandVoidReturnDescription::mtsCommandVoidReturnDescription(const mtsCommandVoidReturnDescription & other):
    Name(other.Name)
    , ResultPrototypeSerialized(other.ResultPrototypeSerialized)
{}

mtsCommandVoidReturnDescription & mtsCommandVoidReturnDescription::operator = (const mtsCommandVoidReturnDescription & other)
{
    Name = other.Name;
    ResultPrototypeSerialized = other.ResultPrototypeSerialized;
    return *this;
}

mtsCommandVoidReturnDescription::mtsCommandVoidReturnDescription(const std::string & newName, const std::string & newResultPrototypeSerialized):
    Name(newName)
    , ResultPrototypeSerialized(newResultPrototypeSerialized)
{}

mtsCommandVoidReturnDescription::~mtsCommandVoidReturnDescription(void){}


void mtsCommandVoidReturnDescription::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->ResultPrototypeSerialized);
}


void mtsCommandVoidReturnDescription::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->ResultPrototypeSerialized);
}


void mtsCommandVoidReturnDescription::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsCommandVoidReturnDescription::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsCommandVoidReturnDescription >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsCommandVoidReturnDescription >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 82 */
/* source line: 87 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsCommandVoidReturnDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsCommandVoidReturnDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsCommandVoidReturnDescription::Copy(const mtsCommandVoidReturnDescription & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<std::string >::Copy(this->ResultPrototypeSerialized, source__cdg.ResultPrototypeSerialized);
}
void mtsCommandVoidReturnDescription::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->ResultPrototypeSerialized, outputStream__cdg);
}
void mtsCommandVoidReturnDescription::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ResultPrototypeSerialized, inputStream__cdg, localFormat, remoteFormat);
}
void mtsCommandVoidReturnDescription::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ResultPrototypeSerialized, outputStream__cdg, delimiter__cdg);
}
std::string mtsCommandVoidReturnDescription::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ResultPrototypeSerialized, delimiter__cdg, prefix__cdg + "ResultPrototypeSerialized");
    return description__cdg.str();
}
void mtsCommandVoidReturnDescription::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsCommandVoidReturnDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsCommandVoidReturnDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ResultPrototypeSerialized, inputStream__cdg, delimiter__cdg);
}
std::string mtsCommandVoidReturnDescription::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsCommandVoidReturnDescription" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  ResultPrototypeSerialized:" << cmnData<std::string >::HumanReadable(this->ResultPrototypeSerialized);
    return description__cdg.str();
}
bool mtsCommandVoidReturnDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ResultPrototypeSerialized)
    ;
}
size_t mtsCommandVoidReturnDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<std::string >::ScalarNumber(this->ResultPrototypeSerialized)
    ;
}
std::string mtsCommandVoidReturnDescription::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ResultPrototypeSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ResultPrototypeSerialized, index_cdg - baseIndex__cdg, prefix__cdg + "ResultPrototypeSerialized");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsCommandVoidReturnDescription index out of range"));
    return "";
}
double mtsCommandVoidReturnDescription::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ResultPrototypeSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ResultPrototypeSerialized, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsCommandVoidReturnDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsCommandVoidReturnDescription >::SerializeText(const mtsCommandVoidReturnDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsCommandVoidReturnDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::SerializeText(this->ResultPrototypeSerialized, jsonValue["ResultPrototypeSerialized"]);
}
template<>
void cmnDataJSON<mtsCommandVoidReturnDescription >::DeSerializeText(mtsCommandVoidReturnDescription & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsCommandVoidReturnDescription::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["ResultPrototypeSerialized"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ResultPrototypeSerialized, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ResultPrototypeSerialized");
    };
}
#endif // CISST_HAS_JSON

/* source line: 94 */
mtsCommandWriteReturnDescription::mtsCommandWriteReturnDescription(void):
    Name()
    , ArgumentPrototypeSerialized()
    , ResultPrototypeSerialized()
{}

mtsCommandWriteReturnDescription::mtsCommandWriteReturnDescription(const mtsCommandWriteReturnDescription & other):
    Name(other.Name)
    , ArgumentPrototypeSerialized(other.ArgumentPrototypeSerialized)
    , ResultPrototypeSerialized(other.ResultPrototypeSerialized)
{}

mtsCommandWriteReturnDescription & mtsCommandWriteReturnDescription::operator = (const mtsCommandWriteReturnDescription & other)
{
    Name = other.Name;
    ArgumentPrototypeSerialized = other.ArgumentPrototypeSerialized;
    ResultPrototypeSerialized = other.ResultPrototypeSerialized;
    return *this;
}

mtsCommandWriteReturnDescription::mtsCommandWriteReturnDescription(const std::string & newName, const std::string & newArgumentPrototypeSerialized, const std::string & newResultPrototypeSerialized):
    Name(newName)
    , ArgumentPrototypeSerialized(newArgumentPrototypeSerialized)
    , ResultPrototypeSerialized(newResultPrototypeSerialized)
{}

mtsCommandWriteReturnDescription::~mtsCommandWriteReturnDescription(void){}


void mtsCommandWriteReturnDescription::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->ArgumentPrototypeSerialized);
    cmnSerializeRaw(outputStream__cdg, this->ResultPrototypeSerialized);
}


void mtsCommandWriteReturnDescription::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->ArgumentPrototypeSerialized);
    cmnDeSerializeRaw(inputStream__cdg, this->ResultPrototypeSerialized);
}


void mtsCommandWriteReturnDescription::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsCommandWriteReturnDescription::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsCommandWriteReturnDescription >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsCommandWriteReturnDescription >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 99 */
/* source line: 104 */
/* source line: 109 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsCommandWriteReturnDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsCommandWriteReturnDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsCommandWriteReturnDescription::Copy(const mtsCommandWriteReturnDescription & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<std::string >::Copy(this->ArgumentPrototypeSerialized, source__cdg.ArgumentPrototypeSerialized);
    cmnData<std::string >::Copy(this->ResultPrototypeSerialized, source__cdg.ResultPrototypeSerialized);
}
void mtsCommandWriteReturnDescription::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->ArgumentPrototypeSerialized, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->ResultPrototypeSerialized, outputStream__cdg);
}
void mtsCommandWriteReturnDescription::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ArgumentPrototypeSerialized, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ResultPrototypeSerialized, inputStream__cdg, localFormat, remoteFormat);
}
void mtsCommandWriteReturnDescription::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ArgumentPrototypeSerialized, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ResultPrototypeSerialized, outputStream__cdg, delimiter__cdg);
}
std::string mtsCommandWriteReturnDescription::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ArgumentPrototypeSerialized, delimiter__cdg, prefix__cdg + "ArgumentPrototypeSerialized");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ResultPrototypeSerialized, delimiter__cdg, prefix__cdg + "ResultPrototypeSerialized");
    return description__cdg.str();
}
void mtsCommandWriteReturnDescription::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsCommandWriteReturnDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsCommandWriteReturnDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ArgumentPrototypeSerialized, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsCommandWriteReturnDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ResultPrototypeSerialized, inputStream__cdg, delimiter__cdg);
}
std::string mtsCommandWriteReturnDescription::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsCommandWriteReturnDescription" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  ArgumentPrototypeSerialized:" << cmnData<std::string >::HumanReadable(this->ArgumentPrototypeSerialized);
    description__cdg << "  ResultPrototypeSerialized:" << cmnData<std::string >::HumanReadable(this->ResultPrototypeSerialized);
    return description__cdg.str();
}
bool mtsCommandWriteReturnDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ArgumentPrototypeSerialized)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ResultPrototypeSerialized)
    ;
}
size_t mtsCommandWriteReturnDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized)
           + cmnData<std::string >::ScalarNumber(this->ResultPrototypeSerialized)
    ;
}
std::string mtsCommandWriteReturnDescription::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ArgumentPrototypeSerialized, index_cdg - baseIndex__cdg, prefix__cdg + "ArgumentPrototypeSerialized");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ResultPrototypeSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ResultPrototypeSerialized, index_cdg - baseIndex__cdg, prefix__cdg + "ResultPrototypeSerialized");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsCommandWriteReturnDescription index out of range"));
    return "";
}
double mtsCommandWriteReturnDescription::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ArgumentPrototypeSerialized, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ResultPrototypeSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ResultPrototypeSerialized, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsCommandWriteReturnDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsCommandWriteReturnDescription >::SerializeText(const mtsCommandWriteReturnDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsCommandWriteReturnDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::SerializeText(this->ArgumentPrototypeSerialized, jsonValue["ArgumentPrototypeSerialized"]);
    cmnDataJSON<std::string >::SerializeText(this->ResultPrototypeSerialized, jsonValue["ResultPrototypeSerialized"]);
}
template<>
void cmnDataJSON<mtsCommandWriteReturnDescription >::DeSerializeText(mtsCommandWriteReturnDescription & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsCommandWriteReturnDescription::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["ArgumentPrototypeSerialized"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ArgumentPrototypeSerialized, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ArgumentPrototypeSerialized");
    };
    field__cdg = jsonValue["ResultPrototypeSerialized"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ResultPrototypeSerialized, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ResultPrototypeSerialized");
    };
}
#endif // CISST_HAS_JSON

/* source line: 116 */
mtsEventVoidDescription::mtsEventVoidDescription(void):
    Name()
{}

mtsEventVoidDescription::mtsEventVoidDescription(const mtsEventVoidDescription & other):
    Name(other.Name)
{}

mtsEventVoidDescription & mtsEventVoidDescription::operator = (const mtsEventVoidDescription & other)
{
    Name = other.Name;
    return *this;
}

mtsEventVoidDescription::mtsEventVoidDescription(const std::string & newName):
    Name(newName)
{}

mtsEventVoidDescription::~mtsEventVoidDescription(void){}


void mtsEventVoidDescription::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
}


void mtsEventVoidDescription::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
}


void mtsEventVoidDescription::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsEventVoidDescription::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsEventVoidDescription >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsEventVoidDescription >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 121 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsEventVoidDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsEventVoidDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsEventVoidDescription::Copy(const mtsEventVoidDescription & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
}
void mtsEventVoidDescription::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
}
void mtsEventVoidDescription::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
}
void mtsEventVoidDescription::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
}
std::string mtsEventVoidDescription::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    return description__cdg.str();
}
void mtsEventVoidDescription::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsEventVoidDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
}
std::string mtsEventVoidDescription::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsEventVoidDescription" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    return description__cdg.str();
}
bool mtsEventVoidDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
    ;
}
size_t mtsEventVoidDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
    ;
}
std::string mtsEventVoidDescription::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsEventVoidDescription index out of range"));
    return "";
}
double mtsEventVoidDescription::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsEventVoidDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsEventVoidDescription >::SerializeText(const mtsEventVoidDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsEventVoidDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
}
template<>
void cmnDataJSON<mtsEventVoidDescription >::DeSerializeText(mtsEventVoidDescription & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsEventVoidDescription::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
}
#endif // CISST_HAS_JSON

/* source line: 128 */
mtsEventWriteDescription::mtsEventWriteDescription(void):
    Name()
    , ArgumentPrototypeSerialized()
{}

mtsEventWriteDescription::mtsEventWriteDescription(const mtsEventWriteDescription & other):
    Name(other.Name)
    , ArgumentPrototypeSerialized(other.ArgumentPrototypeSerialized)
{}

mtsEventWriteDescription & mtsEventWriteDescription::operator = (const mtsEventWriteDescription & other)
{
    Name = other.Name;
    ArgumentPrototypeSerialized = other.ArgumentPrototypeSerialized;
    return *this;
}

mtsEventWriteDescription::mtsEventWriteDescription(const std::string & newName, const std::string & newArgumentPrototypeSerialized):
    Name(newName)
    , ArgumentPrototypeSerialized(newArgumentPrototypeSerialized)
{}

mtsEventWriteDescription::~mtsEventWriteDescription(void){}


void mtsEventWriteDescription::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->ArgumentPrototypeSerialized);
}


void mtsEventWriteDescription::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->ArgumentPrototypeSerialized);
}


void mtsEventWriteDescription::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsEventWriteDescription::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsEventWriteDescription >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsEventWriteDescription >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 133 */
/* source line: 138 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsEventWriteDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsEventWriteDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsEventWriteDescription::Copy(const mtsEventWriteDescription & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<std::string >::Copy(this->ArgumentPrototypeSerialized, source__cdg.ArgumentPrototypeSerialized);
}
void mtsEventWriteDescription::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->ArgumentPrototypeSerialized, outputStream__cdg);
}
void mtsEventWriteDescription::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ArgumentPrototypeSerialized, inputStream__cdg, localFormat, remoteFormat);
}
void mtsEventWriteDescription::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ArgumentPrototypeSerialized, outputStream__cdg, delimiter__cdg);
}
std::string mtsEventWriteDescription::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ArgumentPrototypeSerialized, delimiter__cdg, prefix__cdg + "ArgumentPrototypeSerialized");
    return description__cdg.str();
}
void mtsEventWriteDescription::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsEventWriteDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsEventWriteDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ArgumentPrototypeSerialized, inputStream__cdg, delimiter__cdg);
}
std::string mtsEventWriteDescription::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsEventWriteDescription" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  ArgumentPrototypeSerialized:" << cmnData<std::string >::HumanReadable(this->ArgumentPrototypeSerialized);
    return description__cdg.str();
}
bool mtsEventWriteDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ArgumentPrototypeSerialized)
    ;
}
size_t mtsEventWriteDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized)
    ;
}
std::string mtsEventWriteDescription::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ArgumentPrototypeSerialized, index_cdg - baseIndex__cdg, prefix__cdg + "ArgumentPrototypeSerialized");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsEventWriteDescription index out of range"));
    return "";
}
double mtsEventWriteDescription::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ArgumentPrototypeSerialized);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ArgumentPrototypeSerialized, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsEventWriteDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsEventWriteDescription >::SerializeText(const mtsEventWriteDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsEventWriteDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<std::string >::SerializeText(this->ArgumentPrototypeSerialized, jsonValue["ArgumentPrototypeSerialized"]);
}
template<>
void cmnDataJSON<mtsEventWriteDescription >::DeSerializeText(mtsEventWriteDescription & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsEventWriteDescription::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["ArgumentPrototypeSerialized"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->ArgumentPrototypeSerialized, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ArgumentPrototypeSerialized");
    };
}
#endif // CISST_HAS_JSON


/* source line: 177 */
mtsInterfaceProvidedDescription::mtsInterfaceProvidedDescription(void):
    InterfaceName()
    , CommandsVoid()
    , CommandsWrite()
    , CommandsRead()
    , CommandsQualifiedRead()
    , CommandsVoidReturn()
    , CommandsWriteReturn()
    , EventsVoid()
    , EventsWrite()
{}

mtsInterfaceProvidedDescription::mtsInterfaceProvidedDescription(const mtsInterfaceProvidedDescription & other):
    InterfaceName(other.InterfaceName)
    , CommandsVoid(other.CommandsVoid)
    , CommandsWrite(other.CommandsWrite)
    , CommandsRead(other.CommandsRead)
    , CommandsQualifiedRead(other.CommandsQualifiedRead)
    , CommandsVoidReturn(other.CommandsVoidReturn)
    , CommandsWriteReturn(other.CommandsWriteReturn)
    , EventsVoid(other.EventsVoid)
    , EventsWrite(other.EventsWrite)
{}

mtsInterfaceProvidedDescription & mtsInterfaceProvidedDescription::operator = (const mtsInterfaceProvidedDescription & other)
{
    InterfaceName = other.InterfaceName;
    CommandsVoid = other.CommandsVoid;
    CommandsWrite = other.CommandsWrite;
    CommandsRead = other.CommandsRead;
    CommandsQualifiedRead = other.CommandsQualifiedRead;
    CommandsVoidReturn = other.CommandsVoidReturn;
    CommandsWriteReturn = other.CommandsWriteReturn;
    EventsVoid = other.EventsVoid;
    EventsWrite = other.EventsWrite;
    return *this;
}

mtsInterfaceProvidedDescription::~mtsInterfaceProvidedDescription(void){}


void mtsInterfaceProvidedDescription::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->InterfaceName);
    cmnSerializeRaw(outputStream__cdg, this->CommandsVoid);
    cmnSerializeRaw(outputStream__cdg, this->CommandsWrite);
    cmnSerializeRaw(outputStream__cdg, this->CommandsRead);
    cmnSerializeRaw(outputStream__cdg, this->CommandsQualifiedRead);
    cmnSerializeRaw(outputStream__cdg, this->CommandsVoidReturn);
    cmnSerializeRaw(outputStream__cdg, this->CommandsWriteReturn);
    cmnSerializeRaw(outputStream__cdg, this->EventsVoid);
    cmnSerializeRaw(outputStream__cdg, this->EventsWrite);
}


void mtsInterfaceProvidedDescription::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->InterfaceName);
    cmnDeSerializeRaw(inputStream__cdg, this->CommandsVoid);
    cmnDeSerializeRaw(inputStream__cdg, this->CommandsWrite);
    cmnDeSerializeRaw(inputStream__cdg, this->CommandsRead);
    cmnDeSerializeRaw(inputStream__cdg, this->CommandsQualifiedRead);
    cmnDeSerializeRaw(inputStream__cdg, this->CommandsVoidReturn);
    cmnDeSerializeRaw(inputStream__cdg, this->CommandsWriteReturn);
    cmnDeSerializeRaw(inputStream__cdg, this->EventsVoid);
    cmnDeSerializeRaw(inputStream__cdg, this->EventsWrite);
}


void mtsInterfaceProvidedDescription::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsInterfaceProvidedDescription::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsInterfaceProvidedDescription >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsInterfaceProvidedDescription >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 181 */
/* source line: 186 */
/* source line: 191 */
/* source line: 196 */
/* source line: 201 */
/* source line: 206 */
/* source line: 211 */
/* source line: 216 */
/* source line: 221 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsInterfaceProvidedDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsInterfaceProvidedDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsInterfaceProvidedDescription::Copy(const mtsInterfaceProvidedDescription & source__cdg) {
    cmnData<std::string >::Copy(this->InterfaceName, source__cdg.InterfaceName);
    cmnData<mtsCommandsVoidDescription >::Copy(this->CommandsVoid, source__cdg.CommandsVoid);
    cmnData<mtsCommandsWriteDescription >::Copy(this->CommandsWrite, source__cdg.CommandsWrite);
    cmnData<mtsCommandsReadDescription >::Copy(this->CommandsRead, source__cdg.CommandsRead);
    cmnData<mtsCommandsQualifiedReadDescription >::Copy(this->CommandsQualifiedRead, source__cdg.CommandsQualifiedRead);
    cmnData<mtsCommandsVoidReturnDescription >::Copy(this->CommandsVoidReturn, source__cdg.CommandsVoidReturn);
    cmnData<mtsCommandsWriteReturnDescription >::Copy(this->CommandsWriteReturn, source__cdg.CommandsWriteReturn);
    cmnData<mtsEventsVoidDescription >::Copy(this->EventsVoid, source__cdg.EventsVoid);
    cmnData<mtsEventsWriteDescription >::Copy(this->EventsWrite, source__cdg.EventsWrite);
}
void mtsInterfaceProvidedDescription::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->InterfaceName, outputStream__cdg);
    cmnData<mtsCommandsVoidDescription >::SerializeBinary(this->CommandsVoid, outputStream__cdg);
    cmnData<mtsCommandsWriteDescription >::SerializeBinary(this->CommandsWrite, outputStream__cdg);
    cmnData<mtsCommandsReadDescription >::SerializeBinary(this->CommandsRead, outputStream__cdg);
    cmnData<mtsCommandsQualifiedReadDescription >::SerializeBinary(this->CommandsQualifiedRead, outputStream__cdg);
    cmnData<mtsCommandsVoidReturnDescription >::SerializeBinary(this->CommandsVoidReturn, outputStream__cdg);
    cmnData<mtsCommandsWriteReturnDescription >::SerializeBinary(this->CommandsWriteReturn, outputStream__cdg);
    cmnData<mtsEventsVoidDescription >::SerializeBinary(this->EventsVoid, outputStream__cdg);
    cmnData<mtsEventsWriteDescription >::SerializeBinary(this->EventsWrite, outputStream__cdg);
}
void mtsInterfaceProvidedDescription::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->InterfaceName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsCommandsVoidDescription >::DeSerializeBinary(this->CommandsVoid, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsCommandsWriteDescription >::DeSerializeBinary(this->CommandsWrite, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsCommandsReadDescription >::DeSerializeBinary(this->CommandsRead, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsCommandsQualifiedReadDescription >::DeSerializeBinary(this->CommandsQualifiedRead, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsCommandsVoidReturnDescription >::DeSerializeBinary(this->CommandsVoidReturn, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsCommandsWriteReturnDescription >::DeSerializeBinary(this->CommandsWriteReturn, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsEventsVoidDescription >::DeSerializeBinary(this->EventsVoid, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsEventsWriteDescription >::DeSerializeBinary(this->EventsWrite, inputStream__cdg, localFormat, remoteFormat);
}
void mtsInterfaceProvidedDescription::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->InterfaceName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsCommandsVoidDescription >::SerializeText(this->CommandsVoid, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsCommandsWriteDescription >::SerializeText(this->CommandsWrite, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsCommandsReadDescription >::SerializeText(this->CommandsRead, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsCommandsQualifiedReadDescription >::SerializeText(this->CommandsQualifiedRead, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsCommandsVoidReturnDescription >::SerializeText(this->CommandsVoidReturn, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsCommandsWriteReturnDescription >::SerializeText(this->CommandsWriteReturn, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsEventsVoidDescription >::SerializeText(this->EventsVoid, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsEventsWriteDescription >::SerializeText(this->EventsWrite, outputStream__cdg, delimiter__cdg);
}
std::string mtsInterfaceProvidedDescription::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->InterfaceName, delimiter__cdg, prefix__cdg + "InterfaceName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsCommandsVoidDescription >::SerializeDescription(this->CommandsVoid, delimiter__cdg, prefix__cdg + "CommandsVoid");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsCommandsWriteDescription >::SerializeDescription(this->CommandsWrite, delimiter__cdg, prefix__cdg + "CommandsWrite");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsCommandsReadDescription >::SerializeDescription(this->CommandsRead, delimiter__cdg, prefix__cdg + "CommandsRead");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsCommandsQualifiedReadDescription >::SerializeDescription(this->CommandsQualifiedRead, delimiter__cdg, prefix__cdg + "CommandsQualifiedRead");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsCommandsVoidReturnDescription >::SerializeDescription(this->CommandsVoidReturn, delimiter__cdg, prefix__cdg + "CommandsVoidReturn");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsCommandsWriteReturnDescription >::SerializeDescription(this->CommandsWriteReturn, delimiter__cdg, prefix__cdg + "CommandsWriteReturn");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsEventsVoidDescription >::SerializeDescription(this->EventsVoid, delimiter__cdg, prefix__cdg + "EventsVoid");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsEventsWriteDescription >::SerializeDescription(this->EventsWrite, delimiter__cdg, prefix__cdg + "EventsWrite");
    return description__cdg.str();
}
void mtsInterfaceProvidedDescription::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceProvidedDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->InterfaceName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceProvidedDescription");
    }
    someData__cdg = true;
    cmnData<mtsCommandsVoidDescription >::DeSerializeText(this->CommandsVoid, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceProvidedDescription");
    }
    someData__cdg = true;
    cmnData<mtsCommandsWriteDescription >::DeSerializeText(this->CommandsWrite, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceProvidedDescription");
    }
    someData__cdg = true;
    cmnData<mtsCommandsReadDescription >::DeSerializeText(this->CommandsRead, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceProvidedDescription");
    }
    someData__cdg = true;
    cmnData<mtsCommandsQualifiedReadDescription >::DeSerializeText(this->CommandsQualifiedRead, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceProvidedDescription");
    }
    someData__cdg = true;
    cmnData<mtsCommandsVoidReturnDescription >::DeSerializeText(this->CommandsVoidReturn, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceProvidedDescription");
    }
    someData__cdg = true;
    cmnData<mtsCommandsWriteReturnDescription >::DeSerializeText(this->CommandsWriteReturn, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceProvidedDescription");
    }
    someData__cdg = true;
    cmnData<mtsEventsVoidDescription >::DeSerializeText(this->EventsVoid, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceProvidedDescription");
    }
    someData__cdg = true;
    cmnData<mtsEventsWriteDescription >::DeSerializeText(this->EventsWrite, inputStream__cdg, delimiter__cdg);
}
std::string mtsInterfaceProvidedDescription::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsInterfaceProvidedDescription" << std::endl;
    description__cdg << "  InterfaceName:" << cmnData<std::string >::HumanReadable(this->InterfaceName);
    description__cdg << "  CommandsVoid:" << cmnData<mtsCommandsVoidDescription >::HumanReadable(this->CommandsVoid);
    description__cdg << "  CommandsWrite:" << cmnData<mtsCommandsWriteDescription >::HumanReadable(this->CommandsWrite);
    description__cdg << "  CommandsRead:" << cmnData<mtsCommandsReadDescription >::HumanReadable(this->CommandsRead);
    description__cdg << "  CommandsQualifiedRead:" << cmnData<mtsCommandsQualifiedReadDescription >::HumanReadable(this->CommandsQualifiedRead);
    description__cdg << "  CommandsVoidReturn:" << cmnData<mtsCommandsVoidReturnDescription >::HumanReadable(this->CommandsVoidReturn);
    description__cdg << "  CommandsWriteReturn:" << cmnData<mtsCommandsWriteReturnDescription >::HumanReadable(this->CommandsWriteReturn);
    description__cdg << "  EventsVoid:" << cmnData<mtsEventsVoidDescription >::HumanReadable(this->EventsVoid);
    description__cdg << "  EventsWrite:" << cmnData<mtsEventsWriteDescription >::HumanReadable(this->EventsWrite);
    return description__cdg.str();
}
bool mtsInterfaceProvidedDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->InterfaceName)
           && cmnData<mtsCommandsVoidDescription >::ScalarNumberIsFixed(this->CommandsVoid)
           && cmnData<mtsCommandsWriteDescription >::ScalarNumberIsFixed(this->CommandsWrite)
           && cmnData<mtsCommandsReadDescription >::ScalarNumberIsFixed(this->CommandsRead)
           && cmnData<mtsCommandsQualifiedReadDescription >::ScalarNumberIsFixed(this->CommandsQualifiedRead)
           && cmnData<mtsCommandsVoidReturnDescription >::ScalarNumberIsFixed(this->CommandsVoidReturn)
           && cmnData<mtsCommandsWriteReturnDescription >::ScalarNumberIsFixed(this->CommandsWriteReturn)
           && cmnData<mtsEventsVoidDescription >::ScalarNumberIsFixed(this->EventsVoid)
           && cmnData<mtsEventsWriteDescription >::ScalarNumberIsFixed(this->EventsWrite)
    ;
}
size_t mtsInterfaceProvidedDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->InterfaceName)
           + cmnData<mtsCommandsVoidDescription >::ScalarNumber(this->CommandsVoid)
           + cmnData<mtsCommandsWriteDescription >::ScalarNumber(this->CommandsWrite)
           + cmnData<mtsCommandsReadDescription >::ScalarNumber(this->CommandsRead)
           + cmnData<mtsCommandsQualifiedReadDescription >::ScalarNumber(this->CommandsQualifiedRead)
           + cmnData<mtsCommandsVoidReturnDescription >::ScalarNumber(this->CommandsVoidReturn)
           + cmnData<mtsCommandsWriteReturnDescription >::ScalarNumber(this->CommandsWriteReturn)
           + cmnData<mtsEventsVoidDescription >::ScalarNumber(this->EventsVoid)
           + cmnData<mtsEventsWriteDescription >::ScalarNumber(this->EventsWrite)
    ;
}
std::string mtsInterfaceProvidedDescription::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->InterfaceName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->InterfaceName, index_cdg - baseIndex__cdg, prefix__cdg + "InterfaceName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandsVoidDescription >::ScalarNumber(this->CommandsVoid);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandsVoidDescription >::ScalarDescription(this->CommandsVoid, index_cdg - baseIndex__cdg, prefix__cdg + "CommandsVoid");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandsWriteDescription >::ScalarNumber(this->CommandsWrite);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandsWriteDescription >::ScalarDescription(this->CommandsWrite, index_cdg - baseIndex__cdg, prefix__cdg + "CommandsWrite");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandsReadDescription >::ScalarNumber(this->CommandsRead);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandsReadDescription >::ScalarDescription(this->CommandsRead, index_cdg - baseIndex__cdg, prefix__cdg + "CommandsRead");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandsQualifiedReadDescription >::ScalarNumber(this->CommandsQualifiedRead);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandsQualifiedReadDescription >::ScalarDescription(this->CommandsQualifiedRead, index_cdg - baseIndex__cdg, prefix__cdg + "CommandsQualifiedRead");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandsVoidReturnDescription >::ScalarNumber(this->CommandsVoidReturn);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandsVoidReturnDescription >::ScalarDescription(this->CommandsVoidReturn, index_cdg - baseIndex__cdg, prefix__cdg + "CommandsVoidReturn");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandsWriteReturnDescription >::ScalarNumber(this->CommandsWriteReturn);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandsWriteReturnDescription >::ScalarDescription(this->CommandsWriteReturn, index_cdg - baseIndex__cdg, prefix__cdg + "CommandsWriteReturn");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsEventsVoidDescription >::ScalarNumber(this->EventsVoid);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsEventsVoidDescription >::ScalarDescription(this->EventsVoid, index_cdg - baseIndex__cdg, prefix__cdg + "EventsVoid");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsEventsWriteDescription >::ScalarNumber(this->EventsWrite);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsEventsWriteDescription >::ScalarDescription(this->EventsWrite, index_cdg - baseIndex__cdg, prefix__cdg + "EventsWrite");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsInterfaceProvidedDescription index out of range"));
    return "";
}
double mtsInterfaceProvidedDescription::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->InterfaceName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->InterfaceName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandsVoidDescription >::ScalarNumber(this->CommandsVoid);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandsVoidDescription >::Scalar(this->CommandsVoid, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandsWriteDescription >::ScalarNumber(this->CommandsWrite);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandsWriteDescription >::Scalar(this->CommandsWrite, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandsReadDescription >::ScalarNumber(this->CommandsRead);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandsReadDescription >::Scalar(this->CommandsRead, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandsQualifiedReadDescription >::ScalarNumber(this->CommandsQualifiedRead);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandsQualifiedReadDescription >::Scalar(this->CommandsQualifiedRead, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandsVoidReturnDescription >::ScalarNumber(this->CommandsVoidReturn);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandsVoidReturnDescription >::Scalar(this->CommandsVoidReturn, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandsWriteReturnDescription >::ScalarNumber(this->CommandsWriteReturn);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandsWriteReturnDescription >::Scalar(this->CommandsWriteReturn, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsEventsVoidDescription >::ScalarNumber(this->EventsVoid);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsEventsVoidDescription >::Scalar(this->EventsVoid, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsEventsWriteDescription >::ScalarNumber(this->EventsWrite);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsEventsWriteDescription >::Scalar(this->EventsWrite, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsInterfaceProvidedDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsInterfaceProvidedDescription >::SerializeText(const mtsInterfaceProvidedDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsInterfaceProvidedDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->InterfaceName, jsonValue["InterfaceName"]);
    cmnDataJSON<mtsCommandsVoidDescription >::SerializeText(this->CommandsVoid, jsonValue["CommandsVoid"]);
    cmnDataJSON<mtsCommandsWriteDescription >::SerializeText(this->CommandsWrite, jsonValue["CommandsWrite"]);
    cmnDataJSON<mtsCommandsReadDescription >::SerializeText(this->CommandsRead, jsonValue["CommandsRead"]);
    cmnDataJSON<mtsCommandsQualifiedReadDescription >::SerializeText(this->CommandsQualifiedRead, jsonValue["CommandsQualifiedRead"]);
    cmnDataJSON<mtsCommandsVoidReturnDescription >::SerializeText(this->CommandsVoidReturn, jsonValue["CommandsVoidReturn"]);
    cmnDataJSON<mtsCommandsWriteReturnDescription >::SerializeText(this->CommandsWriteReturn, jsonValue["CommandsWriteReturn"]);
    cmnDataJSON<mtsEventsVoidDescription >::SerializeText(this->EventsVoid, jsonValue["EventsVoid"]);
    cmnDataJSON<mtsEventsWriteDescription >::SerializeText(this->EventsWrite, jsonValue["EventsWrite"]);
}
template<>
void cmnDataJSON<mtsInterfaceProvidedDescription >::DeSerializeText(mtsInterfaceProvidedDescription & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsInterfaceProvidedDescription::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["InterfaceName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->InterfaceName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: InterfaceName");
    };
    field__cdg = jsonValue["CommandsVoid"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsCommandsVoidDescription >::DeSerializeText(this->CommandsVoid, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsCommandsVoidDescription>::DeSerializeText: empty JSON value for: CommandsVoid");
    };
    field__cdg = jsonValue["CommandsWrite"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsCommandsWriteDescription >::DeSerializeText(this->CommandsWrite, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsCommandsWriteDescription>::DeSerializeText: empty JSON value for: CommandsWrite");
    };
    field__cdg = jsonValue["CommandsRead"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsCommandsReadDescription >::DeSerializeText(this->CommandsRead, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsCommandsReadDescription>::DeSerializeText: empty JSON value for: CommandsRead");
    };
    field__cdg = jsonValue["CommandsQualifiedRead"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsCommandsQualifiedReadDescription >::DeSerializeText(this->CommandsQualifiedRead, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsCommandsQualifiedReadDescription>::DeSerializeText: empty JSON value for: CommandsQualifiedRead");
    };
    field__cdg = jsonValue["CommandsVoidReturn"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsCommandsVoidReturnDescription >::DeSerializeText(this->CommandsVoidReturn, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsCommandsVoidReturnDescription>::DeSerializeText: empty JSON value for: CommandsVoidReturn");
    };
    field__cdg = jsonValue["CommandsWriteReturn"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsCommandsWriteReturnDescription >::DeSerializeText(this->CommandsWriteReturn, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsCommandsWriteReturnDescription>::DeSerializeText: empty JSON value for: CommandsWriteReturn");
    };
    field__cdg = jsonValue["EventsVoid"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsEventsVoidDescription >::DeSerializeText(this->EventsVoid, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsEventsVoidDescription>::DeSerializeText: empty JSON value for: EventsVoid");
    };
    field__cdg = jsonValue["EventsWrite"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsEventsWriteDescription >::DeSerializeText(this->EventsWrite, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsEventsWriteDescription>::DeSerializeText: empty JSON value for: EventsWrite");
    };
}
#endif // CISST_HAS_JSON

/* source line: 229 */
mtsInterfaceRequiredDescription::mtsInterfaceRequiredDescription(void):
    InterfaceName()
    , FunctionVoidNames()
    , FunctionWriteNames()
    , FunctionReadNames()
    , FunctionQualifiedReadNames()
    , FunctionVoidReturnNames()
    , FunctionWriteReturnNames()
    , EventHandlersVoid()
    , EventHandlersWrite()
    , IsRequired()
{}

mtsInterfaceRequiredDescription::mtsInterfaceRequiredDescription(const mtsInterfaceRequiredDescription & other):
    InterfaceName(other.InterfaceName)
    , FunctionVoidNames(other.FunctionVoidNames)
    , FunctionWriteNames(other.FunctionWriteNames)
    , FunctionReadNames(other.FunctionReadNames)
    , FunctionQualifiedReadNames(other.FunctionQualifiedReadNames)
    , FunctionVoidReturnNames(other.FunctionVoidReturnNames)
    , FunctionWriteReturnNames(other.FunctionWriteReturnNames)
    , EventHandlersVoid(other.EventHandlersVoid)
    , EventHandlersWrite(other.EventHandlersWrite)
    , IsRequired(other.IsRequired)
{}

mtsInterfaceRequiredDescription & mtsInterfaceRequiredDescription::operator = (const mtsInterfaceRequiredDescription & other)
{
    InterfaceName = other.InterfaceName;
    FunctionVoidNames = other.FunctionVoidNames;
    FunctionWriteNames = other.FunctionWriteNames;
    FunctionReadNames = other.FunctionReadNames;
    FunctionQualifiedReadNames = other.FunctionQualifiedReadNames;
    FunctionVoidReturnNames = other.FunctionVoidReturnNames;
    FunctionWriteReturnNames = other.FunctionWriteReturnNames;
    EventHandlersVoid = other.EventHandlersVoid;
    EventHandlersWrite = other.EventHandlersWrite;
    IsRequired = other.IsRequired;
    return *this;
}

mtsInterfaceRequiredDescription::~mtsInterfaceRequiredDescription(void){}


void mtsInterfaceRequiredDescription::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->InterfaceName);
    cmnSerializeRaw(outputStream__cdg, this->FunctionVoidNames);
    cmnSerializeRaw(outputStream__cdg, this->FunctionWriteNames);
    cmnSerializeRaw(outputStream__cdg, this->FunctionReadNames);
    cmnSerializeRaw(outputStream__cdg, this->FunctionQualifiedReadNames);
    cmnSerializeRaw(outputStream__cdg, this->FunctionVoidReturnNames);
    cmnSerializeRaw(outputStream__cdg, this->FunctionWriteReturnNames);
    cmnSerializeRaw(outputStream__cdg, this->EventHandlersVoid);
    cmnSerializeRaw(outputStream__cdg, this->EventHandlersWrite);
    cmnSerializeRaw(outputStream__cdg, this->IsRequired);
}


void mtsInterfaceRequiredDescription::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->InterfaceName);
    cmnDeSerializeRaw(inputStream__cdg, this->FunctionVoidNames);
    cmnDeSerializeRaw(inputStream__cdg, this->FunctionWriteNames);
    cmnDeSerializeRaw(inputStream__cdg, this->FunctionReadNames);
    cmnDeSerializeRaw(inputStream__cdg, this->FunctionQualifiedReadNames);
    cmnDeSerializeRaw(inputStream__cdg, this->FunctionVoidReturnNames);
    cmnDeSerializeRaw(inputStream__cdg, this->FunctionWriteReturnNames);
    cmnDeSerializeRaw(inputStream__cdg, this->EventHandlersVoid);
    cmnDeSerializeRaw(inputStream__cdg, this->EventHandlersWrite);
    cmnDeSerializeRaw(inputStream__cdg, this->IsRequired);
}


void mtsInterfaceRequiredDescription::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsInterfaceRequiredDescription::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsInterfaceRequiredDescription >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsInterfaceRequiredDescription >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 233 */
/* source line: 238 */
/* source line: 243 */
/* source line: 248 */
/* source line: 253 */
/* source line: 258 */
/* source line: 263 */
/* source line: 268 */
/* source line: 273 */
/* source line: 279 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsInterfaceRequiredDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsInterfaceRequiredDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsInterfaceRequiredDescription::Copy(const mtsInterfaceRequiredDescription & source__cdg) {
    cmnData<std::string >::Copy(this->InterfaceName, source__cdg.InterfaceName);
    cmnData<mtsCommandPointerNames >::Copy(this->FunctionVoidNames, source__cdg.FunctionVoidNames);
    cmnData<mtsCommandPointerNames >::Copy(this->FunctionWriteNames, source__cdg.FunctionWriteNames);
    cmnData<mtsCommandPointerNames >::Copy(this->FunctionReadNames, source__cdg.FunctionReadNames);
    cmnData<mtsCommandPointerNames >::Copy(this->FunctionQualifiedReadNames, source__cdg.FunctionQualifiedReadNames);
    cmnData<mtsCommandPointerNames >::Copy(this->FunctionVoidReturnNames, source__cdg.FunctionVoidReturnNames);
    cmnData<mtsCommandPointerNames >::Copy(this->FunctionWriteReturnNames, source__cdg.FunctionWriteReturnNames);
    cmnData<mtsEventHandlersVoidDescription >::Copy(this->EventHandlersVoid, source__cdg.EventHandlersVoid);
    cmnData<mtsEventHandlersWriteDescription >::Copy(this->EventHandlersWrite, source__cdg.EventHandlersWrite);
    cmnData<bool >::Copy(this->IsRequired, source__cdg.IsRequired);
}
void mtsInterfaceRequiredDescription::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->InterfaceName, outputStream__cdg);
    cmnData<mtsCommandPointerNames >::SerializeBinary(this->FunctionVoidNames, outputStream__cdg);
    cmnData<mtsCommandPointerNames >::SerializeBinary(this->FunctionWriteNames, outputStream__cdg);
    cmnData<mtsCommandPointerNames >::SerializeBinary(this->FunctionReadNames, outputStream__cdg);
    cmnData<mtsCommandPointerNames >::SerializeBinary(this->FunctionQualifiedReadNames, outputStream__cdg);
    cmnData<mtsCommandPointerNames >::SerializeBinary(this->FunctionVoidReturnNames, outputStream__cdg);
    cmnData<mtsCommandPointerNames >::SerializeBinary(this->FunctionWriteReturnNames, outputStream__cdg);
    cmnData<mtsEventHandlersVoidDescription >::SerializeBinary(this->EventHandlersVoid, outputStream__cdg);
    cmnData<mtsEventHandlersWriteDescription >::SerializeBinary(this->EventHandlersWrite, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->IsRequired, outputStream__cdg);
}
void mtsInterfaceRequiredDescription::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->InterfaceName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsCommandPointerNames >::DeSerializeBinary(this->FunctionVoidNames, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsCommandPointerNames >::DeSerializeBinary(this->FunctionWriteNames, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsCommandPointerNames >::DeSerializeBinary(this->FunctionReadNames, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsCommandPointerNames >::DeSerializeBinary(this->FunctionQualifiedReadNames, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsCommandPointerNames >::DeSerializeBinary(this->FunctionVoidReturnNames, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsCommandPointerNames >::DeSerializeBinary(this->FunctionWriteReturnNames, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsEventHandlersVoidDescription >::DeSerializeBinary(this->EventHandlersVoid, inputStream__cdg, localFormat, remoteFormat);
    cmnData<mtsEventHandlersWriteDescription >::DeSerializeBinary(this->EventHandlersWrite, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->IsRequired, inputStream__cdg, localFormat, remoteFormat);
}
void mtsInterfaceRequiredDescription::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->InterfaceName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsCommandPointerNames >::SerializeText(this->FunctionVoidNames, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsCommandPointerNames >::SerializeText(this->FunctionWriteNames, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsCommandPointerNames >::SerializeText(this->FunctionReadNames, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsCommandPointerNames >::SerializeText(this->FunctionQualifiedReadNames, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsCommandPointerNames >::SerializeText(this->FunctionVoidReturnNames, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsCommandPointerNames >::SerializeText(this->FunctionWriteReturnNames, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsEventHandlersVoidDescription >::SerializeText(this->EventHandlersVoid, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsEventHandlersWriteDescription >::SerializeText(this->EventHandlersWrite, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->IsRequired, outputStream__cdg, delimiter__cdg);
}
std::string mtsInterfaceRequiredDescription::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->InterfaceName, delimiter__cdg, prefix__cdg + "InterfaceName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsCommandPointerNames >::SerializeDescription(this->FunctionVoidNames, delimiter__cdg, prefix__cdg + "FunctionVoidNames");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsCommandPointerNames >::SerializeDescription(this->FunctionWriteNames, delimiter__cdg, prefix__cdg + "FunctionWriteNames");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsCommandPointerNames >::SerializeDescription(this->FunctionReadNames, delimiter__cdg, prefix__cdg + "FunctionReadNames");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsCommandPointerNames >::SerializeDescription(this->FunctionQualifiedReadNames, delimiter__cdg, prefix__cdg + "FunctionQualifiedReadNames");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsCommandPointerNames >::SerializeDescription(this->FunctionVoidReturnNames, delimiter__cdg, prefix__cdg + "FunctionVoidReturnNames");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsCommandPointerNames >::SerializeDescription(this->FunctionWriteReturnNames, delimiter__cdg, prefix__cdg + "FunctionWriteReturnNames");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsEventHandlersVoidDescription >::SerializeDescription(this->EventHandlersVoid, delimiter__cdg, prefix__cdg + "EventHandlersVoid");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsEventHandlersWriteDescription >::SerializeDescription(this->EventHandlersWrite, delimiter__cdg, prefix__cdg + "EventHandlersWrite");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->IsRequired, delimiter__cdg, prefix__cdg + "IsRequired");
    return description__cdg.str();
}
void mtsInterfaceRequiredDescription::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceRequiredDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->InterfaceName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceRequiredDescription");
    }
    someData__cdg = true;
    cmnData<mtsCommandPointerNames >::DeSerializeText(this->FunctionVoidNames, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceRequiredDescription");
    }
    someData__cdg = true;
    cmnData<mtsCommandPointerNames >::DeSerializeText(this->FunctionWriteNames, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceRequiredDescription");
    }
    someData__cdg = true;
    cmnData<mtsCommandPointerNames >::DeSerializeText(this->FunctionReadNames, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceRequiredDescription");
    }
    someData__cdg = true;
    cmnData<mtsCommandPointerNames >::DeSerializeText(this->FunctionQualifiedReadNames, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceRequiredDescription");
    }
    someData__cdg = true;
    cmnData<mtsCommandPointerNames >::DeSerializeText(this->FunctionVoidReturnNames, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceRequiredDescription");
    }
    someData__cdg = true;
    cmnData<mtsCommandPointerNames >::DeSerializeText(this->FunctionWriteReturnNames, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceRequiredDescription");
    }
    someData__cdg = true;
    cmnData<mtsEventHandlersVoidDescription >::DeSerializeText(this->EventHandlersVoid, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceRequiredDescription");
    }
    someData__cdg = true;
    cmnData<mtsEventHandlersWriteDescription >::DeSerializeText(this->EventHandlersWrite, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsInterfaceRequiredDescription");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->IsRequired, inputStream__cdg, delimiter__cdg);
}
std::string mtsInterfaceRequiredDescription::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsInterfaceRequiredDescription" << std::endl;
    description__cdg << "  InterfaceName:" << cmnData<std::string >::HumanReadable(this->InterfaceName);
    description__cdg << "  FunctionVoidNames:" << cmnData<mtsCommandPointerNames >::HumanReadable(this->FunctionVoidNames);
    description__cdg << "  FunctionWriteNames:" << cmnData<mtsCommandPointerNames >::HumanReadable(this->FunctionWriteNames);
    description__cdg << "  FunctionReadNames:" << cmnData<mtsCommandPointerNames >::HumanReadable(this->FunctionReadNames);
    description__cdg << "  FunctionQualifiedReadNames:" << cmnData<mtsCommandPointerNames >::HumanReadable(this->FunctionQualifiedReadNames);
    description__cdg << "  FunctionVoidReturnNames:" << cmnData<mtsCommandPointerNames >::HumanReadable(this->FunctionVoidReturnNames);
    description__cdg << "  FunctionWriteReturnNames:" << cmnData<mtsCommandPointerNames >::HumanReadable(this->FunctionWriteReturnNames);
    description__cdg << "  EventHandlersVoid:" << cmnData<mtsEventHandlersVoidDescription >::HumanReadable(this->EventHandlersVoid);
    description__cdg << "  EventHandlersWrite:" << cmnData<mtsEventHandlersWriteDescription >::HumanReadable(this->EventHandlersWrite);
    description__cdg << "  IsRequired:" << cmnData<bool >::HumanReadable(this->IsRequired);
    return description__cdg.str();
}
bool mtsInterfaceRequiredDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->InterfaceName)
           && cmnData<mtsCommandPointerNames >::ScalarNumberIsFixed(this->FunctionVoidNames)
           && cmnData<mtsCommandPointerNames >::ScalarNumberIsFixed(this->FunctionWriteNames)
           && cmnData<mtsCommandPointerNames >::ScalarNumberIsFixed(this->FunctionReadNames)
           && cmnData<mtsCommandPointerNames >::ScalarNumberIsFixed(this->FunctionQualifiedReadNames)
           && cmnData<mtsCommandPointerNames >::ScalarNumberIsFixed(this->FunctionVoidReturnNames)
           && cmnData<mtsCommandPointerNames >::ScalarNumberIsFixed(this->FunctionWriteReturnNames)
           && cmnData<mtsEventHandlersVoidDescription >::ScalarNumberIsFixed(this->EventHandlersVoid)
           && cmnData<mtsEventHandlersWriteDescription >::ScalarNumberIsFixed(this->EventHandlersWrite)
           && cmnData<bool >::ScalarNumberIsFixed(this->IsRequired)
    ;
}
size_t mtsInterfaceRequiredDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->InterfaceName)
           + cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionVoidNames)
           + cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionWriteNames)
           + cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionReadNames)
           + cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionQualifiedReadNames)
           + cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionVoidReturnNames)
           + cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionWriteReturnNames)
           + cmnData<mtsEventHandlersVoidDescription >::ScalarNumber(this->EventHandlersVoid)
           + cmnData<mtsEventHandlersWriteDescription >::ScalarNumber(this->EventHandlersWrite)
           + cmnData<bool >::ScalarNumber(this->IsRequired)
    ;
}
std::string mtsInterfaceRequiredDescription::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->InterfaceName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->InterfaceName, index_cdg - baseIndex__cdg, prefix__cdg + "InterfaceName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionVoidNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandPointerNames >::ScalarDescription(this->FunctionVoidNames, index_cdg - baseIndex__cdg, prefix__cdg + "FunctionVoidNames");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionWriteNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandPointerNames >::ScalarDescription(this->FunctionWriteNames, index_cdg - baseIndex__cdg, prefix__cdg + "FunctionWriteNames");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionReadNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandPointerNames >::ScalarDescription(this->FunctionReadNames, index_cdg - baseIndex__cdg, prefix__cdg + "FunctionReadNames");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionQualifiedReadNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandPointerNames >::ScalarDescription(this->FunctionQualifiedReadNames, index_cdg - baseIndex__cdg, prefix__cdg + "FunctionQualifiedReadNames");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionVoidReturnNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandPointerNames >::ScalarDescription(this->FunctionVoidReturnNames, index_cdg - baseIndex__cdg, prefix__cdg + "FunctionVoidReturnNames");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionWriteReturnNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandPointerNames >::ScalarDescription(this->FunctionWriteReturnNames, index_cdg - baseIndex__cdg, prefix__cdg + "FunctionWriteReturnNames");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsEventHandlersVoidDescription >::ScalarNumber(this->EventHandlersVoid);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsEventHandlersVoidDescription >::ScalarDescription(this->EventHandlersVoid, index_cdg - baseIndex__cdg, prefix__cdg + "EventHandlersVoid");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsEventHandlersWriteDescription >::ScalarNumber(this->EventHandlersWrite);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsEventHandlersWriteDescription >::ScalarDescription(this->EventHandlersWrite, index_cdg - baseIndex__cdg, prefix__cdg + "EventHandlersWrite");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->IsRequired);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->IsRequired, index_cdg - baseIndex__cdg, prefix__cdg + "IsRequired");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsInterfaceRequiredDescription index out of range"));
    return "";
}
double mtsInterfaceRequiredDescription::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->InterfaceName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->InterfaceName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionVoidNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandPointerNames >::Scalar(this->FunctionVoidNames, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionWriteNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandPointerNames >::Scalar(this->FunctionWriteNames, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionReadNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandPointerNames >::Scalar(this->FunctionReadNames, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionQualifiedReadNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandPointerNames >::Scalar(this->FunctionQualifiedReadNames, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionVoidReturnNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandPointerNames >::Scalar(this->FunctionVoidReturnNames, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsCommandPointerNames >::ScalarNumber(this->FunctionWriteReturnNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsCommandPointerNames >::Scalar(this->FunctionWriteReturnNames, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsEventHandlersVoidDescription >::ScalarNumber(this->EventHandlersVoid);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsEventHandlersVoidDescription >::Scalar(this->EventHandlersVoid, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<mtsEventHandlersWriteDescription >::ScalarNumber(this->EventHandlersWrite);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsEventHandlersWriteDescription >::Scalar(this->EventHandlersWrite, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->IsRequired);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->IsRequired, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsInterfaceRequiredDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsInterfaceRequiredDescription >::SerializeText(const mtsInterfaceRequiredDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsInterfaceRequiredDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->InterfaceName, jsonValue["InterfaceName"]);
    cmnDataJSON<mtsCommandPointerNames >::SerializeText(this->FunctionVoidNames, jsonValue["FunctionVoidNames"]);
    cmnDataJSON<mtsCommandPointerNames >::SerializeText(this->FunctionWriteNames, jsonValue["FunctionWriteNames"]);
    cmnDataJSON<mtsCommandPointerNames >::SerializeText(this->FunctionReadNames, jsonValue["FunctionReadNames"]);
    cmnDataJSON<mtsCommandPointerNames >::SerializeText(this->FunctionQualifiedReadNames, jsonValue["FunctionQualifiedReadNames"]);
    cmnDataJSON<mtsCommandPointerNames >::SerializeText(this->FunctionVoidReturnNames, jsonValue["FunctionVoidReturnNames"]);
    cmnDataJSON<mtsCommandPointerNames >::SerializeText(this->FunctionWriteReturnNames, jsonValue["FunctionWriteReturnNames"]);
    cmnDataJSON<mtsEventHandlersVoidDescription >::SerializeText(this->EventHandlersVoid, jsonValue["EventHandlersVoid"]);
    cmnDataJSON<mtsEventHandlersWriteDescription >::SerializeText(this->EventHandlersWrite, jsonValue["EventHandlersWrite"]);
    cmnDataJSON<bool >::SerializeText(this->IsRequired, jsonValue["IsRequired"]);
}
template<>
void cmnDataJSON<mtsInterfaceRequiredDescription >::DeSerializeText(mtsInterfaceRequiredDescription & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsInterfaceRequiredDescription::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["InterfaceName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->InterfaceName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: InterfaceName");
    };
    field__cdg = jsonValue["FunctionVoidNames"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsCommandPointerNames >::DeSerializeText(this->FunctionVoidNames, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsCommandPointerNames>::DeSerializeText: empty JSON value for: FunctionVoidNames");
    };
    field__cdg = jsonValue["FunctionWriteNames"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsCommandPointerNames >::DeSerializeText(this->FunctionWriteNames, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsCommandPointerNames>::DeSerializeText: empty JSON value for: FunctionWriteNames");
    };
    field__cdg = jsonValue["FunctionReadNames"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsCommandPointerNames >::DeSerializeText(this->FunctionReadNames, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsCommandPointerNames>::DeSerializeText: empty JSON value for: FunctionReadNames");
    };
    field__cdg = jsonValue["FunctionQualifiedReadNames"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsCommandPointerNames >::DeSerializeText(this->FunctionQualifiedReadNames, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsCommandPointerNames>::DeSerializeText: empty JSON value for: FunctionQualifiedReadNames");
    };
    field__cdg = jsonValue["FunctionVoidReturnNames"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsCommandPointerNames >::DeSerializeText(this->FunctionVoidReturnNames, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsCommandPointerNames>::DeSerializeText: empty JSON value for: FunctionVoidReturnNames");
    };
    field__cdg = jsonValue["FunctionWriteReturnNames"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsCommandPointerNames >::DeSerializeText(this->FunctionWriteReturnNames, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsCommandPointerNames>::DeSerializeText: empty JSON value for: FunctionWriteReturnNames");
    };
    field__cdg = jsonValue["EventHandlersVoid"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsEventHandlersVoidDescription >::DeSerializeText(this->EventHandlersVoid, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsEventHandlersVoidDescription>::DeSerializeText: empty JSON value for: EventHandlersVoid");
    };
    field__cdg = jsonValue["EventHandlersWrite"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsEventHandlersWriteDescription >::DeSerializeText(this->EventHandlersWrite, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsEventHandlersWriteDescription>::DeSerializeText: empty JSON value for: EventHandlersWrite");
    };
    field__cdg = jsonValue["IsRequired"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->IsRequired, field__cdg);
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: IsRequired");
    };
}
#endif // CISST_HAS_JSON

