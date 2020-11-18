//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_mach, OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface UIStatusBarServerListener : NSObject
{
    NSMutableArray *_clientPorts;
    NSMutableArray *_publishers;
    NSObject<OS_dispatch_workloop> *_workloop;
    NSObject<OS_dispatch_mach> *_channel;
    CDStruct_3fd7985f _statusBarData;
    CDStruct_3fd7985f _composedStatusBarData;
    CDStruct_e922dd9d _overrides;
    struct __CFDictionary *_doubleHeightStatusStrings;
    struct __CFDictionary *_glowAnimationStates;
    NSMutableDictionary *_glowAnimationEndTimes;
    BOOL _composedStatusBarDataValid;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_addClient:(unsigned int)arg1;
- (void)_addStatusBarItem:(int)arg1 forPublisher:(id)arg2;
- (void)_addStyleOverrides:(int)arg1 forPublisher:(id)arg2;
- (void)_broadcastStatusBarDataWithActions:(int)arg1 animated:(BOOL)arg2;
- (void)_broadcastStyleOverrides;
- (id)_doubleHeightStatusStringForStyle:(long long)arg1;
- (double)_glowAnimationEndTimeForStyle:(long long)arg1;
- (BOOL)_glowAnimationStateForStyle:(long long)arg1;
- (BOOL)_permanentizeStatusBarOverrideData;
- (void)_postDoubleHeightStatus:(char *)arg1 forStyle:(long long)arg2;
- (void)_postGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2;
- (void)_postStatusBarData:(CDStruct_3fd7985f *)arg1 actions:(int)arg2 animated:(BOOL)arg3;
- (void)_postStatusBarOverrideData:(CDStruct_e922dd9d *)arg1;
- (id)_publisherForPort:(unsigned int)arg1;
- (void)_removeAnimationEndTimesForOverrides:(int)arg1;
- (void)_removeClient:(struct __CFMachPort *)arg1;
- (void)_removePublisher:(struct __CFMachPort *)arg1;
- (void)_removeStatusBarItem:(int)arg1 forPublisher:(id)arg2;
- (void)_removeStyleOverrides:(int)arg1 forPublisher:(id)arg2;
- (void)_setAnimationEndTimesForOverrides:(int)arg1;
- (CDStruct_3fd7985f *)_statusBarData;
- (CDStruct_e922dd9d *)_statusBarOverrideData;
- (int)_styleOverrides;
- (void)async:(CDUnknownBlockType)arg1;
- (id)init;

@end

