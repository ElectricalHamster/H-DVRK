// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmKeyValue.cdg

#include <cisstParameterTypes/prmKeyValue.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 9 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmKeyValueProxy);

prmKeyValue::prmKeyValue(void):
    Key()
    , Value()
{}

prmKeyValue::prmKeyValue(const prmKeyValue & other):
    Key(other.Key)
    , Value(other.Value)
{}

prmKeyValue & prmKeyValue::operator = (const prmKeyValue & other)
{
    Key = other.Key;
    Value = other.Value;
    return *this;
}

prmKeyValue::prmKeyValue(const std::string & newKey, const std::string & newValue):
    Key(newKey)
    , Value(newValue)
{}

prmKeyValue::~prmKeyValue(void){}


void prmKeyValue::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Key);
    cmnSerializeRaw(outputStream__cdg, this->Value);
}


void prmKeyValue::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Key);
    cmnDeSerializeRaw(inputStream__cdg, this->Value);
}


void prmKeyValue::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmKeyValue::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmKeyValue >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmKeyValue >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 13 */
/* source line: 18 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmKeyValue & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmKeyValue & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmKeyValue::Copy(const prmKeyValue & source__cdg) {
    cmnData<std::string >::Copy(this->Key, source__cdg.Key);
    cmnData<std::string >::Copy(this->Value, source__cdg.Value);
}
void prmKeyValue::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Key, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->Value, outputStream__cdg);
}
void prmKeyValue::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Key, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->Value, inputStream__cdg, localFormat, remoteFormat);
}
void prmKeyValue::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Key, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Value, outputStream__cdg, delimiter__cdg);
}
std::string prmKeyValue::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Key, delimiter__cdg, prefix__cdg + "Key");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Value, delimiter__cdg, prefix__cdg + "Value");
    return description__cdg.str();
}
void prmKeyValue::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmKeyValue");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Key, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmKeyValue");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Value, inputStream__cdg, delimiter__cdg);
}
std::string prmKeyValue::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmKeyValue" << std::endl;
    description__cdg << "  Key:" << cmnData<std::string >::HumanReadable(this->Key);
    description__cdg << "  Value:" << cmnData<std::string >::HumanReadable(this->Value);
    return description__cdg.str();
}
bool prmKeyValue::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Key)
           && cmnData<std::string >::ScalarNumberIsFixed(this->Value)
    ;
}
size_t prmKeyValue::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Key)
           + cmnData<std::string >::ScalarNumber(this->Value)
    ;
}
std::string prmKeyValue::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Key);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Key, index_cdg - baseIndex__cdg, prefix__cdg + "Key");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Value);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Value, index_cdg - baseIndex__cdg, prefix__cdg + "Value");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmKeyValue index out of range"));
    return "";
}
double prmKeyValue::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Key);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Key, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Value);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Value, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmKeyValue index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmKeyValue >::SerializeText(const prmKeyValue & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmKeyValue::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Key, jsonValue["Key"]);
    cmnDataJSON<std::string >::SerializeText(this->Value, jsonValue["Value"]);
}
template<>
void cmnDataJSON<prmKeyValue >::DeSerializeText(prmKeyValue & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmKeyValue::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Key"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Key, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Key");
    };
    field__cdg = jsonValue["Value"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Value, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Value");
    };
}
#endif // CISST_HAS_JSON

