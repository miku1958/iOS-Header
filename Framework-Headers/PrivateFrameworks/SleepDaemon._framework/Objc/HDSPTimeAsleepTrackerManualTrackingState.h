//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepDaemon/HDSPTimeAsleepTrackerSleepTrackingState.h>

__attribute__((visibility("hidden")))
@interface HDSPTimeAsleepTrackerManualTrackingState : HDSPTimeAsleepTrackerSleepTrackingState
{
}

+ (unsigned long long)defaultEndReason;
+ (unsigned long long)defaultStartReason;
- (void)bedtimeOccurred;
- (void)didEnterWithPreviousState:(id)arg1 context:(id)arg2;
- (void)didExitWithNextState:(id)arg1 context:(id)arg2;
- (BOOL)isSleepTrackingSchedulingState;
- (void)sleepModeExitedWithReason:(unsigned long long)arg1;
- (void)sleepTrackingEventDue;
- (void)startWakeDetectionOccurred;
- (id)stateName;
- (void)willEnterWithPreviousState:(id)arg1 context:(id)arg2;

@end

