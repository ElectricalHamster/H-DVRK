// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmOperatingState.cdg

#include <cisstParameterTypes/prmOperatingState.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 10 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmOperatingStateProxy);

prmOperatingState::prmOperatingState(void):
    mtsGenericObject()
    , mState(prmOperatingState::UNDEFINED)
    , mSubState()
    , mIsHomed()
    , mIsBusy()
{}

prmOperatingState::prmOperatingState(const prmOperatingState & other):
    mtsGenericObject(other)
    , mState(other.mState)
    , mSubState(other.mSubState)
    , mIsHomed(other.mIsHomed)
    , mIsBusy(other.mIsBusy)
{}

prmOperatingState & prmOperatingState::operator = (const prmOperatingState & other)
{
    mtsGenericObject::operator = (other);
    mState = other.mState;
    mSubState = other.mSubState;
    mIsHomed = other.mIsHomed;
    mIsBusy = other.mIsBusy;
    return *this;
}

prmOperatingState::~prmOperatingState(void){}


void prmOperatingState::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mState);
    cmnSerializeRaw(outputStream__cdg, this->mSubState);
    cmnSerializeRaw(outputStream__cdg, this->mIsHomed);
    cmnSerializeRaw(outputStream__cdg, this->mIsBusy);
}


void prmOperatingState::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mState);
    cmnDeSerializeRaw(inputStream__cdg, this->mSubState);
    cmnDeSerializeRaw(inputStream__cdg, this->mIsHomed);
    cmnDeSerializeRaw(inputStream__cdg, this->mIsBusy);
}


void prmOperatingState::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmOperatingState::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmOperatingState >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmOperatingState >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 65 */

/* accessors is set to: all */
void prmOperatingState::GetState(prmOperatingState::StateType & placeHolder) const
{
    placeHolder = this->mState;
}

void prmOperatingState::SetState(const prmOperatingState::StateType & newValue)
{
    this->mState = newValue;
}


/* accessors is set to: all */
const prmOperatingState::StateType & prmOperatingState::State(void) const
{
    return this->mState;
}

prmOperatingState::StateType & prmOperatingState::State(void)
{
    return this->mState;
}

/* source line: 72 */

/* accessors is set to: all */
void prmOperatingState::GetSubState(std::string & placeHolder) const
{
    placeHolder = this->mSubState;
}

void prmOperatingState::SetSubState(const std::string & newValue)
{
    this->mSubState = newValue;
}


/* accessors is set to: all */
const std::string & prmOperatingState::SubState(void) const
{
    return this->mSubState;
}

std::string & prmOperatingState::SubState(void)
{
    return this->mSubState;
}

/* source line: 78 */

/* accessors is set to: all */
void prmOperatingState::GetIsHomed(bool & placeHolder) const
{
    placeHolder = this->mIsHomed;
}

void prmOperatingState::SetIsHomed(const bool & newValue)
{
    this->mIsHomed = newValue;
}


/* accessors is set to: all */
const bool & prmOperatingState::IsHomed(void) const
{
    return this->mIsHomed;
}

bool & prmOperatingState::IsHomed(void)
{
    return this->mIsHomed;
}

/* source line: 83 */

/* accessors is set to: all */
void prmOperatingState::GetIsBusy(bool & placeHolder) const
{
    placeHolder = this->mIsBusy;
}

void prmOperatingState::SetIsBusy(const bool & newValue)
{
    this->mIsBusy = newValue;
}


/* accessors is set to: all */
const bool & prmOperatingState::IsBusy(void) const
{
    return this->mIsBusy;
}

