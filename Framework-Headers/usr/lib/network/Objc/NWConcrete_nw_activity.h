//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_activity-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_activity : NSObject <OS_nw_activity>
{
    unsigned char token[16];
    unsigned long long investigation_identifier;
    unsigned long long start_time;
    unsigned long long end_time;
    NWConcrete_nw_activity *parent;
    struct os_unfair_lock_s lock;
    struct os_unfair_lock_s description_lock;
    unsigned int label;
    unsigned int domain;
    int underlying_error_domain;
    int underlying_error_code;
    int reporting_strategy;
    int completion_reason;
    NSString *description;
    unsigned int is_retry:1;
    unsigned int is_lightweight:1;
    unsigned int activated:1;
    unsigned int completed:1;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)redactedDescription;

@end

