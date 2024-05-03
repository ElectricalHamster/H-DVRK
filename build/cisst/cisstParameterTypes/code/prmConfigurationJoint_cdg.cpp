// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmConfigurationJoint.cdg

#include <cisstParameterTypes/prmConfigurationJoint.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 12 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmConfigurationJointProxy);

prmConfigurationJoint::prmConfigurationJoint(void):
    mtsGenericObject()
    , mName()
    , mType()
    , mPositionMin()
    , mPositionMax()
    , mVelocityMin()
    , mVelocityMax()
    , mAccelerationMin()
    , mAccelerationMax()
    , mEffortMin()
    , mEffortMax()
{}

prmConfigurationJoint::prmConfigurationJoint(const prmConfigurationJoint & other):
    mtsGenericObject(other)
    , mName(other.mName)
    , mType(other.mType)
    , mPositionMin(other.mPositionMin)
    , mPositionMax(other.mPositionMax)
    , mVelocityMin(other.mVelocityMin)
    , mVelocityMax(other.mVelocityMax)
    , mAccelerationMin(other.mAccelerationMin)
    , mAccelerationMax(other.mAccelerationMax)
    , mEffortMin(other.mEffortMin)
    , mEffortMax(other.mEffortMax)
{}

prmConfigurationJoint & prmConfigurationJoint::operator = (const prmConfigurationJoint & other)
{
    mtsGenericObject::operator = (other);
    mName = other.mName;
    mType = other.mType;
    mPositionMin = other.mPositionMin;
    mPositionMax = other.mPositionMax;
    mVelocityMin = other.mVelocityMin;
    mVelocityMax = other.mVelocityMax;
    mAccelerationMin = other.mAccelerationMin;
    mAccelerationMax = other.mAccelerationMax;
    mEffortMin = other.mEffortMin;
    mEffortMax = other.mEffortMax;
    return *this;
}

prmConfigurationJoint::~prmConfigurationJoint(void){}


void prmConfigurationJoint::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mName);
    cmnSerializeRaw(outputStream__cdg, this->mType);
    cmnSerializeRaw(outputStream__cdg, this->mPositionMin);
    cmnSerializeRaw(outputStream__cdg, this->mPositionMax);
    cmnSerializeRaw(outputStream__cdg, this->mVelocityMin);
    cmnSerializeRaw(outputStream__cdg, this->mVelocityMax);
    cmnSerializeRaw(outputStream__cdg, this->mAccelerationMin);
    cmnSerializeRaw(outputStream__cdg, this->mAccelerationMax);
    cmnSerializeRaw(outputStream__cdg, this->mEffortMin);
    cmnSerializeRaw(outputStream__cdg, this->mEffortMax);
}


void prmConfigurationJoint::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mName);
    cmnDeSerializeRaw(inputStream__cdg, this->mType);
    cmnDeSerializeRaw(inputStream__cdg, this->mPositionMin);
    cmnDeSerializeRaw(inputStream__cdg, this->mPositionMax);
    cmnDeSerializeRaw(inputStream__cdg, this->mVelocityMin);
    cmnDeSerializeRaw(inputStream__cdg, this->mVelocityMax);
    cmnDeSerializeRaw(inputStream__cdg, this->mAccelerationMin);
    cmnDeSerializeRaw(inputStream__cdg, this->mAccelerationMax);
    cmnDeSerializeRaw(inputStream__cdg, this->mEffortMin);
    cmnDeSerializeRaw(inputStream__cdg, this->mEffortMax);
}


void prmConfigurationJoint::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmConfigurationJoint::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmConfigurationJoint >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmConfigurationJoint >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 22 */

/* accessors is set to: all */
void prmConfigurationJoint::GetName(vctDynamicVector<std::string> & placeHolder) const
{
    placeHolder = this->mName;
}

