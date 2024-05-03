// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/sawIntuitiveResearchKit/components/code/mtsIntuitiveResearchKitToolTypes.cdg

#include <sawIntuitiveResearchKit/mtsIntuitiveResearchKitToolTypes.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 9 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsIntuitiveResearchKitToolTypesProxy);

mtsIntuitiveResearchKitToolTypes::mtsIntuitiveResearchKitToolTypes(void)
{}

mtsIntuitiveResearchKitToolTypes::mtsIntuitiveResearchKitToolTypes(const mtsIntuitiveResearchKitToolTypes & CMN_UNUSED(other))
{}

mtsIntuitiveResearchKitToolTypes & mtsIntuitiveResearchKitToolTypes::operator = (const mtsIntuitiveResearchKitToolTypes & CMN_UNUSED(other))
{
    return *this;
}

mtsIntuitiveResearchKitToolTypes::~mtsIntuitiveResearchKitToolTypes(void){}


void mtsIntuitiveResearchKitToolTypes::SerializeRaw(std::ostream & CMN_UNUSED(outputStream__cdg)) const
{
}


void mtsIntuitiveResearchKitToolTypes::DeSerializeRaw(std::istream & CMN_UNUSED(inputStream__cdg))
{
}


void mtsIntuitiveResearchKitToolTypes::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsIntuitiveResearchKitToolTypes::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsIntuitiveResearchKitToolTypes >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsIntuitiveResearchKitToolTypes >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsIntuitiveResearchKitToolTypes & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsIntuitiveResearchKitToolTypes & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsIntuitiveResearchKitToolTypes::Copy(const mtsIntuitiveResearchKitToolTypes & CMN_UNUSED(source__cdg)) {
}
void mtsIntuitiveResearchKitToolTypes::SerializeBinary(std::ostream & CMN_UNUSED(outputStream__cdg)) const CISST_THROW(std::runtime_error) {
}
void mtsIntuitiveResearchKitToolTypes::DeSerializeBinary(std::istream & CMN_UNUSED(inputStream__cdg),
                                            const cmnDataFormat & CMN_UNUSED(localFormat),
                                            const cmnDataFormat & CMN_UNUSED(remoteFormat)) CISST_THROW(std::runtime_error) {
}
void mtsIntuitiveResearchKitToolTypes::SerializeText(std::ostream & CMN_UNUSED(outputStream__cdg), const char CMN_UNUSED(delimiter__cdg)) const CISST_THROW(std::runtime_error) {
}
std::string mtsIntuitiveResearchKitToolTypes::SerializeDescription(const char CMN_UNUSED(delimiter__cdg), const std::string & CMN_UNUSED(userDescription__cdg)) const {
    std::stringstream description__cdg;
    return description__cdg.str();
}
void mtsIntuitiveResearchKitToolTypes::DeSerializeText(std::istream & CMN_UNUSED(inputStream__cdg),
                                          const char CMN_UNUSED(delimiter__cdg)) CISST_THROW(std::runtime_error) {
}
std::string mtsIntuitiveResearchKitToolTypes::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsIntuitiveResearchKitToolTypes" << std::endl;
    return description__cdg.str();
}
bool mtsIntuitiveResearchKitToolTypes::ScalarNumberIsFixed(void) const {
    return true
    ;
}
size_t mtsIntuitiveResearchKitToolTypes::ScalarNumber(void) const {
    return 0
    ;
}
std::string mtsIntuitiveResearchKitToolTypes::ScalarDescription(const size_t CMN_UNUSED(index_cdg), const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsIntuitiveResearchKitToolTypes index out of range"));
    return "";
}
double mtsIntuitiveResearchKitToolTypes::Scalar(const size_t CMN_UNUSED(index_cdg)) const CISST_THROW(std::out_of_range) {
    cmnThrow(std::out_of_range("cmnDataScalar: mtsIntuitiveResearchKitToolTypes index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsIntuitiveResearchKitToolTypes >::SerializeText(const mtsIntuitiveResearchKitToolTypes & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsIntuitiveResearchKitToolTypes::SerializeTextJSON(Json::Value & CMN_UNUSED(jsonValue)) const {
}
template<>
void cmnDataJSON<mtsIntuitiveResearchKitToolTypes >::DeSerializeText(mtsIntuitiveResearchKitToolTypes & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsIntuitiveResearchKitToolTypes::DeSerializeTextJSON(const Json::Value & CMN_UNUSED(jsonValue)) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_mtsIntuitiveResearchKitToolTypes_Detection(const mtsIntuitiveResearchKitToolTypes::Detection & data) {
    switch (data) {
        case mtsIntuitiveResearchKitToolTypes::AUTOMATIC:
            return "AUTOMATIC";
            break;
        case mtsIntuitiveResearchKitToolTypes::MANUAL:
            return "MANUAL";
            break;
        case mtsIntuitiveResearchKitToolTypes::FIXED:
            return "FIXED";
            break;
        default: return "undefined enum mtsIntuitiveResearchKitToolTypes::Detection";
            break;
    }
}

std::string mtsIntuitiveResearchKitToolTypes::DetectionToString(const mtsIntuitiveResearchKitToolTypes::Detection & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case mtsIntuitiveResearchKitToolTypes::AUTOMATIC:
            return "AUTOMATIC";
            break;
        case mtsIntuitiveResearchKitToolTypes::MANUAL:
            return "MANUAL";
            break;
        case mtsIntuitiveResearchKitToolTypes::FIXED:
            return "FIXED";
            break;
        default:
            break;
    }
    cmnThrow("mtsIntuitiveResearchKitToolTypes::DetectionToString called with invalid enum");
    return "";
}

mtsIntuitiveResearchKitToolTypes::Detection mtsIntuitiveResearchKitToolTypes::DetectionFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "AUTOMATIC") {
        return mtsIntuitiveResearchKitToolTypes::AUTOMATIC;
    };
    if (value == "MANUAL") {
        return mtsIntuitiveResearchKitToolTypes::MANUAL;
    };
    if (value == "FIXED") {
        return mtsIntuitiveResearchKitToolTypes::FIXED;
    };
    std::string message = "mtsIntuitiveResearchKitToolTypes::DetectionFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = DetectionVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<mtsIntuitiveResearchKitToolTypes::Detection >(0);
}

