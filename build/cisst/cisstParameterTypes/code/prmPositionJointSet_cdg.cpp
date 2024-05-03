// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmPositionJointSet.cdg

#include <cisstParameterTypes/prmPositionJointSet.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 12 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmPositionJointSetProxy);

prmPositionJointSet::prmPositionJointSet(void):
    mtsGenericObject()
    , mGoal()
    , mVelocity()
    , mAcceleration()
    , mTimeLimit(0.0)
    , mIsCoordinated(true)
    , mDeceleration()
    , mMask()
    , mBlockingFlag()
    , mBlendingFactor()
    , mIsPreemptable()
    , mIsGoalOnly()
{}

prmPositionJointSet::prmPositionJointSet(const prmPositionJointSet & other):
    mtsGenericObject(other)
    , mGoal(other.mGoal)
    , mVelocity(other.mVelocity)
    , mAcceleration(other.mAcceleration)
    , mTimeLimit(other.mTimeLimit)
    , mIsCoordinated(other.mIsCoordinated)
    , mDeceleration(other.mDeceleration)
    , mMask(other.mMask)
    , mBlockingFlag(other.mBlockingFlag)
    , mBlendingFactor(other.mBlendingFactor)
    , mIsPreemptable(other.mIsPreemptable)
    , mIsGoalOnly(other.mIsGoalOnly)
{}

prmPositionJointSet & prmPositionJointSet::operator = (const prmPositionJointSet & other)
{
    mtsGenericObject::operator = (other);
    mGoal = other.mGoal;
    mVelocity = other.mVelocity;
    mAcceleration = other.mAcceleration;
    mTimeLimit = other.mTimeLimit;
    mIsCoordinated = other.mIsCoordinated;
    mDeceleration = other.mDeceleration;
    mMask = other.mMask;
    mBlockingFlag = other.mBlockingFlag;
    mBlendingFactor = other.mBlendingFactor;
    mIsPreemptable = other.mIsPreemptable;
    mIsGoalOnly = other.mIsGoalOnly;
    return *this;
}

prmPositionJointSet::~prmPositionJointSet(void){}


void prmPositionJointSet::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mGoal);
    cmnSerializeRaw(outputStream__cdg, this->mVelocity);
    cmnSerializeRaw(outputStream__cdg, this->mAcceleration);
    cmnSerializeRaw(outputStream__cdg, this->mTimeLimit);
    cmnSerializeRaw(outputStream__cdg, this->mIsCoordinated);
    cmnSerializeRaw(outputStream__cdg, this->mDeceleration);
    cmnSerializeRaw(outputStream__cdg, this->mMask);
    cmnSerializeRaw(outputStream__cdg, this->mBlockingFlag);
    cmnSerializeRaw(outputStream__cdg, this->mBlendingFactor);
    cmnSerializeRaw(outputStream__cdg, this->mIsPreemptable);
    cmnSerializeRaw(outputStream__cdg, this->mIsGoalOnly);
}


void prmPositionJointSet::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mGoal);
    cmnDeSerializeRaw(inputStream__cdg, this->mVelocity);
    cmnDeSerializeRaw(inputStream__cdg, this->mAcceleration);
    cmnDeSerializeRaw(inputStream__cdg, this->mTimeLimit);
    cmnDeSerializeRaw(inputStream__cdg, this->mIsCoordinated);
    cmnDeSerializeRaw(inputStream__cdg, this->mDeceleration);
    cmnDeSerializeRaw(inputStream__cdg, this->mMask);
    cmnDeSerializeRaw(inputStream__cdg, this->mBlockingFlag);
    cmnDeSerializeRaw(inputStream__cdg, this->mBlendingFactor);
    cmnDeSerializeRaw(inputStream__cdg, this->mIsPreemptable);
    cmnDeSerializeRaw(inputStream__cdg, this->mIsGoalOnly);
}


void prmPositionJointSet::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmPositionJointSet::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmPositionJointSet >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmPositionJointSet >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 22 */

/* accessors is set to: all */
void prmPositionJointSet::GetGoal(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mGoal;
}

