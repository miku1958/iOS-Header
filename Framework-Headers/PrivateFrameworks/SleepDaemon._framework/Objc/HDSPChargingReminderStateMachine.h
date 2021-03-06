//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sleep/HKSPPersistentStateMachine.h>

#import <SleepDaemon/HDSPChargingReminderStateMachineDelegate-Protocol.h>
#import <SleepDaemon/HDSPChargingReminderStateMachineEventHandler-Protocol.h>
#import <SleepDaemon/HDSPChargingReminderStateMachineInfoProvider-Protocol.h>

@class HDSPChargingReminderDisabledState, HDSPChargingReminderMonitoringState, HDSPChargingReminderNotifiedState, HDSPChargingReminderWaitingState, HKSPSleepScheduleModel, NSDate, NSString;
@protocol HDSPChargingReminderStateMachineDelegate, HDSPChargingReminderStateMachineInfoProvider, NAScheduler;

@interface HDSPChargingReminderStateMachine : HKSPPersistentStateMachine <HDSPChargingReminderStateMachineDelegate, HDSPChargingReminderStateMachineInfoProvider, HDSPChargingReminderStateMachineEventHandler>
{
    HDSPChargingReminderDisabledState *_disabledState;
    HDSPChargingReminderWaitingState *_waitingState;
    HDSPChargingReminderMonitoringState *_monitoringState;
    HDSPChargingReminderNotifiedState *_notifiedState;
}

@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HDSPChargingReminderStateMachineDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDSPChargingReminderDisabledState *disabledState; // @synthesize disabledState=_disabledState;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) id<HDSPChargingReminderStateMachineInfoProvider> infoProvider; // @dynamic infoProvider;
@property (readonly, nonatomic) BOOL isCharging;
@property (readonly, nonatomic) HDSPChargingReminderMonitoringState *monitoringState; // @synthesize monitoringState=_monitoringState;
@property (readonly, nonatomic) HDSPChargingReminderNotifiedState *notifiedState; // @synthesize notifiedState=_notifiedState;
@property (readonly, nonatomic) BOOL sleepFeaturesEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDSPChargingReminderWaitingState *waitingState; // @synthesize waitingState=_waitingState;

- (void).cxx_destruct;
- (void)batteryLevelChanged:(float)arg1;
- (void)batteryMonitoringEventDue;
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(CDUnknownBlockType)arg5;
- (id)monitoringWindowAfterDate:(id)arg1;
- (void)postChargingReminderNotification;
- (void)scheduleBatteryMonitoring;
- (void)startBatteryMonitoring;
- (id)stateMachineLog;
- (void)stopBatteryMonitoring;
- (void)unscheduleBatteryMonitoring;

@end