void prmConfigurationJoint::SetName(const vctDynamicVector<std::string> & newValue)
{
    this->mName = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<std::string> & prmConfigurationJoint::Name(void) const
{
    return this->mName;
}

vctDynamicVector<std::string> & prmConfigurationJoint::Name(void)
{
    return this->mName;
}

/* source line: 27 */

/* accessors is set to: all */
void prmConfigurationJoint::GetType(vctDynamicVector<prmJointType> & placeHolder) const
{
    placeHolder = this->mType;
}

void prmConfigurationJoint::SetType(const vctDynamicVector<prmJointType> & newValue)
{
    this->mType = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<prmJointType> & prmConfigurationJoint::Type(void) const
{
    return this->mType;
}

vctDynamicVector<prmJointType> & prmConfigurationJoint::Type(void)
{
    return this->mType;
}

/* source line: 32 */

/* accessors is set to: all */
void prmConfigurationJoint::GetPositionMin(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mPositionMin;
}

void prmConfigurationJoint::SetPositionMin(const vctDynamicVector<double> & newValue)
{
    this->mPositionMin = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmConfigurationJoint::PositionMin(void) const
{
    return this->mPositionMin;
}

vctDynamicVector<double> & prmConfigurationJoint::PositionMin(void)
{
    return this->mPositionMin;
}

/* source line: 36 */

/* accessors is set to: all */
void prmConfigurationJoint::GetPositionMax(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mPositionMax;
}

void prmConfigurationJoint::SetPositionMax(const vctDynamicVector<double> & newValue)
{
    this->mPositionMax = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmConfigurationJoint::PositionMax(void) const
{
    return this->mPositionMax;
}

vctDynamicVector<double> & prmConfigurationJoint::PositionMax(void)
{
    return this->mPositionMax;
}

/* source line: 41 */

/* accessors is set to: all */
void prmConfigurationJoint::GetVelocityMin(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mVelocityMin;
}

void prmConfigurationJoint::SetVelocityMin(const vctDynamicVector<double> & newValue)
{
    this->mVelocityMin = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmConfigurationJoint::VelocityMin(void) const
{
    return this->mVelocityMin;
}

vctDynamicVector<double> & prmConfigurationJoint::VelocityMin(void)
{
    return this->mVelocityMin;
}

/* source line: 45 */

/* accessors is set to: all */
void prmConfigurationJoint::GetVelocityMax(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mVelocityMax;
}

void prmConfigurationJoint::SetVelocityMax(const vctDynamicVector<double> & newValue)
{
    this->mVelocityMax = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmConfigurationJoint::VelocityMax(void) const
{
    return this->mVelocityMax;
}

vctDynamicVector<double> & prmConfigurationJoint::VelocityMax(void)
{
    return this->mVelocityMax;
}

/* source line: 50 */

/* accessors is set to: all */
void prmConfigurationJoint::GetAccelerationMin(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mAccelerationMin;
}

void prmConfigurationJoint::SetAccelerationMin(const vctDynamicVector<double> & newValue)
{
    this->mAccelerationMin = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmConfigurationJoint::AccelerationMin(void) const
{
    return this->mAccelerationMin;
}

vctDynamicVector<double> & prmConfigurationJoint::AccelerationMin(void)
{
    return this->mAccelerationMin;
}

/* source line: 54 */

/* accessors is set to: all */
void prmConfigurationJoint::GetAccelerationMax(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mAccelerationMax;
}

void prmConfigurationJoint::SetAccelerationMax(const vctDynamicVector<double> & newValue)
{
    this->mAccelerationMax = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmConfigurationJoint::AccelerationMax(void) const
{
    return this->mAccelerationMax;
}

vctDynamicVector<double> & prmConfigurationJoint::AccelerationMax(void)
{
    return this->mAccelerationMax;
}

/* source line: 59 */

/* accessors is set to: all */
void prmConfigurationJoint::GetEffortMin(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mEffortMin;
}

void prmConfigurationJoint::SetEffortMin(const vctDynamicVector<double> & newValue)
{
    this->mEffortMin = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmConfigurationJoint::EffortMin(void) const
{
    return this->mEffortMin;
}

vctDynamicVector<double> & prmConfigurationJoint::EffortMin(void)
{
    return this->mEffortMin;
}

/* source line: 63 */

/* accessors is set to: all */
void prmConfigurationJoint::GetEffortMax(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mEffortMax;
}

void prmConfigurationJoint::SetEffortMax(const vctDynamicVector<double> & newValue)
{
    this->mEffortMax = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmConfigurationJoint::EffortMax(void) const
{
    return this->mEffortMax;
}

vctDynamicVector<double> & prmConfigurationJoint::EffortMax(void)
{
    return this->mEffortMax;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmConfigurationJoint & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmConfigurationJoint & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmConfigurationJoint::Copy(const prmConfigurationJoint & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<vctDynamicVector<std::string> >::Copy(this->mName, source__cdg.mName);
    cmnData<vctDynamicVector<prmJointType> >::Copy(this->mType, source__cdg.mType);
    cmnData<vctDynamicVector<double> >::Copy(this->mPositionMin, source__cdg.mPositionMin);
    cmnData<vctDynamicVector<double> >::Copy(this->mPositionMax, source__cdg.mPositionMax);
    cmnData<vctDynamicVector<double> >::Copy(this->mVelocityMin, source__cdg.mVelocityMin);
    cmnData<vctDynamicVector<double> >::Copy(this->mVelocityMax, source__cdg.mVelocityMax);
    cmnData<vctDynamicVector<double> >::Copy(this->mAccelerationMin, source__cdg.mAccelerationMin);
    cmnData<vctDynamicVector<double> >::Copy(this->mAccelerationMax, source__cdg.mAccelerationMax);
    cmnData<vctDynamicVector<double> >::Copy(this->mEffortMin, source__cdg.mEffortMin);
    cmnData<vctDynamicVector<double> >::Copy(this->mEffortMax, source__cdg.mEffortMax);
}
void prmConfigurationJoint::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctDynamicVector<std::string> >::SerializeBinary(this->mName, outputStream__cdg);
    cmnData<vctDynamicVector<prmJointType> >::SerializeBinary(this->mType, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mPositionMin, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mPositionMax, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mVelocityMin, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mVelocityMax, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mAccelerationMin, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mAccelerationMax, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mEffortMin, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mEffortMax, outputStream__cdg);
}
void prmConfigurationJoint::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<std::string> >::DeSerializeBinary(this->mName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<prmJointType> >::DeSerializeBinary(this->mType, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mPositionMin, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mPositionMax, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mVelocityMin, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mVelocityMax, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mAccelerationMin, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mAccelerationMax, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mEffortMin, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mEffortMax, inputStream__cdg, localFormat, remoteFormat);
}
void prmConfigurationJoint::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<vctDynamicVector<prmJointType> >::SerializeText(this->mType, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mPositionMin, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mPositionMax, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mVelocityMin, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mVelocityMax, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mAccelerationMin, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mAccelerationMax, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mEffortMin, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mEffortMax, outputStream__cdg, delimiter__cdg);
}
std::string prmConfigurationJoint::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vctDynamicVector<prmJointType> >::SerializeDescription(this->mType, delimiter__cdg, prefix__cdg + "Type");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mPositionMin, delimiter__cdg, prefix__cdg + "PositionMin");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mPositionMax, delimiter__cdg, prefix__cdg + "PositionMax");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mVelocityMin, delimiter__cdg, prefix__cdg + "VelocityMin");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mVelocityMax, delimiter__cdg, prefix__cdg + "VelocityMax");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mAccelerationMin, delimiter__cdg, prefix__cdg + "AccelerationMin");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mAccelerationMax, delimiter__cdg, prefix__cdg + "AccelerationMax");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mEffortMin, delimiter__cdg, prefix__cdg + "EffortMin");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mEffortMax, delimiter__cdg, prefix__cdg + "EffortMax");
    return description__cdg.str();
}
void prmConfigurationJoint::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmConfigurationJoint");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmConfigurationJoint");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<std::string> >::DeSerializeText(this->mName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmConfigurationJoint");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<prmJointType> >::DeSerializeText(this->mType, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmConfigurationJoint");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mPositionMin, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmConfigurationJoint");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mPositionMax, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmConfigurationJoint");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mVelocityMin, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmConfigurationJoint");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mVelocityMax, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmConfigurationJoint");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mAccelerationMin, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmConfigurationJoint");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mAccelerationMax, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmConfigurationJoint");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mEffortMin, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmConfigurationJoint");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mEffortMax, inputStream__cdg, delimiter__cdg);
}
std::string prmConfigurationJoint::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmConfigurationJoint" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  Name:" << cmnData<vctDynamicVector<std::string> >::HumanReadable(this->mName);
    description__cdg << "  Type:" << cmnData<vctDynamicVector<prmJointType> >::HumanReadable(this->mType);
    description__cdg << "  PositionMin:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mPositionMin);
    description__cdg << "  PositionMax:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mPositionMax);
    description__cdg << "  VelocityMin:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mVelocityMin);
    description__cdg << "  VelocityMax:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mVelocityMax);
    description__cdg << "  AccelerationMin:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mAccelerationMin);
    description__cdg << "  AccelerationMax:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mAccelerationMax);
    description__cdg << "  EffortMin:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mEffortMin);
    description__cdg << "  EffortMax:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mEffortMax);
    return description__cdg.str();
}
bool prmConfigurationJoint::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctDynamicVector<std::string> >::ScalarNumberIsFixed(this->mName)
           && cmnData<vctDynamicVector<prmJointType> >::ScalarNumberIsFixed(this->mType)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mPositionMin)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mPositionMax)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mVelocityMin)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mVelocityMax)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mAccelerationMin)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mAccelerationMax)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mEffortMin)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mEffortMax)
    ;
}
size_t prmConfigurationJoint::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctDynamicVector<std::string> >::ScalarNumber(this->mName)
           + cmnData<vctDynamicVector<prmJointType> >::ScalarNumber(this->mType)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPositionMin)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPositionMax)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mVelocityMin)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mVelocityMax)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mAccelerationMin)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mAccelerationMax)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mEffortMin)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mEffortMax)
    ;
}
std::string prmConfigurationJoint::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
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
    currentMaxIndex__cdg += cmnData<vctDynamicVector<prmJointType> >::ScalarNumber(this->mType);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<prmJointType> >::ScalarDescription(this->mType, index_cdg - baseIndex__cdg, prefix__cdg + "Type");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPositionMin);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mPositionMin, index_cdg - baseIndex__cdg, prefix__cdg + "PositionMin");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPositionMax);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mPositionMax, index_cdg - baseIndex__cdg, prefix__cdg + "PositionMax");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mVelocityMin);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mVelocityMin, index_cdg - baseIndex__cdg, prefix__cdg + "VelocityMin");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mVelocityMax);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mVelocityMax, index_cdg - baseIndex__cdg, prefix__cdg + "VelocityMax");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mAccelerationMin);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mAccelerationMin, index_cdg - baseIndex__cdg, prefix__cdg + "AccelerationMin");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mAccelerationMax);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mAccelerationMax, index_cdg - baseIndex__cdg, prefix__cdg + "AccelerationMax");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mEffortMin);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mEffortMin, index_cdg - baseIndex__cdg, prefix__cdg + "EffortMin");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mEffortMax);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mEffortMax, index_cdg - baseIndex__cdg, prefix__cdg + "EffortMax");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmConfigurationJoint index out of range"));
    return "";
}
double prmConfigurationJoint::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
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
    currentMaxIndex__cdg += cmnData<vctDynamicVector<prmJointType> >::ScalarNumber(this->mType);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<prmJointType> >::Scalar(this->mType, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPositionMin);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mPositionMin, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mPositionMax);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mPositionMax, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mVelocityMin);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mVelocityMin, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mVelocityMax);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mVelocityMax, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mAccelerationMin);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mAccelerationMin, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mAccelerationMax);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mAccelerationMax, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mEffortMin);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mEffortMin, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mEffortMax);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mEffortMax, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmConfigurationJoint index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmConfigurationJoint >::SerializeText(const prmConfigurationJoint & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmConfigurationJoint::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctDynamicVector<std::string> >::SerializeText(this->mName, jsonValue["Name"]);
    cmnDataJSON<vctDynamicVector<prmJointType> >::SerializeText(this->mType, jsonValue["Type"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mPositionMin, jsonValue["PositionMin"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mPositionMax, jsonValue["PositionMax"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mVelocityMin, jsonValue["VelocityMin"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mVelocityMax, jsonValue["VelocityMax"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mAccelerationMin, jsonValue["AccelerationMin"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mAccelerationMax, jsonValue["AccelerationMax"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mEffortMin, jsonValue["EffortMin"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mEffortMax, jsonValue["EffortMax"]);
}
template<>
void cmnDataJSON<prmConfigurationJoint >::DeSerializeText(prmConfigurationJoint & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmConfigurationJoint::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<std::string> >::DeSerializeText(this->mName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<std::string>>::DeSerializeText: empty JSON value for: mName");
    };
    field__cdg = jsonValue["Type"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<prmJointType> >::DeSerializeText(this->mType, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<prmJointType>>::DeSerializeText: empty JSON value for: mType");
    };
    field__cdg = jsonValue["PositionMin"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mPositionMin, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mPositionMin");
    };
    field__cdg = jsonValue["PositionMax"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mPositionMax, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mPositionMax");
    };
    field__cdg = jsonValue["VelocityMin"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mVelocityMin, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mVelocityMin");
    };
    field__cdg = jsonValue["VelocityMax"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mVelocityMax, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mVelocityMax");
    };
    field__cdg = jsonValue["AccelerationMin"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mAccelerationMin, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mAccelerationMin");
    };
    field__cdg = jsonValue["AccelerationMax"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mAccelerationMax, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mAccelerationMax");
    };
    field__cdg = jsonValue["EffortMin"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mEffortMin, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mEffortMin");
    };
    field__cdg = jsonValue["EffortMax"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mEffortMax, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mEffortMax");
    };
}
#endif // CISST_HAS_JSON


