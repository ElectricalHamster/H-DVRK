// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/sawIntuitiveResearchKit/components/code/mtsIntuitiveResearchKitEndoscopeTypes.cdg

#include <sawIntuitiveResearchKit/mtsIntuitiveResearchKitEndoscopeTypes.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */
/* source line: 1 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsIntuitiveResearchKitEndoscopeTypesProxy);

mtsIntuitiveResearchKitEndoscopeTypes::mtsIntuitiveResearchKitEndoscopeTypes(void)
{}

mtsIntuitiveResearchKitEndoscopeTypes::mtsIntuitiveResearchKitEndoscopeTypes(const mtsIntuitiveResearchKitEndoscopeTypes & CMN_UNUSED(other))
{}

mtsIntuitiveResearchKitEndoscopeTypes & mtsIntuitiveResearchKitEndoscopeTypes::operator = (const mtsIntuitiveResearchKitEndoscopeTypes & CMN_UNUSED(other))
{
    return *this;
}

mtsIntuitiveResearchKitEndoscopeTypes::~mtsIntuitiveResearchKitEndoscopeTypes(void){}


void mtsIntuitiveResearchKitEndoscopeTypes::SerializeRaw(std::ostream & CMN_UNUSED(outputStream__cdg)) const
{
}


void mtsIntuitiveResearchKitEndoscopeTypes::DeSerializeRaw(std::istream & CMN_UNUSED(inputStream__cdg))
{
}


void mtsIntuitiveResearchKitEndoscopeTypes::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsIntuitiveResearchKitEndoscopeTypes::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsIntuitiveResearchKitEndoscopeTypes >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsIntuitiveResearchKitEndoscopeTypes >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsIntuitiveResearchKitEndoscopeTypes & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsIntuitiveResearchKitEndoscopeTypes & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsIntuitiveResearchKitEndoscopeTypes::Copy(const mtsIntuitiveResearchKitEndoscopeTypes & CMN_UNUSED(source__cdg)) {
}
void mtsIntuitiveResearchKitEndoscopeTypes::SerializeBinary(std::ostream & CMN_UNUSED(outputStream__cdg)) const CISST_THROW(std::runtime_error) {
}
void mtsIntuitiveResearchKitEndoscopeTypes::DeSerializeBinary(std::istream & CMN_UNUSED(inputStream__cdg),
                                            const cmnDataFormat & CMN_UNUSED(localFormat),
                                            const cmnDataFormat & CMN_UNUSED(remoteFormat)) CISST_THROW(std::runtime_error) {
}
void mtsIntuitiveResearchKitEndoscopeTypes::SerializeText(std::ostream & CMN_UNUSED(outputStream__cdg), const char CMN_UNUSED(delimiter__cdg)) const CISST_THROW(std::runtime_error) {
}
std::string mtsIntuitiveResearchKitEndoscopeTypes::SerializeDescription(const char CMN_UNUSED(delimiter__cdg), const std::string & CMN_UNUSED(userDescription__cdg)) const {
    std::stringstream description__cdg;
    return description__cdg.str();
}
void mtsIntuitiveResearchKitEndoscopeTypes::DeSerializeText(std::istream & CMN_UNUSED(inputStream__cdg),
                                          const char CMN_UNUSED(delimiter__cdg)) CISST_THROW(std::runtime_error) {
}
std::string mtsIntuitiveResearchKitEndoscopeTypes::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsIntuitiveResearchKitEndoscopeTypes" << std::endl;
    return description__cdg.str();
}
bool mtsIntuitiveResearchKitEndoscopeTypes::ScalarNumberIsFixed(void) const {
    return true
    ;
}
size_t mtsIntuitiveResearchKitEndoscopeTypes::ScalarNumber(void) const {
    return 0
    ;
}
std::string mtsIntuitiveResearchKitEndoscopeTypes::ScalarDescription(const size_t CMN_UNUSED(index_cdg), const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsIntuitiveResearchKitEndoscopeTypes index out of range"));
    return "";
}
double mtsIntuitiveResearchKitEndoscopeTypes::Scalar(const size_t CMN_UNUSED(index_cdg)) const CISST_THROW(std::out_of_range) {
    cmnThrow(std::out_of_range("cmnDataScalar: mtsIntuitiveResearchKitEndoscopeTypes index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsIntuitiveResearchKitEndoscopeTypes >::SerializeText(const mtsIntuitiveResearchKitEndoscopeTypes & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsIntuitiveResearchKitEndoscopeTypes::SerializeTextJSON(Json::Value & CMN_UNUSED(jsonValue)) const {
}
template<>
void cmnDataJSON<mtsIntuitiveResearchKitEndoscopeTypes >::DeSerializeText(mtsIntuitiveResearchKitEndoscopeTypes & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsIntuitiveResearchKitEndoscopeTypes::DeSerializeTextJSON(const Json::Value & CMN_UNUSED(jsonValue)) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_mtsIntuitiveResearchKitEndoscopeTypes_Type(const mtsIntuitiveResearchKitEndoscopeTypes::Type & data) {
    switch (data) {
        case mtsIntuitiveResearchKitEndoscopeTypes::ERROR:
            return "Error";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::NONE:
            return "No endoscope (zero weight)";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SD_STRAIGHT:
            return "SD Straight";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SD_UP:
            return "SD Up";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SD_DOWN:
            return "SD Down";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::HD_STRAIGHT:
            return "HD Straight";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::HD_UP:
            return "HD Up";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::HD_DOWN:
            return "HD Down";
            break;
        default: return "undefined enum mtsIntuitiveResearchKitEndoscopeTypes::Type";
            break;
    }
}

std::string mtsIntuitiveResearchKitEndoscopeTypes::TypeToString(const mtsIntuitiveResearchKitEndoscopeTypes::Type & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case mtsIntuitiveResearchKitEndoscopeTypes::ERROR:
            return "ERROR";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::NONE:
            return "NONE";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SD_STRAIGHT:
            return "SD_STRAIGHT";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SD_UP:
            return "SD_UP";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SD_DOWN:
            return "SD_DOWN";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::HD_STRAIGHT:
            return "HD_STRAIGHT";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::HD_UP:
            return "HD_UP";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::HD_DOWN:
            return "HD_DOWN";
            break;
        default:
            break;
    }
    cmnThrow("mtsIntuitiveResearchKitEndoscopeTypes::TypeToString called with invalid enum");
    return "";
}

mtsIntuitiveResearchKitEndoscopeTypes::Type mtsIntuitiveResearchKitEndoscopeTypes::TypeFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "ERROR") {
        return mtsIntuitiveResearchKitEndoscopeTypes::ERROR;
    };
    if (value == "NONE") {
        return mtsIntuitiveResearchKitEndoscopeTypes::NONE;
    };
    if (value == "SD_STRAIGHT") {
        return mtsIntuitiveResearchKitEndoscopeTypes::SD_STRAIGHT;
    };
    if (value == "SD_UP") {
        return mtsIntuitiveResearchKitEndoscopeTypes::SD_UP;
    };
    if (value == "SD_DOWN") {
        return mtsIntuitiveResearchKitEndoscopeTypes::SD_DOWN;
    };
    if (value == "HD_STRAIGHT") {
        return mtsIntuitiveResearchKitEndoscopeTypes::HD_STRAIGHT;
    };
    if (value == "HD_UP") {
        return mtsIntuitiveResearchKitEndoscopeTypes::HD_UP;
    };
    if (value == "HD_DOWN") {
        return mtsIntuitiveResearchKitEndoscopeTypes::HD_DOWN;
    };
    std::string message = "mtsIntuitiveResearchKitEndoscopeTypes::TypeFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = TypeVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<mtsIntuitiveResearchKitEndoscopeTypes::Type >(0);
}

const std::vector<int> & mtsIntuitiveResearchKitEndoscopeTypes::TypeVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(ERROR));
        vectorInt.push_back(static_cast<int>(NONE));
        vectorInt.push_back(static_cast<int>(SD_STRAIGHT));
        vectorInt.push_back(static_cast<int>(SD_UP));
        vectorInt.push_back(static_cast<int>(SD_DOWN));
        vectorInt.push_back(static_cast<int>(HD_STRAIGHT));
        vectorInt.push_back(static_cast<int>(HD_UP));
        vectorInt.push_back(static_cast<int>(HD_DOWN));
    }
    return vectorInt;
}

const std::vector<std::string> & mtsIntuitiveResearchKitEndoscopeTypes::TypeVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("ERROR");
        vectorString.push_back("NONE");
        vectorString.push_back("SD_STRAIGHT");
        vectorString.push_back("SD_UP");
        vectorString.push_back("SD_DOWN");
        vectorString.push_back("HD_STRAIGHT");
        vectorString.push_back("HD_UP");
        vectorString.push_back("HD_DOWN");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsIntuitiveResearchKitEndoscopeTypes::Type, int);
#endif // CISST_HAS_JSON

