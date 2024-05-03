// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmPositionCartesianGet.cdg

#include <cisstParameterTypes/prmPositionCartesianGet.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 17 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmPositionCartesianGetProxy);

prmPositionCartesianGet::prmPositionCartesianGet(void):
    mtsGenericObject()
    , mMovingFrame()
    , mReferenceFrame()
    , mPosition()
{}

prmPositionCartesianGet::prmPositionCartesianGet(const prmPositionCartesianGet & other):
    mtsGenericObject(other)
    , mMovingFrame(other.mMovingFrame)
    , mReferenceFrame(other.mReferenceFrame)
    , mPosition(other.mPosition)
{}

prmPositionCartesianGet & prmPositionCartesianGet::operator = (const prmPositionCartesianGet & other)
{
    mtsGenericObject::operator = (other);
    mMovingFrame = other.mMovingFrame;
    mReferenceFrame = other.mReferenceFrame;
    mPosition = other.mPosition;
    return *this;
}

prmPositionCartesianGet::~prmPositionCartesianGet(void){}


void prmPositionCartesianGet::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mMovingFrame);
    cmnSerializeRaw(outputStream__cdg, this->mReferenceFrame);
    cmnSerializeRaw(outputStream__cdg, this->mPosition);
}


void prmPositionCartesianGet::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mMovingFrame);
    cmnDeSerializeRaw(inputStream__cdg, this->mReferenceFrame);
    cmnDeSerializeRaw(inputStream__cdg, this->mPosition);
}


void prmPositionCartesianGet::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmPositionCartesianGet::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmPositionCartesianGet >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmPositionCartesianGet >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 40 */

/* accessors is set to: all */
void prmPositionCartesianGet::GetMovingFrame(std::string & placeHolder) const
{
    placeHolder = this->mMovingFrame;
}

void prmPositionCartesianGet::SetMovingFrame(const std::string & newValue)
{
    this->mMovingFrame = newValue;
}


/* accessors is set to: all */
const std::string & prmPositionCartesianGet::MovingFrame(void) const
{
    return this->mMovingFrame;
}

std::string & prmPositionCartesianGet::MovingFrame(void)
{
    return this->mMovingFrame;
}

/* source line: 47 */

/* accessors is set to: all */
void prmPositionCartesianGet::GetReferenceFrame(std::string & placeHolder) const
{
    placeHolder = this->mReferenceFrame;
}

void prmPositionCartesianGet::SetReferenceFrame(const std::string & newValue)
{
    this->mReferenceFrame = newValue;
}


/* accessors is set to: all */
const std::string & prmPositionCartesianGet::ReferenceFrame(void) const
{
    return this->mReferenceFrame;
}

std::string & prmPositionCartesianGet::ReferenceFrame(void)
{
    return this->mReferenceFrame;
}

/* source line: 54 */

/* accessors is set to: all */
void prmPositionCartesianGet::GetPosition(vctFrm3 & placeHolder) const
{
    placeHolder = this->mPosition;
}

void prmPositionCartesianGet::SetPosition(const vctFrm3 & newValue)
{
    this->mPosition = newValue;
}


/* accessors is set to: all */
const vctFrm3 & prmPositionCartesianGet::Position(void) const
{
    return this->mPosition;
}

