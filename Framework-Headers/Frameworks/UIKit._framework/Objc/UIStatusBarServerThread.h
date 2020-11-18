//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIStatusBarServerThread : NSThread
{
    NSMutableArray *_clientPorts;
    NSMutableArray *_publishers;
    CDStruct_7953f186 _statusBarData;
    CDStruct_7953f186 _composedStatusBarData;
    CDStruct_603bf4be _overrides;
    struct __CFDictionary *_doubleHeightStatusStrings;
    struct __CFDictionary *_glowAnimationStates;
    NSMutableDictionary *_glowAnimationEndTimes;
    BOOL _composedStatusBarDataValid;
}

- (void).cxx_destruct;
- (void)_addClient:(unsigned int)arg1;
- (void)_addStatusBarItem:(int)arg1 forPublisher:(id)arg2;
- (void)_addStyleOverrides:(int)arg1 forPublisher:(id)arg2;
- (void)_broadcastStatusBarDataWithActions:(int)arg1;
- (void)_broadcastStyleOverrides;
- (id)_doubleHeightStatusStringForStyle:(long long)arg1;
- (double)_glowAnimationEndTimeForStyle:(long long)arg1;
- (BOOL)_glowAnimationStateForStyle:(long long)arg1;
- (BOOL)_permanentizeStatusBarOverrideData;
- (void)_postDoubleHeightStatus:(char *)arg1 forStyle:(long long)arg2;
- (void)_postGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2;
- (void)_postStatusBarData:(CDStruct_7953f186 *)arg1 actions:(int)arg2;
- (void)_postStatusBarOverrideData:(CDStruct_603bf4be *)arg1;
- (id)_publisherForPort:(unsigned int)arg1;
- (void)_removeAnimationEndTimesForOverrides:(int)arg1;
- (void)_removeClient:(struct __CFMachPort *)arg1;
- (void)_removePublisher:(struct __CFMachPort *)arg1;
- (void)_removeStatusBarItem:(int)arg1 forPublisher:(id)arg2;
- (void)_removeStyleOverrides:(int)arg1 forPublisher:(id)arg2;
- (void)_setAnimationEndTimesForOverrides:(int)arg1;
- (CDStruct_7953f186 *)_statusBarData;
- (CDStruct_603bf4be *)_statusBarOverrideData;
- (int)_styleOverrides;
- (void)main;

@end
