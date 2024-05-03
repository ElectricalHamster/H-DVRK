// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmInputData.cdg

#include <cisstParameterTypes/prmInputData.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 13 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmInputDataProxy);

prmInputData::prmInputData(void):
    mtsGenericObject()
    , mAnalogInputs()
    , mDigitalInputs()
{}

prmInputData::prmInputData(const prmInputData & other):
    mtsGenericObject(other)
    , mAnalogInputs(other.mAnalogInputs)
    , mDigitalInputs(other.mDigitalInputs)
{}

prmInputData & prmInputData::operator = (const prmInputData & other)
{
    mtsGenericObject::operator = (other);
    mAnalogInputs = other.mAnalogInputs;
    mDigitalInputs = other.mDigitalInputs;
    return *this;
}

prmInputData::~prmInputData(void){}


void prmInputData::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mAnalogInputs);
    cmnSerializeRaw(outputStream__cdg, this->mDigitalInputs);
}


void prmInputData::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mAnalogInputs);
    cmnDeSerializeRaw(inputStream__cdg, this->mDigitalInputs);
}


void prmInputData::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmInputData::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmInputData >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmInputData >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 22 */

/* accessors is set to: all */
void prmInputData::GetAnalogInputs(vctDoubleVec & placeHolder) const
{
    placeHolder = this->mAnalogInputs;
}

void prmInputData::SetAnalogInputs(const vctDoubleVec & newValue)
{
    this->mAnalogInputs = newValue;
}


/* accessors is set to: all */
const vctDoubleVec & prmInputData::AnalogInputs(void) const
{
    return this->mAnalogInputs;
}

vctDoubleVec & prmInputData::AnalogInputs(void)
{
    return this->mAnalogInputs;
}

/* source line: 28 */

/* accessors is set to: all */
void prmInputData::GetDigitalInputs(vctBoolVec & placeHolder) const
{
    placeHolder = this->mDigitalInputs;
}

void prmInputData::SetDigitalInputs(const vctBoolVec & newValue)
{
    this->mDigitalInputs = newValue;
}


/* accessors is set to: all */
const vctBoolVec & prmInputData::DigitalInputs(void) const
{
    return this->mDigitalInputs;
}

vctBoolVec & prmInputData::DigitalInputs(void)
{
    return this->mDigitalInputs;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmInputData & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmInputData & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmInputData::Copy(const prmInputData & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<vctDoubleVec >::Copy(this->mAnalogInputs, source__cdg.mAnalogInputs);
    cmnData<vctBoolVec >::Copy(this->mDigitalInputs, source__cdg.mDigitalInputs);
}
void prmInputData::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctDoubleVec >::SerializeBinary(this->mAnalogInputs, outputStream__cdg);
    cmnData<vctBoolVec >::SerializeBinary(this->mDigitalInputs, outputStream__cdg);
}
void prmInputData::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleVec >::DeSerializeBinary(this->mAnalogInputs, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctBoolVec >::DeSerializeBinary(this->mDigitalInputs, inputStream__cdg, localFormat, remoteFormat);
}
void prmInputData::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<vctDoubleVec >::SerializeText(this->mAnalogInputs, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctBoolVec >::SerializeText(this->mDigitalInputs, outputStream__cdg, delimiter__cdg);
}
std::string prmInputData::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vctDoubleVec >::SerializeDescription(this->mAnalogInputs, delimiter__cdg, prefix__cdg + "AnalogInputs");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctBoolVec >::SerializeDescription(this->mDigitalInputs, delimiter__cdg, prefix__cdg + "DigitalInputs");
    return description__cdg.str();
}
void prmInputData::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmInputData");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmInputData");
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->mAnalogInputs, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmInputData");
    }
    someData__cdg = true;
    cmnData<vctBoolVec >::DeSerializeText(this->mDigitalInputs, inputStream__cdg, delimiter__cdg);
}
std::string prmInputData::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmInputData" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  AnalogInputs:" << cmnData<vctDoubleVec >::HumanReadable(this->mAnalogInputs);
    description__cdg << "  DigitalInputs:" << cmnData<vctBoolVec >::HumanReadable(this->mDigitalInputs);
    return description__cdg.str();
}
bool prmInputData::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->mAnalogInputs)
           && cmnData<vctBoolVec >::ScalarNumberIsFixed(this->mDigitalInputs)
    ;
}
size_t prmInputData::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctDoubleVec >::ScalarNumber(this->mAnalogInputs)
           + cmnData<vctBoolVec >::ScalarNumber(this->mDigitalInputs)
    ;
}
std::string prmInputData::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->mAnalogInputs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::ScalarDescription(this->mAnalogInputs, index_cdg - baseIndex__cdg, prefix__cdg + "AnalogInputs");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctBoolVec >::ScalarNumber(this->mDigitalInputs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctBoolVec >::ScalarDescription(this->mDigitalInputs, index_cdg - baseIndex__cdg, prefix__cdg + "DigitalInputs");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmInputData index out of range"));
    return "";
}
double prmInputData::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->mAnalogInputs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::Scalar(this->mAnalogInputs, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctBoolVec >::ScalarNumber(this->mDigitalInputs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctBoolVec >::Scalar(this->mDigitalInputs, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmInputData index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmInputData >::SerializeText(const prmInputData & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmInputData::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctDoubleVec >::SerializeText(this->mAnalogInputs, jsonValue["AnalogInputs"]);
    cmnDataJSON<vctBoolVec >::SerializeText(this->mDigitalInputs, jsonValue["DigitalInputs"]);
}
template<>
void cmnDataJSON<prmInputData >::DeSerializeText(prmInputData & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmInputData::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["AnalogInputs"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleVec >::DeSerializeText(this->mAnalogInputs, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDoubleVec>::DeSerializeText: empty JSON value for: mAnalogInputs");
    };
    field__cdg = jsonValue["DigitalInputs"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctBoolVec >::DeSerializeText(this->mDigitalInputs, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctBoolVec>::DeSerializeText: empty JSON value for: mDigitalInputs");
    };
}
#endif // CISST_HAS_JSON