vctFrm3 & prmPositionCartesianGet::Position(void)
{
    return this->mPosition;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmPositionCartesianGet & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmPositionCartesianGet & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmPositionCartesianGet::Copy(const prmPositionCartesianGet & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<std::string >::Copy(this->mMovingFrame, source__cdg.mMovingFrame);
    cmnData<std::string >::Copy(this->mReferenceFrame, source__cdg.mReferenceFrame);
    cmnData<vctFrm3 >::Copy(this->mPosition, source__cdg.mPosition);
}
void prmPositionCartesianGet::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->mMovingFrame, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->mReferenceFrame, outputStream__cdg);
    cmnData<vctFrm3 >::SerializeBinary(this->mPosition, outputStream__cdg);
}
void prmPositionCartesianGet::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->mMovingFrame, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->mReferenceFrame, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctFrm3 >::DeSerializeBinary(this->mPosition, inputStream__cdg, localFormat, remoteFormat);
}
void prmPositionCartesianGet::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<std::string >::SerializeText(this->mMovingFrame, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->mReferenceFrame, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::SerializeText(this->mPosition, outputStream__cdg, delimiter__cdg);
}
std::string prmPositionCartesianGet::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<std::string >::SerializeDescription(this->mMovingFrame, delimiter__cdg, prefix__cdg + "MovingFrame");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->mReferenceFrame, delimiter__cdg, prefix__cdg + "ReferenceFrame");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctFrm3 >::SerializeDescription(this->mPosition, delimiter__cdg, prefix__cdg + "Position");
    return description__cdg.str();
}
void prmPositionCartesianGet::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianGet");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianGet");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->mMovingFrame, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianGet");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->mReferenceFrame, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianGet");
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::DeSerializeText(this->mPosition, inputStream__cdg, delimiter__cdg);
}
std::string prmPositionCartesianGet::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmPositionCartesianGet" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  MovingFrame:" << cmnData<std::string >::HumanReadable(this->mMovingFrame);
    description__cdg << "  ReferenceFrame:" << cmnData<std::string >::HumanReadable(this->mReferenceFrame);
    description__cdg << "  Position:" << cmnData<vctFrm3 >::HumanReadable(this->mPosition);
    return description__cdg.str();
}
bool prmPositionCartesianGet::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<std::string >::ScalarNumberIsFixed(this->mMovingFrame)
           && cmnData<std::string >::ScalarNumberIsFixed(this->mReferenceFrame)
           && cmnData<vctFrm3 >::ScalarNumberIsFixed(this->mPosition)
    ;
}
size_t prmPositionCartesianGet::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<std::string >::ScalarNumber(this->mMovingFrame)
           + cmnData<std::string >::ScalarNumber(this->mReferenceFrame)
           + cmnData<vctFrm3 >::ScalarNumber(this->mPosition)
    ;
}
std::string prmPositionCartesianGet::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mMovingFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->mMovingFrame, index_cdg - baseIndex__cdg, prefix__cdg + "MovingFrame");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mReferenceFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->mReferenceFrame, index_cdg - baseIndex__cdg, prefix__cdg + "ReferenceFrame");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->mPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::ScalarDescription(this->mPosition, index_cdg - baseIndex__cdg, prefix__cdg + "Position");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmPositionCartesianGet index out of range"));
    return "";
}
double prmPositionCartesianGet::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mMovingFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->mMovingFrame, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mReferenceFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->mReferenceFrame, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->mPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::Scalar(this->mPosition, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmPositionCartesianGet index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmPositionCartesianGet >::SerializeText(const prmPositionCartesianGet & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmPositionCartesianGet::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<std::string >::SerializeText(this->mMovingFrame, jsonValue["MovingFrame"]);
    cmnDataJSON<std::string >::SerializeText(this->mReferenceFrame, jsonValue["ReferenceFrame"]);
    cmnDataJSON<vctFrm3 >::SerializeText(this->mPosition, jsonValue["Position"]);
}
template<>
void cmnDataJSON<prmPositionCartesianGet >::DeSerializeText(prmPositionCartesianGet & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmPositionCartesianGet::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["MovingFrame"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->mMovingFrame, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: mMovingFrame");
    };
    field__cdg = jsonValue["ReferenceFrame"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->mReferenceFrame, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: mReferenceFrame");
    };
    field__cdg = jsonValue["Position"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctFrm3 >::DeSerializeText(this->mPosition, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctFrm3>::DeSerializeText: empty JSON value for: mPosition");
    };
}
#endif // CISST_HAS_JSON


