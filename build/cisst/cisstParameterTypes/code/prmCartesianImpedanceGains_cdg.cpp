// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmCartesianImpedanceGains.cdg

#include <cisstParameterTypes/prmCartesianImpedanceGains.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 13 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmCartesianImpedanceGainsProxy);

prmCartesianImpedanceGains::prmCartesianImpedanceGains(void):
    mtsGenericObject()
    , mForceOrientation()
    , mForcePosition()
    , mTorqueOrientation()
    , mPositionDeadbandPos()
    , mPositionDeadbandNeg()
    , mPositionStiffnessPos()
    , mPositionStiffnessNeg()
    , mPositionDampingPos()
    , mPositionDampingNeg()
    , mForceBiasPos()
    , mForceBiasNeg()
    , mOrientationDeadbandPos()
    , mOrientationDeadbandNeg()
    , mOrientationStiffnessPos()
    , mOrientationStiffnessNeg()
    , mOrientationDampingPos()
    , mOrientationDampingNeg()
    , mTorqueBiasPos()
    , mTorqueBiasNeg()
{}

prmCartesianImpedanceGains::prmCartesianImpedanceGains(const prmCartesianImpedanceGains & other):
    mtsGenericObject(other)
    , mForceOrientation(other.mForceOrientation)
    , mForcePosition(other.mForcePosition)
    , mTorqueOrientation(other.mTorqueOrientation)
    , mPositionDeadbandPos(other.mPositionDeadbandPos)
    , mPositionDeadbandNeg(other.mPositionDeadbandNeg)
    , mPositionStiffnessPos(other.mPositionStiffnessPos)
    , mPositionStiffnessNeg(other.mPositionStiffnessNeg)
    , mPositionDampingPos(other.mPositionDampingPos)
    , mPositionDampingNeg(other.mPositionDampingNeg)
    , mForceBiasPos(other.mForceBiasPos)
    , mForceBiasNeg(other.mForceBiasNeg)
    , mOrientationDeadbandPos(other.mOrientationDeadbandPos)
    , mOrientationDeadbandNeg(other.mOrientationDeadbandNeg)
    , mOrientationStiffnessPos(other.mOrientationStiffnessPos)
    , mOrientationStiffnessNeg(other.mOrientationStiffnessNeg)
    , mOrientationDampingPos(other.mOrientationDampingPos)
    , mOrientationDampingNeg(other.mOrientationDampingNeg)
    , mTorqueBiasPos(other.mTorqueBiasPos)
    , mTorqueBiasNeg(other.mTorqueBiasNeg)
{}

prmCartesianImpedanceGains & prmCartesianImpedanceGains::operator = (const prmCartesianImpedanceGains & other)
{
    mtsGenericObject::operator = (other);
    mForceOrientation = other.mForceOrientation;
    mForcePosition = other.mForcePosition;
    mTorqueOrientation = other.mTorqueOrientation;
    mPositionDeadbandPos = other.mPositionDeadbandPos;
    mPositionDeadbandNeg = other.mPositionDeadbandNeg;
    mPositionStiffnessPos = other.mPositionStiffnessPos;
    mPositionStiffnessNeg = other.mPositionStiffnessNeg;
    mPositionDampingPos = other.mPositionDampingPos;
    mPositionDampingNeg = other.mPositionDampingNeg;
    mForceBiasPos = other.mForceBiasPos;
    mForceBiasNeg = other.mForceBiasNeg;
    mOrientationDeadbandPos = other.mOrientationDeadbandPos;
    mOrientationDeadbandNeg = other.mOrientationDeadbandNeg;
    mOrientationStiffnessPos = other.mOrientationStiffnessPos;
    mOrientationStiffnessNeg = other.mOrientationStiffnessNeg;
    mOrientationDampingPos = other.mOrientationDampingPos;
    mOrientationDampingNeg = other.mOrientationDampingNeg;
    mTorqueBiasPos = other.mTorqueBiasPos;
    mTorqueBiasNeg = other.mTorqueBiasNeg;
    return *this;
}

prmCartesianImpedanceGains::~prmCartesianImpedanceGains(void){}


void prmCartesianImpedanceGains::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mForceOrientation);
    cmnSerializeRaw(outputStream__cdg, this->mForcePosition);
    cmnSerializeRaw(outputStream__cdg, this->mTorqueOrientation);
    cmnSerializeRaw(outputStream__cdg, this->mPositionDeadbandPos);
    cmnSerializeRaw(outputStream__cdg, this->mPositionDeadbandNeg);
    cmnSerializeRaw(outputStream__cdg, this->mPositionStiffnessPos);
    cmnSerializeRaw(outputStream__cdg, this->mPositionStiffnessNeg);
    cmnSerializeRaw(outputStream__cdg, this->mPositionDampingPos);
    cmnSerializeRaw(outputStream__cdg, this->mPositionDampingNeg);
    cmnSerializeRaw(outputStream__cdg, this->mForceBiasPos);
    cmnSerializeRaw(outputStream__cdg, this->mForceBiasNeg);
    cmnSerializeRaw(outputStream__cdg, this->mOrientationDeadbandPos);
    cmnSerializeRaw(outputStream__cdg, this->mOrientationDeadbandNeg);
    cmnSerializeRaw(outputStream__cdg, this->mOrientationStiffnessPos);
    cmnSerializeRaw(outputStream__cdg, this->mOrientationStiffnessNeg);
    cmnSerializeRaw(outputStream__cdg, this->mOrientationDampingPos);
    cmnSerializeRaw(outputStream__cdg, this->mOrientationDampingNeg);
    cmnSerializeRaw(outputStream__cdg, this->mTorqueBiasPos);
    cmnSerializeRaw(outputStream__cdg, this->mTorqueBiasNeg);
}


