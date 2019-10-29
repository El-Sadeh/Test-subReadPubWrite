

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Test.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TestPlugin_1083273432_h
#define TestPlugin_1083273432_h

#include "Test.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#define FromSubPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define FromSubPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FromSubPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define FromSubPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FromSubPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FromSub*
FromSubPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FromSub*
FromSubPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FromSub*
FromSubPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FromSubPluginSupport_copy_data(
    FromSub *out,
    const FromSub *in);

NDDSUSERDllExport extern void 
FromSubPluginSupport_destroy_data_w_params(
    FromSub *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FromSubPluginSupport_destroy_data_ex(
    FromSub *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FromSubPluginSupport_destroy_data(
    FromSub *sample);

NDDSUSERDllExport extern void 
FromSubPluginSupport_print_data(
    const FromSub *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
FromSubPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
FromSubPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
FromSubPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
FromSubPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
FromSubPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    FromSub *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
FromSubPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FromSub *out,
    const FromSub *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FromSubPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FromSub *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FromSubPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FromSub *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
FromSubPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const FromSub *sample); 

NDDSUSERDllExport extern RTIBool 
FromSubPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    FromSub **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
FromSubPlugin_deserialize_from_cdr_buffer(
    FromSub *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
FromSubPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FromSubPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
FromSubPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FromSubPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FromSubPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FromSub * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
FromSubPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FromSubPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FromSubPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FromSubPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FromSub *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FromSubPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FromSub * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FromSubPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    FromSub ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
FromSubPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FromSub *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
FromSubPlugin_new(void);

NDDSUSERDllExport extern void
FromSubPlugin_delete(struct PRESTypePlugin *);

#define ToSubPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define ToSubPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ToSubPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define ToSubPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ToSubPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ToSub*
ToSubPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ToSub*
ToSubPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ToSub*
ToSubPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ToSubPluginSupport_copy_data(
    ToSub *out,
    const ToSub *in);

NDDSUSERDllExport extern void 
ToSubPluginSupport_destroy_data_w_params(
    ToSub *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ToSubPluginSupport_destroy_data_ex(
    ToSub *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ToSubPluginSupport_destroy_data(
    ToSub *sample);

NDDSUSERDllExport extern void 
ToSubPluginSupport_print_data(
    const ToSub *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ToSubPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ToSubPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
ToSubPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ToSubPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
ToSubPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ToSub *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
ToSubPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ToSub *out,
    const ToSub *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ToSubPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ToSub *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ToSubPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ToSub *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ToSubPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const ToSub *sample); 

NDDSUSERDllExport extern RTIBool 
ToSubPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ToSub **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ToSubPlugin_deserialize_from_cdr_buffer(
    ToSub *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
ToSubPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ToSubPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
ToSubPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ToSubPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ToSubPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ToSub * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
ToSubPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ToSubPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ToSubPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ToSubPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ToSub *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ToSubPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ToSub * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ToSubPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ToSub ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ToSubPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ToSub *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ToSubPlugin_new(void);

NDDSUSERDllExport extern void
ToSubPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TestPlugin_1083273432_h */

