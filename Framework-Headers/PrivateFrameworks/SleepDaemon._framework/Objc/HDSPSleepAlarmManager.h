//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPSleepScheduleModelObserver-Protocol.h>
#import <SleepDaemon/HDSPSource-Protocol.h>

@class HDSPEnvironment, HKSPObserverSet, NSString;
@protocol HDSPSleepAlarmProvider, HDSPSource;

@interface HDSPSleepAlarmManager : NSObject <HDSPSource, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver>
{
    HDSPEnvironment *_environment;
    HKSPObserverSet *_sleepAlarmObservers;
    id<HDSPSleepAlarmProvider> _sleepAlarmProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // @synthesize environment=_environment;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HKSPObserverSet *sleepAlarmObservers; // @synthesize sleepAlarmObservers=_sleepAlarmObservers;
@property (readonly, nonatomic) id<HDSPSleepAlarmProvider> sleepAlarmProvider; // @synthesize sleepAlarmProvider=_sleepAlarmProvider;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<HDSPSource> targetSource;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)currentSleepAlarmWithIdentifier:(id)arg1;
- (id)currentSleepAlarms;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 sleepAlarmProvider:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)resetSleepAlarmSnoozeState;
- (void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepScheduleModel:(id)arg3;

@end