void prmCartesianImpedanceGains::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mForceOrientation);
    cmnDeSerializeRaw(inputStream__cdg, this->mForcePosition);
    cmnDeSerializeRaw(inputStream__cdg, this->mTorqueOrientation);
    cmnDeSerializeRaw(inputStream__cdg, this->mPositionDeadbandPos);
    cmnDeSerializeRaw(inputStream__cdg, this->mPositionDeadbandNeg);
    cmnDeSerializeRaw(inputStream__cdg, this->mPositionStiffnessPos);
    cmnDeSerializeRaw(inputStream__cdg, this->mPositionStiffnessNeg);
    cmnDeSerializeRaw(inputStream__cdg, this->mPositionDampingPos);
    cmnDeSerializeRaw(inputStream__cdg, this->mPositionDampingNeg);
    cmnDeSerializeRaw(inputStream__cdg, this->mForceBiasPos);
    cmnDeSerializeRaw(inputStream__cdg, this->mForceBiasNeg);
    cmnDeSerializeRaw(inputStream__cdg, this->mOrientationDeadbandPos);
    cmnDeSerializeRaw(inputStream__cdg, this->mOrientationDeadbandNeg);
    cmnDeSerializeRaw(inputStream__cdg, this->mOrientationStiffnessPos);
    cmnDeSerializeRaw(inputStream__cdg, this->mOrientationStiffnessNeg);
    cmnDeSerializeRaw(inputStream__cdg, this->mOrientationDampingPos);
    cmnDeSerializeRaw(inputStream__cdg, this->mOrientationDampingNeg);
    cmnDeSerializeRaw(inputStream__cdg, this->mTorqueBiasPos);
    cmnDeSerializeRaw(inputStream__cdg, this->mTorqueBiasNeg);
}


void prmCartesianImpedanceGains::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmCartesianImpedanceGains::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmCartesianImpedanceGains >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmCartesianImpedanceGains >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 23 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetForceOrientation(vctMatRot3 & placeHolder) const
{
    placeHolder = this->mForceOrientation;
}

void prmCartesianImpedanceGains::SetForceOrientation(const vctMatRot3 & newValue)
{
    this->mForceOrientation = newValue;
}


/* accessors is set to: all */
const vctMatRot3 & prmCartesianImpedanceGains::ForceOrientation(void) const
{
    return this->mForceOrientation;
}

vctMatRot3 & prmCartesianImpedanceGains::ForceOrientation(void)
{
    return this->mForceOrientation;
}

/* source line: 29 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetForcePosition(vct3 & placeHolder) const
{
    placeHolder = this->mForcePosition;
}

void prmCartesianImpedanceGains::SetForcePosition(const vct3 & newValue)
{
    this->mForcePosition = newValue;
}


/* accessors is set to: all */
const vct3 & prmCartesianImpedanceGains::ForcePosition(void) const
{
    return this->mForcePosition;
}

vct3 & prmCartesianImpedanceGains::ForcePosition(void)
{
    return this->mForcePosition;
}

/* source line: 35 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetTorqueOrientation(vctMatRot3 & placeHolder) const
{
    placeHolder = this->mTorqueOrientation;
}

void prmCartesianImpedanceGains::SetTorqueOrientation(const vctMatRot3 & newValue)
{
    this->mTorqueOrientation = newValue;
}


/* accessors is set to: all */
const vctMatRot3 & prmCartesianImpedanceGains::TorqueOrientation(void) const
{
    return this->mTorqueOrientation;
}

vctMatRot3 & prmCartesianImpedanceGains::TorqueOrientation(void)
{
    return this->mTorqueOrientation;
}

/* source line: 41 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetPositionDeadbandPos(vct3 & placeHolder) const
{
    placeHolder = this->mPositionDeadbandPos;
}

void prmCartesianImpedanceGains::SetPositionDeadbandPos(const vct3 & newValue)
{
    this->mPositionDeadbandPos = newValue;
}


/* accessors is set to: all */
const vct3 & prmCartesianImpedanceGains::PositionDeadbandPos(void) const
{
    return this->mPositionDeadbandPos;
}

vct3 & prmCartesianImpedanceGains::PositionDeadbandPos(void)
{
    return this->mPositionDeadbandPos;
}

/* source line: 47 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetPositionDeadbandNeg(vct3 & placeHolder) const
{
    placeHolder = this->mPositionDeadbandNeg;
}

void prmCartesianImpedanceGains::SetPositionDeadbandNeg(const vct3 & newValue)
{
    this->mPositionDeadbandNeg = newValue;
}


/* accessors is set to: all */
const vct3 & prmCartesianImpedanceGains::PositionDeadbandNeg(void) const
{
    return this->mPositionDeadbandNeg;
}

vct3 & prmCartesianImpedanceGains::PositionDeadbandNeg(void)
{
    return this->mPositionDeadbandNeg;
}

