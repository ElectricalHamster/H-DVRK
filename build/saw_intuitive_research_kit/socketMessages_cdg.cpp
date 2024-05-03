// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/sawIntuitiveResearchKit/components/code/socketMessages.cdg

#include <sawIntuitiveResearchKit/socketMessages.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 10 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(socketMessagesProxy);

socketMessages::socketMessages(void)
{}

socketMessages::socketMessages(const socketMessages & CMN_UNUSED(other))
{}

socketMessages & socketMessages::operator = (const socketMessages & CMN_UNUSED(other))
{
    return *this;
}

socketMessages::~socketMessages(void){}


void socketMessages::SerializeRaw(std::ostream & CMN_UNUSED(outputStream__cdg)) const
{
}


void socketMessages::DeSerializeRaw(std::istream & CMN_UNUSED(inputStream__cdg))
{
}


void socketMessages::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void socketMessages::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<socketMessages >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<socketMessages >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const socketMessages & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, socketMessages & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void socketMessages::Copy(const socketMessages & CMN_UNUSED(source__cdg)) {
}
void socketMessages::SerializeBinary(std::ostream & CMN_UNUSED(outputStream__cdg)) const CISST_THROW(std::runtime_error) {
}
void socketMessages::DeSerializeBinary(std::istream & CMN_UNUSED(inputStream__cdg),
                                            const cmnDataFormat & CMN_UNUSED(localFormat),
                                            const cmnDataFormat & CMN_UNUSED(remoteFormat)) CISST_THROW(std::runtime_error) {
}
void socketMessages::SerializeText(std::ostream & CMN_UNUSED(outputStream__cdg), const char CMN_UNUSED(delimiter__cdg)) const CISST_THROW(std::runtime_error) {
}
std::string socketMessages::SerializeDescription(const char CMN_UNUSED(delimiter__cdg), const std::string & CMN_UNUSED(userDescription__cdg)) const {
    std::stringstream description__cdg;
    return description__cdg.str();
}
void socketMessages::DeSerializeText(std::istream & CMN_UNUSED(inputStream__cdg),
                                          const char CMN_UNUSED(delimiter__cdg)) CISST_THROW(std::runtime_error) {
}
std::string socketMessages::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "socketMessages" << std::endl;
    return description__cdg.str();
}
bool socketMessages::ScalarNumberIsFixed(void) const {
    return true
    ;
}
size_t socketMessages::ScalarNumber(void) const {
    return 0
    ;
}
std::string socketMessages::ScalarDescription(const size_t CMN_UNUSED(index_cdg), const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    cmnThrow(std::out_of_range("cmnDataScalarDescription: socketMessages index out of range"));
    return "";
}
double socketMessages::Scalar(const size_t CMN_UNUSED(index_cdg)) const CISST_THROW(std::out_of_range) {
    cmnThrow(std::out_of_range("cmnDataScalar: socketMessages index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<socketMessages >::SerializeText(const socketMessages & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void socketMessages::SerializeTextJSON(Json::Value & CMN_UNUSED(jsonValue)) const {
}
template<>
void cmnDataJSON<socketMessages >::DeSerializeText(socketMessages & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void socketMessages::DeSerializeTextJSON(const Json::Value & CMN_UNUSED(jsonValue)) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_socketMessages_StateType(const socketMessages::StateType & data) {
    switch (data) {
        case socketMessages::SCK_UNINITIALIZED:
            return "Used to turn off the system (Current/Desired)";
            break;
        case socketMessages::SCK_HOMING:
            return "Used to indicate the arm is currently homing (Current)";
            break;
        case socketMessages::SCK_HOMED:
            return "Used to Home/Power the arm (Current/Desired)";
            break;
        case socketMessages::SCK_CART_POS:
            return "Used to set direct cartesian position (Current/Desired)";
            break;
        case socketMessages::SCK_CART_TRAJ:
            return "Used to set trajectory cartesian goal (Current/Desired)";
            break;
        case socketMessages::SCK_JNT_POS:
            return "Used to set direct joint position (Current/Desired)";
            break;
        case socketMessages::SCK_JNT_TRAJ:
            return "Used to set trajectory joint goal (Current/Desired)";
            break;
        default: return "undefined enum socketMessages::StateType";
            break;
    }
}

std::string socketMessages::StateTypeToString(const socketMessages::StateType & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case socketMessages::SCK_UNINITIALIZED:
            return "SCK_UNINITIALIZED";
            break;
        case socketMessages::SCK_HOMING:
            return "SCK_HOMING";
            break;
        case socketMessages::SCK_HOMED:
            return "SCK_HOMED";
            break;
        case socketMessages::SCK_CART_POS:
            return "SCK_CART_POS";
            break;
        case socketMessages::SCK_CART_TRAJ:
            return "SCK_CART_TRAJ";
            break;
        case socketMessages::SCK_JNT_POS:
            return "SCK_JNT_POS";
            break;
        case socketMessages::SCK_JNT_TRAJ:
            return "SCK_JNT_TRAJ";
            break;
        default:
            break;
    }
    cmnThrow("socketMessages::StateTypeToString called with invalid enum");
    return "";
}

socketMessages::StateType socketMessages::StateTypeFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "SCK_UNINITIALIZED") {
        return socketMessages::SCK_UNINITIALIZED;
    };
    if (value == "SCK_HOMING") {
        return socketMessages::SCK_HOMING;
    };
    if (value == "SCK_HOMED") {
        return socketMessages::SCK_HOMED;
    };
    if (value == "SCK_CART_POS") {
        return socketMessages::SCK_CART_POS;
    };
    if (value == "SCK_CART_TRAJ") {
        return socketMessages::SCK_CART_TRAJ;
    };
    if (value == "SCK_JNT_POS") {
        return socketMessages::SCK_JNT_POS;
    };
    if (value == "SCK_JNT_TRAJ") {
        return socketMessages::SCK_JNT_TRAJ;
    };
    std::string message = "socketMessages::StateTypeFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = StateTypeVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<socketMessages::StateType >(0);
}

