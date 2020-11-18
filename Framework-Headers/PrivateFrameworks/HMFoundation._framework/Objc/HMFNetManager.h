//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _HMFNetManagerWoWAssertion;
@protocol OS_dispatch_queue;

@interface HMFNetManager : NSObject
{
    NSObject<OS_dispatch_queue> *_clientQueue;
    _HMFNetManagerWoWAssertion *_wowAssertion;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (weak) _HMFNetManagerWoWAssertion *wowAssertion; // @synthesize wowAssertion=_wowAssertion;

+ (void)initialize;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)deregisterObject:(id)arg1;
- (void)deregisterWoWAssertionForObject:(id)arg1;
- (id)init;
- (void)registerWoWAssertionForObject:(id)arg1;

@end

