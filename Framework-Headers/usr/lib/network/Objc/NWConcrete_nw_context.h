//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_context-Protocol.h>

@class NSString;
@protocol OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_context : NSObject <OS_nw_context>
{
    NSObject<OS_dispatch_workloop> *workloop;
    char *identifier;
    struct nw_context_cache *cache;
    struct nw_context_globals *globals;
    NWConcrete_nw_context *isolated_context;
    struct os_unfair_lock_s activate_lock;
    unsigned int max_cache_entries;
    unsigned int target_cache_entries;
    unsigned int max_idle_cache_entries;
    int scheduling_mode;
    int privacy_level;
    unsigned int isolate_protocol_stack:1;
    unsigned int isolate_protocol_cache:1;
    unsigned int is_implicit:1;
    unsigned int is_isolated_context:1;
    unsigned int activated:1;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentifier:(const char *)arg1;
- (id)redactedDescription;

@end
