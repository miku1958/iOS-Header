//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepHealth/NSObject-Protocol.h>

@class HKQuantitySample, NSArray;

@protocol HDSleepHealthDaemonPluginServerInterface <NSObject>
- (void)remote_saveSleepTrackingSamples:(NSArray *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_startSleepTrackingSession;
- (void)remote_stopSleepTrackingSession;
- (void)remote_updateCurrentSleepSchedules:(NSArray *)arg1 sleepDurationGoal:(HKQuantitySample *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end
