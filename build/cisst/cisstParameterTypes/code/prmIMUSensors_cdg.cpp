// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmIMUSensors.cdg

#include <cisstParameterTypes/prmIMUSensors.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 17 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmIMUSensorsProxy);

prmIMUSensors::prmIMUSensors(void):
    mtsGenericObject()
    , mAccel()
    , mGyro()
    , mMag()
    , mTemp()
    , mPressure()
{}

prmIMUSensors::prmIMUSensors(const prmIMUSensors & other):
    mtsGenericObject(other)
    , mAccel(other.mAccel)
    , mGyro(other.mGyro)
    , mMag(other.mMag)
    , mTemp(other.mTemp)
    , mPressure(other.mPressure)
{}

prmIMUSensors & prmIMUSensors::operator = (const prmIMUSensors & other)
{
    mtsGenericObject::operator = (other);
    mAccel = other.mAccel;
    mGyro = other.mGyro;
    mMag = other.mMag;
    mTemp = other.mTemp;
    mPressure = other.mPressure;
    return *this;
}

prmIMUSensors::~prmIMUSensors(void){}


void prmIMUSensors::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mAccel);
    cmnSerializeRaw(outputStream__cdg, this->mGyro);
    cmnSerializeRaw(outputStream__cdg, this->mMag);
    cmnSerializeRaw(outputStream__cdg, this->mTemp);
    cmnSerializeRaw(outputStream__cdg, this->mPressure);
}


void prmIMUSensors::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mAccel);
    cmnDeSerializeRaw(inputStream__cdg, this->mGyro);
    cmnDeSerializeRaw(inputStream__cdg, this->mMag);
    cmnDeSerializeRaw(inputStream__cdg, this->mTemp);
    cmnDeSerializeRaw(inputStream__cdg, this->mPressure);
}


void prmIMUSensors::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmIMUSensors::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmIMUSensors >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmIMUSensors >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 27 */

/* accessors is set to: all */
void prmIMUSensors::GetAccel(vct3 & placeHolder) const
{
    placeHolder = this->mAccel;
}

void prmIMUSensors::SetAccel(const vct3 & newValue)
{
    this->mAccel = newValue;
}


/* accessors is set to: all */
const vct3 & prmIMUSensors::Accel(void) const
{
    return this->mAccel;
}

vct3 & prmIMUSensors::Accel(void)
{
    return this->mAccel;
}

/* source line: 33 */

/* accessors is set to: all */
void prmIMUSensors::GetGyro(vct3 & placeHolder) const
{
    placeHolder = this->mGyro;
}

void prmIMUSensors::SetGyro(const vct3 & newValue)
{
    this->mGyro = newValue;
}


/* accessors is set to: all */
const vct3 & prmIMUSensors::Gyro(void) const
{
    return this->mGyro;
}

vct3 & prmIMUSensors::Gyro(void)
{
    return this->mGyro;
}

/* source line: 39 */

/* accessors is set to: all */
void prmIMUSensors::GetMag(vct3 & placeHolder) const
{
    placeHolder = this->mMag;
}

void prmIMUSensors::SetMag(const vct3 & newValue)
{
    this->mMag = newValue;
}


/* accessors is set to: all */
const vct3 & prmIMUSensors::Mag(void) const
{
    return this->mMag;
}

vct3 & prmIMUSensors::Mag(void)
{
    return this->mMag;
}

/* source line: 45 */

/* accessors is set to: all */
void prmIMUSensors::GetTemp(double & placeHolder) const
{
    placeHolder = this->mTemp;
}

void prmIMUSensors::SetTemp(const double & newValue)
{
    this->mTemp = newValue;
}


/* accessors is set to: all */
const double & prmIMUSensors::Temp(void) const
{
    return this->mTemp;
}

double & prmIMUSensors::Temp(void)
{
    return this->mTemp;
}

/* source line: 51 */

/* accessors is set to: all */
void prmIMUSensors::GetPressure(double & placeHolder) const
{
    placeHolder = this->mPressure;
}

void prmIMUSensors::SetPressure(const double & newValue)
{
    this->mPressure = newValue;
}


/* accessors is set to: all */
const double & prmIMUSensors::Pressure(void) const
{
    return this->mPressure;
}