void prmPositionJointSet::SetGoal(const vctDynamicVector<double> & newValue)
{
    this->mGoal = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmPositionJointSet::Goal(void) const
{
    return this->mGoal;
}

vctDynamicVector<double> & prmPositionJointSet::Goal(void)
{
    return this->mGoal;
}

/* source line: 28 */

/* accessors is set to: all */
void prmPositionJointSet::GetVelocity(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mVelocity;
}

void prmPositionJointSet::SetVelocity(const vctDynamicVector<double> & newValue)
{
    this->mVelocity = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmPositionJointSet::Velocity(void) const
{
    return this->mVelocity;
}

vctDynamicVector<double> & prmPositionJointSet::Velocity(void)
{
    return this->mVelocity;
}

/* source line: 34 */

/* accessors is set to: all */
void prmPositionJointSet::GetAcceleration(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mAcceleration;
}

void prmPositionJointSet::SetAcceleration(const vctDynamicVector<double> & newValue)
{
    this->mAcceleration = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmPositionJointSet::Acceleration(void) const
{
    return this->mAcceleration;
}

vctDynamicVector<double> & prmPositionJointSet::Acceleration(void)
{
    return this->mAcceleration;
}

/* source line: 40 */

/* accessors is set to: all */
void prmPositionJointSet::GetTimeLimit(double & placeHolder) const
{
    placeHolder = this->mTimeLimit;
}

void prmPositionJointSet::SetTimeLimit(const double & newValue)
{
    this->mTimeLimit = newValue;
}


/* accessors is set to: all */
const double & prmPositionJointSet::TimeLimit(void) const
{
    return this->mTimeLimit;
}

double & prmPositionJointSet::TimeLimit(void)
{
    return this->mTimeLimit;
}

/* source line: 47 */

/* accessors is set to: all */
void prmPositionJointSet::GetIsCoordinated(bool & placeHolder) const
{
    placeHolder = this->mIsCoordinated;
}

void prmPositionJointSet::SetIsCoordinated(const bool & newValue)
{
    this->mIsCoordinated = newValue;
}


/* accessors is set to: all */
const bool & prmPositionJointSet::IsCoordinated(void) const
{
    return this->mIsCoordinated;
}

bool & prmPositionJointSet::IsCoordinated(void)
{
    return this->mIsCoordinated;
}

/* source line: 55 */

/* accessors is set to: all */
void prmPositionJointSet::GetDeceleration(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mDeceleration;
}

void prmPositionJointSet::SetDeceleration(const vctDynamicVector<double> & newValue)
{
    this->mDeceleration = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmPositionJointSet::Deceleration(void) const
{
    return this->mDeceleration;
}

vctDynamicVector<double> & prmPositionJointSet::Deceleration(void)
{
    return this->mDeceleration;
}

/* source line: 60 */

/* accessors is set to: all */
void prmPositionJointSet::GetMask(vctDynamicVector<bool> & placeHolder) const
{
    placeHolder = this->mMask;
}

void prmPositionJointSet::SetMask(const vctDynamicVector<bool> & newValue)
{
    this->mMask = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<bool> & prmPositionJointSet::Mask(void) const
{
    return this->mMask;
}

vctDynamicVector<bool> & prmPositionJointSet::Mask(void)
{
    return this->mMask;
}

/* source line: 66 */

/* accessors is set to: all */
void prmPositionJointSet::GetBlockingFlag(prmBlocking & placeHolder) const
{
    placeHolder = this->mBlockingFlag;
}

void prmPositionJointSet::SetBlockingFlag(const prmBlocking & newValue)
{
    this->mBlockingFlag = newValue;
}


/* accessors is set to: all */
const prmBlocking & prmPositionJointSet::BlockingFlag(void) const
{
    return this->mBlockingFlag;
}

prmBlocking & prmPositionJointSet::BlockingFlag(void)
{
    return this->mBlockingFlag;
}

/* source line: 71 */

/* accessors is set to: all */
void prmPositionJointSet::GetBlendingFactor(bool & placeHolder) const
{
    placeHolder = this->mBlendingFactor;
}

void prmPositionJointSet::SetBlendingFactor(const bool & newValue)
{
    this->mBlendingFactor = newValue;
}


/* accessors is set to: all */
const bool & prmPositionJointSet::BlendingFactor(void) const
{
    return this->mBlendingFactor;
}

bool & prmPositionJointSet::BlendingFactor(void)
{
    return this->mBlendingFactor;
}

/* source line: 76 */

/* accessors is set to: all */
void prmPositionJointSet::GetIsPreemptable(bool & placeHolder) const
{
    placeHolder = this->mIsPreemptable;
}

void prmPositionJointSet::SetIsPreemptable(const bool & newValue)
{
    this->mIsPreemptable = newValue;
}


/* accessors is set to: all */
const bool & prmPositionJointSet::IsPreemptable(void) const
{
    return this->mIsPreemptable;
}

bool & prmPositionJointSet::IsPreemptable(void)
{
    return this->mIsPreemptable;
}

/* source line: 81 */

/* accessors is set to: all */
void prmPositionJointSet::GetIsGoalOnly(bool & placeHolder) const
{
    placeHolder = this->mIsGoalOnly;
}

void prmPositionJointSet::SetIsGoalOnly(const bool & newValue)
{
    this->mIsGoalOnly = newValue;
}


/* accessors is set to: all */
const bool & prmPositionJointSet::IsGoalOnly(void) const
{
    return this->mIsGoalOnly;
}

bool & prmPositionJointSet::IsGoalOnly(void)
{
    return this->mIsGoalOnly;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmPositionJointSet & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmPositionJointSet & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmPositionJointSet::Copy(const prmPositionJointSet & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<vctDynamicVector<double> >::Copy(this->mGoal, source__cdg.mGoal);
    cmnData<vctDynamicVector<double> >::Copy(this->mVelocity, source__cdg.mVelocity);
    cmnData<vctDynamicVector<double> >::Copy(this->mAcceleration, source__cdg.mAcceleration);
    cmnData<double >::Copy(this->mTimeLimit, source__cdg.mTimeLimit);
    cmnData<bool >::Copy(this->mIsCoordinated, source__cdg.mIsCoordinated);
    cmnData<vctDynamicVector<double> >::Copy(this->mDeceleration, source__cdg.mDeceleration);
    cmnData<vctDynamicVector<bool> >::Copy(this->mMask, source__cdg.mMask);
    cmnData<prmBlocking >::Copy(this->mBlockingFlag, source__cdg.mBlockingFlag);
    cmnData<bool >::Copy(this->mBlendingFactor, source__cdg.mBlendingFactor);
    cmnData<bool >::Copy(this->mIsPreemptable, source__cdg.mIsPreemptable);
    cmnData<bool >::Copy(this->mIsGoalOnly, source__cdg.mIsGoalOnly);
}
void prmPositionJointSet::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mGoal, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mVelocity, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mAcceleration, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->mTimeLimit, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->mIsCoordinated, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mDeceleration, outputStream__cdg);
    cmnData<vctDynamicVector<bool> >::SerializeBinary(this->mMask, outputStream__cdg);
    cmnData<prmBlocking >::SerializeBinary(this->mBlockingFlag, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->mBlendingFactor, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->mIsPreemptable, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->mIsGoalOnly, outputStream__cdg);
}
void prmPositionJointSet::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mGoal, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mVelocity, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mAcceleration, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->mTimeLimit, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->mIsCoordinated, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mDeceleration, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<bool> >::DeSerializeBinary(this->mMask, inputStream__cdg, localFormat, remoteFormat);
    cmnData<prmBlocking >::DeSerializeBinary(this->mBlockingFlag, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->mBlendingFactor, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->mIsPreemptable, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->mIsGoalOnly, inputStream__cdg, localFormat, remoteFormat);
}
void prmPositionJointSet::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<vctDynamicVector<double> >::SerializeText(this->mGoal, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mVelocity, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mAcceleration, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->mTimeLimit, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->mIsCoordinated, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mDeceleration, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<bool> >::SerializeText(this->mMask, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<prmBlocking >::SerializeText(this->mBlockingFlag, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->mBlendingFactor, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->mIsPreemptable, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->mIsGoalOnly, outputStream__cdg, delimiter__cdg);
}
std::string prmPositionJointSet::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mGoal, delimiter__cdg, prefix__cdg + "Goal");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mVelocity, delimiter__cdg, prefix__cdg + "Velocity");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mAcceleration, delimiter__cdg, prefix__cdg + "Acceleration");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->mTimeLimit, delimiter__cdg, prefix__cdg + "TimeLimit");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->mIsCoordinated, delimiter__cdg, prefix__cdg + "IsCoordinated");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mDeceleration, delimiter__cdg, prefix__cdg + "Deceleration");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<bool> >::SerializeDescription(this->mMask, delimiter__cdg, prefix__cdg + "Mask");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<prmBlocking >::SerializeDescription(this->mBlockingFlag, delimiter__cdg, prefix__cdg + "BlockingFlag");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->mBlendingFactor, delimiter__cdg, prefix__cdg + "BlendingFactor");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->mIsPreemptable, delimiter__cdg, prefix__cdg + "IsPreemptable");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->mIsGoalOnly, delimiter__cdg, prefix__cdg + "IsGoalOnly");
    return description__cdg.str();
}
void prmPositionJointSet::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionJointSet");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionJointSet");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mGoal, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionJointSet");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mVelocity, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionJointSet");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mAcceleration, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionJointSet");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->mTimeLimit, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionJointSet");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->mIsCoordinated, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionJointSet");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mDeceleration, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionJointSet");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<bool> >::DeSerializeText(this->mMask, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionJointSet");
    }
    someData__cdg = true;
    cmnData<prmBlocking >::DeSerializeText(this->mBlockingFlag, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionJointSet");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->mBlendingFactor, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionJointSet");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->mIsPreemptable, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionJointSet");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->mIsGoalOnly, inputStream__cdg, delimiter__cdg);
}
std::string prmPositionJointSet::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmPositionJointSet" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  Goal:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mGoal);
    description__cdg << "  Velocity:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mVelocity);
    description__cdg << "  Acceleration:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mAcceleration);
    description__cdg << "  TimeLimit:" << cmnData<double >::HumanReadable(this->mTimeLimit);
    description__cdg << "  IsCoordinated:" << cmnData<bool >::HumanReadable(this->mIsCoordinated);
    description__cdg << "  Deceleration:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mDeceleration);
    description__cdg << "  Mask:" << cmnData<vctDynamicVector<bool> >::HumanReadable(this->mMask);
    description__cdg << "  BlockingFlag:" << cmnData<prmBlocking >::HumanReadable(this->mBlockingFlag);
    description__cdg << "  BlendingFactor:" << cmnData<bool >::HumanReadable(this->mBlendingFactor);
    description__cdg << "  IsPreemptable:" << cmnData<bool >::HumanReadable(this->mIsPreemptable);
    description__cdg << "  IsGoalOnly:" << cmnData<bool >::HumanReadable(this->mIsGoalOnly);
    return description__cdg.str();
}
bool prmPositionJointSet::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mGoal)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mVelocity)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mAcceleration)
           && cmnData<double >::ScalarNumberIsFixed(this->mTimeLimit)
           && cmnData<bool >::ScalarNumberIsFixed(this->mIsCoordinated)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mDeceleration)
           && cmnData<vctDynamicVector<bool> >::ScalarNumberIsFixed(this->mMask)
           && cmnData<prmBlocking >::ScalarNumberIsFixed(this->mBlockingFlag)
           && cmnData<bool >::ScalarNumberIsFixed(this->mBlendingFactor)
           && cmnData<bool >::ScalarNumberIsFixed(this->mIsPreemptable)
           && cmnData<bool >::ScalarNumberIsFixed(this->mIsGoalOnly)
    ;
}
size_t prmPositionJointSet::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mGoal)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mVelocity)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mAcceleration)
           + cmnData<double >::ScalarNumber(this->mTimeLimit)
           + cmnData<bool >::ScalarNumber(this->mIsCoordinated)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mDeceleration)
           + cmnData<vctDynamicVector<bool> >::ScalarNumber(this->mMask)
           + cmnData<prmBlocking >::ScalarNumber(this->mBlockingFlag)
           + cmnData<bool >::ScalarNumber(this->mBlendingFactor)
           + cmnData<bool >::ScalarNumber(this->mIsPreemptable)
           + cmnData<bool >::ScalarNumber(this->mIsGoalOnly)
    ;
}
std::string prmPositionJointSet::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mGoal);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mGoal, index_cdg - baseIndex__cdg, prefix__cdg + "Goal");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mVelocity, index_cdg - baseIndex__cdg, prefix__cdg + "Velocity");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mAcceleration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mAcceleration, index_cdg - baseIndex__cdg, prefix__cdg + "Acceleration");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->mTimeLimit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->mTimeLimit, index_cdg - baseIndex__cdg, prefix__cdg + "TimeLimit");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mIsCoordinated);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->mIsCoordinated, index_cdg - baseIndex__cdg, prefix__cdg + "IsCoordinated");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mDeceleration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mDeceleration, index_cdg - baseIndex__cdg, prefix__cdg + "Deceleration");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<bool> >::ScalarNumber(this->mMask);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<bool> >::ScalarDescription(this->mMask, index_cdg - baseIndex__cdg, prefix__cdg + "Mask");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmBlocking >::ScalarNumber(this->mBlockingFlag);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmBlocking >::ScalarDescription(this->mBlockingFlag, index_cdg - baseIndex__cdg, prefix__cdg + "BlockingFlag");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mBlendingFactor);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->mBlendingFactor, index_cdg - baseIndex__cdg, prefix__cdg + "BlendingFactor");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mIsPreemptable);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->mIsPreemptable, index_cdg - baseIndex__cdg, prefix__cdg + "IsPreemptable");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mIsGoalOnly);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->mIsGoalOnly, index_cdg - baseIndex__cdg, prefix__cdg + "IsGoalOnly");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmPositionJointSet index out of range"));
    return "";
}
double prmPositionJointSet::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mGoal);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mGoal, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mVelocity, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mAcceleration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mAcceleration, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->mTimeLimit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->mTimeLimit, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mIsCoordinated);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->mIsCoordinated, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mDeceleration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mDeceleration, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<bool> >::ScalarNumber(this->mMask);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<bool> >::Scalar(this->mMask, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmBlocking >::ScalarNumber(this->mBlockingFlag);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmBlocking >::Scalar(this->mBlockingFlag, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mBlendingFactor);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->mBlendingFactor, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mIsPreemptable);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->mIsPreemptable, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mIsGoalOnly);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->mIsGoalOnly, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmPositionJointSet index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmPositionJointSet >::SerializeText(const prmPositionJointSet & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmPositionJointSet::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mGoal, jsonValue["Goal"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mVelocity, jsonValue["Velocity"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mAcceleration, jsonValue["Acceleration"]);
    cmnDataJSON<double >::SerializeText(this->mTimeLimit, jsonValue["TimeLimit"]);
    cmnDataJSON<bool >::SerializeText(this->mIsCoordinated, jsonValue["IsCoordinated"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mDeceleration, jsonValue["Deceleration"]);
    cmnDataJSON<vctDynamicVector<bool> >::SerializeText(this->mMask, jsonValue["Mask"]);
    cmnDataJSON<prmBlocking >::SerializeText(this->mBlockingFlag, jsonValue["BlockingFlag"]);
    cmnDataJSON<bool >::SerializeText(this->mBlendingFactor, jsonValue["BlendingFactor"]);
    cmnDataJSON<bool >::SerializeText(this->mIsPreemptable, jsonValue["IsPreemptable"]);
    cmnDataJSON<bool >::SerializeText(this->mIsGoalOnly, jsonValue["IsGoalOnly"]);
}
template<>
void cmnDataJSON<prmPositionJointSet >::DeSerializeText(prmPositionJointSet & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmPositionJointSet::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["Goal"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mGoal, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mGoal");
    };
    field__cdg = jsonValue["Velocity"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mVelocity, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mVelocity");
    };
    field__cdg = jsonValue["Acceleration"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mAcceleration, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mAcceleration");
    };
    field__cdg = jsonValue["TimeLimit"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->mTimeLimit, field__cdg);
    };
    field__cdg = jsonValue["IsCoordinated"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->mIsCoordinated, field__cdg);
    };
    field__cdg = jsonValue["Deceleration"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mDeceleration, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mDeceleration");
    };
    field__cdg = jsonValue["Mask"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<bool> >::DeSerializeText(this->mMask, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<bool>>::DeSerializeText: empty JSON value for: mMask");
    };
    field__cdg = jsonValue["BlockingFlag"];
    if (!field__cdg.empty()) {
        cmnDataJSON<prmBlocking >::DeSerializeText(this->mBlockingFlag, field__cdg);
    } else {
        cmnThrow("cmnDataJson<prmBlocking>::DeSerializeText: empty JSON value for: mBlockingFlag");
    };
    field__cdg = jsonValue["BlendingFactor"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->mBlendingFactor, field__cdg);
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: mBlendingFactor");
    };
    field__cdg = jsonValue["IsPreemptable"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->mIsPreemptable, field__cdg);
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: mIsPreemptable");
    };
    field__cdg = jsonValue["IsGoalOnly"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->mIsGoalOnly, field__cdg);
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: mIsGoalOnly");
    };
}
#endif // CISST_HAS_JSON


