// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmPositionCartesianArrayGet.cdg

#include <cisstParameterTypes/prmPositionCartesianArrayGet.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 12 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmPositionCartesianArrayGetProxy);

prmPositionCartesianArrayGet::prmPositionCartesianArrayGet(void):
    mtsGenericObject()
    , mReferenceFrame()
    , mPositions()
{}

prmPositionCartesianArrayGet::prmPositionCartesianArrayGet(const prmPositionCartesianArrayGet & other):
    mtsGenericObject(other)
    , mReferenceFrame(other.mReferenceFrame)
    , mPositions(other.mPositions)
{}

prmPositionCartesianArrayGet & prmPositionCartesianArrayGet::operator = (const prmPositionCartesianArrayGet & other)
{
    mtsGenericObject::operator = (other);
    mReferenceFrame = other.mReferenceFrame;
    mPositions = other.mPositions;
    return *this;
}

prmPositionCartesianArrayGet::~prmPositionCartesianArrayGet(void){}


void prmPositionCartesianArrayGet::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mReferenceFrame);
    cmnSerializeRaw(outputStream__cdg, this->mPositions);
}


void prmPositionCartesianArrayGet::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mReferenceFrame);
    cmnDeSerializeRaw(inputStream__cdg, this->mPositions);
}


void prmPositionCartesianArrayGet::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmPositionCartesianArrayGet::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmPositionCartesianArrayGet >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmPositionCartesianArrayGet >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 26 */

/* accessors is set to: all */
void prmPositionCartesianArrayGet::GetReferenceFrame(std::string & placeHolder) const
{
    placeHolder = this->mReferenceFrame;
}

void prmPositionCartesianArrayGet::SetReferenceFrame(const std::string & newValue)
{
    this->mReferenceFrame = newValue;
}


/* accessors is set to: all */
const std::string & prmPositionCartesianArrayGet::ReferenceFrame(void) const
{
    return this->mReferenceFrame;
}

std::string & prmPositionCartesianArrayGet::ReferenceFrame(void)
{
    return this->mReferenceFrame;
}

/* source line: 32 */

/* accessors is set to: all */
void prmPositionCartesianArrayGet::GetPositions(std::vector<vctFrm3> & placeHolder) const
{
    placeHolder = this->mPositions;
}

void prmPositionCartesianArrayGet::SetPositions(const std::vector<vctFrm3> & newValue)
{
    this->mPositions = newValue;
}


/* accessors is set to: all */
const std::vector<vctFrm3> & prmPositionCartesianArrayGet::Positions(void) const
{
    return this->mPositions;
}

std::vector<vctFrm3> & prmPositionCartesianArrayGet::Positions(void)
{
    return this->mPositions;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmPositionCartesianArrayGet & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmPositionCartesianArrayGet & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmPositionCartesianArrayGet::Copy(const prmPositionCartesianArrayGet & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<std::string >::Copy(this->mReferenceFrame, source__cdg.mReferenceFrame);
    cmnData<std::vector<vctFrm3> >::Copy(this->mPositions, source__cdg.mPositions);
}
void prmPositionCartesianArrayGet::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->mReferenceFrame, outputStream__cdg);
    cmnData<std::vector<vctFrm3> >::SerializeBinary(this->mPositions, outputStream__cdg);
}
void prmPositionCartesianArrayGet::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->mReferenceFrame, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<vctFrm3> >::DeSerializeBinary(this->mPositions, inputStream__cdg, localFormat, remoteFormat);
}
void prmPositionCartesianArrayGet::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<std::string >::SerializeText(this->mReferenceFrame, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<vctFrm3> >::SerializeText(this->mPositions, outputStream__cdg, delimiter__cdg);
}
std::string prmPositionCartesianArrayGet::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<std::string >::SerializeDescription(this->mReferenceFrame, delimiter__cdg, prefix__cdg + "ReferenceFrame");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<vctFrm3> >::SerializeDescription(this->mPositions, delimiter__cdg, prefix__cdg + "Positions");
    return description__cdg.str();
}
void prmPositionCartesianArrayGet::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianArrayGet");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianArrayGet");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->mReferenceFrame, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianArrayGet");
    }
    someData__cdg = true;
    cmnData<std::vector<vctFrm3> >::DeSerializeText(this->mPositions, inputStream__cdg, delimiter__cdg);
}
std::string prmPositionCartesianArrayGet::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmPositionCartesianArrayGet" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  ReferenceFrame:" << cmnData<std::string >::HumanReadable(this->mReferenceFrame);
    description__cdg << "  Positions:" << cmnData<std::vector<vctFrm3> >::HumanReadable(this->mPositions);
    return description__cdg.str();
}
bool prmPositionCartesianArrayGet::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<std::string >::ScalarNumberIsFixed(this->mReferenceFrame)
           && cmnData<std::vector<vctFrm3> >::ScalarNumberIsFixed(this->mPositions)
    ;
}
size_t prmPositionCartesianArrayGet::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<std::string >::ScalarNumber(this->mReferenceFrame)
           + cmnData<std::vector<vctFrm3> >::ScalarNumber(this->mPositions)
    ;
}
std::string prmPositionCartesianArrayGet::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mReferenceFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->mReferenceFrame, index_cdg - baseIndex__cdg, prefix__cdg + "ReferenceFrame");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<vctFrm3> >::ScalarNumber(this->mPositions);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<vctFrm3> >::ScalarDescription(this->mPositions, index_cdg - baseIndex__cdg, prefix__cdg + "Positions");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmPositionCartesianArrayGet index out of range"));
    return "";
}
double prmPositionCartesianArrayGet::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mReferenceFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->mReferenceFrame, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<vctFrm3> >::ScalarNumber(this->mPositions);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<vctFrm3> >::Scalar(this->mPositions, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmPositionCartesianArrayGet index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmPositionCartesianArrayGet >::SerializeText(const prmPositionCartesianArrayGet & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmPositionCartesianArrayGet::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<std::string >::SerializeText(this->mReferenceFrame, jsonValue["ReferenceFrame"]);
    cmnDataJSON<std::vector<vctFrm3> >::SerializeText(this->mPositions, jsonValue["Positions"]);
}
template<>
void cmnDataJSON<prmPositionCartesianArrayGet >::DeSerializeText(prmPositionCartesianArrayGet & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmPositionCartesianArrayGet::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["ReferenceFrame"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->mReferenceFrame, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: mReferenceFrame");
    };
    field__cdg = jsonValue["Positions"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<vctFrm3> >::DeSerializeText(this->mPositions, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<vctFrm3>>::DeSerializeText: empty JSON value for: mPositions");
    };
}
#endif // CISST_HAS_JSON