bool & prmOperatingState::IsBusy(void)
{
    return this->mIsBusy;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmOperatingState & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmOperatingState & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmOperatingState::Copy(const prmOperatingState & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<prmOperatingState::StateType >::Copy(this->mState, source__cdg.mState);
    cmnData<std::string >::Copy(this->mSubState, source__cdg.mSubState);
    cmnData<bool >::Copy(this->mIsHomed, source__cdg.mIsHomed);
    cmnData<bool >::Copy(this->mIsBusy, source__cdg.mIsBusy);
}
void prmOperatingState::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<prmOperatingState::StateType >::SerializeBinary(this->mState, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->mSubState, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->mIsHomed, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->mIsBusy, outputStream__cdg);
}
void prmOperatingState::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<prmOperatingState::StateType >::DeSerializeBinary(this->mState, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->mSubState, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->mIsHomed, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->mIsBusy, inputStream__cdg, localFormat, remoteFormat);
}
void prmOperatingState::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<prmOperatingState::StateType >::SerializeText(this->mState, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->mSubState, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->mIsHomed, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->mIsBusy, outputStream__cdg, delimiter__cdg);
}
std::string prmOperatingState::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<prmOperatingState::StateType >::SerializeDescription(this->mState, delimiter__cdg, prefix__cdg + "State");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->mSubState, delimiter__cdg, prefix__cdg + "SubState");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->mIsHomed, delimiter__cdg, prefix__cdg + "IsHomed");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->mIsBusy, delimiter__cdg, prefix__cdg + "IsBusy");
    return description__cdg.str();
}
void prmOperatingState::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmOperatingState");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmOperatingState");
    }
    someData__cdg = true;
    cmnData<prmOperatingState::StateType >::DeSerializeText(this->mState, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmOperatingState");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->mSubState, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmOperatingState");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->mIsHomed, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmOperatingState");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->mIsBusy, inputStream__cdg, delimiter__cdg);
}
std::string prmOperatingState::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmOperatingState" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  State:" << cmnData<prmOperatingState::StateType >::HumanReadable(this->mState);
    description__cdg << "  SubState:" << cmnData<std::string >::HumanReadable(this->mSubState);
    description__cdg << "  IsHomed:" << cmnData<bool >::HumanReadable(this->mIsHomed);
    description__cdg << "  IsBusy:" << cmnData<bool >::HumanReadable(this->mIsBusy);
    return description__cdg.str();
}
bool prmOperatingState::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<prmOperatingState::StateType >::ScalarNumberIsFixed(this->mState)
           && cmnData<std::string >::ScalarNumberIsFixed(this->mSubState)
           && cmnData<bool >::ScalarNumberIsFixed(this->mIsHomed)
           && cmnData<bool >::ScalarNumberIsFixed(this->mIsBusy)
    ;
}
size_t prmOperatingState::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<prmOperatingState::StateType >::ScalarNumber(this->mState)
           + cmnData<std::string >::ScalarNumber(this->mSubState)
           + cmnData<bool >::ScalarNumber(this->mIsHomed)
           + cmnData<bool >::ScalarNumber(this->mIsBusy)
    ;
}
std::string prmOperatingState::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmOperatingState::StateType >::ScalarNumber(this->mState);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmOperatingState::StateType >::ScalarDescription(this->mState, index_cdg - baseIndex__cdg, prefix__cdg + "State");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mSubState);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->mSubState, index_cdg - baseIndex__cdg, prefix__cdg + "SubState");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mIsHomed);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->mIsHomed, index_cdg - baseIndex__cdg, prefix__cdg + "IsHomed");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mIsBusy);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->mIsBusy, index_cdg - baseIndex__cdg, prefix__cdg + "IsBusy");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmOperatingState index out of range"));
    return "";
}
double prmOperatingState::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmOperatingState::StateType >::ScalarNumber(this->mState);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmOperatingState::StateType >::Scalar(this->mState, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mSubState);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->mSubState, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mIsHomed);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->mIsHomed, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mIsBusy);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->mIsBusy, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmOperatingState index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmOperatingState >::SerializeText(const prmOperatingState & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmOperatingState::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<prmOperatingState::StateType >::SerializeText(this->mState, jsonValue["State"]);
    cmnDataJSON<std::string >::SerializeText(this->mSubState, jsonValue["SubState"]);
    cmnDataJSON<bool >::SerializeText(this->mIsHomed, jsonValue["IsHomed"]);
    cmnDataJSON<bool >::SerializeText(this->mIsBusy, jsonValue["IsBusy"]);
}
template<>
void cmnDataJSON<prmOperatingState >::DeSerializeText(prmOperatingState & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmOperatingState::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["State"];
    if (!field__cdg.empty()) {
        cmnDataJSON<prmOperatingState::StateType >::DeSerializeText(this->mState, field__cdg);
    };
    field__cdg = jsonValue["SubState"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->mSubState, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: mSubState");
    };
    field__cdg = jsonValue["IsHomed"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->mIsHomed, field__cdg);
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: mIsHomed");
    };
    field__cdg = jsonValue["IsBusy"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->mIsBusy, field__cdg);
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: mIsBusy");
    };
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_prmOperatingState_StateType(const prmOperatingState::StateType & data) {
    switch (data) {
        case prmOperatingState::UNDEFINED:
            return "undefined";
            break;
        case prmOperatingState::DISABLED:
            return "disabled";
            break;
        case prmOperatingState::ENABLED:
            return "enabled";
            break;
        case prmOperatingState::PAUSED:
            return "paused";
            break;
        case prmOperatingState::FAULT:
            return "fault";
            break;
        default: return "undefined enum prmOperatingState::StateType";
            break;
    }
}

