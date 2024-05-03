// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmStateJoint.cdg

#include <cisstParameterTypes/prmStateJoint.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 12 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmStateJointProxy);

prmStateJoint::prmStateJoint(void):
    mtsGenericObject()
    , mName()
    , mPosition()
    , mVelocity()
    , mEffort()
{}

prmStateJoint::prmStateJoint(const prmStateJoint & other):
    mtsGenericObject(other)
    , mName(other.mName)
    , mPosition(other.mPosition)
    , mVelocity(other.mVelocity)
    , mEffort(other.mEffort)
{}

prmStateJoint & prmStateJoint::operator = (const prmStateJoint & other)
{
    mtsGenericObject::operator = (other);
    mName = other.mName;
    mPosition = other.mPosition;
    mVelocity = other.mVelocity;
    mEffort = other.mEffort;
    return *this;
}

prmStateJoint::~prmStateJoint(void){}


void prmStateJoint::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mName);
    cmnSerializeRaw(outputStream__cdg, this->mPosition);
    cmnSerializeRaw(outputStream__cdg, this->mVelocity);
    cmnSerializeRaw(outputStream__cdg, this->mEffort);
}


void prmStateJoint::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mName);
    cmnDeSerializeRaw(inputStream__cdg, this->mPosition);
    cmnDeSerializeRaw(inputStream__cdg, this->mVelocity);
    cmnDeSerializeRaw(inputStream__cdg, this->mEffort);
}


void prmStateJoint::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmStateJoint::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmStateJoint >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmStateJoint >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 22 */

/* accessors is set to: all */
void prmStateJoint::GetName(vctDynamicVector<std::string> & placeHolder) const
{
    placeHolder = this->mName;
}

void prmStateJoint::SetName(const vctDynamicVector<std::string> & newValue)
{
    this->mName = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<std::string> & prmStateJoint::Name(void) const
{
    return this->mName;
}

vctDynamicVector<std::string> & prmStateJoint::Name(void)
{
    return this->mName;
}

/* source line: 27 */

/* accessors is set to: all */
void prmStateJoint::GetPosition(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mPosition;
}

void prmStateJoint::SetPosition(const vctDynamicVector<double> & newValue)
{
    this->mPosition = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmStateJoint::Position(void) const
{
    return this->mPosition;
}

vctDynamicVector<double> & prmStateJoint::Position(void)
{
    return this->mPosition;
}

/* source line: 32 */

/* accessors is set to: all */
void prmStateJoint::GetVelocity(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mVelocity;
}

void prmStateJoint::SetVelocity(const vctDynamicVector<double> & newValue)
{
    this->mVelocity = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmStateJoint::Velocity(void) const
{
    return this->mVelocity;
}

vctDynamicVector<double> & prmStateJoint::Velocity(void)
{
    return this->mVelocity;
}

/* source line: 37 */

/* accessors is set to: all */
void prmStateJoint::GetEffort(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mEffort;
}

void prmStateJoint::SetEffort(const vctDynamicVector<double> & newValue)
{
    this->mEffort = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmStateJoint::Effort(void) const
{
    return this->mEffort;
}

vctDynamicVector<double> & prmStateJoint::Effort(void)
{
    return this->mEffort;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmStateJoint & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmStateJoint & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmStateJoint::Copy(const prmStateJoint & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<vctDynamicVector<std::string> >::Copy(this->mName, source__cdg.mName);
    cmnData<vctDynamicVector<double> >::Copy(this->mPosition, source__cdg.mPosition);
    cmnData<vctDynamicVector<double> >::Copy(this->mVelocity, source__cdg.mVelocity);
    cmnData<vctDynamicVector<double> >::Copy(this->mEffort, source__cdg.mEffort);
}
void prmStateJoint::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctDynamicVector<std::string> >::SerializeBinary(this->mName, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mPosition, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mVelocity, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mEffort, outputStream__cdg);
}
void prmStateJoint::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<std::string> >::DeSerializeBinary(this->mName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mPosition, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mVelocity, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mEffort, inputStream__cdg, localFormat, remoteFormat);
}
void prmStateJoint::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<vctDynamicVector<std::string> >::SerializeText(this->mName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mPosition, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mVelocity, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mEffort, outputStream__cdg, delimiter__cdg);
}
std::string prmStateJoint::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vctDynamicVector<std::string> >::SerializeDescription(this->mName, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mPosition, delimiter__cdg, prefix__cdg + "Position");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mVelocity, delimiter__cdg, prefix__cdg + "Velocity");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mEffort, delimiter__cdg, prefix__cdg + "Effort");
    return description__cdg.str();
}
void prmStateJoint::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmStateJoint");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmStateJoint");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<std::string> >::DeSerializeText(this->mName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmStateJoint");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mPosition, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmStateJoint");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mVelocity, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmStateJoint");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mEffort, inputStream__cdg, delimiter__cdg);
}
std::string prmStateJoint::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmStateJoint" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  Name:" << cmnData<vctDynamicVector<std::string> >::HumanReadable(this->mName);
    description__cdg << "  Position:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mPosition);
    description__cdg << "  Velocity:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mVelocity);
    description__cdg << "  Effort:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mEffort);
    return description__cdg.str();
}
bool prmStateJoint::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctDynamicVector<std::string> >::ScalarNumberIsFixed(this->mName)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mPosition)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mVelocity)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mEffort)
    ;
}
size_t prmStateJoint::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctDynamicVector<std::string> >::ScalarNumber(this->mName)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPosition)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mVelocity)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mEffort)
    ;
}
std::string prmStateJoint::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<std::string> >::ScalarNumber(this->mName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<std::string> >::ScalarDescription(this->mName, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mPosition, index_cdg - baseIndex__cdg, prefix__cdg + "Position");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mVelocity, index_cdg - baseIndex__cdg, prefix__cdg + "Velocity");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mEffort);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mEffort, index_cdg - baseIndex__cdg, prefix__cdg + "Effort");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmStateJoint index out of range"));
    return "";
}
double prmStateJoint::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<std::string> >::ScalarNumber(this->mName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<std::string> >::Scalar(this->mName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mPosition, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mVelocity, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mEffort);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mEffort, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmStateJoint index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmStateJoint >::SerializeText(const prmStateJoint & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmStateJoint::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctDynamicVector<std::string> >::SerializeText(this->mName, jsonValue["Name"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mPosition, jsonValue["Position"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mVelocity, jsonValue["Velocity"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mEffort, jsonValue["Effort"]);
}
template<>
void cmnDataJSON<prmStateJoint >::DeSerializeText(prmStateJoint & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmStateJoint::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<std::string> >::DeSerializeText(this->mName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<std::string>>::DeSerializeText: empty JSON value for: mName");
    };
    field__cdg = jsonValue["Position"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mPosition, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mPosition");
    };
    field__cdg = jsonValue["Velocity"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mVelocity, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mVelocity");
    };
    field__cdg = jsonValue["Effort"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mEffort, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mEffort");
    };
}
#endif // CISST_HAS_JSON


