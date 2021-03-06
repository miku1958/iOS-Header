//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sleep/HKSPPersistentStateMachine.h>

#import <SleepDaemon/HDSPWakeDetectionStateMachineDelegate-Protocol.h>
#import <SleepDaemon/HDSPWakeDetectionStateMachineEventHandler-Protocol.h>
#import <SleepDaemon/HDSPWakeDetectionStateMachineInfoProvider-Protocol.h>

@class HDSPWakeDetectionDetectingState, HDSPWakeDetectionDisabledState, HDSPWakeDetectionNotifiedState, HDSPWakeDetectionWaitingState, HKSPSleepScheduleModel, HKSPSleepScheduleOccurrence, NSDate, NSString;
@protocol HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, NAScheduler;

__attribute__((visibility("hidden")))
@interface HDSPWakeDetectionStateMachine : HKSPPersistentStateMachine <HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, HDSPWakeDetectionStateMachineEventHandler>
{
    HDSPWakeDetectionDisabledState *_disabledState;
    HDSPWakeDetectionWaitingState *_waitingState;
    HDSPWakeDetectionDetectingState *_detectingState;
    HDSPWakeDetectionNotifiedState *_notifiedState;
}

@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HDSPWakeDetectionStateMachineDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDSPWakeDetectionDetectingState *detectingState; // @synthesize detectingState=_detectingState;
@property (readonly, nonatomic) HDSPWakeDetectionDisabledState *disabledState; // @synthesize disabledState=_disabledState;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL inDetectionWindow;
@property (readonly, weak, nonatomic) id<HDSPWakeDetectionStateMachineInfoProvider> infoProvider; // @dynamic infoProvider;
@property (readonly, nonatomic) BOOL isWatch;
@property (readonly, nonatomic) HDSPWakeDetectionNotifiedState *notifiedState; // @synthesize notifiedState=_notifiedState;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *relevantOccurrence;
@property (readonly, nonatomic) BOOL sleepModeIsOff;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDSPWakeDetectionWaitingState *waitingState; // @synthesize waitingState=_waitingState;

- (void).cxx_destruct;
- (void)earlyWakeUpWasNotifiedRemotely;
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(CDUnknownBlockType)arg5;
- (id)nextWakeUpAfterDate:(id)arg1;
- (void)postWakeDetectionNotification;
- (void)scheduleWakeDetection;
- (void)startWakeDetection;
- (id)stateMachineLog;
- (void)stopWakeDetection;
- (void)unscheduleWakeDetection;
- (id)upcomingStartDetectionDateAfterDate:(id)arg1;
- (void)wakeDetectionEventDue;
- (void)wakeupEventDetected:(id)arg1;

@end