std::string prmOperatingState::StateTypeToString(const prmOperatingState::StateType & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case prmOperatingState::UNDEFINED:
            return "UNDEFINED";
            break;
        case prmOperatingState::DISABLED:
            return "DISABLED";
            break;
        case prmOperatingState::ENABLED:
            return "ENABLED";
            break;
        case prmOperatingState::PAUSED:
            return "PAUSED";
            break;
        case prmOperatingState::FAULT:
            return "FAULT";
            break;
        default:
            break;
    }
    cmnThrow("prmOperatingState::StateTypeToString called with invalid enum");
    return "";
}

prmOperatingState::StateType prmOperatingState::StateTypeFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "UNDEFINED") {
        return prmOperatingState::UNDEFINED;
    };
    if (value == "DISABLED") {
        return prmOperatingState::DISABLED;
    };
    if (value == "ENABLED") {
        return prmOperatingState::ENABLED;
    };
    if (value == "PAUSED") {
        return prmOperatingState::PAUSED;
    };
    if (value == "FAULT") {
        return prmOperatingState::FAULT;
    };
    std::string message = "prmOperatingState::StateTypeFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = StateTypeVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<prmOperatingState::StateType >(0);
}

const std::vector<int> & prmOperatingState::StateTypeVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(UNDEFINED));
        vectorInt.push_back(static_cast<int>(DISABLED));
        vectorInt.push_back(static_cast<int>(ENABLED));
        vectorInt.push_back(static_cast<int>(PAUSED));
        vectorInt.push_back(static_cast<int>(FAULT));
    }
    return vectorInt;
}

const std::vector<std::string> & prmOperatingState::StateTypeVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("UNDEFINED");
        vectorString.push_back("DISABLED");
        vectorString.push_back("ENABLED");
        vectorString.push_back("PAUSED");
        vectorString.push_back("FAULT");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(prmOperatingState::StateType, int);
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_prmOperatingState_CommandType(const prmOperatingState::CommandType & data) {
    switch (data) {
        case prmOperatingState::enable:
            return "enable";
            break;
        case prmOperatingState::disable:
            return "disable";
            break;
        case prmOperatingState::pause:
            return "pause";
            break;
        case prmOperatingState::resume:
            return "resume";
            break;
        case prmOperatingState::home:
            return "home";
            break;
        case prmOperatingState::unhome:
            return "unhome";
            break;
        default: return "undefined enum prmOperatingState::CommandType";
            break;
    }
}

std::string prmOperatingState::CommandTypeToString(const prmOperatingState::CommandType & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case prmOperatingState::enable:
            return "enable";
            break;
        case prmOperatingState::disable:
            return "disable";
            break;
        case prmOperatingState::pause:
            return "pause";
            break;
        case prmOperatingState::resume:
            return "resume";
            break;
        case prmOperatingState::home:
            return "home";
            break;
        case prmOperatingState::unhome:
            return "unhome";
            break;
        default:
            break;
    }
    cmnThrow("prmOperatingState::CommandTypeToString called with invalid enum");
    return "";
}

prmOperatingState::CommandType prmOperatingState::CommandTypeFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "enable") {
        return prmOperatingState::enable;
    };
    if (value == "disable") {
        return prmOperatingState::disable;
    };
    if (value == "pause") {
        return prmOperatingState::pause;
    };
    if (value == "resume") {
        return prmOperatingState::resume;
    };
    if (value == "home") {
        return prmOperatingState::home;
    };
    if (value == "unhome") {
        return prmOperatingState::unhome;
    };
    std::string message = "prmOperatingState::CommandTypeFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = CommandTypeVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<prmOperatingState::CommandType >(0);
}

const std::vector<int> & prmOperatingState::CommandTypeVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(enable));
        vectorInt.push_back(static_cast<int>(disable));
        vectorInt.push_back(static_cast<int>(pause));
        vectorInt.push_back(static_cast<int>(resume));
        vectorInt.push_back(static_cast<int>(home));
        vectorInt.push_back(static_cast<int>(unhome));
    }
    return vectorInt;
}

const std::vector<std::string> & prmOperatingState::CommandTypeVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("enable");
        vectorString.push_back("disable");
        vectorString.push_back("pause");
        vectorString.push_back("resume");
        vectorString.push_back("home");
        vectorString.push_back("unhome");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(prmOperatingState::CommandType, int);
#endif // CISST_HAS_JSON


