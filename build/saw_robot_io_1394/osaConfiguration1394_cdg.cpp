// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/osaConfiguration1394.cdg

#include <sawRobotIO1394/osaConfiguration1394.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 60 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(osaPot1394LocationProxy);

osaPot1394Location::osaPot1394Location(void)
{}

osaPot1394Location::osaPot1394Location(const osaPot1394Location & CMN_UNUSED(other))
{}

osaPot1394Location & osaPot1394Location::operator = (const osaPot1394Location & CMN_UNUSED(other))
{
    return *this;
}

osaPot1394Location::~osaPot1394Location(void){}


void osaPot1394Location::SerializeRaw(std::ostream & CMN_UNUSED(outputStream__cdg)) const
{
}


void osaPot1394Location::DeSerializeRaw(std::istream & CMN_UNUSED(inputStream__cdg))
{
}


void osaPot1394Location::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void osaPot1394Location::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<osaPot1394Location >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<osaPot1394Location >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const osaPot1394Location & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, osaPot1394Location & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void osaPot1394Location::Copy(const osaPot1394Location & CMN_UNUSED(source__cdg)) {
}
void osaPot1394Location::SerializeBinary(std::ostream & CMN_UNUSED(outputStream__cdg)) const CISST_THROW(std::runtime_error) {
}
void osaPot1394Location::DeSerializeBinary(std::istream & CMN_UNUSED(inputStream__cdg),
                                            const cmnDataFormat & CMN_UNUSED(localFormat),
                                            const cmnDataFormat & CMN_UNUSED(remoteFormat)) CISST_THROW(std::runtime_error) {
}
void osaPot1394Location::SerializeText(std::ostream & CMN_UNUSED(outputStream__cdg), const char CMN_UNUSED(delimiter__cdg)) const CISST_THROW(std::runtime_error) {
}
std::string osaPot1394Location::SerializeDescription(const char CMN_UNUSED(delimiter__cdg), const std::string & CMN_UNUSED(userDescription__cdg)) const {
    std::stringstream description__cdg;
    return description__cdg.str();
}
void osaPot1394Location::DeSerializeText(std::istream & CMN_UNUSED(inputStream__cdg),
                                          const char CMN_UNUSED(delimiter__cdg)) CISST_THROW(std::runtime_error) {
}
std::string osaPot1394Location::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "osaPot1394Location" << std::endl;
    return description__cdg.str();
}
bool osaPot1394Location::ScalarNumberIsFixed(void) const {
    return true
    ;
}
size_t osaPot1394Location::ScalarNumber(void) const {
    return 0
    ;
}
std::string osaPot1394Location::ScalarDescription(const size_t CMN_UNUSED(index_cdg), const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    cmnThrow(std::out_of_range("cmnDataScalarDescription: osaPot1394Location index out of range"));
    return "";
}
double osaPot1394Location::Scalar(const size_t CMN_UNUSED(index_cdg)) const CISST_THROW(std::out_of_range) {
    cmnThrow(std::out_of_range("cmnDataScalar: osaPot1394Location index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<osaPot1394Location >::SerializeText(const osaPot1394Location & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void osaPot1394Location::SerializeTextJSON(Json::Value & CMN_UNUSED(jsonValue)) const {
}
template<>
void cmnDataJSON<osaPot1394Location >::DeSerializeText(osaPot1394Location & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void osaPot1394Location::DeSerializeTextJSON(const Json::Value & CMN_UNUSED(jsonValue)) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_osaPot1394Location_Type(const osaPot1394Location::Type & data) {
    switch (data) {
        case osaPot1394Location::POTENTIOMETER_UNDEFINED:
            return "POTENTIOMETER_UNDEFINED";
            break;
        case osaPot1394Location::POTENTIOMETER_ON_ACTUATORS:
            return "POTENTIOMETER_ON_ACTUATORS";
            break;
        case osaPot1394Location::POTENTIOMETER_ON_JOINTS:
            return "POTENTIOMETER_ON_JOINTS";
            break;
        default: return "undefined enum osaPot1394Location::Type";
            break;
    }
}

std::string osaPot1394Location::TypeToString(const osaPot1394Location::Type & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case osaPot1394Location::POTENTIOMETER_UNDEFINED:
            return "POTENTIOMETER_UNDEFINED";
            break;
        case osaPot1394Location::POTENTIOMETER_ON_ACTUATORS:
            return "POTENTIOMETER_ON_ACTUATORS";
            break;
        case osaPot1394Location::POTENTIOMETER_ON_JOINTS:
            return "POTENTIOMETER_ON_JOINTS";
            break;
        default:
            break;
    }
    cmnThrow("osaPot1394Location::TypeToString called with invalid enum");
    return "";
}

osaPot1394Location::Type osaPot1394Location::TypeFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "POTENTIOMETER_UNDEFINED") {
        return osaPot1394Location::POTENTIOMETER_UNDEFINED;
    };
    if (value == "POTENTIOMETER_ON_ACTUATORS") {
        return osaPot1394Location::POTENTIOMETER_ON_ACTUATORS;
    };
    if (value == "POTENTIOMETER_ON_JOINTS") {
        return osaPot1394Location::POTENTIOMETER_ON_JOINTS;
    };
    std::string message = "osaPot1394Location::TypeFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = TypeVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<osaPot1394Location::Type >(0);
}

const std::vector<int> & osaPot1394Location::TypeVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(POTENTIOMETER_UNDEFINED));
        vectorInt.push_back(static_cast<int>(POTENTIOMETER_ON_ACTUATORS));
        vectorInt.push_back(static_cast<int>(POTENTIOMETER_ON_JOINTS));
    }
    return vectorInt;
}

const std::vector<std::string> & osaPot1394Location::TypeVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("POTENTIOMETER_UNDEFINED");
        vectorString.push_back("POTENTIOMETER_ON_ACTUATORS");
        vectorString.push_back("POTENTIOMETER_ON_JOINTS");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(osaPot1394Location::Type, int);
#endif // CISST_HAS_JSON

