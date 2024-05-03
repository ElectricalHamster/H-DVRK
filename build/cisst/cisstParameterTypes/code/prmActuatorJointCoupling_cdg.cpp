// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmActuatorJointCoupling.cdg

#include <cisstParameterTypes/prmActuatorJointCoupling.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 10 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmActuatorJointCouplingProxy);

prmActuatorJointCoupling::prmActuatorJointCoupling(void):
    mActuatorToJointPosition()
    , mJointToActuatorPosition(vctDoubleMat(0, 0))
    , mActuatorToJointEffort(vctDoubleMat(0, 0))
    , mJointToActuatorEffort(vctDoubleMat(0, 0))
{}

prmActuatorJointCoupling::prmActuatorJointCoupling(const prmActuatorJointCoupling & other):
    mActuatorToJointPosition(other.mActuatorToJointPosition)
    , mJointToActuatorPosition(other.mJointToActuatorPosition)
    , mActuatorToJointEffort(other.mActuatorToJointEffort)
    , mJointToActuatorEffort(other.mJointToActuatorEffort)
{}

prmActuatorJointCoupling & prmActuatorJointCoupling::operator = (const prmActuatorJointCoupling & other)
{
    mActuatorToJointPosition = other.mActuatorToJointPosition;
    mJointToActuatorPosition = other.mJointToActuatorPosition;
    mActuatorToJointEffort = other.mActuatorToJointEffort;
    mJointToActuatorEffort = other.mJointToActuatorEffort;
    return *this;
}

prmActuatorJointCoupling::~prmActuatorJointCoupling(void){}


void prmActuatorJointCoupling::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->mActuatorToJointPosition);
    cmnSerializeRaw(outputStream__cdg, this->mJointToActuatorPosition);
    cmnSerializeRaw(outputStream__cdg, this->mActuatorToJointEffort);
    cmnSerializeRaw(outputStream__cdg, this->mJointToActuatorEffort);
}


void prmActuatorJointCoupling::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->mActuatorToJointPosition);
    cmnDeSerializeRaw(inputStream__cdg, this->mJointToActuatorPosition);
    cmnDeSerializeRaw(inputStream__cdg, this->mActuatorToJointEffort);
    cmnDeSerializeRaw(inputStream__cdg, this->mJointToActuatorEffort);
}


void prmActuatorJointCoupling::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmActuatorJointCoupling::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmActuatorJointCoupling >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmActuatorJointCoupling >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 14 */

/* accessors is set to: all */
void prmActuatorJointCoupling::GetActuatorToJointPosition(vctDoubleMat & placeHolder) const
{
    placeHolder = this->mActuatorToJointPosition;
}

void prmActuatorJointCoupling::SetActuatorToJointPosition(const vctDoubleMat & newValue)
{
    this->mActuatorToJointPosition = newValue;
}


/* accessors is set to: all */
const vctDoubleMat & prmActuatorJointCoupling::ActuatorToJointPosition(void) const
{
    return this->mActuatorToJointPosition;
}

vctDoubleMat & prmActuatorJointCoupling::ActuatorToJointPosition(void)
{
    return this->mActuatorToJointPosition;
}

/* source line: 19 */

/* accessors is set to: all */
void prmActuatorJointCoupling::GetJointToActuatorPosition(vctDoubleMat & placeHolder) const
{
    placeHolder = this->mJointToActuatorPosition;
}

void prmActuatorJointCoupling::SetJointToActuatorPosition(const vctDoubleMat & newValue)
{
    this->mJointToActuatorPosition = newValue;
}


/* accessors is set to: all */
const vctDoubleMat & prmActuatorJointCoupling::JointToActuatorPosition(void) const
{
    return this->mJointToActuatorPosition;
}

vctDoubleMat & prmActuatorJointCoupling::JointToActuatorPosition(void)
{
    return this->mJointToActuatorPosition;
}

/* source line: 25 */

/* accessors is set to: all */
void prmActuatorJointCoupling::GetActuatorToJointEffort(vctDoubleMat & placeHolder) const
{
    placeHolder = this->mActuatorToJointEffort;
}

void prmActuatorJointCoupling::SetActuatorToJointEffort(const vctDoubleMat & newValue)
{
    this->mActuatorToJointEffort = newValue;
}


/* accessors is set to: all */
const vctDoubleMat & prmActuatorJointCoupling::ActuatorToJointEffort(void) const
{
    return this->mActuatorToJointEffort;
}