const std::vector<int> & socketMessages::StateTypeVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(SCK_UNINITIALIZED));
        vectorInt.push_back(static_cast<int>(SCK_HOMING));
        vectorInt.push_back(static_cast<int>(SCK_HOMED));
        vectorInt.push_back(static_cast<int>(SCK_CART_POS));
        vectorInt.push_back(static_cast<int>(SCK_CART_TRAJ));
        vectorInt.push_back(static_cast<int>(SCK_JNT_POS));
        vectorInt.push_back(static_cast<int>(SCK_JNT_TRAJ));
    }
    return vectorInt;
}

const std::vector<std::string> & socketMessages::StateTypeVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("SCK_UNINITIALIZED");
        vectorString.push_back("SCK_HOMING");
        vectorString.push_back("SCK_HOMED");
        vectorString.push_back("SCK_CART_POS");
        vectorString.push_back("SCK_CART_TRAJ");
        vectorString.push_back("SCK_JNT_POS");
        vectorString.push_back("SCK_JNT_TRAJ");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(socketMessages::StateType, int);
#endif // CISST_HAS_JSON

/* source line: 53 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(socketHeaderProxy);

socketHeader::socketHeader(void):
    Version(10000)
    , Id(0)
    , Size()
    , Timestamp(0.0)
    , LastId(0)
    , LastTimestamp(0.0)
{}

socketHeader::socketHeader(const socketHeader & other):
    Version(other.Version)
    , Id(other.Id)
    , Size(other.Size)
    , Timestamp(other.Timestamp)
    , LastId(other.LastId)
    , LastTimestamp(other.LastTimestamp)
{}

socketHeader & socketHeader::operator = (const socketHeader & other)
{
    Version = other.Version;
    Id = other.Id;
    Size = other.Size;
    Timestamp = other.Timestamp;
    LastId = other.LastId;
    LastTimestamp = other.LastTimestamp;
    return *this;
}

socketHeader::~socketHeader(void){}


void socketHeader::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Version);
    cmnSerializeRaw(outputStream__cdg, this->Id);
    cmnSerializeRaw(outputStream__cdg, this->Size);
    cmnSerializeRaw(outputStream__cdg, this->Timestamp);
    cmnSerializeRaw(outputStream__cdg, this->LastId);
    cmnSerializeRaw(outputStream__cdg, this->LastTimestamp);
}


void socketHeader::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Version);
    cmnDeSerializeRaw(inputStream__cdg, this->Id);
    cmnDeSerializeRaw(inputStream__cdg, this->Size);
    cmnDeSerializeRaw(inputStream__cdg, this->Timestamp);
    cmnDeSerializeRaw(inputStream__cdg, this->LastId);
    cmnDeSerializeRaw(inputStream__cdg, this->LastTimestamp);
}


void socketHeader::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void socketHeader::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<socketHeader >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<socketHeader >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 57 */
/* source line: 65 */
/* source line: 73 */
/* source line: 80 */
/* source line: 88 */
/* source line: 96 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const socketHeader & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, socketHeader & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void socketHeader::Copy(const socketHeader & source__cdg) {
    cmnData<int >::Copy(this->Version, source__cdg.Version);
    cmnData<unsigned int >::Copy(this->Id, source__cdg.Id);
    cmnData<int >::Copy(this->Size, source__cdg.Size);
    cmnData<double >::Copy(this->Timestamp, source__cdg.Timestamp);
    cmnData<unsigned int >::Copy(this->LastId, source__cdg.LastId);
    cmnData<double >::Copy(this->LastTimestamp, source__cdg.LastTimestamp);
}
void socketHeader::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<int >::SerializeBinary(this->Version, outputStream__cdg);
    cmnData<unsigned int >::SerializeBinary(this->Id, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->Size, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->Timestamp, outputStream__cdg);
    cmnData<unsigned int >::SerializeBinary(this->LastId, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->LastTimestamp, outputStream__cdg);
}
void socketHeader::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->Version, inputStream__cdg, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->Id, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->Size, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->Timestamp, inputStream__cdg, localFormat, remoteFormat);
    cmnData<unsigned int >::DeSerializeBinary(this->LastId, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->LastTimestamp, inputStream__cdg, localFormat, remoteFormat);
}
void socketHeader::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->Version, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<unsigned int >::SerializeText(this->Id, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->Size, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->Timestamp, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<unsigned int >::SerializeText(this->LastId, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->LastTimestamp, outputStream__cdg, delimiter__cdg);
}
std::string socketHeader::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->Version, delimiter__cdg, prefix__cdg + "Version");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<unsigned int >::SerializeDescription(this->Id, delimiter__cdg, prefix__cdg + "Id");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->Size, delimiter__cdg, prefix__cdg + "Size");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->Timestamp, delimiter__cdg, prefix__cdg + "Timestamp");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<unsigned int >::SerializeDescription(this->LastId, delimiter__cdg, prefix__cdg + "LastId");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->LastTimestamp, delimiter__cdg, prefix__cdg + "LastTimestamp");
    return description__cdg.str();
}
void socketHeader::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "socketHeader");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->Version, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "socketHeader");
    }
    someData__cdg = true;
    cmnData<unsigned int >::DeSerializeText(this->Id, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "socketHeader");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->Size, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "socketHeader");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->Timestamp, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "socketHeader");
    }
    someData__cdg = true;
    cmnData<unsigned int >::DeSerializeText(this->LastId, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "socketHeader");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->LastTimestamp, inputStream__cdg, delimiter__cdg);
}
std::string socketHeader::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "socketHeader" << std::endl;
    description__cdg << "  Version:" << cmnData<int >::HumanReadable(this->Version);
    description__cdg << "  Id:" << cmnData<unsigned int >::HumanReadable(this->Id);
    description__cdg << "  Size:" << cmnData<int >::HumanReadable(this->Size);
    description__cdg << "  Timestamp:" << cmnData<double >::HumanReadable(this->Timestamp);
    description__cdg << "  LastId:" << cmnData<unsigned int >::HumanReadable(this->LastId);
    description__cdg << "  LastTimestamp:" << cmnData<double >::HumanReadable(this->LastTimestamp);
    return description__cdg.str();
}
bool socketHeader::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->Version)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->Id)
           && cmnData<int >::ScalarNumberIsFixed(this->Size)
           && cmnData<double >::ScalarNumberIsFixed(this->Timestamp)
           && cmnData<unsigned int >::ScalarNumberIsFixed(this->LastId)
           && cmnData<double >::ScalarNumberIsFixed(this->LastTimestamp)
    ;
}
size_t socketHeader::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->Version)
           + cmnData<unsigned int >::ScalarNumber(this->Id)
           + cmnData<int >::ScalarNumber(this->Size)
           + cmnData<double >::ScalarNumber(this->Timestamp)
           + cmnData<unsigned int >::ScalarNumber(this->LastId)
           + cmnData<double >::ScalarNumber(this->LastTimestamp)
    ;
}
std::string socketHeader::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->Version);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->Version, index_cdg - baseIndex__cdg, prefix__cdg + "Version");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<unsigned int >::ScalarNumber(this->Id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<unsigned int >::ScalarDescription(this->Id, index_cdg - baseIndex__cdg, prefix__cdg + "Id");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->Size);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->Size, index_cdg - baseIndex__cdg, prefix__cdg + "Size");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Timestamp);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->Timestamp, index_cdg - baseIndex__cdg, prefix__cdg + "Timestamp");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<unsigned int >::ScalarNumber(this->LastId);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<unsigned int >::ScalarDescription(this->LastId, index_cdg - baseIndex__cdg, prefix__cdg + "LastId");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->LastTimestamp);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->LastTimestamp, index_cdg - baseIndex__cdg, prefix__cdg + "LastTimestamp");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: socketHeader index out of range"));
    return "";
}
double socketHeader::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->Version);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->Version, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<unsigned int >::ScalarNumber(this->Id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<unsigned int >::Scalar(this->Id, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->Size);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->Size, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Timestamp);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->Timestamp, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<unsigned int >::ScalarNumber(this->LastId);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<unsigned int >::Scalar(this->LastId, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->LastTimestamp);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->LastTimestamp, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: socketHeader index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<socketHeader >::SerializeText(const socketHeader & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void socketHeader::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->Version, jsonValue["Version"]);
    cmnDataJSON<unsigned int >::SerializeText(this->Id, jsonValue["Id"]);
    cmnDataJSON<int >::SerializeText(this->Size, jsonValue["Size"]);
    cmnDataJSON<double >::SerializeText(this->Timestamp, jsonValue["Timestamp"]);
    cmnDataJSON<unsigned int >::SerializeText(this->LastId, jsonValue["LastId"]);
    cmnDataJSON<double >::SerializeText(this->LastTimestamp, jsonValue["LastTimestamp"]);
}
template<>
void cmnDataJSON<socketHeader >::DeSerializeText(socketHeader & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void socketHeader::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Version"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->Version, field__cdg);
    };
    field__cdg = jsonValue["Id"];
    if (!field__cdg.empty()) {
        cmnDataJSON<unsigned int >::DeSerializeText(this->Id, field__cdg);
    };
    field__cdg = jsonValue["Size"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->Size, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: Size");
    };
    field__cdg = jsonValue["Timestamp"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->Timestamp, field__cdg);
    };
    field__cdg = jsonValue["LastId"];
    if (!field__cdg.empty()) {
        cmnDataJSON<unsigned int >::DeSerializeText(this->LastId, field__cdg);
    };
    field__cdg = jsonValue["LastTimestamp"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->LastTimestamp, field__cdg);
    };
}
#endif // CISST_HAS_JSON

/* source line: 106 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(socketStatePSMProxy);

socketStatePSM::socketStatePSM(void):
    Header()
    , RobotControlState(socketMessages::SCK_UNINITIALIZED)
    , CurrentPose()
    , CurrentJaw()
{}

socketStatePSM::socketStatePSM(const socketStatePSM & other):
    Header(other.Header)
    , RobotControlState(other.RobotControlState)
    , CurrentPose(other.CurrentPose)
    , CurrentJaw(other.CurrentJaw)
{}

socketStatePSM & socketStatePSM::operator = (const socketStatePSM & other)
{
    Header = other.Header;
    RobotControlState = other.RobotControlState;
    CurrentPose = other.CurrentPose;
    CurrentJaw = other.CurrentJaw;
    return *this;
}

socketStatePSM::~socketStatePSM(void){}


void socketStatePSM::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Header);
    cmnSerializeRaw(outputStream__cdg, this->RobotControlState);
    cmnSerializeRaw(outputStream__cdg, this->CurrentPose);
    cmnSerializeRaw(outputStream__cdg, this->CurrentJaw);
}


void socketStatePSM::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Header);
    cmnDeSerializeRaw(inputStream__cdg, this->RobotControlState);
    cmnDeSerializeRaw(inputStream__cdg, this->CurrentPose);
    cmnDeSerializeRaw(inputStream__cdg, this->CurrentJaw);
}


void socketStatePSM::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void socketStatePSM::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<socketStatePSM >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<socketStatePSM >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 110 */
/* source line: 117 */
/* source line: 125 */
/* source line: 132 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const socketStatePSM & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, socketStatePSM & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void socketStatePSM::Copy(const socketStatePSM & source__cdg) {
    cmnData<socketHeader >::Copy(this->Header, source__cdg.Header);
    cmnData<socketMessages::StateType >::Copy(this->RobotControlState, source__cdg.RobotControlState);
    cmnData<vctFrm3 >::Copy(this->CurrentPose, source__cdg.CurrentPose);
    cmnData<double >::Copy(this->CurrentJaw, source__cdg.CurrentJaw);
}
void socketStatePSM::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<socketHeader >::SerializeBinary(this->Header, outputStream__cdg);
    cmnData<socketMessages::StateType >::SerializeBinary(this->RobotControlState, outputStream__cdg);
    cmnData<vctFrm3 >::SerializeBinary(this->CurrentPose, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->CurrentJaw, outputStream__cdg);
}
void socketStatePSM::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<socketHeader >::DeSerializeBinary(this->Header, inputStream__cdg, localFormat, remoteFormat);
    cmnData<socketMessages::StateType >::DeSerializeBinary(this->RobotControlState, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctFrm3 >::DeSerializeBinary(this->CurrentPose, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->CurrentJaw, inputStream__cdg, localFormat, remoteFormat);
}
void socketStatePSM::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<socketHeader >::SerializeText(this->Header, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<socketMessages::StateType >::SerializeText(this->RobotControlState, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::SerializeText(this->CurrentPose, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->CurrentJaw, outputStream__cdg, delimiter__cdg);
}
std::string socketStatePSM::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<socketHeader >::SerializeDescription(this->Header, delimiter__cdg, prefix__cdg + "Header");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<socketMessages::StateType >::SerializeDescription(this->RobotControlState, delimiter__cdg, prefix__cdg + "RobotControlState");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctFrm3 >::SerializeDescription(this->CurrentPose, delimiter__cdg, prefix__cdg + "CurrentPose");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->CurrentJaw, delimiter__cdg, prefix__cdg + "CurrentJaw");
    return description__cdg.str();
}
void socketStatePSM::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "socketStatePSM");
    }
    someData__cdg = true;
    cmnData<socketHeader >::DeSerializeText(this->Header, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "socketStatePSM");
    }
    someData__cdg = true;
    cmnData<socketMessages::StateType >::DeSerializeText(this->RobotControlState, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "socketStatePSM");
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::DeSerializeText(this->CurrentPose, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "socketStatePSM");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->CurrentJaw, inputStream__cdg, delimiter__cdg);
}
std::string socketStatePSM::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "socketStatePSM" << std::endl;
    description__cdg << "  Header:" << cmnData<socketHeader >::HumanReadable(this->Header);
    description__cdg << "  RobotControlState:" << cmnData<socketMessages::StateType >::HumanReadable(this->RobotControlState);
    description__cdg << "  CurrentPose:" << cmnData<vctFrm3 >::HumanReadable(this->CurrentPose);
    description__cdg << "  CurrentJaw:" << cmnData<double >::HumanReadable(this->CurrentJaw);
    return description__cdg.str();
}
bool socketStatePSM::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<socketHeader >::ScalarNumberIsFixed(this->Header)
           && cmnData<socketMessages::StateType >::ScalarNumberIsFixed(this->RobotControlState)
           && cmnData<vctFrm3 >::ScalarNumberIsFixed(this->CurrentPose)
           && cmnData<double >::ScalarNumberIsFixed(this->CurrentJaw)
    ;
}
size_t socketStatePSM::ScalarNumber(void) const {
    return 0
           + cmnData<socketHeader >::ScalarNumber(this->Header)
           + cmnData<socketMessages::StateType >::ScalarNumber(this->RobotControlState)
           + cmnData<vctFrm3 >::ScalarNumber(this->CurrentPose)
           + cmnData<double >::ScalarNumber(this->CurrentJaw)
    ;
}
std::string socketStatePSM::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<socketHeader >::ScalarNumber(this->Header);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<socketHeader >::ScalarDescription(this->Header, index_cdg - baseIndex__cdg, prefix__cdg + "Header");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<socketMessages::StateType >::ScalarNumber(this->RobotControlState);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<socketMessages::StateType >::ScalarDescription(this->RobotControlState, index_cdg - baseIndex__cdg, prefix__cdg + "RobotControlState");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->CurrentPose);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::ScalarDescription(this->CurrentPose, index_cdg - baseIndex__cdg, prefix__cdg + "CurrentPose");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->CurrentJaw);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->CurrentJaw, index_cdg - baseIndex__cdg, prefix__cdg + "CurrentJaw");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: socketStatePSM index out of range"));
    return "";
}
double socketStatePSM::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<socketHeader >::ScalarNumber(this->Header);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<socketHeader >::Scalar(this->Header, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<socketMessages::StateType >::ScalarNumber(this->RobotControlState);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<socketMessages::StateType >::Scalar(this->RobotControlState, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->CurrentPose);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::Scalar(this->CurrentPose, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->CurrentJaw);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->CurrentJaw, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: socketStatePSM index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<socketStatePSM >::SerializeText(const socketStatePSM & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void socketStatePSM::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<socketHeader >::SerializeText(this->Header, jsonValue["Header"]);
    cmnDataJSON<socketMessages::StateType >::SerializeText(this->RobotControlState, jsonValue["RobotControlState"]);
    cmnDataJSON<vctFrm3 >::SerializeText(this->CurrentPose, jsonValue["CurrentPose"]);
    cmnDataJSON<double >::SerializeText(this->CurrentJaw, jsonValue["CurrentJaw"]);
}
template<>
void cmnDataJSON<socketStatePSM >::DeSerializeText(socketStatePSM & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void socketStatePSM::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Header"];
    if (!field__cdg.empty()) {
        cmnDataJSON<socketHeader >::DeSerializeText(this->Header, field__cdg);
    } else {
        cmnThrow("cmnDataJson<socketHeader>::DeSerializeText: empty JSON value for: Header");
    };
    field__cdg = jsonValue["RobotControlState"];
    if (!field__cdg.empty()) {
        cmnDataJSON<socketMessages::StateType >::DeSerializeText(this->RobotControlState, field__cdg);
    };
    field__cdg = jsonValue["CurrentPose"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctFrm3 >::DeSerializeText(this->CurrentPose, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctFrm3>::DeSerializeText: empty JSON value for: CurrentPose");
    };
    field__cdg = jsonValue["CurrentJaw"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->CurrentJaw, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: CurrentJaw");
    };
}
#endif // CISST_HAS_JSON

/* source line: 141 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(socketCommandPSMProxy);

socketCommandPSM::socketCommandPSM(void):
    Header()
    , RobotControlState(socketMessages::SCK_UNINITIALIZED)
    , GoalPose()
    , GoalJaw()
{}

socketCommandPSM::socketCommandPSM(const socketCommandPSM & other):
    Header(other.Header)
    , RobotControlState(other.RobotControlState)
    , GoalPose(other.GoalPose)
    , GoalJaw(other.GoalJaw)
{}

socketCommandPSM & socketCommandPSM::operator = (const socketCommandPSM & other)
{
    Header = other.Header;
    RobotControlState = other.RobotControlState;
    GoalPose = other.GoalPose;
    GoalJaw = other.GoalJaw;
    return *this;
}

socketCommandPSM::~socketCommandPSM(void){}


void socketCommandPSM::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Header);
    cmnSerializeRaw(outputStream__cdg, this->RobotControlState);
    cmnSerializeRaw(outputStream__cdg, this->GoalPose);
    cmnSerializeRaw(outputStream__cdg, this->GoalJaw);
}


void socketCommandPSM::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Header);
    cmnDeSerializeRaw(inputStream__cdg, this->RobotControlState);
    cmnDeSerializeRaw(inputStream__cdg, this->GoalPose);
    cmnDeSerializeRaw(inputStream__cdg, this->GoalJaw);
}


void socketCommandPSM::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void socketCommandPSM::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<socketCommandPSM >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<socketCommandPSM >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 145 */
/* source line: 152 */
/* source line: 160 */
/* source line: 167 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const socketCommandPSM & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, socketCommandPSM & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void socketCommandPSM::Copy(const socketCommandPSM & source__cdg) {
    cmnData<socketHeader >::Copy(this->Header, source__cdg.Header);
    cmnData<socketMessages::StateType >::Copy(this->RobotControlState, source__cdg.RobotControlState);
    cmnData<vctFrm3 >::Copy(this->GoalPose, source__cdg.GoalPose);
    cmnData<double >::Copy(this->GoalJaw, source__cdg.GoalJaw);
}
void socketCommandPSM::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<socketHeader >::SerializeBinary(this->Header, outputStream__cdg);
    cmnData<socketMessages::StateType >::SerializeBinary(this->RobotControlState, outputStream__cdg);
    cmnData<vctFrm3 >::SerializeBinary(this->GoalPose, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->GoalJaw, outputStream__cdg);
}
void socketCommandPSM::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<socketHeader >::DeSerializeBinary(this->Header, inputStream__cdg, localFormat, remoteFormat);
    cmnData<socketMessages::StateType >::DeSerializeBinary(this->RobotControlState, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctFrm3 >::DeSerializeBinary(this->GoalPose, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->GoalJaw, inputStream__cdg, localFormat, remoteFormat);
}
void socketCommandPSM::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<socketHeader >::SerializeText(this->Header, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<socketMessages::StateType >::SerializeText(this->RobotControlState, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::SerializeText(this->GoalPose, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->GoalJaw, outputStream__cdg, delimiter__cdg);
}
std::string socketCommandPSM::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<socketHeader >::SerializeDescription(this->Header, delimiter__cdg, prefix__cdg + "Header");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<socketMessages::StateType >::SerializeDescription(this->RobotControlState, delimiter__cdg, prefix__cdg + "RobotControlState");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctFrm3 >::SerializeDescription(this->GoalPose, delimiter__cdg, prefix__cdg + "GoalPose");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->GoalJaw, delimiter__cdg, prefix__cdg + "GoalJaw");
    return description__cdg.str();
}
void socketCommandPSM::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "socketCommandPSM");
    }
    someData__cdg = true;
    cmnData<socketHeader >::DeSerializeText(this->Header, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "socketCommandPSM");
    }
    someData__cdg = true;
    cmnData<socketMessages::StateType >::DeSerializeText(this->RobotControlState, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "socketCommandPSM");
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::DeSerializeText(this->GoalPose, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "socketCommandPSM");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->GoalJaw, inputStream__cdg, delimiter__cdg);
}
std::string socketCommandPSM::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "socketCommandPSM" << std::endl;
    description__cdg << "  Header:" << cmnData<socketHeader >::HumanReadable(this->Header);
    description__cdg << "  RobotControlState:" << cmnData<socketMessages::StateType >::HumanReadable(this->RobotControlState);
    description__cdg << "  GoalPose:" << cmnData<vctFrm3 >::HumanReadable(this->GoalPose);
    description__cdg << "  GoalJaw:" << cmnData<double >::HumanReadable(this->GoalJaw);
    return description__cdg.str();
}
bool socketCommandPSM::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<socketHeader >::ScalarNumberIsFixed(this->Header)
           && cmnData<socketMessages::StateType >::ScalarNumberIsFixed(this->RobotControlState)
           && cmnData<vctFrm3 >::ScalarNumberIsFixed(this->GoalPose)
           && cmnData<double >::ScalarNumberIsFixed(this->GoalJaw)
    ;
}
size_t socketCommandPSM::ScalarNumber(void) const {
    return 0
           + cmnData<socketHeader >::ScalarNumber(this->Header)
           + cmnData<socketMessages::StateType >::ScalarNumber(this->RobotControlState)
           + cmnData<vctFrm3 >::ScalarNumber(this->GoalPose)
           + cmnData<double >::ScalarNumber(this->GoalJaw)
    ;
}
std::string socketCommandPSM::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<socketHeader >::ScalarNumber(this->Header);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<socketHeader >::ScalarDescription(this->Header, index_cdg - baseIndex__cdg, prefix__cdg + "Header");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<socketMessages::StateType >::ScalarNumber(this->RobotControlState);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<socketMessages::StateType >::ScalarDescription(this->RobotControlState, index_cdg - baseIndex__cdg, prefix__cdg + "RobotControlState");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->GoalPose);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::ScalarDescription(this->GoalPose, index_cdg - baseIndex__cdg, prefix__cdg + "GoalPose");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->GoalJaw);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->GoalJaw, index_cdg - baseIndex__cdg, prefix__cdg + "GoalJaw");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: socketCommandPSM index out of range"));
    return "";
}
double socketCommandPSM::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<socketHeader >::ScalarNumber(this->Header);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<socketHeader >::Scalar(this->Header, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<socketMessages::StateType >::ScalarNumber(this->RobotControlState);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<socketMessages::StateType >::Scalar(this->RobotControlState, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->GoalPose);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::Scalar(this->GoalPose, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->GoalJaw);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->GoalJaw, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: socketCommandPSM index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<socketCommandPSM >::SerializeText(const socketCommandPSM & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void socketCommandPSM::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<socketHeader >::SerializeText(this->Header, jsonValue["Header"]);
    cmnDataJSON<socketMessages::StateType >::SerializeText(this->RobotControlState, jsonValue["RobotControlState"]);
    cmnDataJSON<vctFrm3 >::SerializeText(this->GoalPose, jsonValue["GoalPose"]);
    cmnDataJSON<double >::SerializeText(this->GoalJaw, jsonValue["GoalJaw"]);
}
template<>
void cmnDataJSON<socketCommandPSM >::DeSerializeText(socketCommandPSM & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void socketCommandPSM::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Header"];
    if (!field__cdg.empty()) {
        cmnDataJSON<socketHeader >::DeSerializeText(this->Header, field__cdg);
    } else {
        cmnThrow("cmnDataJson<socketHeader>::DeSerializeText: empty JSON value for: Header");
    };
    field__cdg = jsonValue["RobotControlState"];
    if (!field__cdg.empty()) {
        cmnDataJSON<socketMessages::StateType >::DeSerializeText(this->RobotControlState, field__cdg);
    };
    field__cdg = jsonValue["GoalPose"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctFrm3 >::DeSerializeText(this->GoalPose, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctFrm3>::DeSerializeText: empty JSON value for: GoalPose");
    };
    field__cdg = jsonValue["GoalJaw"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->GoalJaw, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: GoalJaw");
    };
}
#endif // CISST_HAS_JSON

