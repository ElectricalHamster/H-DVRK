// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/code/../mtsComponentState.cdg

#include <cisstMultiTask/mtsComponentState.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 25 */
mtsComponentState::mtsComponentState(void):
    mState()
{}

mtsComponentState::mtsComponentState(const mtsComponentState & other):
    mState(other.mState)
{}

mtsComponentState & mtsComponentState::operator = (const mtsComponentState & other)
{
    mState = other.mState;
    return *this;
}

mtsComponentState::mtsComponentState(const mtsComponentState::Enum & newState):
    mState(newState)
{}

mtsComponentState::~mtsComponentState(void){}


void mtsComponentState::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->mState);
}


void mtsComponentState::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->mState);
}


void mtsComponentState::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsComponentState::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsComponentState >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsComponentState >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 82 */

/* accessors is set to: all */
void mtsComponentState::GetState(mtsComponentState::Enum & placeHolder) const
{
    placeHolder = this->mState;
}

void mtsComponentState::SetState(const mtsComponentState::Enum & newValue)
{
    this->mState = newValue;
}


/* accessors is set to: all */
const mtsComponentState::Enum & mtsComponentState::State(void) const
{
    return this->mState;
}

mtsComponentState::Enum & mtsComponentState::State(void)
{
    return this->mState;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsComponentState & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsComponentState & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsComponentState::Copy(const mtsComponentState & source__cdg) {
    cmnData<mtsComponentState::Enum >::Copy(this->mState, source__cdg.mState);
}
void mtsComponentState::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsComponentState::Enum >::SerializeBinary(this->mState, outputStream__cdg);
}
void mtsComponentState::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsComponentState::Enum >::DeSerializeBinary(this->mState, inputStream__cdg, localFormat, remoteFormat);
}
void mtsComponentState::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsComponentState::Enum >::SerializeText(this->mState, outputStream__cdg, delimiter__cdg);
}
std::string mtsComponentState::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsComponentState::Enum >::SerializeDescription(this->mState, delimiter__cdg, prefix__cdg + "State");
    return description__cdg.str();
}
void mtsComponentState::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsComponentState");
    }
    someData__cdg = true;
    cmnData<mtsComponentState::Enum >::DeSerializeText(this->mState, inputStream__cdg, delimiter__cdg);
}
std::string mtsComponentState::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsComponentState" << std::endl;
    description__cdg << "  State:" << cmnData<mtsComponentState::Enum >::HumanReadable(this->mState);
    return description__cdg.str();
}
bool mtsComponentState::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsComponentState::Enum >::ScalarNumberIsFixed(this->mState)
    ;
}
size_t mtsComponentState::ScalarNumber(void) const {
    return 0
           + cmnData<mtsComponentState::Enum >::ScalarNumber(this->mState)
    ;
}
std::string mtsComponentState::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsComponentState::Enum >::ScalarNumber(this->mState);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsComponentState::Enum >::ScalarDescription(this->mState, index_cdg - baseIndex__cdg, prefix__cdg + "State");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsComponentState index out of range"));
    return "";
}
double mtsComponentState::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsComponentState::Enum >::ScalarNumber(this->mState);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsComponentState::Enum >::Scalar(this->mState, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsComponentState index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsComponentState >::SerializeText(const mtsComponentState & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsComponentState::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsComponentState::Enum >::SerializeText(this->mState, jsonValue["State"]);
}
template<>
void cmnDataJSON<mtsComponentState >::DeSerializeText(mtsComponentState & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsComponentState::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["State"];
    if (!field__cdg.empty()) {
        cmnDataJSON<mtsComponentState::Enum >::DeSerializeText(this->mState, field__cdg);
    } else {
        cmnThrow("cmnDataJson<mtsComponentState::Enum>::DeSerializeText: empty JSON value for: mState");
    };
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_mtsComponentState_Enum(const mtsComponentState::Enum & data) {
    switch (data) {
        case mtsComponentState::CONSTRUCTED:
            return "constructed";
            break;
        case mtsComponentState::INITIALIZING:
            return "initializing";
            break;
        case mtsComponentState::READY:
            return "ready";
            break;
        case mtsComponentState::ACTIVE:
            return "active";
            break;
        case mtsComponentState::FINISHING:
            return "finishing";
            break;
        case mtsComponentState::FINISHED:
            return "finished";
            break;
        default: return "undefined enum mtsComponentState::Enum";
            break;
    }
}

std::string mtsComponentState::EnumToString(const mtsComponentState::Enum & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case mtsComponentState::CONSTRUCTED:
            return "CONSTRUCTED";
            break;
        case mtsComponentState::INITIALIZING:
            return "INITIALIZING";
            break;
        case mtsComponentState::READY:
            return "READY";
            break;
        case mtsComponentState::ACTIVE:
            return "ACTIVE";
            break;
        case mtsComponentState::FINISHING:
            return "FINISHING";
            break;
        case mtsComponentState::FINISHED:
            return "FINISHED";
            break;
        default:
            break;
    }
    cmnThrow("mtsComponentState::EnumToString called with invalid enum");
    return "";
}

mtsComponentState::Enum mtsComponentState::EnumFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "CONSTRUCTED") {
        return mtsComponentState::CONSTRUCTED;
    };
    if (value == "INITIALIZING") {
        return mtsComponentState::INITIALIZING;
    };
    if (value == "READY") {
        return mtsComponentState::READY;
    };
    if (value == "ACTIVE") {
        return mtsComponentState::ACTIVE;
    };
    if (value == "FINISHING") {
        return mtsComponentState::FINISHING;
    };
    if (value == "FINISHED") {
        return mtsComponentState::FINISHED;
    };
    std::string message = "mtsComponentState::EnumFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = EnumVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<mtsComponentState::Enum >(0);
}

const std::vector<int> & mtsComponentState::EnumVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(CONSTRUCTED));
        vectorInt.push_back(static_cast<int>(INITIALIZING));
        vectorInt.push_back(static_cast<int>(READY));
        vectorInt.push_back(static_cast<int>(ACTIVE));
        vectorInt.push_back(static_cast<int>(FINISHING));
        vectorInt.push_back(static_cast<int>(FINISHED));
    }
    return vectorInt;
}

const std::vector<std::string> & mtsComponentState::EnumVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("CONSTRUCTED");
        vectorString.push_back("INITIALIZING");
        vectorString.push_back("READY");
        vectorString.push_back("ACTIVE");
        vectorString.push_back("FINISHING");
        vectorString.push_back("FINISHED");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsComponentState::Enum, int);
#endif // CISST_HAS_JSON

