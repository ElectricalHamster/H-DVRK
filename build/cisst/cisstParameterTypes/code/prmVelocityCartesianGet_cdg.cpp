// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmVelocityCartesianGet.cdg

#include <cisstParameterTypes/prmVelocityCartesianGet.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 11 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmVelocityCartesianGetProxy);

prmVelocityCartesianGet::prmVelocityCartesianGet(void):
    mtsGenericObject()
    , mVelocityLinear(vct3(0.0, 0.0, 0.0))
    , mVelocityAngular(vct3(0.0, 0.0, 0.0))
    , mMovingFrame("")
    , mReferenceFrame("")
{}

prmVelocityCartesianGet::prmVelocityCartesianGet(const prmVelocityCartesianGet & other):
    mtsGenericObject(other)
    , mVelocityLinear(other.mVelocityLinear)
    , mVelocityAngular(other.mVelocityAngular)
    , mMovingFrame(other.mMovingFrame)
    , mReferenceFrame(other.mReferenceFrame)
{}

prmVelocityCartesianGet & prmVelocityCartesianGet::operator = (const prmVelocityCartesianGet & other)
{
    mtsGenericObject::operator = (other);
    mVelocityLinear = other.mVelocityLinear;
    mVelocityAngular = other.mVelocityAngular;
    mMovingFrame = other.mMovingFrame;
    mReferenceFrame = other.mReferenceFrame;
    return *this;
}

prmVelocityCartesianGet::~prmVelocityCartesianGet(void){}


void prmVelocityCartesianGet::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mVelocityLinear);
    cmnSerializeRaw(outputStream__cdg, this->mVelocityAngular);
    cmnSerializeRaw(outputStream__cdg, this->mMovingFrame);
    cmnSerializeRaw(outputStream__cdg, this->mReferenceFrame);
}


void prmVelocityCartesianGet::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mVelocityLinear);
    cmnDeSerializeRaw(inputStream__cdg, this->mVelocityAngular);
    cmnDeSerializeRaw(inputStream__cdg, this->mMovingFrame);
    cmnDeSerializeRaw(inputStream__cdg, this->mReferenceFrame);
}


void prmVelocityCartesianGet::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmVelocityCartesianGet::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmVelocityCartesianGet >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmVelocityCartesianGet >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 21 */

/* accessors is set to: all */
void prmVelocityCartesianGet::GetVelocityLinear(vct3 & placeHolder) const
{
    placeHolder = this->mVelocityLinear;
}

void prmVelocityCartesianGet::SetVelocityLinear(const vct3 & newValue)
{
    this->mVelocityLinear = newValue;
}


/* accessors is set to: all */
const vct3 & prmVelocityCartesianGet::VelocityLinear(void) const
{
    return this->mVelocityLinear;
}

vct3 & prmVelocityCartesianGet::VelocityLinear(void)
{
    return this->mVelocityLinear;
}

/* source line: 28 */

/* accessors is set to: all */
void prmVelocityCartesianGet::GetVelocityAngular(vct3 & placeHolder) const
{
    placeHolder = this->mVelocityAngular;
}

void prmVelocityCartesianGet::SetVelocityAngular(const vct3 & newValue)
{
    this->mVelocityAngular = newValue;
}


/* accessors is set to: all */
const vct3 & prmVelocityCartesianGet::VelocityAngular(void) const
{
    return this->mVelocityAngular;
}

vct3 & prmVelocityCartesianGet::VelocityAngular(void)
{
    return this->mVelocityAngular;
}

/* source line: 35 */

/* accessors is set to: all */
void prmVelocityCartesianGet::GetMovingFrame(std::string & placeHolder) const
{
    placeHolder = this->mMovingFrame;
}

void prmVelocityCartesianGet::SetMovingFrame(const std::string & newValue)
{
    this->mMovingFrame = newValue;
}


/* accessors is set to: all */
const std::string & prmVelocityCartesianGet::MovingFrame(void) const
{
    return this->mMovingFrame;
}

std::string & prmVelocityCartesianGet::MovingFrame(void)
{
    return this->mMovingFrame;
}

/* source line: 42 */

/* accessors is set to: all */
void prmVelocityCartesianGet::GetReferenceFrame(std::string & placeHolder) const
{
    placeHolder = this->mReferenceFrame;
}

void prmVelocityCartesianGet::SetReferenceFrame(const std::string & newValue)
{
    this->mReferenceFrame = newValue;
}


/* accessors is set to: all */
const std::string & prmVelocityCartesianGet::ReferenceFrame(void) const
{
    return this->mReferenceFrame;
}

