//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersistentConnection/CUTPowerMonitorDelegate-Protocol.h>

@class NSString, PCSimpleTimer;
@protocol OS_dispatch_queue, OS_os_log;

@interface PCPersistentTimer : NSObject <CUTPowerMonitorDelegate>
{
    double _fireTime;
    double _startTime;
    unsigned long long _guidancePriority;
    double _minimumEarlyFireProportion;
    BOOL _triggerOnGMTChange;
    BOOL _disableSystemWaking;
    BOOL _userVisible;
    NSString *_serviceIdentifier;
    id _target;
    SEL _selector;
    id _userInfo;
    PCSimpleTimer *_simpleTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_logObject;
    double _earlyFireConstantInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableSystemWaking; // @synthesize disableSystemWaking=_disableSystemWaking;
@property (nonatomic) double earlyFireConstantInterval; // @synthesize earlyFireConstantInterval=_earlyFireConstantInterval;
@property (readonly, nonatomic) double fireTime;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minimumEarlyFireProportion; // @synthesize minimumEarlyFireProportion=_minimumEarlyFireProportion;
@property (readonly, nonatomic) double startTime;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserVisible) BOOL userVisible;

+ (id)_backgroundUpdateQueue;
+ (double)_currentGuidanceTime;
+ (void)_updateTime:(double)arg1 forGuidancePriority:(unsigned long long)arg2;
+ (double)currentMachTimeInterval;
+ (id)lastSystemWakeDate;
- (void).cxx_destruct;
- (double)_earlyFireTime;
- (void)_fireTimerFired;
- (id)_initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned long long)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 triggerOnGMTChange:(BOOL)arg7;
- (double)_nextForcedAlignmentAbsoluteTime;
- (void)_updateTimers;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg1;
- (void)dealloc;
- (BOOL)firingIsImminent;
- (id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned long long)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (void)interfaceManagerInternetReachabilityChanged:(id)arg1;
- (void)interfaceManagerWWANInterfaceChangedPowerState:(id)arg1;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1;
- (void)invalidate;
- (BOOL)isValid;
- (void)scheduleInQueue:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2;
- (id)userInfo;

@end
