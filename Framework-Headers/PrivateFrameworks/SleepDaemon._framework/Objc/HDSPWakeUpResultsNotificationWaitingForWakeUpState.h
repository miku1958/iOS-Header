//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepDaemon/HDSPWakeUpResultsNotificationStateMachineState.h>

@interface HDSPWakeUpResultsNotificationWaitingForWakeUpState : HDSPWakeUpResultsNotificationStateMachineState
{
}

- (void)_transitionToDelayingForTrackingState;
- (id)stateName;
- (void)wakeUpDidOccur;

@end

