

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Test.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Test_1083273432_hpp
#define Test_1083273432_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

class NDDSUSERDllExport FromSub {

  public:
    FromSub();

    explicit FromSub(
        bool coolness);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    FromSub (FromSub&&) = default;
    FromSub& operator=(FromSub&&) = default;
    FromSub& operator=(const FromSub&) = default;
    FromSub(const FromSub&) = default;
    #else
    FromSub(FromSub&& other_) OMG_NOEXCEPT;  
    FromSub& operator=(FromSub&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    bool& coolness() OMG_NOEXCEPT; 
    const bool& coolness() const OMG_NOEXCEPT;
    void coolness(bool value);

    bool operator == (const FromSub& other_) const;
    bool operator != (const FromSub& other_) const;

    void swap(FromSub& other_) OMG_NOEXCEPT ;

  private:

    bool m_coolness_;

};

inline void swap(FromSub& a, FromSub& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const FromSub& sample);

class NDDSUSERDllExport ToSub {

  public:
    ToSub();

    explicit ToSub(
        int16_t counter);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    ToSub (ToSub&&) = default;
    ToSub& operator=(ToSub&&) = default;
    ToSub& operator=(const ToSub&) = default;
    ToSub(const ToSub&) = default;
    #else
    ToSub(ToSub&& other_) OMG_NOEXCEPT;  
    ToSub& operator=(ToSub&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int16_t& counter() OMG_NOEXCEPT; 
    const int16_t& counter() const OMG_NOEXCEPT;
    void counter(int16_t value);

    bool operator == (const ToSub& other_) const;
    bool operator != (const ToSub& other_) const;

    void swap(ToSub& other_) OMG_NOEXCEPT ;

  private:

    int16_t m_counter_;

};

inline void swap(ToSub& a, ToSub& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ToSub& sample);

namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<FromSub> {
            NDDSUSERDllExport static std::string value() {
                return "FromSub";
            }
        };

        template<>
        struct is_topic_type<FromSub> : public dds::core::true_type {};

        template<>
        struct topic_type_support<FromSub> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const FromSub& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(FromSub& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(FromSub& sample);

            NDDSUSERDllExport 
            static void allocate_sample(FromSub& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name<ToSub> {
            NDDSUSERDllExport static std::string value() {
                return "ToSub";
            }
        };

        template<>
        struct is_topic_type<ToSub> : public dds::core::true_type {};

        template<>
        struct topic_type_support<ToSub> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const ToSub& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(ToSub& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(ToSub& sample);

            NDDSUSERDllExport 
            static void allocate_sample(ToSub& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        template<>
        struct dynamic_type<FromSub> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<FromSub> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        template<>
        struct dynamic_type<ToSub> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<ToSub> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // Test_1083273432_hpp