/* source line: 53 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetPositionStiffnessPos(vct3 & placeHolder) const
{
    placeHolder = this->mPositionStiffnessPos;
}

void prmCartesianImpedanceGains::SetPositionStiffnessPos(const vct3 & newValue)
{
    this->mPositionStiffnessPos = newValue;
}


/* accessors is set to: all */
const vct3 & prmCartesianImpedanceGains::PositionStiffnessPos(void) const
{
    return this->mPositionStiffnessPos;
}

vct3 & prmCartesianImpedanceGains::PositionStiffnessPos(void)
{
    return this->mPositionStiffnessPos;
}

/* source line: 59 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetPositionStiffnessNeg(vct3 & placeHolder) const
{
    placeHolder = this->mPositionStiffnessNeg;
}

void prmCartesianImpedanceGains::SetPositionStiffnessNeg(const vct3 & newValue)
{
    this->mPositionStiffnessNeg = newValue;
}


/* accessors is set to: all */
const vct3 & prmCartesianImpedanceGains::PositionStiffnessNeg(void) const
{
    return this->mPositionStiffnessNeg;
}

vct3 & prmCartesianImpedanceGains::PositionStiffnessNeg(void)
{
    return this->mPositionStiffnessNeg;
}

/* source line: 65 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetPositionDampingPos(vct3 & placeHolder) const
{
    placeHolder = this->mPositionDampingPos;
}

void prmCartesianImpedanceGains::SetPositionDampingPos(const vct3 & newValue)
{
    this->mPositionDampingPos = newValue;
}


/* accessors is set to: all */
const vct3 & prmCartesianImpedanceGains::PositionDampingPos(void) const
{
    return this->mPositionDampingPos;
}

vct3 & prmCartesianImpedanceGains::PositionDampingPos(void)
{
    return this->mPositionDampingPos;
}

/* source line: 71 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetPositionDampingNeg(vct3 & placeHolder) const
{
    placeHolder = this->mPositionDampingNeg;
}

void prmCartesianImpedanceGains::SetPositionDampingNeg(const vct3 & newValue)
{
    this->mPositionDampingNeg = newValue;
}


/* accessors is set to: all */
const vct3 & prmCartesianImpedanceGains::PositionDampingNeg(void) const
{
    return this->mPositionDampingNeg;
}

vct3 & prmCartesianImpedanceGains::PositionDampingNeg(void)
{
    return this->mPositionDampingNeg;
}

/* source line: 77 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetForceBiasPos(vct3 & placeHolder) const
{
    placeHolder = this->mForceBiasPos;
}

void prmCartesianImpedanceGains::SetForceBiasPos(const vct3 & newValue)
{
    this->mForceBiasPos = newValue;
}


/* accessors is set to: all */
const vct3 & prmCartesianImpedanceGains::ForceBiasPos(void) const
{
    return this->mForceBiasPos;
}

vct3 & prmCartesianImpedanceGains::ForceBiasPos(void)
{
    return this->mForceBiasPos;
}

/* source line: 83 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetForceBiasNeg(vct3 & placeHolder) const
{
    placeHolder = this->mForceBiasNeg;
}

void prmCartesianImpedanceGains::SetForceBiasNeg(const vct3 & newValue)
{
    this->mForceBiasNeg = newValue;
}


/* accessors is set to: all */
const vct3 & prmCartesianImpedanceGains::ForceBiasNeg(void) const
{
    return this->mForceBiasNeg;
}

vct3 & prmCartesianImpedanceGains::ForceBiasNeg(void)
{
    return this->mForceBiasNeg;
}

/* source line: 89 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetOrientationDeadbandPos(vct3 & placeHolder) const
{
    placeHolder = this->mOrientationDeadbandPos;
}

void prmCartesianImpedanceGains::SetOrientationDeadbandPos(const vct3 & newValue)
{
    this->mOrientationDeadbandPos = newValue;
}


/* accessors is set to: all */
const vct3 & prmCartesianImpedanceGains::OrientationDeadbandPos(void) const
{
    return this->mOrientationDeadbandPos;
}

vct3 & prmCartesianImpedanceGains::OrientationDeadbandPos(void)
{
    return this->mOrientationDeadbandPos;
}

/* source line: 95 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetOrientationDeadbandNeg(vct3 & placeHolder) const
{
    placeHolder = this->mOrientationDeadbandNeg;
}

void prmCartesianImpedanceGains::SetOrientationDeadbandNeg(const vct3 & newValue)
{
    this->mOrientationDeadbandNeg = newValue;
}


/* accessors is set to: all */
const vct3 & prmCartesianImpedanceGains::OrientationDeadbandNeg(void) const
{
    return this->mOrientationDeadbandNeg;
}

vct3 & prmCartesianImpedanceGains::OrientationDeadbandNeg(void)
{
    return this->mOrientationDeadbandNeg;
}

/* source line: 101 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetOrientationStiffnessPos(vct3 & placeHolder) const
{
    placeHolder = this->mOrientationStiffnessPos;
}

void prmCartesianImpedanceGains::SetOrientationStiffnessPos(const vct3 & newValue)
{
    this->mOrientationStiffnessPos = newValue;
}


/* accessors is set to: all */
const vct3 & prmCartesianImpedanceGains::OrientationStiffnessPos(void) const
{
    return this->mOrientationStiffnessPos;
}

