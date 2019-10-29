

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Test.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "Test.hpp"
#include "TestPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- FromSub: 

FromSub::FromSub() :
    m_coolness_ (false)  {
}   

FromSub::FromSub (
    bool coolness)
    :
        m_coolness_( coolness ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
FromSub::FromSub(FromSub&& other_) OMG_NOEXCEPT  :m_coolness_ (std::move(other_.m_coolness_))
{
} 

FromSub& FromSub::operator=(FromSub&&  other_) OMG_NOEXCEPT {
    FromSub tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void FromSub::swap(FromSub& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_coolness_, other_.m_coolness_);
}  

bool FromSub::operator == (const FromSub& other_) const {
    if (m_coolness_ != other_.m_coolness_) {
        return false;
    }
    return true;
}
bool FromSub::operator != (const FromSub& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
bool& FromSub::coolness() OMG_NOEXCEPT {
    return m_coolness_;
}

const bool& FromSub::coolness() const OMG_NOEXCEPT {
    return m_coolness_;
}

void FromSub::coolness(bool value) {
    m_coolness_ = value;
}

std::ostream& operator << (std::ostream& o,const FromSub& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "coolness: " << sample.coolness() ;
    o <<"]";
    return o;
}

// ---- ToSub: 

ToSub::ToSub() :
    m_counter_ (0)  {
}   

ToSub::ToSub (
    int16_t counter)
    :
        m_counter_( counter ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
ToSub::ToSub(ToSub&& other_) OMG_NOEXCEPT  :m_counter_ (std::move(other_.m_counter_))
{
} 

ToSub& ToSub::operator=(ToSub&&  other_) OMG_NOEXCEPT {
    ToSub tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void ToSub::swap(ToSub& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_counter_, other_.m_counter_);
}  

bool ToSub::operator == (const ToSub& other_) const {
    if (m_counter_ != other_.m_counter_) {
        return false;
    }
    return true;
}
bool ToSub::operator != (const ToSub& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
int16_t& ToSub::counter() OMG_NOEXCEPT {
    return m_counter_;
}

const int16_t& ToSub::counter() const OMG_NOEXCEPT {
    return m_counter_;
}

void ToSub::counter(int16_t value) {
    m_counter_ = value;
}

std::ostream& operator << (std::ostream& o,const ToSub& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "counter: " << sample.counter() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code<FromSub> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FromSub_g_tc_members[1]=
                {

                    {
                        (char *)"coolness",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode FromSub_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"FromSub", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        FromSub_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for FromSub*/

                if (is_initialized) {
                    return &FromSub_g_tc;
                }

                FromSub_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &FromSub_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<FromSub>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<FromSub>::get())));
        }

        template<>
        struct native_type_code<ToSub> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ToSub_g_tc_members[1]=
                {

                    {
                        (char *)"counter",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode ToSub_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ToSub", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ToSub_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ToSub*/

                if (is_initialized) {
                    return &ToSub_g_tc;
                }

                ToSub_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                is_initialized = RTI_TRUE;

                return &ToSub_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<ToSub>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<ToSub>::get())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<FromSub>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                FromSubPlugin_new,
                FromSubPlugin_delete);
        }

        std::vector<char>& topic_type_support<FromSub>::to_cdr_buffer(
            std::vector<char>& buffer, const FromSub& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = FromSubPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = FromSubPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<FromSub>::from_cdr_buffer(FromSub& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = FromSubPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create FromSub from cdr buffer");
        }

        void topic_type_support<FromSub>::reset_sample(FromSub& sample) 
        {
            rti::topic::reset_sample(sample.coolness());
        }

        void topic_type_support<FromSub>::allocate_sample(FromSub& sample, int, int) 
        {
        }

        void topic_type_support<ToSub>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                ToSubPlugin_new,
                ToSubPlugin_delete);
        }

        std::vector<char>& topic_type_support<ToSub>::to_cdr_buffer(
            std::vector<char>& buffer, const ToSub& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ToSubPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ToSubPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<ToSub>::from_cdr_buffer(ToSub& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ToSubPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ToSub from cdr buffer");
        }

        void topic_type_support<ToSub>::reset_sample(ToSub& sample) 
        {
            rti::topic::reset_sample(sample.counter());
        }

        void topic_type_support<ToSub>::allocate_sample(ToSub& sample, int, int) 
        {
        }

    }
}  

