// file automatically generated, do not modify
// cisst version: 1.1.0
// source file: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmOperatingState.cdg

#pragma once
#ifndef _cisstParameterTypes_prmOperatingState_h
#define _cisstParameterTypes_prmOperatingState_h

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

#include <cisstMultiTask/mtsGenericObject.h>
// Always include last
#include <cisstParameterTypes/prmExport.h>

/* source line: 10 */
class CISST_EXPORT prmOperatingState: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmOperatingState(void);
    prmOperatingState(const prmOperatingState & other);
    prmOperatingState & operator = (const prmOperatingState & other);
    ~prmOperatingState();

/* source line: 19 */
public:
    enum StateType {UNDEFINED, DISABLED, ENABLED, PAUSED, FAULT };
    static std::string StateTypeToString(const StateType & value) CISST_THROW(std::runtime_error);
    static StateType StateTypeFromString(const std::string & value) CISST_THROW(std::runtime_error);
    static const std::vector<int> & StateTypeVectorInt(void);
    static const std::vector<std::string> & StateTypeVectorString(void);
/* source line: 43 */
public:
    enum CommandType {enable, disable, pause, resume, home, unhome };
    static std::string CommandTypeToString(const CommandType & value) CISST_THROW(std::runtime_error);
    static CommandType CommandTypeFromString(const std::string & value) CISST_THROW(std::runtime_error);
    static const std::vector<int> & CommandTypeVectorInt(void);
    static const std::vector<std::string> & CommandTypeVectorString(void);
/* source line: 65 */
 protected:
    prmOperatingState::StateType mState; // Operating state, standard states include DISABLED, ENABLED, PAUSED and FAULT
 public:
    /* accessors is set to: all */
     void GetState(prmOperatingState::StateType & placeHolder) const;
     void SetState(const prmOperatingState::StateType & newValue);
    /* accessors is set to: all */
     const prmOperatingState::StateType & State(void) const;
     prmOperatingState::StateType & State(void);
/* source line: 72 */
 protected:
    std::string mSubState; // Sub state, application dependent
 public:
    /* accessors is set to: all */
     void GetSubState(std::string & placeHolder) const;
     void SetSubState(const std::string & newValue);
    /* accessors is set to: all */
     const std::string & SubState(void) const;
     std::string & SubState(void);
/* source line: 78 */
 protected:
    bool mIsHomed; // IsHomed
 public:
    /* accessors is set to: all */
     void GetIsHomed(bool & placeHolder) const;
     void SetIsHomed(const bool & newValue);
    /* accessors is set to: all */
     const bool & IsHomed(void) const;
     bool & IsHomed(void);
/* source line: 83 */
 protected:
    bool mIsBusy; // IsBusy
 public:
    /* accessors is set to: all */
     void GetIsBusy(bool & placeHolder) const;
     void SetIsBusy(const bool & newValue);
    /* accessors is set to: all */
     const bool & IsBusy(void) const;
     bool & IsBusy(void);
/* source line: 88 */

    private:
        CMN_DECLARE_SERVICES(CMN_DYNAMIC_CREATION, CMN_LOG_ALLOW_DEFAULT);
    public:
        inline bool IsEnabledHomedAndNotBusy(void) const {
            return ((State() == prmOperatingState::ENABLED)
                    && IsHomed() && !IsBusy());
        }
        inline bool IsEnabledAndHomed(void) const {
            return ((State() == prmOperatingState::ENABLED)
                    && IsHomed());
        }
        virtual bool ValidCommand(const CommandType & command,
                                  StateType & newOperatingState,
                                  std::string & humanReadableMessage);
        /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const prmOperatingState & source);
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

}; // prmOperatingState

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmOperatingState> prmOperatingStateProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmOperatingStateProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmOperatingState & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmOperatingState & placeHolder);
/* data functions */
template <> class cmnData<prmOperatingState > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmOperatingState DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmOperatingState & data) {
    outputStream << cmnData<prmOperatingState >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmOperatingState >::SerializeText(const prmOperatingState & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmOperatingState >::DeSerializeText(prmOperatingState & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON
std::string CISST_EXPORT cmnDataHumanReadable_prmOperatingState_StateType(const prmOperatingState::StateType & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(prmOperatingState::StateType, int, cmnDataHumanReadable_prmOperatingState_StateType);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(prmOperatingState::StateType);
#endif // CISST_HAS_JSON
std::string CISST_EXPORT cmnDataHumanReadable_prmOperatingState_CommandType(const prmOperatingState::CommandType & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(prmOperatingState::CommandType, int, cmnDataHumanReadable_prmOperatingState_CommandType);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(prmOperatingState::CommandType);
#endif // CISST_HAS_JSON

/* source line: 106 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmOperatingState);


#endif // _cisstParameterTypes_prmOperatingState_h
