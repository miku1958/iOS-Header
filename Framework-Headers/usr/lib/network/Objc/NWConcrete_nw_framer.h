//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_framer-Protocol.h>

@class NSString;
@protocol OS_dispatch_data, OS_nw_context, OS_nw_endpoint, OS_nw_parameters, OS_nw_protocol_definition, OS_nw_protocol_metadata;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_framer : NSObject <OS_nw_framer>
{
    NSObject<OS_nw_protocol_definition> *parent_definition;
    struct nw_protocol_callbacks callbacks;
    struct nw_protocol protocol;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_context> *context;
    NSObject<OS_nw_protocol_metadata> *pending_inbound_message;
    CDUnknownBlockType start;
    CDUnknownBlockType parse_input;
    CDUnknownBlockType write_output;
    CDUnknownBlockType wakeup;
    CDUnknownBlockType stop;
    CDUnknownBlockType cleanup;
    CDUnknownBlockType copy_metadata;
    struct nw_frame_array_s inbound_frames;
    struct nw_frame_array_s outbound_frames;
    unsigned long long input_needed;
    unsigned long long input_body_remaining;
    struct nw_frame_array_s received_input_frames;
    struct nw_frame_array_s pending_input_frames;
    unsigned int pending_input_frame_count;
    NSObject<OS_dispatch_data> *output_data;
    struct nw_frame_array_s received_output_frames;
    NSObject<OS_nw_protocol_metadata> *pending_output_message;
    BOOL pending_output_message_complete;
    unsigned int pending_output_message_length;
    unsigned int pending_output_frames;
    unsigned int pending_output_cursor;
    unsigned short prepended_log_id_num;
    unsigned int supports_external_data:1;
    unsigned int output_frame_as_message:1;
    unsigned int in_start:1;
    unsigned int called_start:1;
    unsigned int ready:1;
    unsigned int flow_controlled:1;
    unsigned int waiting_for_flow_control:1;
    unsigned int in_input_callout:1;
    unsigned int in_input_available:1;
    unsigned int new_input_available:1;
    unsigned int in_output_callout:1;
    unsigned int pending_input_should_mark_complete:1;
    unsigned int failed:1;
    unsigned int pass_through_input:1;
    unsigned int pass_through_output:1;
    unsigned int __pad_bits:2;
    char log_str[84];
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