vctDoubleMat & prmActuatorJointCoupling::ActuatorToJointEffort(void)
{
    return this->mActuatorToJointEffort;
}

/* source line: 31 */

/* accessors is set to: all */
void prmActuatorJointCoupling::GetJointToActuatorEffort(vctDoubleMat & placeHolder) const
{
    placeHolder = this->mJointToActuatorEffort;
}

void prmActuatorJointCoupling::SetJointToActuatorEffort(const vctDoubleMat & newValue)
{
    this->mJointToActuatorEffort = newValue;
}


/* accessors is set to: all */
const vctDoubleMat & prmActuatorJointCoupling::JointToActuatorEffort(void) const
{
    return this->mJointToActuatorEffort;
}

vctDoubleMat & prmActuatorJointCoupling::JointToActuatorEffort(void)
{
    return this->mJointToActuatorEffort;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmActuatorJointCoupling & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmActuatorJointCoupling & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmActuatorJointCoupling::Copy(const prmActuatorJointCoupling & source__cdg) {
    cmnData<vctDoubleMat >::Copy(this->mActuatorToJointPosition, source__cdg.mActuatorToJointPosition);
    cmnData<vctDoubleMat >::Copy(this->mJointToActuatorPosition, source__cdg.mJointToActuatorPosition);
    cmnData<vctDoubleMat >::Copy(this->mActuatorToJointEffort, source__cdg.mActuatorToJointEffort);
    cmnData<vctDoubleMat >::Copy(this->mJointToActuatorEffort, source__cdg.mJointToActuatorEffort);
}
void prmActuatorJointCoupling::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<vctDoubleMat >::SerializeBinary(this->mActuatorToJointPosition, outputStream__cdg);
    cmnData<vctDoubleMat >::SerializeBinary(this->mJointToActuatorPosition, outputStream__cdg);
    cmnData<vctDoubleMat >::SerializeBinary(this->mActuatorToJointEffort, outputStream__cdg);
    cmnData<vctDoubleMat >::SerializeBinary(this->mJointToActuatorEffort, outputStream__cdg);
}
void prmActuatorJointCoupling::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<vctDoubleMat >::DeSerializeBinary(this->mActuatorToJointPosition, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleMat >::DeSerializeBinary(this->mJointToActuatorPosition, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleMat >::DeSerializeBinary(this->mActuatorToJointEffort, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleMat >::DeSerializeBinary(this->mJointToActuatorEffort, inputStream__cdg, localFormat, remoteFormat);
}
void prmActuatorJointCoupling::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleMat >::SerializeText(this->mActuatorToJointPosition, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleMat >::SerializeText(this->mJointToActuatorPosition, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleMat >::SerializeText(this->mActuatorToJointEffort, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleMat >::SerializeText(this->mJointToActuatorEffort, outputStream__cdg, delimiter__cdg);
}
std::string prmActuatorJointCoupling::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleMat >::SerializeDescription(this->mActuatorToJointPosition, delimiter__cdg, prefix__cdg + "ActuatorToJointPosition");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleMat >::SerializeDescription(this->mJointToActuatorPosition, delimiter__cdg, prefix__cdg + "JointToActuatorPosition");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleMat >::SerializeDescription(this->mActuatorToJointEffort, delimiter__cdg, prefix__cdg + "ActuatorToJointEffort");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleMat >::SerializeDescription(this->mJointToActuatorEffort, delimiter__cdg, prefix__cdg + "JointToActuatorEffort");
    return description__cdg.str();
}
void prmActuatorJointCoupling::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmActuatorJointCoupling");
    }
    someData__cdg = true;
    cmnData<vctDoubleMat >::DeSerializeText(this->mActuatorToJointPosition, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmActuatorJointCoupling");
    }
    someData__cdg = true;
    cmnData<vctDoubleMat >::DeSerializeText(this->mJointToActuatorPosition, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmActuatorJointCoupling");
    }
    someData__cdg = true;
    cmnData<vctDoubleMat >::DeSerializeText(this->mActuatorToJointEffort, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmActuatorJointCoupling");
    }
    someData__cdg = true;
    cmnData<vctDoubleMat >::DeSerializeText(this->mJointToActuatorEffort, inputStream__cdg, delimiter__cdg);
}
std::string prmActuatorJointCoupling::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmActuatorJointCoupling" << std::endl;
    description__cdg << "  ActuatorToJointPosition:" << cmnData<vctDoubleMat >::HumanReadable(this->mActuatorToJointPosition);
    description__cdg << "  JointToActuatorPosition:" << cmnData<vctDoubleMat >::HumanReadable(this->mJointToActuatorPosition);
    description__cdg << "  ActuatorToJointEffort:" << cmnData<vctDoubleMat >::HumanReadable(this->mActuatorToJointEffort);
    description__cdg << "  JointToActuatorEffort:" << cmnData<vctDoubleMat >::HumanReadable(this->mJointToActuatorEffort);
    return description__cdg.str();
}
bool prmActuatorJointCoupling::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<vctDoubleMat >::ScalarNumberIsFixed(this->mActuatorToJointPosition)
           && cmnData<vctDoubleMat >::ScalarNumberIsFixed(this->mJointToActuatorPosition)
           && cmnData<vctDoubleMat >::ScalarNumberIsFixed(this->mActuatorToJointEffort)
           && cmnData<vctDoubleMat >::ScalarNumberIsFixed(this->mJointToActuatorEffort)
    ;
}
size_t prmActuatorJointCoupling::ScalarNumber(void) const {
    return 0
           + cmnData<vctDoubleMat >::ScalarNumber(this->mActuatorToJointPosition)
           + cmnData<vctDoubleMat >::ScalarNumber(this->mJointToActuatorPosition)
           + cmnData<vctDoubleMat >::ScalarNumber(this->mActuatorToJointEffort)
           + cmnData<vctDoubleMat >::ScalarNumber(this->mJointToActuatorEffort)
    ;
}
std::string prmActuatorJointCoupling::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->mActuatorToJointPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::ScalarDescription(this->mActuatorToJointPosition, index_cdg - baseIndex__cdg, prefix__cdg + "ActuatorToJointPosition");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->mJointToActuatorPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::ScalarDescription(this->mJointToActuatorPosition, index_cdg - baseIndex__cdg, prefix__cdg + "JointToActuatorPosition");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->mActuatorToJointEffort);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::ScalarDescription(this->mActuatorToJointEffort, index_cdg - baseIndex__cdg, prefix__cdg + "ActuatorToJointEffort");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->mJointToActuatorEffort);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::ScalarDescription(this->mJointToActuatorEffort, index_cdg - baseIndex__cdg, prefix__cdg + "JointToActuatorEffort");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmActuatorJointCoupling index out of range"));
    return "";
}
double prmActuatorJointCoupling::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->mActuatorToJointPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::Scalar(this->mActuatorToJointPosition, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->mJointToActuatorPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::Scalar(this->mJointToActuatorPosition, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->mActuatorToJointEffort);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::Scalar(this->mActuatorToJointEffort, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->mJointToActuatorEffort);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::Scalar(this->mJointToActuatorEffort, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmActuatorJointCoupling index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmActuatorJointCoupling >::SerializeText(const prmActuatorJointCoupling & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmActuatorJointCoupling::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<vctDoubleMat >::SerializeText(this->mActuatorToJointPosition, jsonValue["ActuatorToJointPosition"]);
    cmnDataJSON<vctDoubleMat >::SerializeText(this->mJointToActuatorPosition, jsonValue["JointToActuatorPosition"]);
    cmnDataJSON<vctDoubleMat >::SerializeText(this->mActuatorToJointEffort, jsonValue["ActuatorToJointEffort"]);
    cmnDataJSON<vctDoubleMat >::SerializeText(this->mJointToActuatorEffort, jsonValue["JointToActuatorEffort"]);
}
template<>
void cmnDataJSON<prmActuatorJointCoupling >::DeSerializeText(prmActuatorJointCoupling & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmActuatorJointCoupling::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["ActuatorToJointPosition"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleMat >::DeSerializeText(this->mActuatorToJointPosition, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDoubleMat>::DeSerializeText: empty JSON value for: mActuatorToJointPosition");
    };
    field__cdg = jsonValue["JointToActuatorPosition"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleMat >::DeSerializeText(this->mJointToActuatorPosition, field__cdg);
    };
    field__cdg = jsonValue["ActuatorToJointEffort"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleMat >::DeSerializeText(this->mActuatorToJointEffort, field__cdg);
    };
    field__cdg = jsonValue["JointToActuatorEffort"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleMat >::DeSerializeText(this->mJointToActuatorEffort, field__cdg);
    };
}
#endif // CISST_HAS_JSON

