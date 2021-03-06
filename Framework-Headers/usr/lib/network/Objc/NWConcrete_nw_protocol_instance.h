//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_protocol_instance-Protocol.h>

@class NSString, NWConcrete_nw_protocol_definition, NWConcrete_nw_protocol_options;
@protocol OS_nw_array, OS_nw_context, OS_nw_endpoint, OS_nw_parameters, OS_nw_path, OS_nw_path_flow_registration;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_protocol_instance : NSObject <OS_nw_protocol_instance>
{
    NWConcrete_nw_protocol_definition *parent_definition;
    struct nw_protocol_callbacks callbacks;
    struct nw_protocol protocol;
    struct nw_listen_protocol *listen_handler;
    void *destroy_timer;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_parameters> *parameters;
    NWConcrete_nw_protocol_options *options;
    unsigned long long reserve_header_size;
    unsigned long long reserve_footer_size;
    unsigned long long maximum_content_size;
    unsigned int protocol_outbound_data_limit;
    void *handle;
    NSObject<OS_nw_context> *context;
    struct nw_frame_array_s inbound_frames;
    struct nw_frame_array_s outbound_frames;
    unsigned int empty_frame_pool_count;
    struct nw_frame_array_s empty_frame_pool;
    struct nw_frame_array_s pending_inbound_frames;
    unsigned int pending_inbound_frame_count;
    unsigned int pending_inbound_frame_bytes;
    struct nw_frame_array_s pending_outbound_frames;
    NSObject<OS_nw_array> *outbound_data_requests;
    struct nw_hash_table *flows_table;
    struct nw_hash_table *custom_flow_mapping_table;
    unsigned long long last_accepted_flow;
    CDUnknownBlockType wakeup;
    CDUnknownBlockType wakeup_block;
    NSObject<OS_nw_path_flow_registration> *flow_registration;
    NSObject<OS_nw_path> *current_path;
    struct nw_hash_table *paths_table;
    unsigned long long default_path;
    unsigned long long current_setup_path;
    NSObject<OS_nw_endpoint> *current_setup_path_endpoint;
    NSObject<OS_nw_endpoint> *current_setup_path_local_endpoint;
    NSObject<OS_nw_parameters> *current_setup_path_parameters;
    NSObject<OS_nw_endpoint> *derived_ipv4_endpoint;
    unsigned short paths_log_id_num;
    unsigned int initialized:1;
    unsigned int started:1;
    unsigned int ready:1;
    unsigned int connection_used:1;
    unsigned int output_connected:1;
    unsigned int limit_outbound_data:1;
    unsigned int datagram:1;
    unsigned int supports_external_data:1;
    unsigned int link_flow_controlled:1;
    unsigned int waiting_for_link_flow_control:1;
    unsigned int processing_input:1;
    unsigned int processing_output:1;
    unsigned int waiting_for_listener_accept:1;
    unsigned int new_flow_is_control:1;
    unsigned int should_destroy:1;
    unsigned int input_acknowledged:1;
    unsigned int reads_suspended:1;
    unsigned int failed_to_get_output:1;
    unsigned int needs_output_available:1;
    unsigned int needs_finalize_output:1;
    unsigned int ignore_future_path_changes:1;
    char log_str[84];
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (struct nw_protocol *)getProtocolStructure;
- (id)init;

@end

