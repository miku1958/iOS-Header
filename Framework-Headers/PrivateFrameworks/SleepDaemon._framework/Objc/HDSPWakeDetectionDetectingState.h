//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepDaemon/HDSPWakeDetectionStateMachineState.h>

__attribute__((visibility("hidden")))
@interface HDSPWakeDetectionDetectingState : HDSPWakeDetectionStateMachineState
{
}

- (void)didEnterWithPreviousState:(id)arg1 context:(id)arg2;
- (void)didExitWithNextState:(id)arg1 context:(id)arg2;
- (void)earlyWakeUpWasNotifiedRemotely;
- (BOOL)schedulesWakeDetection;
- (id)stateName;
- (void)wakeDetectionEventDue;
- (void)wakeupEventDetected:(id)arg1;
- (void)willEnterWithPreviousState:(id)arg1 context:(id)arg2;

@end