double & prmIMUSensors::Pressure(void)
{
    return this->mPressure;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmIMUSensors & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmIMUSensors & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmIMUSensors::Copy(const prmIMUSensors & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<vct3 >::Copy(this->mAccel, source__cdg.mAccel);
    cmnData<vct3 >::Copy(this->mGyro, source__cdg.mGyro);
    cmnData<vct3 >::Copy(this->mMag, source__cdg.mMag);
    cmnData<double >::Copy(this->mTemp, source__cdg.mTemp);
    cmnData<double >::Copy(this->mPressure, source__cdg.mPressure);
}
void prmIMUSensors::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mAccel, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mGyro, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mMag, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->mTemp, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->mPressure, outputStream__cdg);
}
void prmIMUSensors::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mAccel, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mGyro, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mMag, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->mTemp, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->mPressure, inputStream__cdg, localFormat, remoteFormat);
}
void prmIMUSensors::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<vct3 >::SerializeText(this->mAccel, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mGyro, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mMag, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->mTemp, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->mPressure, outputStream__cdg, delimiter__cdg);
}
std::string prmIMUSensors::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mAccel, delimiter__cdg, prefix__cdg + "Accel");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mGyro, delimiter__cdg, prefix__cdg + "Gyro");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mMag, delimiter__cdg, prefix__cdg + "Mag");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->mTemp, delimiter__cdg, prefix__cdg + "Temp");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->mPressure, delimiter__cdg, prefix__cdg + "Pressure");
    return description__cdg.str();
}
void prmIMUSensors::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmIMUSensors");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmIMUSensors");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mAccel, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmIMUSensors");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mGyro, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmIMUSensors");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mMag, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmIMUSensors");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->mTemp, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmIMUSensors");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->mPressure, inputStream__cdg, delimiter__cdg);
}
std::string prmIMUSensors::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmIMUSensors" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  Accel:" << cmnData<vct3 >::HumanReadable(this->mAccel);
    description__cdg << "  Gyro:" << cmnData<vct3 >::HumanReadable(this->mGyro);
    description__cdg << "  Mag:" << cmnData<vct3 >::HumanReadable(this->mMag);
    description__cdg << "  Temp:" << cmnData<double >::HumanReadable(this->mTemp);
    description__cdg << "  Pressure:" << cmnData<double >::HumanReadable(this->mPressure);
    return description__cdg.str();
}
bool prmIMUSensors::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mAccel)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mGyro)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mMag)
           && cmnData<double >::ScalarNumberIsFixed(this->mTemp)
           && cmnData<double >::ScalarNumberIsFixed(this->mPressure)
    ;
}
size_t prmIMUSensors::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vct3 >::ScalarNumber(this->mAccel)
           + cmnData<vct3 >::ScalarNumber(this->mGyro)
           + cmnData<vct3 >::ScalarNumber(this->mMag)
           + cmnData<double >::ScalarNumber(this->mTemp)
           + cmnData<double >::ScalarNumber(this->mPressure)
    ;
}
std::string prmIMUSensors::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mAccel);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mAccel, index_cdg - baseIndex__cdg, prefix__cdg + "Accel");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mGyro);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mGyro, index_cdg - baseIndex__cdg, prefix__cdg + "Gyro");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mMag);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mMag, index_cdg - baseIndex__cdg, prefix__cdg + "Mag");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->mTemp);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->mTemp, index_cdg - baseIndex__cdg, prefix__cdg + "Temp");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->mPressure);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->mPressure, index_cdg - baseIndex__cdg, prefix__cdg + "Pressure");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmIMUSensors index out of range"));
    return "";
}
double prmIMUSensors::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mAccel);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mAccel, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mGyro);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mGyro, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mMag);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mMag, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->mTemp);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->mTemp, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->mPressure);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->mPressure, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmIMUSensors index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmIMUSensors >::SerializeText(const prmIMUSensors & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmIMUSensors::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vct3 >::SerializeText(this->mAccel, jsonValue["Accel"]);
    cmnDataJSON<vct3 >::SerializeText(this->mGyro, jsonValue["Gyro"]);
    cmnDataJSON<vct3 >::SerializeText(this->mMag, jsonValue["Mag"]);
    cmnDataJSON<double >::SerializeText(this->mTemp, jsonValue["Temp"]);
    cmnDataJSON<double >::SerializeText(this->mPressure, jsonValue["Pressure"]);
}
template<>
void cmnDataJSON<prmIMUSensors >::DeSerializeText(prmIMUSensors & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmIMUSensors::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["Accel"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mAccel, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mAccel");
    };
    field__cdg = jsonValue["Gyro"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mGyro, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mGyro");
    };
    field__cdg = jsonValue["Mag"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mMag, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mMag");
    };
    field__cdg = jsonValue["Temp"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->mTemp, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: mTemp");
    };
    field__cdg = jsonValue["Pressure"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->mPressure, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: mPressure");
    };
}
#endif // CISST_HAS_JSON


