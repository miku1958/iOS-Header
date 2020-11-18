//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/FBProcessWatchdogProviding-Protocol.h>

@class NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface FBApplicationProcessWatchdogPolicy : NSObject <FBProcessWatchdogProviding>
{
    double _deviceLaunchScale;
    double _deviceResumeScale;
    double _additionalFirstPartyScale;
    BOOL _enableThirdPartyPre9;
    int _daNotificationToken;
    NSDictionary *_watchdogPolicyExceptions;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)_defaultFirstPartyAdditionalScale;
+ (double)_defaultLaunchScale;
+ (double)_defaultResumeScale;
+ (double)_scaleForGestaltKey:(struct __CFString *)arg1;
+ (id)defaultPolicy;
- (void)_queue_reloadDefaultSettings;
- (double)_queue_watchdogScalingFactorForAppInfo:(id)arg1 isResume:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (double)watchdogIntervalForProcess:(id)arg1 eventContext:(CDStruct_1b4a36b4)arg2;

@end