/* source line: 76 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaLinearFunctionProxy);

sawRobotIO1394::osaLinearFunction::osaLinearFunction(void):
    Scale(1.0)
    , Offset(0.0)
    , Unit()
{}

sawRobotIO1394::osaLinearFunction::osaLinearFunction(const osaLinearFunction & other):
    Scale(other.Scale)
    , Offset(other.Offset)
    , Unit(other.Unit)
{}

sawRobotIO1394::osaLinearFunction & sawRobotIO1394::osaLinearFunction::operator = (const osaLinearFunction & other)
{
    Scale = other.Scale;
    Offset = other.Offset;
    Unit = other.Unit;
    return *this;
}

sawRobotIO1394::osaLinearFunction::~osaLinearFunction(void){}


void sawRobotIO1394::osaLinearFunction::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Scale);
    cmnSerializeRaw(outputStream__cdg, this->Offset);
    cmnSerializeRaw(outputStream__cdg, this->Unit);
}


void sawRobotIO1394::osaLinearFunction::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Scale);
    cmnDeSerializeRaw(inputStream__cdg, this->Offset);
    cmnDeSerializeRaw(inputStream__cdg, this->Unit);
}


void sawRobotIO1394::osaLinearFunction::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaLinearFunction::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaLinearFunction >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaLinearFunction >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 80 */
/* source line: 86 */
/* source line: 92 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaLinearFunction & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaLinearFunction & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaLinearFunction::Copy(const sawRobotIO1394::osaLinearFunction & source__cdg) {
    cmnData<double >::Copy(this->Scale, source__cdg.Scale);
    cmnData<double >::Copy(this->Offset, source__cdg.Offset);
    cmnData<std::string >::Copy(this->Unit, source__cdg.Unit);
}
void sawRobotIO1394::osaLinearFunction::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<double >::SerializeBinary(this->Scale, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->Offset, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->Unit, outputStream__cdg);
}
void sawRobotIO1394::osaLinearFunction::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<double >::DeSerializeBinary(this->Scale, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->Offset, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->Unit, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaLinearFunction::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->Scale, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->Offset, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Unit, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaLinearFunction::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->Scale, delimiter__cdg, prefix__cdg + "Scale");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->Offset, delimiter__cdg, prefix__cdg + "Offset");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Unit, delimiter__cdg, prefix__cdg + "Unit");
    return description__cdg.str();
}
void sawRobotIO1394::osaLinearFunction::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaLinearFunction");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->Scale, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaLinearFunction");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->Offset, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaLinearFunction");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Unit, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaLinearFunction::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaLinearFunction" << std::endl;
    description__cdg << "  Scale:" << cmnData<double >::HumanReadable(this->Scale);
    description__cdg << "  Offset:" << cmnData<double >::HumanReadable(this->Offset);
    description__cdg << "  Unit:" << cmnData<std::string >::HumanReadable(this->Unit);
    return description__cdg.str();
}
bool sawRobotIO1394::osaLinearFunction::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<double >::ScalarNumberIsFixed(this->Scale)
           && cmnData<double >::ScalarNumberIsFixed(this->Offset)
           && cmnData<std::string >::ScalarNumberIsFixed(this->Unit)
    ;
}
size_t sawRobotIO1394::osaLinearFunction::ScalarNumber(void) const {
    return 0
           + cmnData<double >::ScalarNumber(this->Scale)
           + cmnData<double >::ScalarNumber(this->Offset)
           + cmnData<std::string >::ScalarNumber(this->Unit)
    ;
}
std::string sawRobotIO1394::osaLinearFunction::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Scale);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->Scale, index_cdg - baseIndex__cdg, prefix__cdg + "Scale");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Offset);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->Offset, index_cdg - baseIndex__cdg, prefix__cdg + "Offset");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Unit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Unit, index_cdg - baseIndex__cdg, prefix__cdg + "Unit");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaLinearFunction index out of range"));
    return "";
}
double sawRobotIO1394::osaLinearFunction::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Scale);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->Scale, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Offset);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->Offset, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Unit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Unit, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaLinearFunction index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaLinearFunction >::SerializeText(const sawRobotIO1394::osaLinearFunction & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaLinearFunction::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<double >::SerializeText(this->Scale, jsonValue["Scale"]);
    cmnDataJSON<double >::SerializeText(this->Offset, jsonValue["Offset"]);
    cmnDataJSON<std::string >::SerializeText(this->Unit, jsonValue["Unit"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaLinearFunction >::DeSerializeText(sawRobotIO1394::osaLinearFunction & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaLinearFunction::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Scale"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->Scale, field__cdg);
    };
    field__cdg = jsonValue["Offset"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->Offset, field__cdg);
    };
    field__cdg = jsonValue["Unit"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Unit, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Unit");
    };
}
#endif // CISST_HAS_JSON

/* source line: 99 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaDrive1394ConfigurationProxy);

sawRobotIO1394::osaDrive1394Configuration::osaDrive1394Configuration(void):
    EffortToCurrent()
    , CurrentToBits()
    , BitsToCurrent()
    , EffortCommandLimit()
    , CurrentCommandLimit()
{}

sawRobotIO1394::osaDrive1394Configuration::osaDrive1394Configuration(const osaDrive1394Configuration & other):
    EffortToCurrent(other.EffortToCurrent)
    , CurrentToBits(other.CurrentToBits)
    , BitsToCurrent(other.BitsToCurrent)
    , EffortCommandLimit(other.EffortCommandLimit)
    , CurrentCommandLimit(other.CurrentCommandLimit)
{}

sawRobotIO1394::osaDrive1394Configuration & sawRobotIO1394::osaDrive1394Configuration::operator = (const osaDrive1394Configuration & other)
{
    EffortToCurrent = other.EffortToCurrent;
    CurrentToBits = other.CurrentToBits;
    BitsToCurrent = other.BitsToCurrent;
    EffortCommandLimit = other.EffortCommandLimit;
    CurrentCommandLimit = other.CurrentCommandLimit;
    return *this;
}

sawRobotIO1394::osaDrive1394Configuration::~osaDrive1394Configuration(void){}


void sawRobotIO1394::osaDrive1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->EffortToCurrent);
    cmnSerializeRaw(outputStream__cdg, this->CurrentToBits);
    cmnSerializeRaw(outputStream__cdg, this->BitsToCurrent);
    cmnSerializeRaw(outputStream__cdg, this->EffortCommandLimit);
    cmnSerializeRaw(outputStream__cdg, this->CurrentCommandLimit);
}


void sawRobotIO1394::osaDrive1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->EffortToCurrent);
    cmnDeSerializeRaw(inputStream__cdg, this->CurrentToBits);
    cmnDeSerializeRaw(inputStream__cdg, this->BitsToCurrent);
    cmnDeSerializeRaw(inputStream__cdg, this->EffortCommandLimit);
    cmnDeSerializeRaw(inputStream__cdg, this->CurrentCommandLimit);
}


void sawRobotIO1394::osaDrive1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaDrive1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaDrive1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaDrive1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 103 */
/* source line: 108 */
/* source line: 113 */
/* source line: 118 */
/* source line: 123 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDrive1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDrive1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaDrive1394Configuration::Copy(const sawRobotIO1394::osaDrive1394Configuration & source__cdg) {
    cmnData<osaLinearFunction >::Copy(this->EffortToCurrent, source__cdg.EffortToCurrent);
    cmnData<osaLinearFunction >::Copy(this->CurrentToBits, source__cdg.CurrentToBits);
    cmnData<osaLinearFunction >::Copy(this->BitsToCurrent, source__cdg.BitsToCurrent);
    cmnData<double >::Copy(this->EffortCommandLimit, source__cdg.EffortCommandLimit);
    cmnData<double >::Copy(this->CurrentCommandLimit, source__cdg.CurrentCommandLimit);
}
void sawRobotIO1394::osaDrive1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<osaLinearFunction >::SerializeBinary(this->EffortToCurrent, outputStream__cdg);
    cmnData<osaLinearFunction >::SerializeBinary(this->CurrentToBits, outputStream__cdg);
    cmnData<osaLinearFunction >::SerializeBinary(this->BitsToCurrent, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->EffortCommandLimit, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->CurrentCommandLimit, outputStream__cdg);
}
void sawRobotIO1394::osaDrive1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<osaLinearFunction >::DeSerializeBinary(this->EffortToCurrent, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaLinearFunction >::DeSerializeBinary(this->CurrentToBits, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaLinearFunction >::DeSerializeBinary(this->BitsToCurrent, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->EffortCommandLimit, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->CurrentCommandLimit, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaDrive1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->EffortToCurrent, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->CurrentToBits, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->BitsToCurrent, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->EffortCommandLimit, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->CurrentCommandLimit, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDrive1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->EffortToCurrent, delimiter__cdg, prefix__cdg + "EffortToCurrent");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->CurrentToBits, delimiter__cdg, prefix__cdg + "CurrentToBits");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->BitsToCurrent, delimiter__cdg, prefix__cdg + "BitsToCurrent");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->EffortCommandLimit, delimiter__cdg, prefix__cdg + "EffortCommandLimit");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->CurrentCommandLimit, delimiter__cdg, prefix__cdg + "CurrentCommandLimit");
    return description__cdg.str();
}
void sawRobotIO1394::osaDrive1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDrive1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->EffortToCurrent, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDrive1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->CurrentToBits, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDrive1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->BitsToCurrent, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDrive1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->EffortCommandLimit, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDrive1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->CurrentCommandLimit, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDrive1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaDrive1394Configuration" << std::endl;
    description__cdg << "  EffortToCurrent:" << cmnData<osaLinearFunction >::HumanReadable(this->EffortToCurrent);
    description__cdg << "  CurrentToBits:" << cmnData<osaLinearFunction >::HumanReadable(this->CurrentToBits);
    description__cdg << "  BitsToCurrent:" << cmnData<osaLinearFunction >::HumanReadable(this->BitsToCurrent);
    description__cdg << "  EffortCommandLimit:" << cmnData<double >::HumanReadable(this->EffortCommandLimit);
    description__cdg << "  CurrentCommandLimit:" << cmnData<double >::HumanReadable(this->CurrentCommandLimit);
    return description__cdg.str();
}
bool sawRobotIO1394::osaDrive1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->EffortToCurrent)
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->CurrentToBits)
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->BitsToCurrent)
           && cmnData<double >::ScalarNumberIsFixed(this->EffortCommandLimit)
           && cmnData<double >::ScalarNumberIsFixed(this->CurrentCommandLimit)
    ;
}
size_t sawRobotIO1394::osaDrive1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<osaLinearFunction >::ScalarNumber(this->EffortToCurrent)
           + cmnData<osaLinearFunction >::ScalarNumber(this->CurrentToBits)
           + cmnData<osaLinearFunction >::ScalarNumber(this->BitsToCurrent)
           + cmnData<double >::ScalarNumber(this->EffortCommandLimit)
           + cmnData<double >::ScalarNumber(this->CurrentCommandLimit)
    ;
}
std::string sawRobotIO1394::osaDrive1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->EffortToCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->EffortToCurrent, index_cdg - baseIndex__cdg, prefix__cdg + "EffortToCurrent");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->CurrentToBits);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->CurrentToBits, index_cdg - baseIndex__cdg, prefix__cdg + "CurrentToBits");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->BitsToCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->BitsToCurrent, index_cdg - baseIndex__cdg, prefix__cdg + "BitsToCurrent");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->EffortCommandLimit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->EffortCommandLimit, index_cdg - baseIndex__cdg, prefix__cdg + "EffortCommandLimit");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->CurrentCommandLimit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->CurrentCommandLimit, index_cdg - baseIndex__cdg, prefix__cdg + "CurrentCommandLimit");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaDrive1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaDrive1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->EffortToCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->EffortToCurrent, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->CurrentToBits);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->CurrentToBits, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->BitsToCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->BitsToCurrent, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->EffortCommandLimit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->EffortCommandLimit, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->CurrentCommandLimit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->CurrentCommandLimit, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaDrive1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaDrive1394Configuration >::SerializeText(const sawRobotIO1394::osaDrive1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDrive1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<osaLinearFunction >::SerializeText(this->EffortToCurrent, jsonValue["EffortToCurrent"]);
    cmnDataJSON<osaLinearFunction >::SerializeText(this->CurrentToBits, jsonValue["CurrentToBits"]);
    cmnDataJSON<osaLinearFunction >::SerializeText(this->BitsToCurrent, jsonValue["BitsToCurrent"]);
    cmnDataJSON<double >::SerializeText(this->EffortCommandLimit, jsonValue["EffortCommandLimit"]);
    cmnDataJSON<double >::SerializeText(this->CurrentCommandLimit, jsonValue["CurrentCommandLimit"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaDrive1394Configuration >::DeSerializeText(sawRobotIO1394::osaDrive1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDrive1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["EffortToCurrent"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaLinearFunction >::DeSerializeText(this->EffortToCurrent, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaLinearFunction>::DeSerializeText: empty JSON value for: EffortToCurrent");
    };
    field__cdg = jsonValue["CurrentToBits"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaLinearFunction >::DeSerializeText(this->CurrentToBits, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaLinearFunction>::DeSerializeText: empty JSON value for: CurrentToBits");
    };
    field__cdg = jsonValue["BitsToCurrent"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaLinearFunction >::DeSerializeText(this->BitsToCurrent, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaLinearFunction>::DeSerializeText: empty JSON value for: BitsToCurrent");
    };
    field__cdg = jsonValue["EffortCommandLimit"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->EffortCommandLimit, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: EffortCommandLimit");
    };
    field__cdg = jsonValue["CurrentCommandLimit"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->CurrentCommandLimit, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: CurrentCommandLimit");
    };
}
#endif // CISST_HAS_JSON

/* source line: 130 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaEncoder1394ConfigurationProxy);

sawRobotIO1394::osaEncoder1394Configuration::osaEncoder1394Configuration(void):
    BitsToPosition()
{}

sawRobotIO1394::osaEncoder1394Configuration::osaEncoder1394Configuration(const osaEncoder1394Configuration & other):
    BitsToPosition(other.BitsToPosition)
{}

sawRobotIO1394::osaEncoder1394Configuration & sawRobotIO1394::osaEncoder1394Configuration::operator = (const osaEncoder1394Configuration & other)
{
    BitsToPosition = other.BitsToPosition;
    return *this;
}

sawRobotIO1394::osaEncoder1394Configuration::~osaEncoder1394Configuration(void){}


void sawRobotIO1394::osaEncoder1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->BitsToPosition);
}


void sawRobotIO1394::osaEncoder1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->BitsToPosition);
}


void sawRobotIO1394::osaEncoder1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaEncoder1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaEncoder1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaEncoder1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 134 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaEncoder1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaEncoder1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaEncoder1394Configuration::Copy(const sawRobotIO1394::osaEncoder1394Configuration & source__cdg) {
    cmnData<osaLinearFunction >::Copy(this->BitsToPosition, source__cdg.BitsToPosition);
}
void sawRobotIO1394::osaEncoder1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<osaLinearFunction >::SerializeBinary(this->BitsToPosition, outputStream__cdg);
}
void sawRobotIO1394::osaEncoder1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<osaLinearFunction >::DeSerializeBinary(this->BitsToPosition, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaEncoder1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->BitsToPosition, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaEncoder1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->BitsToPosition, delimiter__cdg, prefix__cdg + "BitsToPosition");
    return description__cdg.str();
}
void sawRobotIO1394::osaEncoder1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaEncoder1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->BitsToPosition, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaEncoder1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaEncoder1394Configuration" << std::endl;
    description__cdg << "  BitsToPosition:" << cmnData<osaLinearFunction >::HumanReadable(this->BitsToPosition);
    return description__cdg.str();
}
bool sawRobotIO1394::osaEncoder1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->BitsToPosition)
    ;
}
size_t sawRobotIO1394::osaEncoder1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<osaLinearFunction >::ScalarNumber(this->BitsToPosition)
    ;
}
std::string sawRobotIO1394::osaEncoder1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->BitsToPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->BitsToPosition, index_cdg - baseIndex__cdg, prefix__cdg + "BitsToPosition");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaEncoder1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaEncoder1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->BitsToPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->BitsToPosition, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaEncoder1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaEncoder1394Configuration >::SerializeText(const sawRobotIO1394::osaEncoder1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaEncoder1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<osaLinearFunction >::SerializeText(this->BitsToPosition, jsonValue["BitsToPosition"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaEncoder1394Configuration >::DeSerializeText(sawRobotIO1394::osaEncoder1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaEncoder1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["BitsToPosition"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaLinearFunction >::DeSerializeText(this->BitsToPosition, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaLinearFunction>::DeSerializeText: empty JSON value for: BitsToPosition");
    };
}
#endif // CISST_HAS_JSON

/* source line: 141 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaPot1394ConfigurationProxy);

sawRobotIO1394::osaPot1394Configuration::osaPot1394Configuration(void):
    BitsToVoltage()
    , VoltageToPosition()
{}

sawRobotIO1394::osaPot1394Configuration::osaPot1394Configuration(const osaPot1394Configuration & other):
    BitsToVoltage(other.BitsToVoltage)
    , VoltageToPosition(other.VoltageToPosition)
{}

sawRobotIO1394::osaPot1394Configuration & sawRobotIO1394::osaPot1394Configuration::operator = (const osaPot1394Configuration & other)
{
    BitsToVoltage = other.BitsToVoltage;
    VoltageToPosition = other.VoltageToPosition;
    return *this;
}

sawRobotIO1394::osaPot1394Configuration::~osaPot1394Configuration(void){}


void sawRobotIO1394::osaPot1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->BitsToVoltage);
    cmnSerializeRaw(outputStream__cdg, this->VoltageToPosition);
}


void sawRobotIO1394::osaPot1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->BitsToVoltage);
    cmnDeSerializeRaw(inputStream__cdg, this->VoltageToPosition);
}


void sawRobotIO1394::osaPot1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaPot1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaPot1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaPot1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 145 */
/* source line: 150 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPot1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPot1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaPot1394Configuration::Copy(const sawRobotIO1394::osaPot1394Configuration & source__cdg) {
    cmnData<osaLinearFunction >::Copy(this->BitsToVoltage, source__cdg.BitsToVoltage);
    cmnData<osaLinearFunction >::Copy(this->VoltageToPosition, source__cdg.VoltageToPosition);
}
void sawRobotIO1394::osaPot1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<osaLinearFunction >::SerializeBinary(this->BitsToVoltage, outputStream__cdg);
    cmnData<osaLinearFunction >::SerializeBinary(this->VoltageToPosition, outputStream__cdg);
}
void sawRobotIO1394::osaPot1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<osaLinearFunction >::DeSerializeBinary(this->BitsToVoltage, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaLinearFunction >::DeSerializeBinary(this->VoltageToPosition, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaPot1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->BitsToVoltage, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->VoltageToPosition, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPot1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->BitsToVoltage, delimiter__cdg, prefix__cdg + "BitsToVoltage");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->VoltageToPosition, delimiter__cdg, prefix__cdg + "VoltageToPosition");
    return description__cdg.str();
}
void sawRobotIO1394::osaPot1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPot1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->BitsToVoltage, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPot1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->VoltageToPosition, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPot1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaPot1394Configuration" << std::endl;
    description__cdg << "  BitsToVoltage:" << cmnData<osaLinearFunction >::HumanReadable(this->BitsToVoltage);
    description__cdg << "  VoltageToPosition:" << cmnData<osaLinearFunction >::HumanReadable(this->VoltageToPosition);
    return description__cdg.str();
}
bool sawRobotIO1394::osaPot1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->BitsToVoltage)
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->VoltageToPosition)
    ;
}
size_t sawRobotIO1394::osaPot1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<osaLinearFunction >::ScalarNumber(this->BitsToVoltage)
           + cmnData<osaLinearFunction >::ScalarNumber(this->VoltageToPosition)
    ;
}
std::string sawRobotIO1394::osaPot1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->BitsToVoltage);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->BitsToVoltage, index_cdg - baseIndex__cdg, prefix__cdg + "BitsToVoltage");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->VoltageToPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->VoltageToPosition, index_cdg - baseIndex__cdg, prefix__cdg + "VoltageToPosition");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaPot1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaPot1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->BitsToVoltage);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->BitsToVoltage, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->VoltageToPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->VoltageToPosition, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaPot1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaPot1394Configuration >::SerializeText(const sawRobotIO1394::osaPot1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPot1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<osaLinearFunction >::SerializeText(this->BitsToVoltage, jsonValue["BitsToVoltage"]);
    cmnDataJSON<osaLinearFunction >::SerializeText(this->VoltageToPosition, jsonValue["VoltageToPosition"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaPot1394Configuration >::DeSerializeText(sawRobotIO1394::osaPot1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPot1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["BitsToVoltage"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaLinearFunction >::DeSerializeText(this->BitsToVoltage, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaLinearFunction>::DeSerializeText: empty JSON value for: BitsToVoltage");
    };
    field__cdg = jsonValue["VoltageToPosition"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaLinearFunction >::DeSerializeText(this->VoltageToPosition, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaLinearFunction>::DeSerializeText: empty JSON value for: VoltageToPosition");
    };
}
#endif // CISST_HAS_JSON

/* source line: 157 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaAnalogBrake1394ConfigurationProxy);

sawRobotIO1394::osaAnalogBrake1394Configuration::osaAnalogBrake1394Configuration(void):
    BoardID()
    , AxisID()
    , Drive()
    , ReleaseCurrent()
    , ReleaseTime()
    , ReleasedCurrent()
    , EngagedCurrent()
{}

sawRobotIO1394::osaAnalogBrake1394Configuration::osaAnalogBrake1394Configuration(const osaAnalogBrake1394Configuration & other):
    BoardID(other.BoardID)
    , AxisID(other.AxisID)
    , Drive(other.Drive)
    , ReleaseCurrent(other.ReleaseCurrent)
    , ReleaseTime(other.ReleaseTime)
    , ReleasedCurrent(other.ReleasedCurrent)
    , EngagedCurrent(other.EngagedCurrent)
{}

sawRobotIO1394::osaAnalogBrake1394Configuration & sawRobotIO1394::osaAnalogBrake1394Configuration::operator = (const osaAnalogBrake1394Configuration & other)
{
    BoardID = other.BoardID;
    AxisID = other.AxisID;
    Drive = other.Drive;
    ReleaseCurrent = other.ReleaseCurrent;
    ReleaseTime = other.ReleaseTime;
    ReleasedCurrent = other.ReleasedCurrent;
    EngagedCurrent = other.EngagedCurrent;
    return *this;
}

sawRobotIO1394::osaAnalogBrake1394Configuration::~osaAnalogBrake1394Configuration(void){}


void sawRobotIO1394::osaAnalogBrake1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->BoardID);
    cmnSerializeRaw(outputStream__cdg, this->AxisID);
    cmnSerializeRaw(outputStream__cdg, this->Drive);
    cmnSerializeRaw(outputStream__cdg, this->ReleaseCurrent);
    cmnSerializeRaw(outputStream__cdg, this->ReleaseTime);
    cmnSerializeRaw(outputStream__cdg, this->ReleasedCurrent);
    cmnSerializeRaw(outputStream__cdg, this->EngagedCurrent);
}


void sawRobotIO1394::osaAnalogBrake1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->BoardID);
    cmnDeSerializeRaw(inputStream__cdg, this->AxisID);
    cmnDeSerializeRaw(inputStream__cdg, this->Drive);
    cmnDeSerializeRaw(inputStream__cdg, this->ReleaseCurrent);
    cmnDeSerializeRaw(inputStream__cdg, this->ReleaseTime);
    cmnDeSerializeRaw(inputStream__cdg, this->ReleasedCurrent);
    cmnDeSerializeRaw(inputStream__cdg, this->EngagedCurrent);
}


void sawRobotIO1394::osaAnalogBrake1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaAnalogBrake1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaAnalogBrake1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaAnalogBrake1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 161 */
/* source line: 166 */
/* source line: 171 */
/* source line: 176 */
/* source line: 181 */
/* source line: 186 */
/* source line: 191 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaAnalogBrake1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaAnalogBrake1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaAnalogBrake1394Configuration::Copy(const sawRobotIO1394::osaAnalogBrake1394Configuration & source__cdg) {
    cmnData<int >::Copy(this->BoardID, source__cdg.BoardID);
    cmnData<int >::Copy(this->AxisID, source__cdg.AxisID);
    cmnData<osaDrive1394Configuration >::Copy(this->Drive, source__cdg.Drive);
    cmnData<double >::Copy(this->ReleaseCurrent, source__cdg.ReleaseCurrent);
    cmnData<double >::Copy(this->ReleaseTime, source__cdg.ReleaseTime);
    cmnData<double >::Copy(this->ReleasedCurrent, source__cdg.ReleasedCurrent);
    cmnData<double >::Copy(this->EngagedCurrent, source__cdg.EngagedCurrent);
}
void sawRobotIO1394::osaAnalogBrake1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<int >::SerializeBinary(this->BoardID, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->AxisID, outputStream__cdg);
    cmnData<osaDrive1394Configuration >::SerializeBinary(this->Drive, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->ReleaseCurrent, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->ReleaseTime, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->ReleasedCurrent, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->EngagedCurrent, outputStream__cdg);
}
void sawRobotIO1394::osaAnalogBrake1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->BoardID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->AxisID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaDrive1394Configuration >::DeSerializeBinary(this->Drive, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->ReleaseCurrent, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->ReleaseTime, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->ReleasedCurrent, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->EngagedCurrent, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaAnalogBrake1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BoardID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->AxisID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaDrive1394Configuration >::SerializeText(this->Drive, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->ReleaseCurrent, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->ReleaseTime, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->ReleasedCurrent, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->EngagedCurrent, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaAnalogBrake1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BoardID, delimiter__cdg, prefix__cdg + "BoardID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->AxisID, delimiter__cdg, prefix__cdg + "AxisID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaDrive1394Configuration >::SerializeDescription(this->Drive, delimiter__cdg, prefix__cdg + "Drive");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->ReleaseCurrent, delimiter__cdg, prefix__cdg + "ReleaseCurrent");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->ReleaseTime, delimiter__cdg, prefix__cdg + "ReleaseTime");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->ReleasedCurrent, delimiter__cdg, prefix__cdg + "ReleasedCurrent");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->EngagedCurrent, delimiter__cdg, prefix__cdg + "EngagedCurrent");
    return description__cdg.str();
}
void sawRobotIO1394::osaAnalogBrake1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaAnalogBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BoardID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaAnalogBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->AxisID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaAnalogBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaDrive1394Configuration >::DeSerializeText(this->Drive, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaAnalogBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->ReleaseCurrent, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaAnalogBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->ReleaseTime, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaAnalogBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->ReleasedCurrent, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaAnalogBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->EngagedCurrent, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaAnalogBrake1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaAnalogBrake1394Configuration" << std::endl;
    description__cdg << "  BoardID:" << cmnData<int >::HumanReadable(this->BoardID);
    description__cdg << "  AxisID:" << cmnData<int >::HumanReadable(this->AxisID);
    description__cdg << "  Drive:" << cmnData<osaDrive1394Configuration >::HumanReadable(this->Drive);
    description__cdg << "  ReleaseCurrent:" << cmnData<double >::HumanReadable(this->ReleaseCurrent);
    description__cdg << "  ReleaseTime:" << cmnData<double >::HumanReadable(this->ReleaseTime);
    description__cdg << "  ReleasedCurrent:" << cmnData<double >::HumanReadable(this->ReleasedCurrent);
    description__cdg << "  EngagedCurrent:" << cmnData<double >::HumanReadable(this->EngagedCurrent);
    return description__cdg.str();
}
bool sawRobotIO1394::osaAnalogBrake1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->BoardID)
           && cmnData<int >::ScalarNumberIsFixed(this->AxisID)
           && cmnData<osaDrive1394Configuration >::ScalarNumberIsFixed(this->Drive)
           && cmnData<double >::ScalarNumberIsFixed(this->ReleaseCurrent)
           && cmnData<double >::ScalarNumberIsFixed(this->ReleaseTime)
           && cmnData<double >::ScalarNumberIsFixed(this->ReleasedCurrent)
           && cmnData<double >::ScalarNumberIsFixed(this->EngagedCurrent)
    ;
}
size_t sawRobotIO1394::osaAnalogBrake1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->BoardID)
           + cmnData<int >::ScalarNumber(this->AxisID)
           + cmnData<osaDrive1394Configuration >::ScalarNumber(this->Drive)
           + cmnData<double >::ScalarNumber(this->ReleaseCurrent)
           + cmnData<double >::ScalarNumber(this->ReleaseTime)
           + cmnData<double >::ScalarNumber(this->ReleasedCurrent)
           + cmnData<double >::ScalarNumber(this->EngagedCurrent)
    ;
}
std::string sawRobotIO1394::osaAnalogBrake1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BoardID, index_cdg - baseIndex__cdg, prefix__cdg + "BoardID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->AxisID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->AxisID, index_cdg - baseIndex__cdg, prefix__cdg + "AxisID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaDrive1394Configuration >::ScalarNumber(this->Drive);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaDrive1394Configuration >::ScalarDescription(this->Drive, index_cdg - baseIndex__cdg, prefix__cdg + "Drive");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->ReleaseCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->ReleaseCurrent, index_cdg - baseIndex__cdg, prefix__cdg + "ReleaseCurrent");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->ReleaseTime);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->ReleaseTime, index_cdg - baseIndex__cdg, prefix__cdg + "ReleaseTime");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->ReleasedCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->ReleasedCurrent, index_cdg - baseIndex__cdg, prefix__cdg + "ReleasedCurrent");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->EngagedCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->EngagedCurrent, index_cdg - baseIndex__cdg, prefix__cdg + "EngagedCurrent");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaAnalogBrake1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaAnalogBrake1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BoardID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->AxisID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->AxisID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaDrive1394Configuration >::ScalarNumber(this->Drive);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaDrive1394Configuration >::Scalar(this->Drive, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->ReleaseCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->ReleaseCurrent, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->ReleaseTime);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->ReleaseTime, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->ReleasedCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->ReleasedCurrent, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->EngagedCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->EngagedCurrent, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaAnalogBrake1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaAnalogBrake1394Configuration >::SerializeText(const sawRobotIO1394::osaAnalogBrake1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaAnalogBrake1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->BoardID, jsonValue["BoardID"]);
    cmnDataJSON<int >::SerializeText(this->AxisID, jsonValue["AxisID"]);
    cmnDataJSON<osaDrive1394Configuration >::SerializeText(this->Drive, jsonValue["Drive"]);
    cmnDataJSON<double >::SerializeText(this->ReleaseCurrent, jsonValue["ReleaseCurrent"]);
    cmnDataJSON<double >::SerializeText(this->ReleaseTime, jsonValue["ReleaseTime"]);
    cmnDataJSON<double >::SerializeText(this->ReleasedCurrent, jsonValue["ReleasedCurrent"]);
    cmnDataJSON<double >::SerializeText(this->EngagedCurrent, jsonValue["EngagedCurrent"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaAnalogBrake1394Configuration >::DeSerializeText(sawRobotIO1394::osaAnalogBrake1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaAnalogBrake1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["BoardID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BoardID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BoardID");
    };
    field__cdg = jsonValue["AxisID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->AxisID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: AxisID");
    };
    field__cdg = jsonValue["Drive"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaDrive1394Configuration >::DeSerializeText(this->Drive, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaDrive1394Configuration>::DeSerializeText: empty JSON value for: Drive");
    };
    field__cdg = jsonValue["ReleaseCurrent"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->ReleaseCurrent, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: ReleaseCurrent");
    };
    field__cdg = jsonValue["ReleaseTime"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->ReleaseTime, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: ReleaseTime");
    };
    field__cdg = jsonValue["ReleasedCurrent"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->ReleasedCurrent, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: ReleasedCurrent");
    };
    field__cdg = jsonValue["EngagedCurrent"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->EngagedCurrent, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: EngagedCurrent");
    };
}
#endif // CISST_HAS_JSON

/* source line: 198 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaActuator1394ConfigurationProxy);

sawRobotIO1394::osaActuator1394Configuration::osaActuator1394Configuration(void):
    BoardID()
    , AxisID()
    , JointType()
    , Drive()
    , Encoder()
    , Pot()
    , Brake(nullptr)
{}

sawRobotIO1394::osaActuator1394Configuration::osaActuator1394Configuration(const osaActuator1394Configuration & other):
    BoardID(other.BoardID)
    , AxisID(other.AxisID)
    , JointType(other.JointType)
    , Drive(other.Drive)
    , Encoder(other.Encoder)
    , Pot(other.Pot)
    , Brake(other.Brake)
{}

sawRobotIO1394::osaActuator1394Configuration & sawRobotIO1394::osaActuator1394Configuration::operator = (const osaActuator1394Configuration & other)
{
    BoardID = other.BoardID;
    AxisID = other.AxisID;
    JointType = other.JointType;
    Drive = other.Drive;
    Encoder = other.Encoder;
    Pot = other.Pot;
    Brake = other.Brake;
    return *this;
}

sawRobotIO1394::osaActuator1394Configuration::~osaActuator1394Configuration(void){}


void sawRobotIO1394::osaActuator1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->BoardID);
    cmnSerializeRaw(outputStream__cdg, this->AxisID);
    cmnSerializeRaw(outputStream__cdg, this->JointType);
    cmnSerializeRaw(outputStream__cdg, this->Drive);
    cmnSerializeRaw(outputStream__cdg, this->Encoder);
    cmnSerializeRaw(outputStream__cdg, this->Pot);
}


void sawRobotIO1394::osaActuator1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->BoardID);
    cmnDeSerializeRaw(inputStream__cdg, this->AxisID);
    cmnDeSerializeRaw(inputStream__cdg, this->JointType);
    cmnDeSerializeRaw(inputStream__cdg, this->Drive);
    cmnDeSerializeRaw(inputStream__cdg, this->Encoder);
    cmnDeSerializeRaw(inputStream__cdg, this->Pot);
}


void sawRobotIO1394::osaActuator1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaActuator1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaActuator1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaActuator1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 202 */
/* source line: 207 */
/* source line: 212 */
/* source line: 217 */
/* source line: 222 */
/* source line: 227 */
/* source line: 232 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaActuator1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaActuator1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaActuator1394Configuration::Copy(const sawRobotIO1394::osaActuator1394Configuration & source__cdg) {
    cmnData<int >::Copy(this->BoardID, source__cdg.BoardID);
    cmnData<int >::Copy(this->AxisID, source__cdg.AxisID);
    cmnData<prmJointType >::Copy(this->JointType, source__cdg.JointType);
    cmnData<osaDrive1394Configuration >::Copy(this->Drive, source__cdg.Drive);
    cmnData<osaEncoder1394Configuration >::Copy(this->Encoder, source__cdg.Encoder);
    cmnData<osaPot1394Configuration >::Copy(this->Pot, source__cdg.Pot);
}
void sawRobotIO1394::osaActuator1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<int >::SerializeBinary(this->BoardID, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->AxisID, outputStream__cdg);
    cmnData<prmJointType >::SerializeBinary(this->JointType, outputStream__cdg);
    cmnData<osaDrive1394Configuration >::SerializeBinary(this->Drive, outputStream__cdg);
    cmnData<osaEncoder1394Configuration >::SerializeBinary(this->Encoder, outputStream__cdg);
    cmnData<osaPot1394Configuration >::SerializeBinary(this->Pot, outputStream__cdg);
}
void sawRobotIO1394::osaActuator1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->BoardID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->AxisID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<prmJointType >::DeSerializeBinary(this->JointType, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaDrive1394Configuration >::DeSerializeBinary(this->Drive, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaEncoder1394Configuration >::DeSerializeBinary(this->Encoder, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaPot1394Configuration >::DeSerializeBinary(this->Pot, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaActuator1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BoardID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->AxisID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<prmJointType >::SerializeText(this->JointType, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaDrive1394Configuration >::SerializeText(this->Drive, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaEncoder1394Configuration >::SerializeText(this->Encoder, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaPot1394Configuration >::SerializeText(this->Pot, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaActuator1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BoardID, delimiter__cdg, prefix__cdg + "BoardID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->AxisID, delimiter__cdg, prefix__cdg + "AxisID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<prmJointType >::SerializeDescription(this->JointType, delimiter__cdg, prefix__cdg + "JointType");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaDrive1394Configuration >::SerializeDescription(this->Drive, delimiter__cdg, prefix__cdg + "Drive");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaEncoder1394Configuration >::SerializeDescription(this->Encoder, delimiter__cdg, prefix__cdg + "Encoder");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaPot1394Configuration >::SerializeDescription(this->Pot, delimiter__cdg, prefix__cdg + "Pot");
    return description__cdg.str();
}
void sawRobotIO1394::osaActuator1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BoardID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->AxisID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<prmJointType >::DeSerializeText(this->JointType, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaDrive1394Configuration >::DeSerializeText(this->Drive, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaEncoder1394Configuration >::DeSerializeText(this->Encoder, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaPot1394Configuration >::DeSerializeText(this->Pot, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaActuator1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaActuator1394Configuration" << std::endl;
    description__cdg << "  BoardID:" << cmnData<int >::HumanReadable(this->BoardID);
    description__cdg << "  AxisID:" << cmnData<int >::HumanReadable(this->AxisID);
    description__cdg << "  JointType:" << cmnData<prmJointType >::HumanReadable(this->JointType);
    description__cdg << "  Drive:" << cmnData<osaDrive1394Configuration >::HumanReadable(this->Drive);
    description__cdg << "  Encoder:" << cmnData<osaEncoder1394Configuration >::HumanReadable(this->Encoder);
    description__cdg << "  Pot:" << cmnData<osaPot1394Configuration >::HumanReadable(this->Pot);
    return description__cdg.str();
}
bool sawRobotIO1394::osaActuator1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->BoardID)
           && cmnData<int >::ScalarNumberIsFixed(this->AxisID)
           && cmnData<prmJointType >::ScalarNumberIsFixed(this->JointType)
           && cmnData<osaDrive1394Configuration >::ScalarNumberIsFixed(this->Drive)
           && cmnData<osaEncoder1394Configuration >::ScalarNumberIsFixed(this->Encoder)
           && cmnData<osaPot1394Configuration >::ScalarNumberIsFixed(this->Pot)
    ;
}
size_t sawRobotIO1394::osaActuator1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->BoardID)
           + cmnData<int >::ScalarNumber(this->AxisID)
           + cmnData<prmJointType >::ScalarNumber(this->JointType)
           + cmnData<osaDrive1394Configuration >::ScalarNumber(this->Drive)
           + cmnData<osaEncoder1394Configuration >::ScalarNumber(this->Encoder)
           + cmnData<osaPot1394Configuration >::ScalarNumber(this->Pot)
    ;
}
std::string sawRobotIO1394::osaActuator1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BoardID, index_cdg - baseIndex__cdg, prefix__cdg + "BoardID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->AxisID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->AxisID, index_cdg - baseIndex__cdg, prefix__cdg + "AxisID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmJointType >::ScalarNumber(this->JointType);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmJointType >::ScalarDescription(this->JointType, index_cdg - baseIndex__cdg, prefix__cdg + "JointType");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaDrive1394Configuration >::ScalarNumber(this->Drive);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaDrive1394Configuration >::ScalarDescription(this->Drive, index_cdg - baseIndex__cdg, prefix__cdg + "Drive");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaEncoder1394Configuration >::ScalarNumber(this->Encoder);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaEncoder1394Configuration >::ScalarDescription(this->Encoder, index_cdg - baseIndex__cdg, prefix__cdg + "Encoder");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaPot1394Configuration >::ScalarNumber(this->Pot);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaPot1394Configuration >::ScalarDescription(this->Pot, index_cdg - baseIndex__cdg, prefix__cdg + "Pot");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaActuator1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaActuator1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BoardID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->AxisID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->AxisID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmJointType >::ScalarNumber(this->JointType);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmJointType >::Scalar(this->JointType, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaDrive1394Configuration >::ScalarNumber(this->Drive);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaDrive1394Configuration >::Scalar(this->Drive, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaEncoder1394Configuration >::ScalarNumber(this->Encoder);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaEncoder1394Configuration >::Scalar(this->Encoder, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaPot1394Configuration >::ScalarNumber(this->Pot);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaPot1394Configuration >::Scalar(this->Pot, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaActuator1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaActuator1394Configuration >::SerializeText(const sawRobotIO1394::osaActuator1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaActuator1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->BoardID, jsonValue["BoardID"]);
    cmnDataJSON<int >::SerializeText(this->AxisID, jsonValue["AxisID"]);
    cmnDataJSON<prmJointType >::SerializeText(this->JointType, jsonValue["JointType"]);
    cmnDataJSON<osaDrive1394Configuration >::SerializeText(this->Drive, jsonValue["Drive"]);
    cmnDataJSON<osaEncoder1394Configuration >::SerializeText(this->Encoder, jsonValue["Encoder"]);
    cmnDataJSON<osaPot1394Configuration >::SerializeText(this->Pot, jsonValue["Pot"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaActuator1394Configuration >::DeSerializeText(sawRobotIO1394::osaActuator1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaActuator1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["BoardID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BoardID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BoardID");
    };
    field__cdg = jsonValue["AxisID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->AxisID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: AxisID");
    };
    field__cdg = jsonValue["JointType"];
    if (!field__cdg.empty()) {
        cmnDataJSON<prmJointType >::DeSerializeText(this->JointType, field__cdg);
    } else {
        cmnThrow("cmnDataJson<prmJointType>::DeSerializeText: empty JSON value for: JointType");
    };
    field__cdg = jsonValue["Drive"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaDrive1394Configuration >::DeSerializeText(this->Drive, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaDrive1394Configuration>::DeSerializeText: empty JSON value for: Drive");
    };
    field__cdg = jsonValue["Encoder"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaEncoder1394Configuration >::DeSerializeText(this->Encoder, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaEncoder1394Configuration>::DeSerializeText: empty JSON value for: Encoder");
    };
    field__cdg = jsonValue["Pot"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaPot1394Configuration >::DeSerializeText(this->Pot, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaPot1394Configuration>::DeSerializeText: empty JSON value for: Pot");
    };
}
#endif // CISST_HAS_JSON

/* source line: 241 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaPotTolerance1394ConfigurationProxy);

sawRobotIO1394::osaPotTolerance1394Configuration::osaPotTolerance1394Configuration(void):
    AxisID()
    , Distance()
    , Latency()
{}

sawRobotIO1394::osaPotTolerance1394Configuration::osaPotTolerance1394Configuration(const osaPotTolerance1394Configuration & other):
    AxisID(other.AxisID)
    , Distance(other.Distance)
    , Latency(other.Latency)
{}

sawRobotIO1394::osaPotTolerance1394Configuration & sawRobotIO1394::osaPotTolerance1394Configuration::operator = (const osaPotTolerance1394Configuration & other)
{
    AxisID = other.AxisID;
    Distance = other.Distance;
    Latency = other.Latency;
    return *this;
}

sawRobotIO1394::osaPotTolerance1394Configuration::~osaPotTolerance1394Configuration(void){}


void sawRobotIO1394::osaPotTolerance1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->AxisID);
    cmnSerializeRaw(outputStream__cdg, this->Distance);
    cmnSerializeRaw(outputStream__cdg, this->Latency);
}


void sawRobotIO1394::osaPotTolerance1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->AxisID);
    cmnDeSerializeRaw(inputStream__cdg, this->Distance);
    cmnDeSerializeRaw(inputStream__cdg, this->Latency);
}


void sawRobotIO1394::osaPotTolerance1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaPotTolerance1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaPotTolerance1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaPotTolerance1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 245 */
/* source line: 250 */
/* source line: 255 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPotTolerance1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPotTolerance1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaPotTolerance1394Configuration::Copy(const sawRobotIO1394::osaPotTolerance1394Configuration & source__cdg) {
    cmnData<int >::Copy(this->AxisID, source__cdg.AxisID);
    cmnData<double >::Copy(this->Distance, source__cdg.Distance);
    cmnData<double >::Copy(this->Latency, source__cdg.Latency);
}
void sawRobotIO1394::osaPotTolerance1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<int >::SerializeBinary(this->AxisID, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->Distance, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->Latency, outputStream__cdg);
}
void sawRobotIO1394::osaPotTolerance1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->AxisID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->Distance, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->Latency, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaPotTolerance1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->AxisID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->Distance, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->Latency, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPotTolerance1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->AxisID, delimiter__cdg, prefix__cdg + "AxisID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->Distance, delimiter__cdg, prefix__cdg + "Distance");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->Latency, delimiter__cdg, prefix__cdg + "Latency");
    return description__cdg.str();
}
void sawRobotIO1394::osaPotTolerance1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPotTolerance1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->AxisID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPotTolerance1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->Distance, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPotTolerance1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->Latency, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPotTolerance1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaPotTolerance1394Configuration" << std::endl;
    description__cdg << "  AxisID:" << cmnData<int >::HumanReadable(this->AxisID);
    description__cdg << "  Distance:" << cmnData<double >::HumanReadable(this->Distance);
    description__cdg << "  Latency:" << cmnData<double >::HumanReadable(this->Latency);
    return description__cdg.str();
}
bool sawRobotIO1394::osaPotTolerance1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->AxisID)
           && cmnData<double >::ScalarNumberIsFixed(this->Distance)
           && cmnData<double >::ScalarNumberIsFixed(this->Latency)
    ;
}
size_t sawRobotIO1394::osaPotTolerance1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->AxisID)
           + cmnData<double >::ScalarNumber(this->Distance)
           + cmnData<double >::ScalarNumber(this->Latency)
    ;
}
std::string sawRobotIO1394::osaPotTolerance1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->AxisID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->AxisID, index_cdg - baseIndex__cdg, prefix__cdg + "AxisID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Distance);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->Distance, index_cdg - baseIndex__cdg, prefix__cdg + "Distance");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Latency);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->Latency, index_cdg - baseIndex__cdg, prefix__cdg + "Latency");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaPotTolerance1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaPotTolerance1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->AxisID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->AxisID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Distance);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->Distance, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Latency);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->Latency, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaPotTolerance1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaPotTolerance1394Configuration >::SerializeText(const sawRobotIO1394::osaPotTolerance1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPotTolerance1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->AxisID, jsonValue["AxisID"]);
    cmnDataJSON<double >::SerializeText(this->Distance, jsonValue["Distance"]);
    cmnDataJSON<double >::SerializeText(this->Latency, jsonValue["Latency"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaPotTolerance1394Configuration >::DeSerializeText(sawRobotIO1394::osaPotTolerance1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPotTolerance1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["AxisID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->AxisID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: AxisID");
    };
    field__cdg = jsonValue["Distance"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->Distance, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: Distance");
    };
    field__cdg = jsonValue["Latency"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->Latency, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: Latency");
    };
}
#endif // CISST_HAS_JSON

/* source line: 262 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaRobot1394ConfigurationProxy);

sawRobotIO1394::osaRobot1394Configuration::osaRobot1394Configuration(void):
    Name()
    , NumberOfActuators(0)
    , NumberOfJoints(0)
    , SerialNumber()
    , NumberOfBrakes(0)
    , OnlyIO(false)
    , HasActuatorToJointCoupling(false)
    , PotLocation(osaPot1394Location::POTENTIOMETER_UNDEFINED)
    , PotTolerances()
    , Actuators()
    , Coupling()
{}

sawRobotIO1394::osaRobot1394Configuration::osaRobot1394Configuration(const osaRobot1394Configuration & other):
    Name(other.Name)
    , NumberOfActuators(other.NumberOfActuators)
    , NumberOfJoints(other.NumberOfJoints)
    , SerialNumber(other.SerialNumber)
    , NumberOfBrakes(other.NumberOfBrakes)
    , OnlyIO(other.OnlyIO)
    , HasActuatorToJointCoupling(other.HasActuatorToJointCoupling)
    , PotLocation(other.PotLocation)
    , PotTolerances(other.PotTolerances)
    , Actuators(other.Actuators)
    , Coupling(other.Coupling)
{}

sawRobotIO1394::osaRobot1394Configuration & sawRobotIO1394::osaRobot1394Configuration::operator = (const osaRobot1394Configuration & other)
{
    Name = other.Name;
    NumberOfActuators = other.NumberOfActuators;
    NumberOfJoints = other.NumberOfJoints;
    SerialNumber = other.SerialNumber;
    NumberOfBrakes = other.NumberOfBrakes;
    OnlyIO = other.OnlyIO;
    HasActuatorToJointCoupling = other.HasActuatorToJointCoupling;
    PotLocation = other.PotLocation;
    PotTolerances = other.PotTolerances;
    Actuators = other.Actuators;
    Coupling = other.Coupling;
    return *this;
}

sawRobotIO1394::osaRobot1394Configuration::~osaRobot1394Configuration(void){}


void sawRobotIO1394::osaRobot1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->NumberOfActuators);
    cmnSerializeRaw(outputStream__cdg, this->NumberOfJoints);
    cmnSerializeRaw(outputStream__cdg, this->SerialNumber);
    cmnSerializeRaw(outputStream__cdg, this->NumberOfBrakes);
    cmnSerializeRaw(outputStream__cdg, this->OnlyIO);
    cmnSerializeRaw(outputStream__cdg, this->HasActuatorToJointCoupling);
    cmnSerializeRaw(outputStream__cdg, this->PotLocation);
    cmnSerializeRaw(outputStream__cdg, this->PotTolerances);
    cmnSerializeRaw(outputStream__cdg, this->Actuators);
    cmnSerializeRaw(outputStream__cdg, this->Coupling);
}


void sawRobotIO1394::osaRobot1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->NumberOfActuators);
    cmnDeSerializeRaw(inputStream__cdg, this->NumberOfJoints);
    cmnDeSerializeRaw(inputStream__cdg, this->SerialNumber);
    cmnDeSerializeRaw(inputStream__cdg, this->NumberOfBrakes);
    cmnDeSerializeRaw(inputStream__cdg, this->OnlyIO);
    cmnDeSerializeRaw(inputStream__cdg, this->HasActuatorToJointCoupling);
    cmnDeSerializeRaw(inputStream__cdg, this->PotLocation);
    cmnDeSerializeRaw(inputStream__cdg, this->PotTolerances);
    cmnDeSerializeRaw(inputStream__cdg, this->Actuators);
    cmnDeSerializeRaw(inputStream__cdg, this->Coupling);
}


void sawRobotIO1394::osaRobot1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaRobot1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaRobot1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaRobot1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 266 */
/* source line: 271 */
/* source line: 277 */
/* source line: 283 */
/* source line: 288 */
/* source line: 294 */
/* source line: 300 */
/* source line: 306 */
/* source line: 312 */
/* source line: 317 */
/* source line: 322 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaRobot1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaRobot1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaRobot1394Configuration::Copy(const sawRobotIO1394::osaRobot1394Configuration & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<int >::Copy(this->NumberOfActuators, source__cdg.NumberOfActuators);
    cmnData<int >::Copy(this->NumberOfJoints, source__cdg.NumberOfJoints);
    cmnData<int >::Copy(this->SerialNumber, source__cdg.SerialNumber);
    cmnData<int >::Copy(this->NumberOfBrakes, source__cdg.NumberOfBrakes);
    cmnData<bool >::Copy(this->OnlyIO, source__cdg.OnlyIO);
    cmnData<bool >::Copy(this->HasActuatorToJointCoupling, source__cdg.HasActuatorToJointCoupling);
    cmnData<osaPot1394Location::Type >::Copy(this->PotLocation, source__cdg.PotLocation);
    cmnData<std::vector<osaPotTolerance1394Configuration> >::Copy(this->PotTolerances, source__cdg.PotTolerances);
    cmnData<std::vector<osaActuator1394Configuration> >::Copy(this->Actuators, source__cdg.Actuators);
    cmnData<prmActuatorJointCoupling >::Copy(this->Coupling, source__cdg.Coupling);
}
void sawRobotIO1394::osaRobot1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->NumberOfActuators, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->NumberOfJoints, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->SerialNumber, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->NumberOfBrakes, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->OnlyIO, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->HasActuatorToJointCoupling, outputStream__cdg);
    cmnData<osaPot1394Location::Type >::SerializeBinary(this->PotLocation, outputStream__cdg);
    cmnData<std::vector<osaPotTolerance1394Configuration> >::SerializeBinary(this->PotTolerances, outputStream__cdg);
    cmnData<std::vector<osaActuator1394Configuration> >::SerializeBinary(this->Actuators, outputStream__cdg);
    cmnData<prmActuatorJointCoupling >::SerializeBinary(this->Coupling, outputStream__cdg);
}
void sawRobotIO1394::osaRobot1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->NumberOfActuators, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->NumberOfJoints, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->SerialNumber, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->NumberOfBrakes, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->OnlyIO, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->HasActuatorToJointCoupling, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaPot1394Location::Type >::DeSerializeBinary(this->PotLocation, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<osaPotTolerance1394Configuration> >::DeSerializeBinary(this->PotTolerances, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<osaActuator1394Configuration> >::DeSerializeBinary(this->Actuators, inputStream__cdg, localFormat, remoteFormat);
    cmnData<prmActuatorJointCoupling >::DeSerializeBinary(this->Coupling, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaRobot1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->NumberOfActuators, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->NumberOfJoints, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->SerialNumber, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->NumberOfBrakes, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->OnlyIO, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->HasActuatorToJointCoupling, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaPot1394Location::Type >::SerializeText(this->PotLocation, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaPotTolerance1394Configuration> >::SerializeText(this->PotTolerances, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaActuator1394Configuration> >::SerializeText(this->Actuators, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<prmActuatorJointCoupling >::SerializeText(this->Coupling, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaRobot1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->NumberOfActuators, delimiter__cdg, prefix__cdg + "NumberOfActuators");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->NumberOfJoints, delimiter__cdg, prefix__cdg + "NumberOfJoints");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->SerialNumber, delimiter__cdg, prefix__cdg + "SerialNumber");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->NumberOfBrakes, delimiter__cdg, prefix__cdg + "NumberOfBrakes");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->OnlyIO, delimiter__cdg, prefix__cdg + "OnlyIO");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->HasActuatorToJointCoupling, delimiter__cdg, prefix__cdg + "HasActuatorToJointCoupling");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaPot1394Location::Type >::SerializeDescription(this->PotLocation, delimiter__cdg, prefix__cdg + "PotLocation");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaPotTolerance1394Configuration> >::SerializeDescription(this->PotTolerances, delimiter__cdg, prefix__cdg + "PotTolerances");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaActuator1394Configuration> >::SerializeDescription(this->Actuators, delimiter__cdg, prefix__cdg + "Actuators");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<prmActuatorJointCoupling >::SerializeDescription(this->Coupling, delimiter__cdg, prefix__cdg + "Coupling");
    return description__cdg.str();
}
void sawRobotIO1394::osaRobot1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->NumberOfActuators, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->NumberOfJoints, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->SerialNumber, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->NumberOfBrakes, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->OnlyIO, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->HasActuatorToJointCoupling, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaPot1394Location::Type >::DeSerializeText(this->PotLocation, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaPotTolerance1394Configuration> >::DeSerializeText(this->PotTolerances, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaActuator1394Configuration> >::DeSerializeText(this->Actuators, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<prmActuatorJointCoupling >::DeSerializeText(this->Coupling, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaRobot1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaRobot1394Configuration" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  NumberOfActuators:" << cmnData<int >::HumanReadable(this->NumberOfActuators);
    description__cdg << "  NumberOfJoints:" << cmnData<int >::HumanReadable(this->NumberOfJoints);
    description__cdg << "  SerialNumber:" << cmnData<int >::HumanReadable(this->SerialNumber);
    description__cdg << "  NumberOfBrakes:" << cmnData<int >::HumanReadable(this->NumberOfBrakes);
    description__cdg << "  OnlyIO:" << cmnData<bool >::HumanReadable(this->OnlyIO);
    description__cdg << "  HasActuatorToJointCoupling:" << cmnData<bool >::HumanReadable(this->HasActuatorToJointCoupling);
    description__cdg << "  PotLocation:" << cmnData<osaPot1394Location::Type >::HumanReadable(this->PotLocation);
    description__cdg << "  PotTolerances:" << cmnData<std::vector<osaPotTolerance1394Configuration> >::HumanReadable(this->PotTolerances);
    description__cdg << "  Actuators:" << cmnData<std::vector<osaActuator1394Configuration> >::HumanReadable(this->Actuators);
    description__cdg << "  Coupling:" << cmnData<prmActuatorJointCoupling >::HumanReadable(this->Coupling);
    return description__cdg.str();
}
bool sawRobotIO1394::osaRobot1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<int >::ScalarNumberIsFixed(this->NumberOfActuators)
           && cmnData<int >::ScalarNumberIsFixed(this->NumberOfJoints)
           && cmnData<int >::ScalarNumberIsFixed(this->SerialNumber)
           && cmnData<int >::ScalarNumberIsFixed(this->NumberOfBrakes)
           && cmnData<bool >::ScalarNumberIsFixed(this->OnlyIO)
           && cmnData<bool >::ScalarNumberIsFixed(this->HasActuatorToJointCoupling)
           && cmnData<osaPot1394Location::Type >::ScalarNumberIsFixed(this->PotLocation)
           && cmnData<std::vector<osaPotTolerance1394Configuration> >::ScalarNumberIsFixed(this->PotTolerances)
           && cmnData<std::vector<osaActuator1394Configuration> >::ScalarNumberIsFixed(this->Actuators)
           && cmnData<prmActuatorJointCoupling >::ScalarNumberIsFixed(this->Coupling)
    ;
}
size_t sawRobotIO1394::osaRobot1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<int >::ScalarNumber(this->NumberOfActuators)
           + cmnData<int >::ScalarNumber(this->NumberOfJoints)
           + cmnData<int >::ScalarNumber(this->SerialNumber)
           + cmnData<int >::ScalarNumber(this->NumberOfBrakes)
           + cmnData<bool >::ScalarNumber(this->OnlyIO)
           + cmnData<bool >::ScalarNumber(this->HasActuatorToJointCoupling)
           + cmnData<osaPot1394Location::Type >::ScalarNumber(this->PotLocation)
           + cmnData<std::vector<osaPotTolerance1394Configuration> >::ScalarNumber(this->PotTolerances)
           + cmnData<std::vector<osaActuator1394Configuration> >::ScalarNumber(this->Actuators)
           + cmnData<prmActuatorJointCoupling >::ScalarNumber(this->Coupling)
    ;
}
std::string sawRobotIO1394::osaRobot1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->NumberOfActuators);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->NumberOfActuators, index_cdg - baseIndex__cdg, prefix__cdg + "NumberOfActuators");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->NumberOfJoints);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->NumberOfJoints, index_cdg - baseIndex__cdg, prefix__cdg + "NumberOfJoints");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->SerialNumber);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->SerialNumber, index_cdg - baseIndex__cdg, prefix__cdg + "SerialNumber");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->NumberOfBrakes);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->NumberOfBrakes, index_cdg - baseIndex__cdg, prefix__cdg + "NumberOfBrakes");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->OnlyIO);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->OnlyIO, index_cdg - baseIndex__cdg, prefix__cdg + "OnlyIO");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->HasActuatorToJointCoupling);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->HasActuatorToJointCoupling, index_cdg - baseIndex__cdg, prefix__cdg + "HasActuatorToJointCoupling");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaPot1394Location::Type >::ScalarNumber(this->PotLocation);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaPot1394Location::Type >::ScalarDescription(this->PotLocation, index_cdg - baseIndex__cdg, prefix__cdg + "PotLocation");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaPotTolerance1394Configuration> >::ScalarNumber(this->PotTolerances);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaPotTolerance1394Configuration> >::ScalarDescription(this->PotTolerances, index_cdg - baseIndex__cdg, prefix__cdg + "PotTolerances");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaActuator1394Configuration> >::ScalarNumber(this->Actuators);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaActuator1394Configuration> >::ScalarDescription(this->Actuators, index_cdg - baseIndex__cdg, prefix__cdg + "Actuators");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmActuatorJointCoupling >::ScalarNumber(this->Coupling);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmActuatorJointCoupling >::ScalarDescription(this->Coupling, index_cdg - baseIndex__cdg, prefix__cdg + "Coupling");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaRobot1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaRobot1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->NumberOfActuators);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->NumberOfActuators, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->NumberOfJoints);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->NumberOfJoints, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->SerialNumber);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->SerialNumber, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->NumberOfBrakes);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->NumberOfBrakes, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->OnlyIO);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->OnlyIO, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->HasActuatorToJointCoupling);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->HasActuatorToJointCoupling, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaPot1394Location::Type >::ScalarNumber(this->PotLocation);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaPot1394Location::Type >::Scalar(this->PotLocation, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaPotTolerance1394Configuration> >::ScalarNumber(this->PotTolerances);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaPotTolerance1394Configuration> >::Scalar(this->PotTolerances, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaActuator1394Configuration> >::ScalarNumber(this->Actuators);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaActuator1394Configuration> >::Scalar(this->Actuators, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmActuatorJointCoupling >::ScalarNumber(this->Coupling);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmActuatorJointCoupling >::Scalar(this->Coupling, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaRobot1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaRobot1394Configuration >::SerializeText(const sawRobotIO1394::osaRobot1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaRobot1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<int >::SerializeText(this->NumberOfActuators, jsonValue["NumberOfActuators"]);
    cmnDataJSON<int >::SerializeText(this->NumberOfJoints, jsonValue["NumberOfJoints"]);
    cmnDataJSON<int >::SerializeText(this->SerialNumber, jsonValue["SerialNumber"]);
    cmnDataJSON<int >::SerializeText(this->NumberOfBrakes, jsonValue["NumberOfBrakes"]);
    cmnDataJSON<bool >::SerializeText(this->OnlyIO, jsonValue["OnlyIO"]);
    cmnDataJSON<bool >::SerializeText(this->HasActuatorToJointCoupling, jsonValue["HasActuatorToJointCoupling"]);
    cmnDataJSON<osaPot1394Location::Type >::SerializeText(this->PotLocation, jsonValue["PotLocation"]);
    cmnDataJSON<std::vector<osaPotTolerance1394Configuration> >::SerializeText(this->PotTolerances, jsonValue["PotTolerances"]);
    cmnDataJSON<std::vector<osaActuator1394Configuration> >::SerializeText(this->Actuators, jsonValue["Actuators"]);
    cmnDataJSON<prmActuatorJointCoupling >::SerializeText(this->Coupling, jsonValue["Coupling"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaRobot1394Configuration >::DeSerializeText(sawRobotIO1394::osaRobot1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaRobot1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["NumberOfActuators"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->NumberOfActuators, field__cdg);
    };
    field__cdg = jsonValue["NumberOfJoints"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->NumberOfJoints, field__cdg);
    };
    field__cdg = jsonValue["SerialNumber"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->SerialNumber, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: SerialNumber");
    };
    field__cdg = jsonValue["NumberOfBrakes"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->NumberOfBrakes, field__cdg);
    };
    field__cdg = jsonValue["OnlyIO"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->OnlyIO, field__cdg);
    };
    field__cdg = jsonValue["HasActuatorToJointCoupling"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->HasActuatorToJointCoupling, field__cdg);
    };
    field__cdg = jsonValue["PotLocation"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaPot1394Location::Type >::DeSerializeText(this->PotLocation, field__cdg);
    };
    field__cdg = jsonValue["PotTolerances"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<osaPotTolerance1394Configuration> >::DeSerializeText(this->PotTolerances, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<osaPotTolerance1394Configuration>>::DeSerializeText: empty JSON value for: PotTolerances");
    };
    field__cdg = jsonValue["Actuators"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<osaActuator1394Configuration> >::DeSerializeText(this->Actuators, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<osaActuator1394Configuration>>::DeSerializeText: empty JSON value for: Actuators");
    };
    field__cdg = jsonValue["Coupling"];
    if (!field__cdg.empty()) {
        cmnDataJSON<prmActuatorJointCoupling >::DeSerializeText(this->Coupling, field__cdg);
    } else {
        cmnThrow("cmnDataJson<prmActuatorJointCoupling>::DeSerializeText: empty JSON value for: Coupling");
    };
}
#endif // CISST_HAS_JSON

/* source line: 329 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaDigitalInput1394ConfigurationProxy);

sawRobotIO1394::osaDigitalInput1394Configuration::osaDigitalInput1394Configuration(void):
    Name()
    , BoardID()
    , BitID()
    , TriggerWhenPressed()
    , TriggerWhenReleased()
    , PressedValue()
    , DebounceThreshold()
    , DebounceThresholdClick()
{}

sawRobotIO1394::osaDigitalInput1394Configuration::osaDigitalInput1394Configuration(const osaDigitalInput1394Configuration & other):
    Name(other.Name)
    , BoardID(other.BoardID)
    , BitID(other.BitID)
    , TriggerWhenPressed(other.TriggerWhenPressed)
    , TriggerWhenReleased(other.TriggerWhenReleased)
    , PressedValue(other.PressedValue)
    , DebounceThreshold(other.DebounceThreshold)
    , DebounceThresholdClick(other.DebounceThresholdClick)
{}

sawRobotIO1394::osaDigitalInput1394Configuration & sawRobotIO1394::osaDigitalInput1394Configuration::operator = (const osaDigitalInput1394Configuration & other)
{
    Name = other.Name;
    BoardID = other.BoardID;
    BitID = other.BitID;
    TriggerWhenPressed = other.TriggerWhenPressed;
    TriggerWhenReleased = other.TriggerWhenReleased;
    PressedValue = other.PressedValue;
    DebounceThreshold = other.DebounceThreshold;
    DebounceThresholdClick = other.DebounceThresholdClick;
    return *this;
}

sawRobotIO1394::osaDigitalInput1394Configuration::~osaDigitalInput1394Configuration(void){}


void sawRobotIO1394::osaDigitalInput1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->BoardID);
    cmnSerializeRaw(outputStream__cdg, this->BitID);
    cmnSerializeRaw(outputStream__cdg, this->TriggerWhenPressed);
    cmnSerializeRaw(outputStream__cdg, this->TriggerWhenReleased);
    cmnSerializeRaw(outputStream__cdg, this->PressedValue);
    cmnSerializeRaw(outputStream__cdg, this->DebounceThreshold);
    cmnSerializeRaw(outputStream__cdg, this->DebounceThresholdClick);
}


void sawRobotIO1394::osaDigitalInput1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->BoardID);
    cmnDeSerializeRaw(inputStream__cdg, this->BitID);
    cmnDeSerializeRaw(inputStream__cdg, this->TriggerWhenPressed);
    cmnDeSerializeRaw(inputStream__cdg, this->TriggerWhenReleased);
    cmnDeSerializeRaw(inputStream__cdg, this->PressedValue);
    cmnDeSerializeRaw(inputStream__cdg, this->DebounceThreshold);
    cmnDeSerializeRaw(inputStream__cdg, this->DebounceThresholdClick);
}


void sawRobotIO1394::osaDigitalInput1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaDigitalInput1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaDigitalInput1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaDigitalInput1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 333 */
/* source line: 338 */
/* source line: 343 */
/* source line: 348 */
/* source line: 353 */
/* source line: 358 */
/* source line: 363 */
/* source line: 368 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDigitalInput1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDigitalInput1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaDigitalInput1394Configuration::Copy(const sawRobotIO1394::osaDigitalInput1394Configuration & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<int >::Copy(this->BoardID, source__cdg.BoardID);
    cmnData<int >::Copy(this->BitID, source__cdg.BitID);
    cmnData<bool >::Copy(this->TriggerWhenPressed, source__cdg.TriggerWhenPressed);
    cmnData<bool >::Copy(this->TriggerWhenReleased, source__cdg.TriggerWhenReleased);
    cmnData<bool >::Copy(this->PressedValue, source__cdg.PressedValue);
    cmnData<double >::Copy(this->DebounceThreshold, source__cdg.DebounceThreshold);
    cmnData<double >::Copy(this->DebounceThresholdClick, source__cdg.DebounceThresholdClick);
}
void sawRobotIO1394::osaDigitalInput1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->BoardID, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->BitID, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->TriggerWhenPressed, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->TriggerWhenReleased, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->PressedValue, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->DebounceThreshold, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->DebounceThresholdClick, outputStream__cdg);
}
void sawRobotIO1394::osaDigitalInput1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->BoardID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->BitID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->TriggerWhenPressed, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->TriggerWhenReleased, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->PressedValue, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->DebounceThreshold, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->DebounceThresholdClick, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaDigitalInput1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BoardID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BitID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->TriggerWhenPressed, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->TriggerWhenReleased, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->PressedValue, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->DebounceThreshold, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->DebounceThresholdClick, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDigitalInput1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BoardID, delimiter__cdg, prefix__cdg + "BoardID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BitID, delimiter__cdg, prefix__cdg + "BitID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->TriggerWhenPressed, delimiter__cdg, prefix__cdg + "TriggerWhenPressed");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->TriggerWhenReleased, delimiter__cdg, prefix__cdg + "TriggerWhenReleased");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->PressedValue, delimiter__cdg, prefix__cdg + "PressedValue");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->DebounceThreshold, delimiter__cdg, prefix__cdg + "DebounceThreshold");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->DebounceThresholdClick, delimiter__cdg, prefix__cdg + "DebounceThresholdClick");
    return description__cdg.str();
}
void sawRobotIO1394::osaDigitalInput1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BoardID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BitID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->TriggerWhenPressed, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->TriggerWhenReleased, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->PressedValue, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->DebounceThreshold, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->DebounceThresholdClick, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDigitalInput1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaDigitalInput1394Configuration" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  BoardID:" << cmnData<int >::HumanReadable(this->BoardID);
    description__cdg << "  BitID:" << cmnData<int >::HumanReadable(this->BitID);
    description__cdg << "  TriggerWhenPressed:" << cmnData<bool >::HumanReadable(this->TriggerWhenPressed);
    description__cdg << "  TriggerWhenReleased:" << cmnData<bool >::HumanReadable(this->TriggerWhenReleased);
    description__cdg << "  PressedValue:" << cmnData<bool >::HumanReadable(this->PressedValue);
    description__cdg << "  DebounceThreshold:" << cmnData<double >::HumanReadable(this->DebounceThreshold);
    description__cdg << "  DebounceThresholdClick:" << cmnData<double >::HumanReadable(this->DebounceThresholdClick);
    return description__cdg.str();
}
bool sawRobotIO1394::osaDigitalInput1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<int >::ScalarNumberIsFixed(this->BoardID)
           && cmnData<int >::ScalarNumberIsFixed(this->BitID)
           && cmnData<bool >::ScalarNumberIsFixed(this->TriggerWhenPressed)
           && cmnData<bool >::ScalarNumberIsFixed(this->TriggerWhenReleased)
           && cmnData<bool >::ScalarNumberIsFixed(this->PressedValue)
           && cmnData<double >::ScalarNumberIsFixed(this->DebounceThreshold)
           && cmnData<double >::ScalarNumberIsFixed(this->DebounceThresholdClick)
    ;
}
size_t sawRobotIO1394::osaDigitalInput1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<int >::ScalarNumber(this->BoardID)
           + cmnData<int >::ScalarNumber(this->BitID)
           + cmnData<bool >::ScalarNumber(this->TriggerWhenPressed)
           + cmnData<bool >::ScalarNumber(this->TriggerWhenReleased)
           + cmnData<bool >::ScalarNumber(this->PressedValue)
           + cmnData<double >::ScalarNumber(this->DebounceThreshold)
           + cmnData<double >::ScalarNumber(this->DebounceThresholdClick)
    ;
}
std::string sawRobotIO1394::osaDigitalInput1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BoardID, index_cdg - baseIndex__cdg, prefix__cdg + "BoardID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BitID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BitID, index_cdg - baseIndex__cdg, prefix__cdg + "BitID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->TriggerWhenPressed);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->TriggerWhenPressed, index_cdg - baseIndex__cdg, prefix__cdg + "TriggerWhenPressed");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->TriggerWhenReleased);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->TriggerWhenReleased, index_cdg - baseIndex__cdg, prefix__cdg + "TriggerWhenReleased");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->PressedValue);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->PressedValue, index_cdg - baseIndex__cdg, prefix__cdg + "PressedValue");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->DebounceThreshold);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->DebounceThreshold, index_cdg - baseIndex__cdg, prefix__cdg + "DebounceThreshold");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->DebounceThresholdClick);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->DebounceThresholdClick, index_cdg - baseIndex__cdg, prefix__cdg + "DebounceThresholdClick");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaDigitalInput1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaDigitalInput1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BoardID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BitID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BitID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->TriggerWhenPressed);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->TriggerWhenPressed, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->TriggerWhenReleased);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->TriggerWhenReleased, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->PressedValue);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->PressedValue, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->DebounceThreshold);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->DebounceThreshold, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->DebounceThresholdClick);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->DebounceThresholdClick, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaDigitalInput1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaDigitalInput1394Configuration >::SerializeText(const sawRobotIO1394::osaDigitalInput1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDigitalInput1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<int >::SerializeText(this->BoardID, jsonValue["BoardID"]);
    cmnDataJSON<int >::SerializeText(this->BitID, jsonValue["BitID"]);
    cmnDataJSON<bool >::SerializeText(this->TriggerWhenPressed, jsonValue["TriggerWhenPressed"]);
    cmnDataJSON<bool >::SerializeText(this->TriggerWhenReleased, jsonValue["TriggerWhenReleased"]);
    cmnDataJSON<bool >::SerializeText(this->PressedValue, jsonValue["PressedValue"]);
    cmnDataJSON<double >::SerializeText(this->DebounceThreshold, jsonValue["DebounceThreshold"]);
    cmnDataJSON<double >::SerializeText(this->DebounceThresholdClick, jsonValue["DebounceThresholdClick"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaDigitalInput1394Configuration >::DeSerializeText(sawRobotIO1394::osaDigitalInput1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDigitalInput1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["BoardID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BoardID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BoardID");
    };
    field__cdg = jsonValue["BitID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BitID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BitID");
    };
    field__cdg = jsonValue["TriggerWhenPressed"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->TriggerWhenPressed, field__cdg);
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: TriggerWhenPressed");
    };
    field__cdg = jsonValue["TriggerWhenReleased"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->TriggerWhenReleased, field__cdg);
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: TriggerWhenReleased");
    };
    field__cdg = jsonValue["PressedValue"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->PressedValue, field__cdg);
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: PressedValue");
    };
    field__cdg = jsonValue["DebounceThreshold"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->DebounceThreshold, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: DebounceThreshold");
    };
    field__cdg = jsonValue["DebounceThresholdClick"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->DebounceThresholdClick, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: DebounceThresholdClick");
    };
}
#endif // CISST_HAS_JSON

/* source line: 375 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaDigitalOutput1394ConfigurationProxy);

sawRobotIO1394::osaDigitalOutput1394Configuration::osaDigitalOutput1394Configuration(void):
    Name()
    , BoardID()
    , BitID()
    , HighDuration()
    , LowDuration()
    , IsPWM()
    , PWMFrequency()
{}

sawRobotIO1394::osaDigitalOutput1394Configuration::osaDigitalOutput1394Configuration(const osaDigitalOutput1394Configuration & other):
    Name(other.Name)
    , BoardID(other.BoardID)
    , BitID(other.BitID)
    , HighDuration(other.HighDuration)
    , LowDuration(other.LowDuration)
    , IsPWM(other.IsPWM)
    , PWMFrequency(other.PWMFrequency)
{}

sawRobotIO1394::osaDigitalOutput1394Configuration & sawRobotIO1394::osaDigitalOutput1394Configuration::operator = (const osaDigitalOutput1394Configuration & other)
{
    Name = other.Name;
    BoardID = other.BoardID;
    BitID = other.BitID;
    HighDuration = other.HighDuration;
    LowDuration = other.LowDuration;
    IsPWM = other.IsPWM;
    PWMFrequency = other.PWMFrequency;
    return *this;
}

sawRobotIO1394::osaDigitalOutput1394Configuration::~osaDigitalOutput1394Configuration(void){}


void sawRobotIO1394::osaDigitalOutput1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->BoardID);
    cmnSerializeRaw(outputStream__cdg, this->BitID);
    cmnSerializeRaw(outputStream__cdg, this->HighDuration);
    cmnSerializeRaw(outputStream__cdg, this->LowDuration);
    cmnSerializeRaw(outputStream__cdg, this->IsPWM);
    cmnSerializeRaw(outputStream__cdg, this->PWMFrequency);
}


void sawRobotIO1394::osaDigitalOutput1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->BoardID);
    cmnDeSerializeRaw(inputStream__cdg, this->BitID);
    cmnDeSerializeRaw(inputStream__cdg, this->HighDuration);
    cmnDeSerializeRaw(inputStream__cdg, this->LowDuration);
    cmnDeSerializeRaw(inputStream__cdg, this->IsPWM);
    cmnDeSerializeRaw(inputStream__cdg, this->PWMFrequency);
}


void sawRobotIO1394::osaDigitalOutput1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaDigitalOutput1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaDigitalOutput1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaDigitalOutput1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 379 */
/* source line: 384 */
/* source line: 389 */
/* source line: 394 */
/* source line: 399 */
/* source line: 404 */
/* source line: 409 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDigitalOutput1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDigitalOutput1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaDigitalOutput1394Configuration::Copy(const sawRobotIO1394::osaDigitalOutput1394Configuration & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<int >::Copy(this->BoardID, source__cdg.BoardID);
    cmnData<int >::Copy(this->BitID, source__cdg.BitID);
    cmnData<double >::Copy(this->HighDuration, source__cdg.HighDuration);
    cmnData<double >::Copy(this->LowDuration, source__cdg.LowDuration);
    cmnData<bool >::Copy(this->IsPWM, source__cdg.IsPWM);
    cmnData<double >::Copy(this->PWMFrequency, source__cdg.PWMFrequency);
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->BoardID, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->BitID, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->HighDuration, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->LowDuration, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->IsPWM, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->PWMFrequency, outputStream__cdg);
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->BoardID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->BitID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->HighDuration, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->LowDuration, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->IsPWM, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->PWMFrequency, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BoardID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BitID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->HighDuration, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->LowDuration, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->IsPWM, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->PWMFrequency, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDigitalOutput1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BoardID, delimiter__cdg, prefix__cdg + "BoardID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BitID, delimiter__cdg, prefix__cdg + "BitID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->HighDuration, delimiter__cdg, prefix__cdg + "HighDuration");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->LowDuration, delimiter__cdg, prefix__cdg + "LowDuration");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->IsPWM, delimiter__cdg, prefix__cdg + "IsPWM");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->PWMFrequency, delimiter__cdg, prefix__cdg + "PWMFrequency");
    return description__cdg.str();
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BoardID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BitID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->HighDuration, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->LowDuration, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->IsPWM, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->PWMFrequency, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDigitalOutput1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaDigitalOutput1394Configuration" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  BoardID:" << cmnData<int >::HumanReadable(this->BoardID);
    description__cdg << "  BitID:" << cmnData<int >::HumanReadable(this->BitID);
    description__cdg << "  HighDuration:" << cmnData<double >::HumanReadable(this->HighDuration);
    description__cdg << "  LowDuration:" << cmnData<double >::HumanReadable(this->LowDuration);
    description__cdg << "  IsPWM:" << cmnData<bool >::HumanReadable(this->IsPWM);
    description__cdg << "  PWMFrequency:" << cmnData<double >::HumanReadable(this->PWMFrequency);
    return description__cdg.str();
}
bool sawRobotIO1394::osaDigitalOutput1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<int >::ScalarNumberIsFixed(this->BoardID)
           && cmnData<int >::ScalarNumberIsFixed(this->BitID)
           && cmnData<double >::ScalarNumberIsFixed(this->HighDuration)
           && cmnData<double >::ScalarNumberIsFixed(this->LowDuration)
           && cmnData<bool >::ScalarNumberIsFixed(this->IsPWM)
           && cmnData<double >::ScalarNumberIsFixed(this->PWMFrequency)
    ;
}
size_t sawRobotIO1394::osaDigitalOutput1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<int >::ScalarNumber(this->BoardID)
           + cmnData<int >::ScalarNumber(this->BitID)
           + cmnData<double >::ScalarNumber(this->HighDuration)
           + cmnData<double >::ScalarNumber(this->LowDuration)
           + cmnData<bool >::ScalarNumber(this->IsPWM)
           + cmnData<double >::ScalarNumber(this->PWMFrequency)
    ;
}
std::string sawRobotIO1394::osaDigitalOutput1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BoardID, index_cdg - baseIndex__cdg, prefix__cdg + "BoardID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BitID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BitID, index_cdg - baseIndex__cdg, prefix__cdg + "BitID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->HighDuration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->HighDuration, index_cdg - baseIndex__cdg, prefix__cdg + "HighDuration");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->LowDuration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->LowDuration, index_cdg - baseIndex__cdg, prefix__cdg + "LowDuration");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->IsPWM);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->IsPWM, index_cdg - baseIndex__cdg, prefix__cdg + "IsPWM");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->PWMFrequency);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->PWMFrequency, index_cdg - baseIndex__cdg, prefix__cdg + "PWMFrequency");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaDigitalOutput1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaDigitalOutput1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BoardID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BitID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BitID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->HighDuration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->HighDuration, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->LowDuration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->LowDuration, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->IsPWM);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->IsPWM, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->PWMFrequency);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->PWMFrequency, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaDigitalOutput1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaDigitalOutput1394Configuration >::SerializeText(const sawRobotIO1394::osaDigitalOutput1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<int >::SerializeText(this->BoardID, jsonValue["BoardID"]);
    cmnDataJSON<int >::SerializeText(this->BitID, jsonValue["BitID"]);
    cmnDataJSON<double >::SerializeText(this->HighDuration, jsonValue["HighDuration"]);
    cmnDataJSON<double >::SerializeText(this->LowDuration, jsonValue["LowDuration"]);
    cmnDataJSON<bool >::SerializeText(this->IsPWM, jsonValue["IsPWM"]);
    cmnDataJSON<double >::SerializeText(this->PWMFrequency, jsonValue["PWMFrequency"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaDigitalOutput1394Configuration >::DeSerializeText(sawRobotIO1394::osaDigitalOutput1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["BoardID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BoardID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BoardID");
    };
    field__cdg = jsonValue["BitID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BitID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BitID");
    };
    field__cdg = jsonValue["HighDuration"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->HighDuration, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: HighDuration");
    };
    field__cdg = jsonValue["LowDuration"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->LowDuration, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: LowDuration");
    };
    field__cdg = jsonValue["IsPWM"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->IsPWM, field__cdg);
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: IsPWM");
    };
    field__cdg = jsonValue["PWMFrequency"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->PWMFrequency, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: PWMFrequency");
    };
}
#endif // CISST_HAS_JSON

/* source line: 416 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaDallasChip1394ConfigurationProxy);

sawRobotIO1394::osaDallasChip1394Configuration::osaDallasChip1394Configuration(void):
    Name()
    , BoardID()
{}

sawRobotIO1394::osaDallasChip1394Configuration::osaDallasChip1394Configuration(const osaDallasChip1394Configuration & other):
    Name(other.Name)
    , BoardID(other.BoardID)
{}

sawRobotIO1394::osaDallasChip1394Configuration & sawRobotIO1394::osaDallasChip1394Configuration::operator = (const osaDallasChip1394Configuration & other)
{
    Name = other.Name;
    BoardID = other.BoardID;
    return *this;
}

sawRobotIO1394::osaDallasChip1394Configuration::~osaDallasChip1394Configuration(void){}


void sawRobotIO1394::osaDallasChip1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->BoardID);
}


void sawRobotIO1394::osaDallasChip1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->BoardID);
}


void sawRobotIO1394::osaDallasChip1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaDallasChip1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaDallasChip1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaDallasChip1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 420 */
/* source line: 425 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDallasChip1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDallasChip1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaDallasChip1394Configuration::Copy(const sawRobotIO1394::osaDallasChip1394Configuration & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<int >::Copy(this->BoardID, source__cdg.BoardID);
}
void sawRobotIO1394::osaDallasChip1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->BoardID, outputStream__cdg);
}
void sawRobotIO1394::osaDallasChip1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->BoardID, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaDallasChip1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BoardID, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDallasChip1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BoardID, delimiter__cdg, prefix__cdg + "BoardID");
    return description__cdg.str();
}
void sawRobotIO1394::osaDallasChip1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDallasChip1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDallasChip1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BoardID, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDallasChip1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaDallasChip1394Configuration" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  BoardID:" << cmnData<int >::HumanReadable(this->BoardID);
    return description__cdg.str();
}
bool sawRobotIO1394::osaDallasChip1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<int >::ScalarNumberIsFixed(this->BoardID)
    ;
}
size_t sawRobotIO1394::osaDallasChip1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<int >::ScalarNumber(this->BoardID)
    ;
}
std::string sawRobotIO1394::osaDallasChip1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BoardID, index_cdg - baseIndex__cdg, prefix__cdg + "BoardID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaDallasChip1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaDallasChip1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BoardID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaDallasChip1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaDallasChip1394Configuration >::SerializeText(const sawRobotIO1394::osaDallasChip1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDallasChip1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<int >::SerializeText(this->BoardID, jsonValue["BoardID"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaDallasChip1394Configuration >::DeSerializeText(sawRobotIO1394::osaDallasChip1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDallasChip1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["BoardID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BoardID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BoardID");
    };
}
#endif // CISST_HAS_JSON

/* source line: 432 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaPort1394ConfigurationProxy);

sawRobotIO1394::osaPort1394Configuration::osaPort1394Configuration(void):
    Robots()
    , DigitalInputs()
    , DigitalOutputs()
    , DallasChips()
{}

sawRobotIO1394::osaPort1394Configuration::osaPort1394Configuration(const osaPort1394Configuration & other):
    Robots(other.Robots)
    , DigitalInputs(other.DigitalInputs)
    , DigitalOutputs(other.DigitalOutputs)
    , DallasChips(other.DallasChips)
{}

sawRobotIO1394::osaPort1394Configuration & sawRobotIO1394::osaPort1394Configuration::operator = (const osaPort1394Configuration & other)
{
    Robots = other.Robots;
    DigitalInputs = other.DigitalInputs;
    DigitalOutputs = other.DigitalOutputs;
    DallasChips = other.DallasChips;
    return *this;
}

sawRobotIO1394::osaPort1394Configuration::~osaPort1394Configuration(void){}


void sawRobotIO1394::osaPort1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Robots);
    cmnSerializeRaw(outputStream__cdg, this->DigitalInputs);
    cmnSerializeRaw(outputStream__cdg, this->DigitalOutputs);
    cmnSerializeRaw(outputStream__cdg, this->DallasChips);
}


void sawRobotIO1394::osaPort1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Robots);
    cmnDeSerializeRaw(inputStream__cdg, this->DigitalInputs);
    cmnDeSerializeRaw(inputStream__cdg, this->DigitalOutputs);
    cmnDeSerializeRaw(inputStream__cdg, this->DallasChips);
}


void sawRobotIO1394::osaPort1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaPort1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaPort1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaPort1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 436 */
/* source line: 441 */
/* source line: 446 */
/* source line: 451 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPort1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPort1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaPort1394Configuration::Copy(const sawRobotIO1394::osaPort1394Configuration & source__cdg) {
    cmnData<std::vector<osaRobot1394Configuration> >::Copy(this->Robots, source__cdg.Robots);
    cmnData<std::vector<osaDigitalInput1394Configuration> >::Copy(this->DigitalInputs, source__cdg.DigitalInputs);
    cmnData<std::vector<osaDigitalOutput1394Configuration> >::Copy(this->DigitalOutputs, source__cdg.DigitalOutputs);
    cmnData<std::vector<osaDallasChip1394Configuration> >::Copy(this->DallasChips, source__cdg.DallasChips);
}
void sawRobotIO1394::osaPort1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::vector<osaRobot1394Configuration> >::SerializeBinary(this->Robots, outputStream__cdg);
    cmnData<std::vector<osaDigitalInput1394Configuration> >::SerializeBinary(this->DigitalInputs, outputStream__cdg);
    cmnData<std::vector<osaDigitalOutput1394Configuration> >::SerializeBinary(this->DigitalOutputs, outputStream__cdg);
    cmnData<std::vector<osaDallasChip1394Configuration> >::SerializeBinary(this->DallasChips, outputStream__cdg);
}
void sawRobotIO1394::osaPort1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::vector<osaRobot1394Configuration> >::DeSerializeBinary(this->Robots, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<osaDigitalInput1394Configuration> >::DeSerializeBinary(this->DigitalInputs, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<osaDigitalOutput1394Configuration> >::DeSerializeBinary(this->DigitalOutputs, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<osaDallasChip1394Configuration> >::DeSerializeBinary(this->DallasChips, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaPort1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaRobot1394Configuration> >::SerializeText(this->Robots, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaDigitalInput1394Configuration> >::SerializeText(this->DigitalInputs, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaDigitalOutput1394Configuration> >::SerializeText(this->DigitalOutputs, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaDallasChip1394Configuration> >::SerializeText(this->DallasChips, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPort1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaRobot1394Configuration> >::SerializeDescription(this->Robots, delimiter__cdg, prefix__cdg + "Robots");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaDigitalInput1394Configuration> >::SerializeDescription(this->DigitalInputs, delimiter__cdg, prefix__cdg + "DigitalInputs");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaDigitalOutput1394Configuration> >::SerializeDescription(this->DigitalOutputs, delimiter__cdg, prefix__cdg + "DigitalOutputs");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaDallasChip1394Configuration> >::SerializeDescription(this->DallasChips, delimiter__cdg, prefix__cdg + "DallasChips");
    return description__cdg.str();
}
void sawRobotIO1394::osaPort1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPort1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaRobot1394Configuration> >::DeSerializeText(this->Robots, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPort1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaDigitalInput1394Configuration> >::DeSerializeText(this->DigitalInputs, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPort1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaDigitalOutput1394Configuration> >::DeSerializeText(this->DigitalOutputs, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPort1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaDallasChip1394Configuration> >::DeSerializeText(this->DallasChips, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPort1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaPort1394Configuration" << std::endl;
    description__cdg << "  Robots:" << cmnData<std::vector<osaRobot1394Configuration> >::HumanReadable(this->Robots);
    description__cdg << "  DigitalInputs:" << cmnData<std::vector<osaDigitalInput1394Configuration> >::HumanReadable(this->DigitalInputs);
    description__cdg << "  DigitalOutputs:" << cmnData<std::vector<osaDigitalOutput1394Configuration> >::HumanReadable(this->DigitalOutputs);
    description__cdg << "  DallasChips:" << cmnData<std::vector<osaDallasChip1394Configuration> >::HumanReadable(this->DallasChips);
    return description__cdg.str();
}
bool sawRobotIO1394::osaPort1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::vector<osaRobot1394Configuration> >::ScalarNumberIsFixed(this->Robots)
           && cmnData<std::vector<osaDigitalInput1394Configuration> >::ScalarNumberIsFixed(this->DigitalInputs)
           && cmnData<std::vector<osaDigitalOutput1394Configuration> >::ScalarNumberIsFixed(this->DigitalOutputs)
           && cmnData<std::vector<osaDallasChip1394Configuration> >::ScalarNumberIsFixed(this->DallasChips)
    ;
}
size_t sawRobotIO1394::osaPort1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::vector<osaRobot1394Configuration> >::ScalarNumber(this->Robots)
           + cmnData<std::vector<osaDigitalInput1394Configuration> >::ScalarNumber(this->DigitalInputs)
           + cmnData<std::vector<osaDigitalOutput1394Configuration> >::ScalarNumber(this->DigitalOutputs)
           + cmnData<std::vector<osaDallasChip1394Configuration> >::ScalarNumber(this->DallasChips)
    ;
}
std::string sawRobotIO1394::osaPort1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::vector<osaRobot1394Configuration> >::ScalarNumber(this->Robots);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaRobot1394Configuration> >::ScalarDescription(this->Robots, index_cdg - baseIndex__cdg, prefix__cdg + "Robots");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDigitalInput1394Configuration> >::ScalarNumber(this->DigitalInputs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDigitalInput1394Configuration> >::ScalarDescription(this->DigitalInputs, index_cdg - baseIndex__cdg, prefix__cdg + "DigitalInputs");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDigitalOutput1394Configuration> >::ScalarNumber(this->DigitalOutputs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDigitalOutput1394Configuration> >::ScalarDescription(this->DigitalOutputs, index_cdg - baseIndex__cdg, prefix__cdg + "DigitalOutputs");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDallasChip1394Configuration> >::ScalarNumber(this->DallasChips);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDallasChip1394Configuration> >::ScalarDescription(this->DallasChips, index_cdg - baseIndex__cdg, prefix__cdg + "DallasChips");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaPort1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaPort1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::vector<osaRobot1394Configuration> >::ScalarNumber(this->Robots);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaRobot1394Configuration> >::Scalar(this->Robots, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDigitalInput1394Configuration> >::ScalarNumber(this->DigitalInputs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDigitalInput1394Configuration> >::Scalar(this->DigitalInputs, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDigitalOutput1394Configuration> >::ScalarNumber(this->DigitalOutputs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDigitalOutput1394Configuration> >::Scalar(this->DigitalOutputs, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDallasChip1394Configuration> >::ScalarNumber(this->DallasChips);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDallasChip1394Configuration> >::Scalar(this->DallasChips, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaPort1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaPort1394Configuration >::SerializeText(const sawRobotIO1394::osaPort1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPort1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::vector<osaRobot1394Configuration> >::SerializeText(this->Robots, jsonValue["Robots"]);
    cmnDataJSON<std::vector<osaDigitalInput1394Configuration> >::SerializeText(this->DigitalInputs, jsonValue["DigitalInputs"]);
    cmnDataJSON<std::vector<osaDigitalOutput1394Configuration> >::SerializeText(this->DigitalOutputs, jsonValue["DigitalOutputs"]);
    cmnDataJSON<std::vector<osaDallasChip1394Configuration> >::SerializeText(this->DallasChips, jsonValue["DallasChips"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaPort1394Configuration >::DeSerializeText(sawRobotIO1394::osaPort1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPort1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Robots"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<osaRobot1394Configuration> >::DeSerializeText(this->Robots, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<osaRobot1394Configuration>>::DeSerializeText: empty JSON value for: Robots");
    };
    field__cdg = jsonValue["DigitalInputs"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<osaDigitalInput1394Configuration> >::DeSerializeText(this->DigitalInputs, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<osaDigitalInput1394Configuration>>::DeSerializeText: empty JSON value for: DigitalInputs");
    };
    field__cdg = jsonValue["DigitalOutputs"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<osaDigitalOutput1394Configuration> >::DeSerializeText(this->DigitalOutputs, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<osaDigitalOutput1394Configuration>>::DeSerializeText: empty JSON value for: DigitalOutputs");
    };
    field__cdg = jsonValue["DallasChips"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<osaDallasChip1394Configuration> >::DeSerializeText(this->DallasChips, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<osaDallasChip1394Configuration>>::DeSerializeText: empty JSON value for: DallasChips");
    };
}
#endif // CISST_HAS_JSON

/* source line: 458 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaActuatorMappingProxy);

sawRobotIO1394::osaActuatorMapping::osaActuatorMapping(void):
    Board(nullptr)
    , BoardID()
    , Axis()
{}

sawRobotIO1394::osaActuatorMapping::osaActuatorMapping(const osaActuatorMapping & other):
    Board(other.Board)
    , BoardID(other.BoardID)
    , Axis(other.Axis)
{}

sawRobotIO1394::osaActuatorMapping & sawRobotIO1394::osaActuatorMapping::operator = (const osaActuatorMapping & other)
{
    Board = other.Board;
    BoardID = other.BoardID;
    Axis = other.Axis;
    return *this;
}

sawRobotIO1394::osaActuatorMapping::~osaActuatorMapping(void){}


void sawRobotIO1394::osaActuatorMapping::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->BoardID);
    cmnSerializeRaw(outputStream__cdg, this->Axis);
}


void sawRobotIO1394::osaActuatorMapping::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->BoardID);
    cmnDeSerializeRaw(inputStream__cdg, this->Axis);
}


void sawRobotIO1394::osaActuatorMapping::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaActuatorMapping::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaActuatorMapping >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaActuatorMapping >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 462 */
/* source line: 469 */
/* source line: 474 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaActuatorMapping & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaActuatorMapping & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaActuatorMapping::Copy(const sawRobotIO1394::osaActuatorMapping & source__cdg) {
    cmnData<int >::Copy(this->BoardID, source__cdg.BoardID);
    cmnData<int >::Copy(this->Axis, source__cdg.Axis);
}
void sawRobotIO1394::osaActuatorMapping::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<int >::SerializeBinary(this->BoardID, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->Axis, outputStream__cdg);
}
void sawRobotIO1394::osaActuatorMapping::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->BoardID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->Axis, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaActuatorMapping::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BoardID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->Axis, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaActuatorMapping::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BoardID, delimiter__cdg, prefix__cdg + "BoardID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->Axis, delimiter__cdg, prefix__cdg + "Axis");
    return description__cdg.str();
}
void sawRobotIO1394::osaActuatorMapping::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuatorMapping");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BoardID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuatorMapping");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->Axis, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaActuatorMapping::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaActuatorMapping" << std::endl;
    description__cdg << "  BoardID:" << cmnData<int >::HumanReadable(this->BoardID);
    description__cdg << "  Axis:" << cmnData<int >::HumanReadable(this->Axis);
    return description__cdg.str();
}
bool sawRobotIO1394::osaActuatorMapping::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->BoardID)
           && cmnData<int >::ScalarNumberIsFixed(this->Axis)
    ;
}
size_t sawRobotIO1394::osaActuatorMapping::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->BoardID)
           + cmnData<int >::ScalarNumber(this->Axis)
    ;
}
std::string sawRobotIO1394::osaActuatorMapping::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BoardID, index_cdg - baseIndex__cdg, prefix__cdg + "BoardID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->Axis);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->Axis, index_cdg - baseIndex__cdg, prefix__cdg + "Axis");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaActuatorMapping index out of range"));
    return "";
}
double sawRobotIO1394::osaActuatorMapping::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BoardID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->Axis);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->Axis, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaActuatorMapping index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaActuatorMapping >::SerializeText(const sawRobotIO1394::osaActuatorMapping & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaActuatorMapping::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->BoardID, jsonValue["BoardID"]);
    cmnDataJSON<int >::SerializeText(this->Axis, jsonValue["Axis"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaActuatorMapping >::DeSerializeText(sawRobotIO1394::osaActuatorMapping & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaActuatorMapping::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["BoardID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BoardID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BoardID");
    };
    field__cdg = jsonValue["Axis"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->Axis, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: Axis");
    };
}
#endif // CISST_HAS_JSON

/* source line: 481 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaBrakeMappingProxy);

sawRobotIO1394::osaBrakeMapping::osaBrakeMapping(void):
    Board(nullptr)
    , BoardID()
    , Axis()
{}

sawRobotIO1394::osaBrakeMapping::osaBrakeMapping(const osaBrakeMapping & other):
    Board(other.Board)
    , BoardID(other.BoardID)
    , Axis(other.Axis)
{}

sawRobotIO1394::osaBrakeMapping & sawRobotIO1394::osaBrakeMapping::operator = (const osaBrakeMapping & other)
{
    Board = other.Board;
    BoardID = other.BoardID;
    Axis = other.Axis;
    return *this;
}

sawRobotIO1394::osaBrakeMapping::~osaBrakeMapping(void){}


void sawRobotIO1394::osaBrakeMapping::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->BoardID);
    cmnSerializeRaw(outputStream__cdg, this->Axis);
}


void sawRobotIO1394::osaBrakeMapping::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->BoardID);
    cmnDeSerializeRaw(inputStream__cdg, this->Axis);
}


void sawRobotIO1394::osaBrakeMapping::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaBrakeMapping::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaBrakeMapping >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaBrakeMapping >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 485 */
/* source line: 492 */
/* source line: 497 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaBrakeMapping & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaBrakeMapping & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaBrakeMapping::Copy(const sawRobotIO1394::osaBrakeMapping & source__cdg) {
    cmnData<int >::Copy(this->BoardID, source__cdg.BoardID);
    cmnData<int >::Copy(this->Axis, source__cdg.Axis);
}
void sawRobotIO1394::osaBrakeMapping::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<int >::SerializeBinary(this->BoardID, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->Axis, outputStream__cdg);
}
void sawRobotIO1394::osaBrakeMapping::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->BoardID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->Axis, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaBrakeMapping::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BoardID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->Axis, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaBrakeMapping::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BoardID, delimiter__cdg, prefix__cdg + "BoardID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->Axis, delimiter__cdg, prefix__cdg + "Axis");
    return description__cdg.str();
}
void sawRobotIO1394::osaBrakeMapping::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaBrakeMapping");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BoardID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaBrakeMapping");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->Axis, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaBrakeMapping::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaBrakeMapping" << std::endl;
    description__cdg << "  BoardID:" << cmnData<int >::HumanReadable(this->BoardID);
    description__cdg << "  Axis:" << cmnData<int >::HumanReadable(this->Axis);
    return description__cdg.str();
}
bool sawRobotIO1394::osaBrakeMapping::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->BoardID)
           && cmnData<int >::ScalarNumberIsFixed(this->Axis)
    ;
}
size_t sawRobotIO1394::osaBrakeMapping::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->BoardID)
           + cmnData<int >::ScalarNumber(this->Axis)
    ;
}
std::string sawRobotIO1394::osaBrakeMapping::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BoardID, index_cdg - baseIndex__cdg, prefix__cdg + "BoardID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->Axis);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->Axis, index_cdg - baseIndex__cdg, prefix__cdg + "Axis");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaBrakeMapping index out of range"));
    return "";
}
double sawRobotIO1394::osaBrakeMapping::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BoardID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->Axis);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->Axis, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaBrakeMapping index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaBrakeMapping >::SerializeText(const sawRobotIO1394::osaBrakeMapping & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaBrakeMapping::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->BoardID, jsonValue["BoardID"]);
    cmnDataJSON<int >::SerializeText(this->Axis, jsonValue["Axis"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaBrakeMapping >::DeSerializeText(sawRobotIO1394::osaBrakeMapping & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaBrakeMapping::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["BoardID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BoardID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BoardID");
    };
    field__cdg = jsonValue["Axis"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->Axis, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: Axis");
    };
}
#endif // CISST_HAS_JSON

