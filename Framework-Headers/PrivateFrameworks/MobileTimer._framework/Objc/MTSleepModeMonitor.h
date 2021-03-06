//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/DNDModeAssertionUpdateListener-Protocol.h>
#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTSleepModeStateMachineDelegate-Protocol.h>
#import <MobileTimer/MTSleepModeStateMachineInfoProvider-Protocol.h>
#import <MobileTimer/MTSleepObserver-Protocol.h>
#import <MobileTimer/MTTimeObserver-Protocol.h>

@class DNDModeAssertionService, MTAlarm, MTSleepCoordinator, MTSleepModeStateMachine, NSDate, NSString;
@protocol MTAlarmStorage, NAScheduler;

@interface MTSleepModeMonitor : NSObject <DNDModeAssertionUpdateListener, MTSleepModeStateMachineInfoProvider, MTSleepModeStateMachineDelegate, MTSleepObserver, MTTimeObserver, MTAgentDiagnosticDelegate>
{
    id<MTAlarmStorage> _alarmStorage;
    MTSleepCoordinator *_sleepCoordinator;
    CDUnknownBlockType _currentDateProvider;
    MTSleepModeStateMachine *_stateMachine;
    DNDModeAssertionService *_assertionService;
    id<NAScheduler> _serializer;
}

@property (strong, nonatomic) id<MTAlarmStorage> alarmStorage; // @synthesize alarmStorage=_alarmStorage;
@property (strong, nonatomic) DNDModeAssertionService *assertionService; // @synthesize assertionService=_assertionService;
@property (readonly, nonatomic) NSDate *currentDate;
@property (copy, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isUserAsleep;
@property (readonly, nonatomic) NSDate *keepOffUntilDate;
@property (strong, nonatomic) id<NAScheduler> serializer; // @synthesize serializer=_serializer;
@property (readonly, nonatomic) MTAlarm *sleepAlarm;
@property (weak, nonatomic) MTSleepCoordinator *sleepCoordinator; // @synthesize sleepCoordinator=_sleepCoordinator;
@property (strong, nonatomic) MTSleepModeStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)gatherDiagnostics;
- (id)initWithAlarmStorage:(id)arg1 sleepCoordinator:(id)arg2;
- (id)initWithAlarmStorage:(id)arg1 sleepCoordinator:(id)arg2 currentDateProvider:(CDUnknownBlockType)arg3;
- (BOOL)isEnabled;
- (BOOL)isSleepModeEnabled:(BOOL *)arg1;
- (BOOL)isSleepModeEnabled:(BOOL *)arg1 error:(id *)arg2;
- (void)modeAssertionService:(id)arg1 didReceiveModeAssertionInvalidation:(id)arg2;
- (void)printDiagnostics;
- (void)sleepCoordinator:(id)arg1 bedtimeReminderDidFire:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 bedtimeReminderWasConfirmed:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 bedtimeWasReached:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 sleepAlarmDidChange:(id)arg2;
- (void)sleepCoordinator:(id)arg1 userWentToBed:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 userWokeUp:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 wakeUpAlarmDidFire:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 wakeUpAlarmWasSnoozed:(id)arg2 sleepAlarm:(id)arg3;
- (BOOL)sleepMode:(id *)arg1;
- (unsigned long long)sleepModeTimeoutMinutes;
- (BOOL)stateMachine:(id)arg1 disengageSleepModeUserRequested:(BOOL)arg2;
- (BOOL)stateMachine:(id)arg1 engageSleepModeUntilDate:(id)arg2 userEngaged:(BOOL)arg3;
- (void)stateMachine:(id)arg1 keepSleepModeOffUntilDate:(id)arg2;
- (void)stateMachine:(id)arg1 scheduleUpdateForSecondsFromNow:(double)arg2;
- (void)stateMachineClearKeepSleepModeOff:(id)arg1;
- (void)timeListener:(id)arg1 didDetectSignificantTimeChangeWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)updateMonitorState;
- (void)userDisengagedSleepMode;
- (void)userDisengagedSleepModeOnDate:(id)arg1;

@end

