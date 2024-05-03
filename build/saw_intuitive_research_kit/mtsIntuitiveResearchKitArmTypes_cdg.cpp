// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/sawIntuitiveResearchKit/components/code/mtsIntuitiveResearchKitArmTypes.cdg

#include <sawIntuitiveResearchKit/mtsIntuitiveResearchKitArmTypes.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */
/* source line: 1 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsIntuitiveResearchKitArmTypesProxy);

mtsIntuitiveResearchKitArmTypes::mtsIntuitiveResearchKitArmTypes(void)
{}

mtsIntuitiveResearchKitArmTypes::mtsIntuitiveResearchKitArmTypes(const mtsIntuitiveResearchKitArmTypes & CMN_UNUSED(other))
{}

mtsIntuitiveResearchKitArmTypes & mtsIntuitiveResearchKitArmTypes::operator = (const mtsIntuitiveResearchKitArmTypes & CMN_UNUSED(other))
{
    return *this;
}

mtsIntuitiveResearchKitArmTypes::~mtsIntuitiveResearchKitArmTypes(void){}


void mtsIntuitiveResearchKitArmTypes::SerializeRaw(std::ostream & CMN_UNUSED(outputStream__cdg)) const
{
}


void mtsIntuitiveResearchKitArmTypes::DeSerializeRaw(std::istream & CMN_UNUSED(inputStream__cdg))
{
}


void mtsIntuitiveResearchKitArmTypes::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsIntuitiveResearchKitArmTypes::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsIntuitiveResearchKitArmTypes >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsIntuitiveResearchKitArmTypes >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsIntuitiveResearchKitArmTypes & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsIntuitiveResearchKitArmTypes & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsIntuitiveResearchKitArmTypes::Copy(const mtsIntuitiveResearchKitArmTypes & CMN_UNUSED(source__cdg)) {
}
void mtsIntuitiveResearchKitArmTypes::SerializeBinary(std::ostream & CMN_UNUSED(outputStream__cdg)) const CISST_THROW(std::runtime_error) {
}
void mtsIntuitiveResearchKitArmTypes::DeSerializeBinary(std::istream & CMN_UNUSED(inputStream__cdg),
                                            const cmnDataFormat & CMN_UNUSED(localFormat),
                                            const cmnDataFormat & CMN_UNUSED(remoteFormat)) CISST_THROW(std::runtime_error) {
}
void mtsIntuitiveResearchKitArmTypes::SerializeText(std::ostream & CMN_UNUSED(outputStream__cdg), const char CMN_UNUSED(delimiter__cdg)) const CISST_THROW(std::runtime_error) {
}
std::string mtsIntuitiveResearchKitArmTypes::SerializeDescription(const char CMN_UNUSED(delimiter__cdg), const std::string & CMN_UNUSED(userDescription__cdg)) const {
    std::stringstream description__cdg;
    return description__cdg.str();
}
void mtsIntuitiveResearchKitArmTypes::DeSerializeText(std::istream & CMN_UNUSED(inputStream__cdg),
                                          const char CMN_UNUSED(delimiter__cdg)) CISST_THROW(std::runtime_error) {
}
std::string mtsIntuitiveResearchKitArmTypes::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsIntuitiveResearchKitArmTypes" << std::endl;
    return description__cdg.str();
}
bool mtsIntuitiveResearchKitArmTypes::ScalarNumberIsFixed(void) const {
    return true
    ;
}
size_t mtsIntuitiveResearchKitArmTypes::ScalarNumber(void) const {
    return 0
    ;
}
std::string mtsIntuitiveResearchKitArmTypes::ScalarDescription(const size_t CMN_UNUSED(index_cdg), const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsIntuitiveResearchKitArmTypes index out of range"));
    return "";
}
double mtsIntuitiveResearchKitArmTypes::Scalar(const size_t CMN_UNUSED(index_cdg)) const CISST_THROW(std::out_of_range) {
    cmnThrow(std::out_of_range("cmnDataScalar: mtsIntuitiveResearchKitArmTypes index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsIntuitiveResearchKitArmTypes >::SerializeText(const mtsIntuitiveResearchKitArmTypes & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsIntuitiveResearchKitArmTypes::SerializeTextJSON(Json::Value & CMN_UNUSED(jsonValue)) const {
}
template<>
void cmnDataJSON<mtsIntuitiveResearchKitArmTypes >::DeSerializeText(mtsIntuitiveResearchKitArmTypes & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsIntuitiveResearchKitArmTypes::DeSerializeTextJSON(const Json::Value & CMN_UNUSED(jsonValue)) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_mtsIntuitiveResearchKitArmTypes_ControlSpace(const mtsIntuitiveResearchKitArmTypes::ControlSpace & data) {
    switch (data) {
        case mtsIntuitiveResearchKitArmTypes::UNDEFINED_SPACE:
            return "UNDEFINED_SPACE";
            break;
        case mtsIntuitiveResearchKitArmTypes::ACTUATOR_SPACE:
            return "ACTUATOR_SPACE";
            break;
        case mtsIntuitiveResearchKitArmTypes::JOINT_SPACE:
            return "JOINT_SPACE";
            break;
        case mtsIntuitiveResearchKitArmTypes::CARTESIAN_SPACE:
            return "CARTESIAN_SPACE";
            break;
        case mtsIntuitiveResearchKitArmTypes::USER_SPACE:
            return "USER_SPACE";
            break;
        default: return "undefined enum mtsIntuitiveResearchKitArmTypes::ControlSpace";
            break;
    }
}

std::string mtsIntuitiveResearchKitArmTypes::ControlSpaceToString(const mtsIntuitiveResearchKitArmTypes::ControlSpace & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case mtsIntuitiveResearchKitArmTypes::UNDEFINED_SPACE:
            return "UNDEFINED_SPACE";
            break;
        case mtsIntuitiveResearchKitArmTypes::ACTUATOR_SPACE:
            return "ACTUATOR_SPACE";
            break;
        case mtsIntuitiveResearchKitArmTypes::JOINT_SPACE:
            return "JOINT_SPACE";
            break;
        case mtsIntuitiveResearchKitArmTypes::CARTESIAN_SPACE:
            return "CARTESIAN_SPACE";
            break;
        case mtsIntuitiveResearchKitArmTypes::USER_SPACE:
            return "USER_SPACE";
            break;
        default:
            break;
    }
    cmnThrow("mtsIntuitiveResearchKitArmTypes::ControlSpaceToString called with invalid enum");
    return "";
}

mtsIntuitiveResearchKitArmTypes::ControlSpace mtsIntuitiveResearchKitArmTypes::ControlSpaceFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "UNDEFINED_SPACE") {
        return mtsIntuitiveResearchKitArmTypes::UNDEFINED_SPACE;
    };
    if (value == "ACTUATOR_SPACE") {
        return mtsIntuitiveResearchKitArmTypes::ACTUATOR_SPACE;
    };
    if (value == "JOINT_SPACE") {
        return mtsIntuitiveResearchKitArmTypes::JOINT_SPACE;
    };
    if (value == "CARTESIAN_SPACE") {
        return mtsIntuitiveResearchKitArmTypes::CARTESIAN_SPACE;
    };
    if (value == "USER_SPACE") {
        return mtsIntuitiveResearchKitArmTypes::USER_SPACE;
    };
    std::string message = "mtsIntuitiveResearchKitArmTypes::ControlSpaceFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = ControlSpaceVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<mtsIntuitiveResearchKitArmTypes::ControlSpace >(0);
}

const std::vector<int> & mtsIntuitiveResearchKitArmTypes::ControlSpaceVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(UNDEFINED_SPACE));
        vectorInt.push_back(static_cast<int>(ACTUATOR_SPACE));
        vectorInt.push_back(static_cast<int>(JOINT_SPACE));
        vectorInt.push_back(static_cast<int>(CARTESIAN_SPACE));
        vectorInt.push_back(static_cast<int>(USER_SPACE));
    }
    return vectorInt;
}

const std::vector<std::string> & mtsIntuitiveResearchKitArmTypes::ControlSpaceVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("UNDEFINED_SPACE");
        vectorString.push_back("ACTUATOR_SPACE");
        vectorString.push_back("JOINT_SPACE");
        vectorString.push_back("CARTESIAN_SPACE");
        vectorString.push_back("USER_SPACE");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsIntuitiveResearchKitArmTypes::ControlSpace, int);
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_mtsIntuitiveResearchKitArmTypes_ControlMode(const mtsIntuitiveResearchKitArmTypes::ControlMode & data) {
    switch (data) {
        case mtsIntuitiveResearchKitArmTypes::UNDEFINED_MODE:
            return "UNDEFINED_MODE";
            break;
        case mtsIntuitiveResearchKitArmTypes::POSITION_MODE:
            return "POSITION_MODE";
            break;
        case mtsIntuitiveResearchKitArmTypes::TRAJECTORY_MODE:
            return "TRAJECTORY_MODE";
            break;
        case mtsIntuitiveResearchKitArmTypes::VELOCITY_MODE:
            return "VELOCITY_MODE";
            break;
        case mtsIntuitiveResearchKitArmTypes::EFFORT_MODE:
            return "EFFORT_MODE";
            break;
        case mtsIntuitiveResearchKitArmTypes::USER_MODE:
            return "USER_MODE";
            break;
        default: return "undefined enum mtsIntuitiveResearchKitArmTypes::ControlMode";
            break;
    }
}

std::string mtsIntuitiveResearchKitArmTypes::ControlModeToString(const mtsIntuitiveResearchKitArmTypes::ControlMode & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case mtsIntuitiveResearchKitArmTypes::UNDEFINED_MODE:
            return "UNDEFINED_MODE";
            break;
        case mtsIntuitiveResearchKitArmTypes::POSITION_MODE:
            return "POSITION_MODE";
            break;
        case mtsIntuitiveResearchKitArmTypes::TRAJECTORY_MODE:
            return "TRAJECTORY_MODE";
            break;
        case mtsIntuitiveResearchKitArmTypes::VELOCITY_MODE:
            return "VELOCITY_MODE";
            break;
        case mtsIntuitiveResearchKitArmTypes::EFFORT_MODE:
            return "EFFORT_MODE";
            break;
        case mtsIntuitiveResearchKitArmTypes::USER_MODE:
            return "USER_MODE";
            break;
        default:
            break;
    }
    cmnThrow("mtsIntuitiveResearchKitArmTypes::ControlModeToString called with invalid enum");
    return "";
}

mtsIntuitiveResearchKitArmTypes::ControlMode mtsIntuitiveResearchKitArmTypes::ControlModeFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "UNDEFINED_MODE") {
        return mtsIntuitiveResearchKitArmTypes::UNDEFINED_MODE;
    };
    if (value == "POSITION_MODE") {
        return mtsIntuitiveResearchKitArmTypes::POSITION_MODE;
    };
    if (value == "TRAJECTORY_MODE") {
        return mtsIntuitiveResearchKitArmTypes::TRAJECTORY_MODE;
    };
    if (value == "VELOCITY_MODE") {
        return mtsIntuitiveResearchKitArmTypes::VELOCITY_MODE;
    };
    if (value == "EFFORT_MODE") {
        return mtsIntuitiveResearchKitArmTypes::EFFORT_MODE;
    };
    if (value == "USER_MODE") {
        return mtsIntuitiveResearchKitArmTypes::USER_MODE;
    };
    std::string message = "mtsIntuitiveResearchKitArmTypes::ControlModeFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = ControlModeVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<mtsIntuitiveResearchKitArmTypes::ControlMode >(0);
}

const std::vector<int> & mtsIntuitiveResearchKitArmTypes::ControlModeVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(UNDEFINED_MODE));
        vectorInt.push_back(static_cast<int>(POSITION_MODE));
        vectorInt.push_back(static_cast<int>(TRAJECTORY_MODE));
        vectorInt.push_back(static_cast<int>(VELOCITY_MODE));
        vectorInt.push_back(static_cast<int>(EFFORT_MODE));
        vectorInt.push_back(static_cast<int>(USER_MODE));
    }
    return vectorInt;
}

const std::vector<std::string> & mtsIntuitiveResearchKitArmTypes::ControlModeVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("UNDEFINED_MODE");
        vectorString.push_back("POSITION_MODE");
        vectorString.push_back("TRAJECTORY_MODE");
        vectorString.push_back("VELOCITY_MODE");
        vectorString.push_back("EFFORT_MODE");
        vectorString.push_back("USER_MODE");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsIntuitiveResearchKitArmTypes::ControlMode, int);
#endif // CISST_HAS_JSON

