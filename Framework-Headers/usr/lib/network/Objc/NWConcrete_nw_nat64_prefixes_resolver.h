//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_nat64_prefixes_resolver-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_nw_context, OS_nw_parameters, OS_nw_path_evaluator;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_nat64_prefixes_resolver : NSObject <OS_nw_nat64_prefixes_resolver>
{
    struct os_unfair_lock_s lock;
    unsigned int ifindex;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_context> *context;
    NWConcrete_nw_nat64_prefixes_resolver *internally_retained_object;
    unsigned int dns_service_id;
    struct _DNSServiceRef_t *dns_service;
    int dns_error;
    CDUnknownBlockType update_handler;
    CDUnknownBlockType cancel_handler;
    NSObject<OS_dispatch_queue> *client_queue;
    struct in6_addr *ipv6_addrs;
    NSObject<OS_nw_path_evaluator> *evaluator;
    int address_count;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithParameters:(id)arg1;

@end
