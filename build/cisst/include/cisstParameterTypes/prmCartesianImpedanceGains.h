// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmCartesianImpedanceGains.cdg

#pragma once
#ifndef _cisstParameterTypes_prmCartesianImpedanceGains_h
#define _cisstParameterTypes_prmCartesianImpedanceGains_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */




// for mts-proxy 
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>

/* source line: 1 */
/* source line: 4 */

#include <cisstVector/vctTransformationTypes.h>
#include <cisstVector/vctFixedSizeVectorTypes.h>
#include <cisstMultiTask/mtsGenericObject.h>

// Always include last
#include <cisstParameterTypes/prmExport.h>

/* source line: 13 */
class CISST_EXPORT prmCartesianImpedanceGains: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmCartesianImpedanceGains(void);
    prmCartesianImpedanceGains(const prmCartesianImpedanceGains & other);
    prmCartesianImpedanceGains & operator = (const prmCartesianImpedanceGains & other);
    ~prmCartesianImpedanceGains();

/* source line: 23 */
 protected:
    vctMatRot3 mForceOrientation; // Force orientation matrix
 public:
    /* accessors is set to: all */
     void GetForceOrientation(vctMatRot3 & placeHolder) const;
     void SetForceOrientation(const vctMatRot3 & newValue);
    /* accessors is set to: all */
     const vctMatRot3 & ForceOrientation(void) const;
     vctMatRot3 & ForceOrientation(void);
