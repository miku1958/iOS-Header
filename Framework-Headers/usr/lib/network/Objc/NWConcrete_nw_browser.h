//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_browser-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_nw_array, OS_nw_browse_descriptor, OS_nw_dictionary, OS_nw_parameters, OS_nw_path, OS_nw_path_evaluator, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_browser : NSObject <OS_nw_browser>
{
    struct os_unfair_lock_s lock;
    NSObject<OS_dispatch_queue> *client_queue;
    int type;
    NSObject<OS_nw_browse_descriptor> *descriptor;
    NSObject<OS_nw_parameters> *parameters;
    NWConcrete_nw_browser *internally_retained_object;
    CDUnknownBlockType browse_results_changed_handler;
    CDUnknownBlockType state_changed_handler;
    int state;
    NSObject<OS_nw_path_evaluator> *browse_evaluator;
    NSObject<OS_nw_path> *current_browse_path;
    NSObject<OS_nw_dictionary> *browse_flow_registrations;
    NSObject<OS_nw_array> *path_endpoint_array;
    struct _DNSServiceRef_t *main_dns_ref;
    struct _DNSServiceRef_t *secondary_dns_ref;
    NSObject<OS_nw_array> *old_results;
    NSObject<OS_nw_array> *new_results;
    NSObject<OS_xpc_object> *dns_ref_map;
    NSObject<OS_xpc_object> *changes_map;
    NSObject<OS_nw_dictionary> *txt_record_map;
    char *description;
    char *logging_description;
    unsigned int log_id;
    BOOL include_txt_record;
    BOOL redact_logs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)redactedDescription;

@end