std::string & prmVelocityCartesianGet::ReferenceFrame(void)
{
    return this->mReferenceFrame;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmVelocityCartesianGet & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmVelocityCartesianGet & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmVelocityCartesianGet::Copy(const prmVelocityCartesianGet & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<vct3 >::Copy(this->mVelocityLinear, source__cdg.mVelocityLinear);
    cmnData<vct3 >::Copy(this->mVelocityAngular, source__cdg.mVelocityAngular);
    cmnData<std::string >::Copy(this->mMovingFrame, source__cdg.mMovingFrame);
    cmnData<std::string >::Copy(this->mReferenceFrame, source__cdg.mReferenceFrame);
}
void prmVelocityCartesianGet::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mVelocityLinear, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mVelocityAngular, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->mMovingFrame, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->mReferenceFrame, outputStream__cdg);
}
void prmVelocityCartesianGet::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mVelocityLinear, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mVelocityAngular, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->mMovingFrame, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->mReferenceFrame, inputStream__cdg, localFormat, remoteFormat);
}
void prmVelocityCartesianGet::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<vct3 >::SerializeText(this->mVelocityLinear, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mVelocityAngular, outputStream__cdg, delimiter__cdg);
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
}
std::string prmVelocityCartesianGet::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mVelocityLinear, delimiter__cdg, prefix__cdg + "VelocityLinear");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mVelocityAngular, delimiter__cdg, prefix__cdg + "VelocityAngular");
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
    return description__cdg.str();
}
void prmVelocityCartesianGet::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmVelocityCartesianGet");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmVelocityCartesianGet");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mVelocityLinear, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmVelocityCartesianGet");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mVelocityAngular, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmVelocityCartesianGet");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->mMovingFrame, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmVelocityCartesianGet");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->mReferenceFrame, inputStream__cdg, delimiter__cdg);
}
std::string prmVelocityCartesianGet::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmVelocityCartesianGet" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  VelocityLinear:" << cmnData<vct3 >::HumanReadable(this->mVelocityLinear);
    description__cdg << "  VelocityAngular:" << cmnData<vct3 >::HumanReadable(this->mVelocityAngular);
    description__cdg << "  MovingFrame:" << cmnData<std::string >::HumanReadable(this->mMovingFrame);
    description__cdg << "  ReferenceFrame:" << cmnData<std::string >::HumanReadable(this->mReferenceFrame);
    return description__cdg.str();
}
bool prmVelocityCartesianGet::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mVelocityLinear)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mVelocityAngular)
           && cmnData<std::string >::ScalarNumberIsFixed(this->mMovingFrame)
           && cmnData<std::string >::ScalarNumberIsFixed(this->mReferenceFrame)
    ;
}
size_t prmVelocityCartesianGet::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vct3 >::ScalarNumber(this->mVelocityLinear)
           + cmnData<vct3 >::ScalarNumber(this->mVelocityAngular)
           + cmnData<std::string >::ScalarNumber(this->mMovingFrame)
           + cmnData<std::string >::ScalarNumber(this->mReferenceFrame)
    ;
}
std::string prmVelocityCartesianGet::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mVelocityLinear);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mVelocityLinear, index_cdg - baseIndex__cdg, prefix__cdg + "VelocityLinear");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mVelocityAngular);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mVelocityAngular, index_cdg - baseIndex__cdg, prefix__cdg + "VelocityAngular");
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
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmVelocityCartesianGet index out of range"));
    return "";
}
double prmVelocityCartesianGet::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mVelocityLinear);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mVelocityLinear, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mVelocityAngular);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mVelocityAngular, index_cdg - baseIndex__cdg);
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
    cmnThrow(std::out_of_range("cmnDataScalar: prmVelocityCartesianGet index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmVelocityCartesianGet >::SerializeText(const prmVelocityCartesianGet & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmVelocityCartesianGet::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vct3 >::SerializeText(this->mVelocityLinear, jsonValue["VelocityLinear"]);
    cmnDataJSON<vct3 >::SerializeText(this->mVelocityAngular, jsonValue["VelocityAngular"]);
    cmnDataJSON<std::string >::SerializeText(this->mMovingFrame, jsonValue["MovingFrame"]);
    cmnDataJSON<std::string >::SerializeText(this->mReferenceFrame, jsonValue["ReferenceFrame"]);
}
template<>
void cmnDataJSON<prmVelocityCartesianGet >::DeSerializeText(prmVelocityCartesianGet & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmVelocityCartesianGet::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["VelocityLinear"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mVelocityLinear, field__cdg);
    };
    field__cdg = jsonValue["VelocityAngular"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mVelocityAngular, field__cdg);
    };
    field__cdg = jsonValue["MovingFrame"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->mMovingFrame, field__cdg);
    };
    field__cdg = jsonValue["ReferenceFrame"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->mReferenceFrame, field__cdg);
    };
}
#endif // CISST_HAS_JSON