vct3 & prmCartesianImpedanceGains::OrientationStiffnessPos(void)
{
    return this->mOrientationStiffnessPos;
}

/* source line: 107 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetOrientationStiffnessNeg(vct3 & placeHolder) const
{
    placeHolder = this->mOrientationStiffnessNeg;
}

void prmCartesianImpedanceGains::SetOrientationStiffnessNeg(const vct3 & newValue)
{
    this->mOrientationStiffnessNeg = newValue;
}


/* accessors is set to: all */
const vct3 & prmCartesianImpedanceGains::OrientationStiffnessNeg(void) const
{
    return this->mOrientationStiffnessNeg;
}

vct3 & prmCartesianImpedanceGains::OrientationStiffnessNeg(void)
{
    return this->mOrientationStiffnessNeg;
}

/* source line: 113 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetOrientationDampingPos(vct3 & placeHolder) const
{
    placeHolder = this->mOrientationDampingPos;
}

void prmCartesianImpedanceGains::SetOrientationDampingPos(const vct3 & newValue)
{
    this->mOrientationDampingPos = newValue;
}


/* accessors is set to: all */
const vct3 & prmCartesianImpedanceGains::OrientationDampingPos(void) const
{
    return this->mOrientationDampingPos;
}

vct3 & prmCartesianImpedanceGains::OrientationDampingPos(void)
{
    return this->mOrientationDampingPos;
}

/* source line: 119 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetOrientationDampingNeg(vct3 & placeHolder) const
{
    placeHolder = this->mOrientationDampingNeg;
}

void prmCartesianImpedanceGains::SetOrientationDampingNeg(const vct3 & newValue)
{
    this->mOrientationDampingNeg = newValue;
}


/* accessors is set to: all */
const vct3 & prmCartesianImpedanceGains::OrientationDampingNeg(void) const
{
    return this->mOrientationDampingNeg;
}

vct3 & prmCartesianImpedanceGains::OrientationDampingNeg(void)
{
    return this->mOrientationDampingNeg;
}

/* source line: 125 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetTorqueBiasPos(vct3 & placeHolder) const
{
    placeHolder = this->mTorqueBiasPos;
}

void prmCartesianImpedanceGains::SetTorqueBiasPos(const vct3 & newValue)
{
    this->mTorqueBiasPos = newValue;
}


/* accessors is set to: all */
const vct3 & prmCartesianImpedanceGains::TorqueBiasPos(void) const
{
    return this->mTorqueBiasPos;
}

vct3 & prmCartesianImpedanceGains::TorqueBiasPos(void)
{
    return this->mTorqueBiasPos;
}

/* source line: 131 */

/* accessors is set to: all */
void prmCartesianImpedanceGains::GetTorqueBiasNeg(vct3 & placeHolder) const
{
    placeHolder = this->mTorqueBiasNeg;
}

void prmCartesianImpedanceGains::SetTorqueBiasNeg(const vct3 & newValue)
{
    this->mTorqueBiasNeg = newValue;
}


/* accessors is set to: all */
const vct3 & prmCartesianImpedanceGains::TorqueBiasNeg(void) const
{
    return this->mTorqueBiasNeg;
}

