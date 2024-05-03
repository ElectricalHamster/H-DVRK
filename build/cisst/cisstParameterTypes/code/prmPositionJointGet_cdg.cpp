// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmPositionJointGet.cdg

#include <cisstParameterTypes/prmPositionJointGet.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 11 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmPositionJointGetProxy);

prmPositionJointGet::prmPositionJointGet(void):
    mtsGenericObject()
    , mPosition()
    , mTimestamps(vctDynamicVector<double>(0, 0.0))
{}

prmPositionJointGet::prmPositionJointGet(const prmPositionJointGet & other):
    mtsGenericObject(other)
    , mPosition(other.mPosition)
    , mTimestamps(other.mTimestamps)
{}

prmPositionJointGet & prmPositionJointGet::operator = (const prmPositionJointGet & other)
{
    mtsGenericObject::operator = (other);
    mPosition = other.mPosition;
    mTimestamps = other.mTimestamps;
    return *this;
}

prmPositionJointGet::~prmPositionJointGet(void){}


void prmPositionJointGet::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mPosition);
    cmnSerializeRaw(outputStream__cdg, this->mTimestamps);
}


void prmPositionJointGet::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mPosition);
    cmnDeSerializeRaw(inputStream__cdg, this->mTimestamps);
}


void prmPositionJointGet::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmPositionJointGet::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmPositionJointGet >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmPositionJointGet >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 21 */

/* accessors is set to: all */
void prmPositionJointGet::GetPosition(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mPosition;
}

void prmPositionJointGet::SetPosition(const vctDynamicVector<double> & newValue)
{
    this->mPosition = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmPositionJointGet::Position(void) const
{
    return this->mPosition;
}

vctDynamicVector<double> & prmPositionJointGet::Position(void)
{
    return this->mPosition;
}

/* source line: 27 */

/* accessors is set to: all */
void prmPositionJointGet::GetTimestamps(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mTimestamps;
}

void prmPositionJointGet::SetTimestamps(const vctDynamicVector<double> & newValue)
{
    this->mTimestamps = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmPositionJointGet::Timestamps(void) const
{
    return this->mTimestamps;
}

vctDynamicVector<double> & prmPositionJointGet::Timestamps(void)
{
    return this->mTimestamps;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmPositionJointGet & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmPositionJointGet & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmPositionJointGet::Copy(const prmPositionJointGet & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<vctDynamicVector<double> >::Copy(this->mPosition, source__cdg.mPosition);
    cmnData<vctDynamicVector<double> >::Copy(this->mTimestamps, source__cdg.mTimestamps);
}
void prmPositionJointGet::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mPosition, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mTimestamps, outputStream__cdg);
}
void prmPositionJointGet::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mPosition, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mTimestamps, inputStream__cdg, localFormat, remoteFormat);
}
void prmPositionJointGet::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<vctDynamicVector<double> >::SerializeText(this->mPosition, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mTimestamps, outputStream__cdg, delimiter__cdg);
}
std::string prmPositionJointGet::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mPosition, delimiter__cdg, prefix__cdg + "Position");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mTimestamps, delimiter__cdg, prefix__cdg + "Timestamps");
    return description__cdg.str();
}
void prmPositionJointGet::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionJointGet");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionJointGet");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mPosition, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionJointGet");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mTimestamps, inputStream__cdg, delimiter__cdg);
}
std::string prmPositionJointGet::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmPositionJointGet" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  Position:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mPosition);
    description__cdg << "  Timestamps:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mTimestamps);
    return description__cdg.str();
}
bool prmPositionJointGet::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mPosition)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mTimestamps)
    ;
}
size_t prmPositionJointGet::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPosition)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mTimestamps)
    ;
}
std::string prmPositionJointGet::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mPosition, index_cdg - baseIndex__cdg, prefix__cdg + "Position");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mTimestamps);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mTimestamps, index_cdg - baseIndex__cdg, prefix__cdg + "Timestamps");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmPositionJointGet index out of range"));
    return "";
}
double prmPositionJointGet::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mPosition, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mTimestamps);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mTimestamps, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmPositionJointGet index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmPositionJointGet >::SerializeText(const prmPositionJointGet & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmPositionJointGet::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mPosition, jsonValue["Position"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mTimestamps, jsonValue["Timestamps"]);
}
template<>
void cmnDataJSON<prmPositionJointGet >::DeSerializeText(prmPositionJointGet & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmPositionJointGet::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["Position"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mPosition, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mPosition");
    };
    field__cdg = jsonValue["Timestamps"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mTimestamps, field__cdg);
    };
}
#endif // CISST_HAS_JSON


