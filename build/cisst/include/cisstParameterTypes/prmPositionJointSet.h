// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmPositionJointSet.cdg

#pragma once
#ifndef _cisstParameterTypes_prmPositionJointSet_h
#define _cisstParameterTypes_prmPositionJointSet_h

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

#include <cisstVector/vctDynamicVectorTypes.h>
#include <cisstMultiTask/mtsGenericObject.h>
#include <cisstParameterTypes/prmForwardDeclarations.h>
// Always include last
#include <cisstParameterTypes/prmExport.h>

/* source line: 12 */
class CISST_EXPORT prmPositionJointSet: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmPositionJointSet(void);
    prmPositionJointSet(const prmPositionJointSet & other);
    prmPositionJointSet & operator = (const prmPositionJointSet & other);
    ~prmPositionJointSet();

/* source line: 22 */
 protected:
    vctDynamicVector<double> mGoal; // Desired position
 public:
    /* accessors is set to: all */
     void GetGoal(vctDynamicVector<double> & placeHolder) const;
     void SetGoal(const vctDynamicVector<double> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<double> & Goal(void) const;
     vctDynamicVector<double> & Goal(void);
/* source line: 28 */
 protected:
    vctDynamicVector<double> mVelocity; // Velocity that should be used for the trajectory generator. If the vector size is 0, this will be ignored.
 public:
    /* accessors is set to: all */
     void GetVelocity(vctDynamicVector<double> & placeHolder) const;
     void SetVelocity(const vctDynamicVector<double> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<double> & Velocity(void) const;
     vctDynamicVector<double> & Velocity(void);
/* source line: 34 */
 protected:
    vctDynamicVector<double> mAcceleration; // Acceleration and deceleration that should be used for the trajectory generator. If the vector size is 0, this will be ignored.
 public:
    /* accessors is set to: all */
     void GetAcceleration(vctDynamicVector<double> & placeHolder) const;
     void SetAcceleration(const vctDynamicVector<double> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<double> & Acceleration(void) const;
     vctDynamicVector<double> & Acceleration(void);
/* source line: 40 */
 protected:
    double mTimeLimit; // Time allowed or requested for the motion
 public:
    /* accessors is set to: all */
     void GetTimeLimit(double & placeHolder) const;
     void SetTimeLimit(const double & newValue);
    /* accessors is set to: all */
     const double & TimeLimit(void) const;
     double & TimeLimit(void);
/* source line: 47 */
 protected:
    bool mIsCoordinated; // Request all joints to move together, synchronizing either start and end or phases. This might be ignored by the controller.
 public:
    /* accessors is set to: all */
     void GetIsCoordinated(bool & placeHolder) const;
     void SetIsCoordinated(const bool & newValue);
    /* accessors is set to: all */
     const bool & IsCoordinated(void) const;
     bool & IsCoordinated(void);
/* source line: 55 */
 protected:
    vctDynamicVector<double> mDeceleration; // Deceleration
 public:
    /* accessors is set to: all */
     CISST_DEPRECATED void GetDeceleration(vctDynamicVector<double> & placeHolder) const;
     CISST_DEPRECATED void SetDeceleration(const vctDynamicVector<double> & newValue);
    /* accessors is set to: all */
     CISST_DEPRECATED const vctDynamicVector<double> & Deceleration(void) const;
     CISST_DEPRECATED vctDynamicVector<double> & Deceleration(void);
/* source line: 60 */
 protected:
    vctDynamicVector<bool> mMask; // Mask
 public:
    /* accessors is set to: all */
     CISST_DEPRECATED void GetMask(vctDynamicVector<bool> & placeHolder) const;
     CISST_DEPRECATED void SetMask(const vctDynamicVector<bool> & newValue);
    /* accessors is set to: all */
     CISST_DEPRECATED const vctDynamicVector<bool> & Mask(void) const;
     CISST_DEPRECATED vctDynamicVector<bool> & Mask(void);
/* source line: 66 */
 protected:
    prmBlocking mBlockingFlag; // BlockingFlag
 public:
    /* accessors is set to: all */
     CISST_DEPRECATED void GetBlockingFlag(prmBlocking & placeHolder) const;
     CISST_DEPRECATED void SetBlockingFlag(const prmBlocking & newValue);
    /* accessors is set to: all */
     CISST_DEPRECATED const prmBlocking & BlockingFlag(void) const;
     CISST_DEPRECATED prmBlocking & BlockingFlag(void);
/* source line: 71 */
 protected:
    bool mBlendingFactor; // BlendingFactor
 public:
    /* accessors is set to: all */
     CISST_DEPRECATED void GetBlendingFactor(bool & placeHolder) const;
     CISST_DEPRECATED void SetBlendingFactor(const bool & newValue);
    /* accessors is set to: all */
     CISST_DEPRECATED const bool & BlendingFactor(void) const;
     CISST_DEPRECATED bool & BlendingFactor(void);
/* source line: 76 */
 protected:
    bool mIsPreemptable; // IsPreemptable
 public:
    /* accessors is set to: all */
     CISST_DEPRECATED void GetIsPreemptable(bool & placeHolder) const;
     CISST_DEPRECATED void SetIsPreemptable(const bool & newValue);
    /* accessors is set to: all */
     CISST_DEPRECATED const bool & IsPreemptable(void) const;
     CISST_DEPRECATED bool & IsPreemptable(void);
/* source line: 81 */
 protected:
    bool mIsGoalOnly; // IsGoalOnly
 public:
    /* accessors is set to: all */
     CISST_DEPRECATED void GetIsGoalOnly(bool & placeHolder) const;
     CISST_DEPRECATED void SetIsGoalOnly(const bool & newValue);
    /* accessors is set to: all */
     CISST_DEPRECATED const bool & IsGoalOnly(void) const;
     CISST_DEPRECATED bool & IsGoalOnly(void);
/* source line: 87 */

    public:
        inline CISST_DEPRECATED prmPositionJointSet(const size_t size) {
            mGoal.SetSize(size);
            mGoal.SetAll(0.0);
        }
        void inline CISST_DEPRECATED SetSize(const size_t size) {
            mGoal.SetSize(size);
            mGoal.SetAll(0.0);
        }
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
    void Copy(const prmPositionJointSet & source);
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

}; // prmPositionJointSet

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmPositionJointSet> prmPositionJointSetProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmPositionJointSetProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmPositionJointSet & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmPositionJointSet & placeHolder);
/* data functions */
template <> class cmnData<prmPositionJointSet > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmPositionJointSet DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmPositionJointSet & data) {
    outputStream << cmnData<prmPositionJointSet >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmPositionJointSet >::SerializeText(const prmPositionJointSet & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmPositionJointSet >::DeSerializeText(prmPositionJointSet & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 103 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmPositionJointSet);


#endif // _cisstParameterTypes_prmPositionJointSet_h
