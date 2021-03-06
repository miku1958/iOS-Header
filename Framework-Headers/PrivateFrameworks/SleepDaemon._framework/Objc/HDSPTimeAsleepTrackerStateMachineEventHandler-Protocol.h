//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepDaemon/HKSPStateMachineEventHandler-Protocol.h>

@class NSDate;

@protocol HDSPTimeAsleepTrackerStateMachineEventHandler <HKSPStateMachineEventHandler>
- (void)activityDetectedOnDate:(NSDate *)arg1;
- (void)appLaunchedOnDate:(NSDate *)arg1;
- (void)bedtimeOccurred;
- (void)sleepModeExitedWithReason:(unsigned long long)arg1;
- (void)sleepSessionEndRequestedInternally;
- (void)sleepSessionFinished;
- (void)sleepTrackingEventDue;
- (void)startWakeDetectionOccurred;
- (void)userEngagedSleepMode;
- (void)wakeUpOccurredWithReason:(unsigned long long)arg1;
@end