vct3 & prmCartesianImpedanceGains::TorqueBiasNeg(void)
{
    return this->mTorqueBiasNeg;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmCartesianImpedanceGains & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmCartesianImpedanceGains & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmCartesianImpedanceGains::Copy(const prmCartesianImpedanceGains & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<vctMatRot3 >::Copy(this->mForceOrientation, source__cdg.mForceOrientation);
    cmnData<vct3 >::Copy(this->mForcePosition, source__cdg.mForcePosition);
    cmnData<vctMatRot3 >::Copy(this->mTorqueOrientation, source__cdg.mTorqueOrientation);
    cmnData<vct3 >::Copy(this->mPositionDeadbandPos, source__cdg.mPositionDeadbandPos);
    cmnData<vct3 >::Copy(this->mPositionDeadbandNeg, source__cdg.mPositionDeadbandNeg);
    cmnData<vct3 >::Copy(this->mPositionStiffnessPos, source__cdg.mPositionStiffnessPos);
    cmnData<vct3 >::Copy(this->mPositionStiffnessNeg, source__cdg.mPositionStiffnessNeg);
    cmnData<vct3 >::Copy(this->mPositionDampingPos, source__cdg.mPositionDampingPos);
    cmnData<vct3 >::Copy(this->mPositionDampingNeg, source__cdg.mPositionDampingNeg);
    cmnData<vct3 >::Copy(this->mForceBiasPos, source__cdg.mForceBiasPos);
    cmnData<vct3 >::Copy(this->mForceBiasNeg, source__cdg.mForceBiasNeg);
    cmnData<vct3 >::Copy(this->mOrientationDeadbandPos, source__cdg.mOrientationDeadbandPos);
    cmnData<vct3 >::Copy(this->mOrientationDeadbandNeg, source__cdg.mOrientationDeadbandNeg);
    cmnData<vct3 >::Copy(this->mOrientationStiffnessPos, source__cdg.mOrientationStiffnessPos);
    cmnData<vct3 >::Copy(this->mOrientationStiffnessNeg, source__cdg.mOrientationStiffnessNeg);
    cmnData<vct3 >::Copy(this->mOrientationDampingPos, source__cdg.mOrientationDampingPos);
    cmnData<vct3 >::Copy(this->mOrientationDampingNeg, source__cdg.mOrientationDampingNeg);
    cmnData<vct3 >::Copy(this->mTorqueBiasPos, source__cdg.mTorqueBiasPos);
    cmnData<vct3 >::Copy(this->mTorqueBiasNeg, source__cdg.mTorqueBiasNeg);
}
void prmCartesianImpedanceGains::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctMatRot3 >::SerializeBinary(this->mForceOrientation, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mForcePosition, outputStream__cdg);
    cmnData<vctMatRot3 >::SerializeBinary(this->mTorqueOrientation, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mPositionDeadbandPos, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mPositionDeadbandNeg, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mPositionStiffnessPos, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mPositionStiffnessNeg, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mPositionDampingPos, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mPositionDampingNeg, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mForceBiasPos, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mForceBiasNeg, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mOrientationDeadbandPos, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mOrientationDeadbandNeg, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mOrientationStiffnessPos, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mOrientationStiffnessNeg, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mOrientationDampingPos, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mOrientationDampingNeg, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mTorqueBiasPos, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->mTorqueBiasNeg, outputStream__cdg);
}
void prmCartesianImpedanceGains::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctMatRot3 >::DeSerializeBinary(this->mForceOrientation, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mForcePosition, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctMatRot3 >::DeSerializeBinary(this->mTorqueOrientation, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mPositionDeadbandPos, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mPositionDeadbandNeg, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mPositionStiffnessPos, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mPositionStiffnessNeg, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mPositionDampingPos, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mPositionDampingNeg, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mForceBiasPos, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mForceBiasNeg, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mOrientationDeadbandPos, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mOrientationDeadbandNeg, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mOrientationStiffnessPos, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mOrientationStiffnessNeg, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mOrientationDampingPos, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mOrientationDampingNeg, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mTorqueBiasPos, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->mTorqueBiasNeg, inputStream__cdg, localFormat, remoteFormat);
}
void prmCartesianImpedanceGains::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<vctMatRot3 >::SerializeText(this->mForceOrientation, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mForcePosition, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctMatRot3 >::SerializeText(this->mTorqueOrientation, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mPositionDeadbandPos, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mPositionDeadbandNeg, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mPositionStiffnessPos, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mPositionStiffnessNeg, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mPositionDampingPos, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mPositionDampingNeg, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mForceBiasPos, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mForceBiasNeg, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mOrientationDeadbandPos, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mOrientationDeadbandNeg, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mOrientationStiffnessPos, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mOrientationStiffnessNeg, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mOrientationDampingPos, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mOrientationDampingNeg, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mTorqueBiasPos, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->mTorqueBiasNeg, outputStream__cdg, delimiter__cdg);
}
std::string prmCartesianImpedanceGains::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vctMatRot3 >::SerializeDescription(this->mForceOrientation, delimiter__cdg, prefix__cdg + "ForceOrientation");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mForcePosition, delimiter__cdg, prefix__cdg + "ForcePosition");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctMatRot3 >::SerializeDescription(this->mTorqueOrientation, delimiter__cdg, prefix__cdg + "TorqueOrientation");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mPositionDeadbandPos, delimiter__cdg, prefix__cdg + "PositionDeadbandPos");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mPositionDeadbandNeg, delimiter__cdg, prefix__cdg + "PositionDeadbandNeg");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mPositionStiffnessPos, delimiter__cdg, prefix__cdg + "PositionStiffnessPos");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mPositionStiffnessNeg, delimiter__cdg, prefix__cdg + "PositionStiffnessNeg");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mPositionDampingPos, delimiter__cdg, prefix__cdg + "PositionDampingPos");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mPositionDampingNeg, delimiter__cdg, prefix__cdg + "PositionDampingNeg");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mForceBiasPos, delimiter__cdg, prefix__cdg + "ForceBiasPos");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mForceBiasNeg, delimiter__cdg, prefix__cdg + "ForceBiasNeg");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mOrientationDeadbandPos, delimiter__cdg, prefix__cdg + "OrientationDeadbandPos");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mOrientationDeadbandNeg, delimiter__cdg, prefix__cdg + "OrientationDeadbandNeg");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mOrientationStiffnessPos, delimiter__cdg, prefix__cdg + "OrientationStiffnessPos");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mOrientationStiffnessNeg, delimiter__cdg, prefix__cdg + "OrientationStiffnessNeg");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mOrientationDampingPos, delimiter__cdg, prefix__cdg + "OrientationDampingPos");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mOrientationDampingNeg, delimiter__cdg, prefix__cdg + "OrientationDampingNeg");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mTorqueBiasPos, delimiter__cdg, prefix__cdg + "TorqueBiasPos");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->mTorqueBiasNeg, delimiter__cdg, prefix__cdg + "TorqueBiasNeg");
    return description__cdg.str();
}
void prmCartesianImpedanceGains::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vctMatRot3 >::DeSerializeText(this->mForceOrientation, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mForcePosition, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vctMatRot3 >::DeSerializeText(this->mTorqueOrientation, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mPositionDeadbandPos, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mPositionDeadbandNeg, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mPositionStiffnessPos, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mPositionStiffnessNeg, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mPositionDampingPos, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mPositionDampingNeg, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mForceBiasPos, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mForceBiasNeg, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mOrientationDeadbandPos, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mOrientationDeadbandNeg, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mOrientationStiffnessPos, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mOrientationStiffnessNeg, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mOrientationDampingPos, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mOrientationDampingNeg, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mTorqueBiasPos, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->mTorqueBiasNeg, inputStream__cdg, delimiter__cdg);
}
std::string prmCartesianImpedanceGains::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmCartesianImpedanceGains" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  ForceOrientation:" << cmnData<vctMatRot3 >::HumanReadable(this->mForceOrientation);
    description__cdg << "  ForcePosition:" << cmnData<vct3 >::HumanReadable(this->mForcePosition);
    description__cdg << "  TorqueOrientation:" << cmnData<vctMatRot3 >::HumanReadable(this->mTorqueOrientation);
    description__cdg << "  PositionDeadbandPos:" << cmnData<vct3 >::HumanReadable(this->mPositionDeadbandPos);
    description__cdg << "  PositionDeadbandNeg:" << cmnData<vct3 >::HumanReadable(this->mPositionDeadbandNeg);
    description__cdg << "  PositionStiffnessPos:" << cmnData<vct3 >::HumanReadable(this->mPositionStiffnessPos);
    description__cdg << "  PositionStiffnessNeg:" << cmnData<vct3 >::HumanReadable(this->mPositionStiffnessNeg);
    description__cdg << "  PositionDampingPos:" << cmnData<vct3 >::HumanReadable(this->mPositionDampingPos);
    description__cdg << "  PositionDampingNeg:" << cmnData<vct3 >::HumanReadable(this->mPositionDampingNeg);
    description__cdg << "  ForceBiasPos:" << cmnData<vct3 >::HumanReadable(this->mForceBiasPos);
    description__cdg << "  ForceBiasNeg:" << cmnData<vct3 >::HumanReadable(this->mForceBiasNeg);
    description__cdg << "  OrientationDeadbandPos:" << cmnData<vct3 >::HumanReadable(this->mOrientationDeadbandPos);
    description__cdg << "  OrientationDeadbandNeg:" << cmnData<vct3 >::HumanReadable(this->mOrientationDeadbandNeg);
    description__cdg << "  OrientationStiffnessPos:" << cmnData<vct3 >::HumanReadable(this->mOrientationStiffnessPos);
    description__cdg << "  OrientationStiffnessNeg:" << cmnData<vct3 >::HumanReadable(this->mOrientationStiffnessNeg);
    description__cdg << "  OrientationDampingPos:" << cmnData<vct3 >::HumanReadable(this->mOrientationDampingPos);
    description__cdg << "  OrientationDampingNeg:" << cmnData<vct3 >::HumanReadable(this->mOrientationDampingNeg);
    description__cdg << "  TorqueBiasPos:" << cmnData<vct3 >::HumanReadable(this->mTorqueBiasPos);
    description__cdg << "  TorqueBiasNeg:" << cmnData<vct3 >::HumanReadable(this->mTorqueBiasNeg);
    return description__cdg.str();
}
bool prmCartesianImpedanceGains::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctMatRot3 >::ScalarNumberIsFixed(this->mForceOrientation)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mForcePosition)
           && cmnData<vctMatRot3 >::ScalarNumberIsFixed(this->mTorqueOrientation)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mPositionDeadbandPos)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mPositionDeadbandNeg)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mPositionStiffnessPos)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mPositionStiffnessNeg)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mPositionDampingPos)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mPositionDampingNeg)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mForceBiasPos)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mForceBiasNeg)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mOrientationDeadbandPos)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mOrientationDeadbandNeg)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mOrientationStiffnessPos)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mOrientationStiffnessNeg)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mOrientationDampingPos)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mOrientationDampingNeg)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mTorqueBiasPos)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->mTorqueBiasNeg)
    ;
}
size_t prmCartesianImpedanceGains::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctMatRot3 >::ScalarNumber(this->mForceOrientation)
           + cmnData<vct3 >::ScalarNumber(this->mForcePosition)
           + cmnData<vctMatRot3 >::ScalarNumber(this->mTorqueOrientation)
           + cmnData<vct3 >::ScalarNumber(this->mPositionDeadbandPos)
           + cmnData<vct3 >::ScalarNumber(this->mPositionDeadbandNeg)
           + cmnData<vct3 >::ScalarNumber(this->mPositionStiffnessPos)
           + cmnData<vct3 >::ScalarNumber(this->mPositionStiffnessNeg)
           + cmnData<vct3 >::ScalarNumber(this->mPositionDampingPos)
           + cmnData<vct3 >::ScalarNumber(this->mPositionDampingNeg)
           + cmnData<vct3 >::ScalarNumber(this->mForceBiasPos)
           + cmnData<vct3 >::ScalarNumber(this->mForceBiasNeg)
           + cmnData<vct3 >::ScalarNumber(this->mOrientationDeadbandPos)
           + cmnData<vct3 >::ScalarNumber(this->mOrientationDeadbandNeg)
           + cmnData<vct3 >::ScalarNumber(this->mOrientationStiffnessPos)
           + cmnData<vct3 >::ScalarNumber(this->mOrientationStiffnessNeg)
           + cmnData<vct3 >::ScalarNumber(this->mOrientationDampingPos)
           + cmnData<vct3 >::ScalarNumber(this->mOrientationDampingNeg)
           + cmnData<vct3 >::ScalarNumber(this->mTorqueBiasPos)
           + cmnData<vct3 >::ScalarNumber(this->mTorqueBiasNeg)
    ;
}
std::string prmCartesianImpedanceGains::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctMatRot3 >::ScalarNumber(this->mForceOrientation);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctMatRot3 >::ScalarDescription(this->mForceOrientation, index_cdg - baseIndex__cdg, prefix__cdg + "ForceOrientation");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mForcePosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mForcePosition, index_cdg - baseIndex__cdg, prefix__cdg + "ForcePosition");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctMatRot3 >::ScalarNumber(this->mTorqueOrientation);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctMatRot3 >::ScalarDescription(this->mTorqueOrientation, index_cdg - baseIndex__cdg, prefix__cdg + "TorqueOrientation");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mPositionDeadbandPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mPositionDeadbandPos, index_cdg - baseIndex__cdg, prefix__cdg + "PositionDeadbandPos");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mPositionDeadbandNeg);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mPositionDeadbandNeg, index_cdg - baseIndex__cdg, prefix__cdg + "PositionDeadbandNeg");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mPositionStiffnessPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mPositionStiffnessPos, index_cdg - baseIndex__cdg, prefix__cdg + "PositionStiffnessPos");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mPositionStiffnessNeg);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mPositionStiffnessNeg, index_cdg - baseIndex__cdg, prefix__cdg + "PositionStiffnessNeg");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mPositionDampingPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mPositionDampingPos, index_cdg - baseIndex__cdg, prefix__cdg + "PositionDampingPos");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mPositionDampingNeg);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mPositionDampingNeg, index_cdg - baseIndex__cdg, prefix__cdg + "PositionDampingNeg");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mForceBiasPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mForceBiasPos, index_cdg - baseIndex__cdg, prefix__cdg + "ForceBiasPos");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mForceBiasNeg);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mForceBiasNeg, index_cdg - baseIndex__cdg, prefix__cdg + "ForceBiasNeg");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mOrientationDeadbandPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mOrientationDeadbandPos, index_cdg - baseIndex__cdg, prefix__cdg + "OrientationDeadbandPos");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mOrientationDeadbandNeg);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mOrientationDeadbandNeg, index_cdg - baseIndex__cdg, prefix__cdg + "OrientationDeadbandNeg");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mOrientationStiffnessPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mOrientationStiffnessPos, index_cdg - baseIndex__cdg, prefix__cdg + "OrientationStiffnessPos");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mOrientationStiffnessNeg);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mOrientationStiffnessNeg, index_cdg - baseIndex__cdg, prefix__cdg + "OrientationStiffnessNeg");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mOrientationDampingPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mOrientationDampingPos, index_cdg - baseIndex__cdg, prefix__cdg + "OrientationDampingPos");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mOrientationDampingNeg);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mOrientationDampingNeg, index_cdg - baseIndex__cdg, prefix__cdg + "OrientationDampingNeg");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mTorqueBiasPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mTorqueBiasPos, index_cdg - baseIndex__cdg, prefix__cdg + "TorqueBiasPos");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mTorqueBiasNeg);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->mTorqueBiasNeg, index_cdg - baseIndex__cdg, prefix__cdg + "TorqueBiasNeg");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmCartesianImpedanceGains index out of range"));
    return "";
}
double prmCartesianImpedanceGains::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctMatRot3 >::ScalarNumber(this->mForceOrientation);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctMatRot3 >::Scalar(this->mForceOrientation, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mForcePosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mForcePosition, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctMatRot3 >::ScalarNumber(this->mTorqueOrientation);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctMatRot3 >::Scalar(this->mTorqueOrientation, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mPositionDeadbandPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mPositionDeadbandPos, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mPositionDeadbandNeg);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mPositionDeadbandNeg, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mPositionStiffnessPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mPositionStiffnessPos, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mPositionStiffnessNeg);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mPositionStiffnessNeg, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mPositionDampingPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mPositionDampingPos, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mPositionDampingNeg);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mPositionDampingNeg, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mForceBiasPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mForceBiasPos, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mForceBiasNeg);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mForceBiasNeg, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mOrientationDeadbandPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mOrientationDeadbandPos, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mOrientationDeadbandNeg);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mOrientationDeadbandNeg, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mOrientationStiffnessPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mOrientationStiffnessPos, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mOrientationStiffnessNeg);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mOrientationStiffnessNeg, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mOrientationDampingPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mOrientationDampingPos, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mOrientationDampingNeg);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mOrientationDampingNeg, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mTorqueBiasPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mTorqueBiasPos, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->mTorqueBiasNeg);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->mTorqueBiasNeg, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmCartesianImpedanceGains index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmCartesianImpedanceGains >::SerializeText(const prmCartesianImpedanceGains & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmCartesianImpedanceGains::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctMatRot3 >::SerializeText(this->mForceOrientation, jsonValue["ForceOrientation"]);
    cmnDataJSON<vct3 >::SerializeText(this->mForcePosition, jsonValue["ForcePosition"]);
    cmnDataJSON<vctMatRot3 >::SerializeText(this->mTorqueOrientation, jsonValue["TorqueOrientation"]);
    cmnDataJSON<vct3 >::SerializeText(this->mPositionDeadbandPos, jsonValue["PositionDeadbandPos"]);
    cmnDataJSON<vct3 >::SerializeText(this->mPositionDeadbandNeg, jsonValue["PositionDeadbandNeg"]);
    cmnDataJSON<vct3 >::SerializeText(this->mPositionStiffnessPos, jsonValue["PositionStiffnessPos"]);
    cmnDataJSON<vct3 >::SerializeText(this->mPositionStiffnessNeg, jsonValue["PositionStiffnessNeg"]);
    cmnDataJSON<vct3 >::SerializeText(this->mPositionDampingPos, jsonValue["PositionDampingPos"]);
    cmnDataJSON<vct3 >::SerializeText(this->mPositionDampingNeg, jsonValue["PositionDampingNeg"]);
    cmnDataJSON<vct3 >::SerializeText(this->mForceBiasPos, jsonValue["ForceBiasPos"]);
    cmnDataJSON<vct3 >::SerializeText(this->mForceBiasNeg, jsonValue["ForceBiasNeg"]);
    cmnDataJSON<vct3 >::SerializeText(this->mOrientationDeadbandPos, jsonValue["OrientationDeadbandPos"]);
    cmnDataJSON<vct3 >::SerializeText(this->mOrientationDeadbandNeg, jsonValue["OrientationDeadbandNeg"]);
    cmnDataJSON<vct3 >::SerializeText(this->mOrientationStiffnessPos, jsonValue["OrientationStiffnessPos"]);
    cmnDataJSON<vct3 >::SerializeText(this->mOrientationStiffnessNeg, jsonValue["OrientationStiffnessNeg"]);
    cmnDataJSON<vct3 >::SerializeText(this->mOrientationDampingPos, jsonValue["OrientationDampingPos"]);
    cmnDataJSON<vct3 >::SerializeText(this->mOrientationDampingNeg, jsonValue["OrientationDampingNeg"]);
    cmnDataJSON<vct3 >::SerializeText(this->mTorqueBiasPos, jsonValue["TorqueBiasPos"]);
    cmnDataJSON<vct3 >::SerializeText(this->mTorqueBiasNeg, jsonValue["TorqueBiasNeg"]);
}
template<>
void cmnDataJSON<prmCartesianImpedanceGains >::DeSerializeText(prmCartesianImpedanceGains & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmCartesianImpedanceGains::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["ForceOrientation"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctMatRot3 >::DeSerializeText(this->mForceOrientation, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctMatRot3>::DeSerializeText: empty JSON value for: mForceOrientation");
    };
    field__cdg = jsonValue["ForcePosition"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mForcePosition, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mForcePosition");
    };
    field__cdg = jsonValue["TorqueOrientation"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctMatRot3 >::DeSerializeText(this->mTorqueOrientation, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctMatRot3>::DeSerializeText: empty JSON value for: mTorqueOrientation");
    };
    field__cdg = jsonValue["PositionDeadbandPos"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mPositionDeadbandPos, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mPositionDeadbandPos");
    };
    field__cdg = jsonValue["PositionDeadbandNeg"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mPositionDeadbandNeg, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mPositionDeadbandNeg");
    };
    field__cdg = jsonValue["PositionStiffnessPos"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mPositionStiffnessPos, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mPositionStiffnessPos");
    };
    field__cdg = jsonValue["PositionStiffnessNeg"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mPositionStiffnessNeg, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mPositionStiffnessNeg");
    };
    field__cdg = jsonValue["PositionDampingPos"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mPositionDampingPos, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mPositionDampingPos");
    };
    field__cdg = jsonValue["PositionDampingNeg"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mPositionDampingNeg, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mPositionDampingNeg");
    };
    field__cdg = jsonValue["ForceBiasPos"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mForceBiasPos, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mForceBiasPos");
    };
    field__cdg = jsonValue["ForceBiasNeg"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mForceBiasNeg, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mForceBiasNeg");
    };
    field__cdg = jsonValue["OrientationDeadbandPos"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mOrientationDeadbandPos, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mOrientationDeadbandPos");
    };
    field__cdg = jsonValue["OrientationDeadbandNeg"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mOrientationDeadbandNeg, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mOrientationDeadbandNeg");
    };
    field__cdg = jsonValue["OrientationStiffnessPos"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mOrientationStiffnessPos, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mOrientationStiffnessPos");
    };
    field__cdg = jsonValue["OrientationStiffnessNeg"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mOrientationStiffnessNeg, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mOrientationStiffnessNeg");
    };
    field__cdg = jsonValue["OrientationDampingPos"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mOrientationDampingPos, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mOrientationDampingPos");
    };
    field__cdg = jsonValue["OrientationDampingNeg"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mOrientationDampingNeg, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mOrientationDampingNeg");
    };
    field__cdg = jsonValue["TorqueBiasPos"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mTorqueBiasPos, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mTorqueBiasPos");
    };
    field__cdg = jsonValue["TorqueBiasNeg"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->mTorqueBiasNeg, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: mTorqueBiasNeg");
    };
}
#endif // CISST_HAS_JSON


