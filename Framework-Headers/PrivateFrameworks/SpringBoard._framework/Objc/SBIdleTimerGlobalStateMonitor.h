//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBIdleTimerServiceDelegate-Protocol.h>
#import <SpringBoard/SBPocketStateMonitorObserver-Protocol.h>
#import <SpringBoard/_SBIdleTimerGlobalSettingMonitorDelegate-Protocol.h>

@class NSHashTable, NSNumber, NSString, SBIdleTimerAggregateClientConfiguration, SBIdleTimerService, SBLocalDefaults, _SBIdleTimerGlobalBoolSettingMonitor, _SBIdleTimerGlobalNumericSettingMonitor;
@protocol BSInvalidatable;

@interface SBIdleTimerGlobalStateMonitor : NSObject <SBPocketStateMonitorObserver, _SBIdleTimerGlobalSettingMonitorDelegate, SBIdleTimerServiceDelegate>
{
    struct os_unfair_lock_s _observerLock;
    NSHashTable *_observers;
    SBIdleTimerService *_idleTimerService;
    SBLocalDefaults *_localDefaults;
    CDUnknownBlockType _dontLockEver;
    CDUnknownBlockType _dontDimOrLockOnAC;
    CDUnknownBlockType _disableAttentionAwareness;
    CDUnknownBlockType _minimumLockscreenIdleTime;
    _SBIdleTimerGlobalNumericSettingMonitor *_autoLockTimeoutMonitor;
    _SBIdleTimerGlobalBoolSettingMonitor *_batterySaverModeMonitor;
    _SBIdleTimerGlobalBoolSettingMonitor *_onACPowerMonitor;
    long long _pocketState;
    BOOL _autoDimDisabled;
    SBIdleTimerAggregateClientConfiguration *_aggregateClientConfiguration;
    id<BSInvalidatable> _stateCaptureAssertion;
}

@property (readonly, nonatomic) SBIdleTimerAggregateClientConfiguration *aggregateClientConfiguration; // @synthesize aggregateClientConfiguration=_aggregateClientConfiguration;
@property (readonly, nonatomic, getter=isAutoDimDisabled) BOOL autoDimDisabled;
@property (readonly, nonatomic) NSNumber *autoLockTimeout;
@property (readonly, nonatomic, getter=isBatterySaverModeActive) BOOL batterySaverModeActive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableAttentionAwareness;
@property (readonly, nonatomic) BOOL dontDimOrLockOnAC;
@property (readonly, nonatomic) BOOL dontLockEver;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double minimumLockscreenIdleTime;
@property (readonly, nonatomic, getter=isOnACPower) BOOL onACPower;
@property (readonly, nonatomic) long long pocketState; // @synthesize pocketState=_pocketState;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_addStateCaptureHandlers;
- (CDUnknownBlockType)_boolMonitorForProperty:(id)arg1 inDefaults:(id)arg2 fetchingWith:(CDUnknownBlockType)arg3;
- (id)_init;
- (id)_initWithLocalDefaults:(id)arg1 profileConnection:(id)arg2 pocketStateMonitor:(id)arg3 uiController:(id)arg4 idleTimerService:(id)arg5;
- (id)_stateCaptureDescription;
- (CDUnknownBlockType)_timeIntervalMonitorForProperty:(id)arg1 inDefaults:(id)arg2 fetchingWith:(CDUnknownBlockType)arg3;
- (void)_updateAutoDimDisabled;
- (void)_updateObserversForReason:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)idleTimerGlobalSettingMonitor:(id)arg1 changedForReason:(id)arg2;
- (void)idleTimerServiceTimeoutAssertionsDidChange:(id)arg1;
- (void)pocketStateMonitor:(id)arg1 pocketStateDidChangeFrom:(long long)arg2 to:(long long)arg3;
- (void)removeObserver:(id)arg1;

@end
