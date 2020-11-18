//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPDiagnosticsProvider-Protocol.h>
#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPSleepActionObserver-Protocol.h>
#import <SleepDaemon/HDSPSleepAlarmObserver-Protocol.h>
#import <SleepDaemon/HDSPSleepEventHandler-Protocol.h>
#import <SleepDaemon/HDSPSleepScheduleModelObserver-Protocol.h>
#import <SleepDaemon/HDSPSleepScheduleStateCoordinatorStateMachineDelegate-Protocol.h>
#import <SleepDaemon/HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider-Protocol.h>
#import <SleepDaemon/HDSPTimeChangeObserver-Protocol.h>

@class HDSPEnvironment, HDSPSleepScheduleStateCoordinatorStateMachine, HKSPObserverSet, HKSPSleepScheduleModel, HKSPSleepScheduleOccurrence, NSDate, NSString;
@protocol NAScheduler;

@interface HDSPSleepScheduleStateCoordinator : NSObject <HDSPSleepScheduleStateCoordinatorStateMachineDelegate, HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepScheduleModelObserver, HDSPDiagnosticsProvider, HDSPSleepActionObserver, HDSPSleepAlarmObserver, HDSPTimeChangeObserver>
{
    struct os_unfair_lock_s _stateMachineLock;
    HDSPEnvironment *_environment;
    HDSPSleepScheduleStateCoordinatorStateMachine *_stateMachine;
    HKSPObserverSet *_observers;
}

@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // @synthesize environment=_environment;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) HKSPObserverSet *observers; // @synthesize observers=_observers;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *previousOccurrence;
@property (readonly, nonatomic) BOOL sleepFeaturesEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property (readonly, nonatomic) struct os_unfair_lock_s stateMachineLock; // @synthesize stateMachineLock=_stateMachineLock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateSleepScheduleState;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (void)addObserver:(id)arg1;
- (void)bedtimeWasDelayed:(id)arg1;
- (void)bedtimeWasSkipped:(id)arg1;
- (unsigned long long)currentSleepScheduleState;
- (id)currentState;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)eventIdentifiers;
- (id)initWithEnvironment:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)significantTimeChangeDetected:(id)arg1;
- (void)sleepEventIsDue:(id)arg1;
- (void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepScheduleModel:(id)arg3;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)snoozeFireDateShouldBeReset;
- (void)timeZoneChangeDetected:(id)arg1;
- (void)wakeNotificationWasConfirmed:(id)arg1;
- (void)wakeUpAlarmWasDismissed:(id)arg1;
- (void)windDownWasSkipped:(id)arg1;

@end