const std::vector<int> & mtsIntuitiveResearchKitToolTypes::DetectionVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(AUTOMATIC));
        vectorInt.push_back(static_cast<int>(MANUAL));
        vectorInt.push_back(static_cast<int>(FIXED));
    }
    return vectorInt;
}

const std::vector<std::string> & mtsIntuitiveResearchKitToolTypes::DetectionVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("AUTOMATIC");
        vectorString.push_back("MANUAL");
        vectorString.push_back("FIXED");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsIntuitiveResearchKitToolTypes::Detection, int);
#endif // CISST_HAS_JSON

/* source line: 27 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsIntuitiveResearchKitToolDescriptionProxy);

mtsIntuitiveResearchKitToolDescription::mtsIntuitiveResearchKitToolDescription(void):
    model()
    , names()
    , description()
    , generation()
    , file()
    , version_min(VERSION_MIN_DEFAULT)
    , version_max(VERSION_MAX_DEFAULT)
    , index(-1)
{}

mtsIntuitiveResearchKitToolDescription::mtsIntuitiveResearchKitToolDescription(const mtsIntuitiveResearchKitToolDescription & other):
    model(other.model)
    , names(other.names)
    , description(other.description)
    , generation(other.generation)
    , file(other.file)
    , version_min(other.version_min)
    , version_max(other.version_max)
    , index(other.index)
{}

mtsIntuitiveResearchKitToolDescription & mtsIntuitiveResearchKitToolDescription::operator = (const mtsIntuitiveResearchKitToolDescription & other)
{
    model = other.model;
    names = other.names;
    description = other.description;
    generation = other.generation;
    file = other.file;
    version_min = other.version_min;
    version_max = other.version_max;
    index = other.index;
    return *this;
}

mtsIntuitiveResearchKitToolDescription::~mtsIntuitiveResearchKitToolDescription(void){}


void mtsIntuitiveResearchKitToolDescription::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->model);
    cmnSerializeRaw(outputStream__cdg, this->names);
    cmnSerializeRaw(outputStream__cdg, this->description);
    cmnSerializeRaw(outputStream__cdg, this->generation);
    cmnSerializeRaw(outputStream__cdg, this->file);
    cmnSerializeRaw(outputStream__cdg, this->version_min);
    cmnSerializeRaw(outputStream__cdg, this->version_max);
    cmnSerializeRaw(outputStream__cdg, this->index);
}


void mtsIntuitiveResearchKitToolDescription::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->model);
    cmnDeSerializeRaw(inputStream__cdg, this->names);
    cmnDeSerializeRaw(inputStream__cdg, this->description);
    cmnDeSerializeRaw(inputStream__cdg, this->generation);
    cmnDeSerializeRaw(inputStream__cdg, this->file);
    cmnDeSerializeRaw(inputStream__cdg, this->version_min);
    cmnDeSerializeRaw(inputStream__cdg, this->version_max);
    cmnDeSerializeRaw(inputStream__cdg, this->index);
}


void mtsIntuitiveResearchKitToolDescription::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsIntuitiveResearchKitToolDescription::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsIntuitiveResearchKitToolDescription >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsIntuitiveResearchKitToolDescription >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 43 */
/* source line: 48 */
/* source line: 53 */
/* source line: 59 */
/* source line: 65 */
/* source line: 71 */
/* source line: 78 */
/* source line: 85 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsIntuitiveResearchKitToolDescription & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsIntuitiveResearchKitToolDescription & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsIntuitiveResearchKitToolDescription::Copy(const mtsIntuitiveResearchKitToolDescription & source__cdg) {
    cmnData<std::string >::Copy(this->model, source__cdg.model);
    cmnData<std::vector<std::string> >::Copy(this->names, source__cdg.names);
    cmnData<std::string >::Copy(this->description, source__cdg.description);
    cmnData<std::string >::Copy(this->generation, source__cdg.generation);
    cmnData<std::string >::Copy(this->file, source__cdg.file);
    cmnData<int >::Copy(this->version_min, source__cdg.version_min);
    cmnData<int >::Copy(this->version_max, source__cdg.version_max);
    cmnData<int >::Copy(this->index, source__cdg.index);
}
void mtsIntuitiveResearchKitToolDescription::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->model, outputStream__cdg);
    cmnData<std::vector<std::string> >::SerializeBinary(this->names, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->description, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->generation, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->file, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->version_min, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->version_max, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->index, outputStream__cdg);
}
void mtsIntuitiveResearchKitToolDescription::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->model, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<std::string> >::DeSerializeBinary(this->names, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->description, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->generation, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->file, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->version_min, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->version_max, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->index, inputStream__cdg, localFormat, remoteFormat);
}
void mtsIntuitiveResearchKitToolDescription::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->model, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<std::string> >::SerializeText(this->names, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->description, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->generation, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->file, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->version_min, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->version_max, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->index, outputStream__cdg, delimiter__cdg);
}
std::string mtsIntuitiveResearchKitToolDescription::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->model, delimiter__cdg, prefix__cdg + "model");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<std::string> >::SerializeDescription(this->names, delimiter__cdg, prefix__cdg + "names");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->description, delimiter__cdg, prefix__cdg + "description");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->generation, delimiter__cdg, prefix__cdg + "generation");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->file, delimiter__cdg, prefix__cdg + "file");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->version_min, delimiter__cdg, prefix__cdg + "version_min");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->version_max, delimiter__cdg, prefix__cdg + "version_max");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->index, delimiter__cdg, prefix__cdg + "index");
    return description__cdg.str();
}
void mtsIntuitiveResearchKitToolDescription::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsIntuitiveResearchKitToolDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->model, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsIntuitiveResearchKitToolDescription");
    }
    someData__cdg = true;
    cmnData<std::vector<std::string> >::DeSerializeText(this->names, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsIntuitiveResearchKitToolDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->description, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsIntuitiveResearchKitToolDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->generation, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsIntuitiveResearchKitToolDescription");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->file, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsIntuitiveResearchKitToolDescription");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->version_min, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsIntuitiveResearchKitToolDescription");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->version_max, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsIntuitiveResearchKitToolDescription");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->index, inputStream__cdg, delimiter__cdg);
}
std::string mtsIntuitiveResearchKitToolDescription::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsIntuitiveResearchKitToolDescription" << std::endl;
    description__cdg << "  model:" << cmnData<std::string >::HumanReadable(this->model);
    description__cdg << "  names:" << cmnData<std::vector<std::string> >::HumanReadable(this->names);
    description__cdg << "  description:" << cmnData<std::string >::HumanReadable(this->description);
    description__cdg << "  generation:" << cmnData<std::string >::HumanReadable(this->generation);
    description__cdg << "  file:" << cmnData<std::string >::HumanReadable(this->file);
    description__cdg << "  version_min:" << cmnData<int >::HumanReadable(this->version_min);
    description__cdg << "  version_max:" << cmnData<int >::HumanReadable(this->version_max);
    description__cdg << "  index:" << cmnData<int >::HumanReadable(this->index);
    return description__cdg.str();
}
bool mtsIntuitiveResearchKitToolDescription::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->model)
           && cmnData<std::vector<std::string> >::ScalarNumberIsFixed(this->names)
           && cmnData<std::string >::ScalarNumberIsFixed(this->description)
           && cmnData<std::string >::ScalarNumberIsFixed(this->generation)
           && cmnData<std::string >::ScalarNumberIsFixed(this->file)
           && cmnData<int >::ScalarNumberIsFixed(this->version_min)
           && cmnData<int >::ScalarNumberIsFixed(this->version_max)
           && cmnData<int >::ScalarNumberIsFixed(this->index)
    ;
}
size_t mtsIntuitiveResearchKitToolDescription::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->model)
           + cmnData<std::vector<std::string> >::ScalarNumber(this->names)
           + cmnData<std::string >::ScalarNumber(this->description)
           + cmnData<std::string >::ScalarNumber(this->generation)
           + cmnData<std::string >::ScalarNumber(this->file)
           + cmnData<int >::ScalarNumber(this->version_min)
           + cmnData<int >::ScalarNumber(this->version_max)
           + cmnData<int >::ScalarNumber(this->index)
    ;
}
std::string mtsIntuitiveResearchKitToolDescription::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->model);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->model, index_cdg - baseIndex__cdg, prefix__cdg + "model");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->names);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::ScalarDescription(this->names, index_cdg - baseIndex__cdg, prefix__cdg + "names");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->description);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->description, index_cdg - baseIndex__cdg, prefix__cdg + "description");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->generation);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->generation, index_cdg - baseIndex__cdg, prefix__cdg + "generation");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->file);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->file, index_cdg - baseIndex__cdg, prefix__cdg + "file");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->version_min);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->version_min, index_cdg - baseIndex__cdg, prefix__cdg + "version_min");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->version_max);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->version_max, index_cdg - baseIndex__cdg, prefix__cdg + "version_max");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->index);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->index, index_cdg - baseIndex__cdg, prefix__cdg + "index");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsIntuitiveResearchKitToolDescription index out of range"));
    return "";
}
double mtsIntuitiveResearchKitToolDescription::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->model);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->model, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->names);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::Scalar(this->names, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->description);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->description, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->generation);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->generation, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->file);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->file, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->version_min);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->version_min, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->version_max);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->version_max, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->index);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->index, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsIntuitiveResearchKitToolDescription index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsIntuitiveResearchKitToolDescription >::SerializeText(const mtsIntuitiveResearchKitToolDescription & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsIntuitiveResearchKitToolDescription::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->model, jsonValue["model"]);
    cmnDataJSON<std::vector<std::string> >::SerializeText(this->names, jsonValue["names"]);
    cmnDataJSON<std::string >::SerializeText(this->description, jsonValue["description"]);
    cmnDataJSON<std::string >::SerializeText(this->generation, jsonValue["generation"]);
    cmnDataJSON<std::string >::SerializeText(this->file, jsonValue["file"]);
    cmnDataJSON<int >::SerializeText(this->version_min, jsonValue["version_min"]);
    cmnDataJSON<int >::SerializeText(this->version_max, jsonValue["version_max"]);
    cmnDataJSON<int >::SerializeText(this->index, jsonValue["index"]);
}
template<>
void cmnDataJSON<mtsIntuitiveResearchKitToolDescription >::DeSerializeText(mtsIntuitiveResearchKitToolDescription & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsIntuitiveResearchKitToolDescription::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["model"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->model, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: model");
    };
    field__cdg = jsonValue["names"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<std::string> >::DeSerializeText(this->names, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<std::string>>::DeSerializeText: empty JSON value for: names");
    };
    field__cdg = jsonValue["description"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->description, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: description");
    };
    field__cdg = jsonValue["generation"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->generation, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: generation");
    };
    field__cdg = jsonValue["file"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->file, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: file");
    };
    field__cdg = jsonValue["version_min"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->version_min, field__cdg);
    };
    field__cdg = jsonValue["version_max"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->version_max, field__cdg);
    };
    field__cdg = jsonValue["index"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->index, field__cdg);
    };
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_mtsIntuitiveResearchKitToolDescription_Version(const mtsIntuitiveResearchKitToolDescription::Version & data) {
    switch (data) {
        case mtsIntuitiveResearchKitToolDescription::VERSION_MIN_DEFAULT:
            return "VERSION_MIN_DEFAULT";
            break;
        case mtsIntuitiveResearchKitToolDescription::VERSION_MAX_DEFAULT:
            return "VERSION_MAX_DEFAULT";
            break;
        default: return "undefined enum mtsIntuitiveResearchKitToolDescription::Version";
            break;
    }
}

std::string mtsIntuitiveResearchKitToolDescription::VersionToString(const mtsIntuitiveResearchKitToolDescription::Version & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case mtsIntuitiveResearchKitToolDescription::VERSION_MIN_DEFAULT:
            return "VERSION_MIN_DEFAULT";
            break;
        case mtsIntuitiveResearchKitToolDescription::VERSION_MAX_DEFAULT:
            return "VERSION_MAX_DEFAULT";
            break;
        default:
            break;
    }
    cmnThrow("mtsIntuitiveResearchKitToolDescription::VersionToString called with invalid enum");
    return "";
}

mtsIntuitiveResearchKitToolDescription::Version mtsIntuitiveResearchKitToolDescription::VersionFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "VERSION_MIN_DEFAULT") {
        return mtsIntuitiveResearchKitToolDescription::VERSION_MIN_DEFAULT;
    };
    if (value == "VERSION_MAX_DEFAULT") {
        return mtsIntuitiveResearchKitToolDescription::VERSION_MAX_DEFAULT;
    };
    std::string message = "mtsIntuitiveResearchKitToolDescription::VersionFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = VersionVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<mtsIntuitiveResearchKitToolDescription::Version >(0);
}

const std::vector<int> & mtsIntuitiveResearchKitToolDescription::VersionVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(VERSION_MIN_DEFAULT));
        vectorInt.push_back(static_cast<int>(VERSION_MAX_DEFAULT));
    }
    return vectorInt;
}

const std::vector<std::string> & mtsIntuitiveResearchKitToolDescription::VersionVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("VERSION_MIN_DEFAULT");
        vectorString.push_back("VERSION_MAX_DEFAULT");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsIntuitiveResearchKitToolDescription::Version, int);
#endif // CISST_HAS_JSON