/* source line: 29 */
 protected:
    vct3 mForcePosition; // Force position vector
 public:
    /* accessors is set to: all */
     void GetForcePosition(vct3 & placeHolder) const;
     void SetForcePosition(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & ForcePosition(void) const;
     vct3 & ForcePosition(void);
/* source line: 35 */
 protected:
    vctMatRot3 mTorqueOrientation; // Torque orientation matrix
 public:
    /* accessors is set to: all */
     void GetTorqueOrientation(vctMatRot3 & placeHolder) const;
     void SetTorqueOrientation(const vctMatRot3 & newValue);
    /* accessors is set to: all */
     const vctMatRot3 & TorqueOrientation(void) const;
     vctMatRot3 & TorqueOrientation(void);
/* source line: 41 */
 protected:
    vct3 mPositionDeadbandPos; // Positive deadband position vector
 public:
    /* accessors is set to: all */
     void GetPositionDeadbandPos(vct3 & placeHolder) const;
     void SetPositionDeadbandPos(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & PositionDeadbandPos(void) const;
     vct3 & PositionDeadbandPos(void);
/* source line: 47 */
 protected:
    vct3 mPositionDeadbandNeg; // Negative deadband position vector
 public:
    /* accessors is set to: all */
     void GetPositionDeadbandNeg(vct3 & placeHolder) const;
     void SetPositionDeadbandNeg(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & PositionDeadbandNeg(void) const;
     vct3 & PositionDeadbandNeg(void);
/* source line: 53 */
 protected:
    vct3 mPositionStiffnessPos; // Positive position stiffness vector
 public:
    /* accessors is set to: all */
     void GetPositionStiffnessPos(vct3 & placeHolder) const;
     void SetPositionStiffnessPos(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & PositionStiffnessPos(void) const;
     vct3 & PositionStiffnessPos(void);
/* source line: 59 */
 protected:
    vct3 mPositionStiffnessNeg; // Negative position stiffness vector
 public:
    /* accessors is set to: all */
     void GetPositionStiffnessNeg(vct3 & placeHolder) const;
     void SetPositionStiffnessNeg(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & PositionStiffnessNeg(void) const;
     vct3 & PositionStiffnessNeg(void);
/* source line: 65 */
 protected:
    vct3 mPositionDampingPos; // Positive position damping vector
 public:
    /* accessors is set to: all */
     void GetPositionDampingPos(vct3 & placeHolder) const;
     void SetPositionDampingPos(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & PositionDampingPos(void) const;
     vct3 & PositionDampingPos(void);
/* source line: 71 */
 protected:
    vct3 mPositionDampingNeg; // Negative position damping vector
 public:
    /* accessors is set to: all */
     void GetPositionDampingNeg(vct3 & placeHolder) const;
     void SetPositionDampingNeg(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & PositionDampingNeg(void) const;
     vct3 & PositionDampingNeg(void);
/* source line: 77 */
 protected:
    vct3 mForceBiasPos; // Positive force bias vector
 public:
    /* accessors is set to: all */
     void GetForceBiasPos(vct3 & placeHolder) const;
     void SetForceBiasPos(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & ForceBiasPos(void) const;
     vct3 & ForceBiasPos(void);
/* source line: 83 */
 protected:
    vct3 mForceBiasNeg; // Negative force bias vector
 public:
    /* accessors is set to: all */
     void GetForceBiasNeg(vct3 & placeHolder) const;
     void SetForceBiasNeg(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & ForceBiasNeg(void) const;
     vct3 & ForceBiasNeg(void);
/* source line: 89 */
 protected:
    vct3 mOrientationDeadbandPos; // Positive deadband orientation vector
 public:
    /* accessors is set to: all */
     void GetOrientationDeadbandPos(vct3 & placeHolder) const;
     void SetOrientationDeadbandPos(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & OrientationDeadbandPos(void) const;
     vct3 & OrientationDeadbandPos(void);
/* source line: 95 */
 protected:
    vct3 mOrientationDeadbandNeg; // Negative deadband orientation vector
 public:
    /* accessors is set to: all */
     void GetOrientationDeadbandNeg(vct3 & placeHolder) const;
     void SetOrientationDeadbandNeg(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & OrientationDeadbandNeg(void) const;
     vct3 & OrientationDeadbandNeg(void);
/* source line: 101 */
 protected:
    vct3 mOrientationStiffnessPos; // Positive orientation stiffness vector
 public:
    /* accessors is set to: all */
     void GetOrientationStiffnessPos(vct3 & placeHolder) const;
     void SetOrientationStiffnessPos(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & OrientationStiffnessPos(void) const;
     vct3 & OrientationStiffnessPos(void);
/* source line: 107 */
 protected:
    vct3 mOrientationStiffnessNeg; // Negative orientation stiffness vector
 public:
    /* accessors is set to: all */
     void GetOrientationStiffnessNeg(vct3 & placeHolder) const;
     void SetOrientationStiffnessNeg(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & OrientationStiffnessNeg(void) const;
     vct3 & OrientationStiffnessNeg(void);
/* source line: 113 */
 protected:
    vct3 mOrientationDampingPos; // Positive orientation damping vector
 public:
    /* accessors is set to: all */
     void GetOrientationDampingPos(vct3 & placeHolder) const;
     void SetOrientationDampingPos(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & OrientationDampingPos(void) const;
     vct3 & OrientationDampingPos(void);
/* source line: 119 */
 protected:
    vct3 mOrientationDampingNeg; // Positive orientation damping vector
 public:
    /* accessors is set to: all */
     void GetOrientationDampingNeg(vct3 & placeHolder) const;
     void SetOrientationDampingNeg(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & OrientationDampingNeg(void) const;
     vct3 & OrientationDampingNeg(void);
/* source line: 125 */
 protected:
    vct3 mTorqueBiasPos; // Positive torque bias vector
 public:
    /* accessors is set to: all */
     void GetTorqueBiasPos(vct3 & placeHolder) const;
     void SetTorqueBiasPos(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & TorqueBiasPos(void) const;
     vct3 & TorqueBiasPos(void);
/* source line: 131 */
 protected:
    vct3 mTorqueBiasNeg; // Negative torque bias vector
 public:
    /* accessors is set to: all */
     void GetTorqueBiasNeg(vct3 & placeHolder) const;
     void SetTorqueBiasNeg(const vct3 & newValue);
    /* accessors is set to: all */
     const vct3 & TorqueBiasNeg(void) const;
     vct3 & TorqueBiasNeg(void);
/* source line: 137 */

    private:
        CMN_DECLARE_SERVICES(CMN_DYNAMIC_CREATION, CMN_LOG_ALLOW_DEFAULT);
        /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const prmCartesianImpedanceGains & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // prmCartesianImpedanceGains

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmCartesianImpedanceGains> prmCartesianImpedanceGainsProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmCartesianImpedanceGainsProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmCartesianImpedanceGains & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmCartesianImpedanceGains & placeHolder);
/* data functions */
template <> class cmnData<prmCartesianImpedanceGains > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmCartesianImpedanceGains DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const prmCartesianImpedanceGains & data) {
    outputStream << cmnData<prmCartesianImpedanceGains >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmCartesianImpedanceGains >::SerializeText(const prmCartesianImpedanceGains & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmCartesianImpedanceGains >::DeSerializeText(prmCartesianImpedanceGains & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 143 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmCartesianImpedanceGains);


#endif // _cisstParameterTypes_prmCartesianImpedanceGains_h
