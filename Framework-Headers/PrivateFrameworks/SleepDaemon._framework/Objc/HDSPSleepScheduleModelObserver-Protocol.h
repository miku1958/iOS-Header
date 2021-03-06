//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepDaemon/NSObject-Protocol.h>

@class HDSPSleepScheduleModelManager, HKSPSleepEventRecord, HKSPSleepSchedule, HKSPSleepScheduleModel, HKSPSleepSettings;
@protocol HDSPSource;

@protocol HDSPSleepScheduleModelObserver <NSObject>

@optional
- (void)sleepScheduleModelManager:(HDSPSleepScheduleModelManager *)arg1 source:(id<HDSPSource>)arg2 didUpdateSleepEventRecord:(HKSPSleepEventRecord *)arg3;
- (void)sleepScheduleModelManager:(HDSPSleepScheduleModelManager *)arg1 source:(id<HDSPSource>)arg2 didUpdateSleepSchedule:(HKSPSleepSchedule *)arg3;
- (void)sleepScheduleModelManager:(HDSPSleepScheduleModelManager *)arg1 source:(id<HDSPSource>)arg2 didUpdateSleepScheduleModel:(HKSPSleepScheduleModel *)arg3;
- (void)sleepScheduleModelManager:(HDSPSleepScheduleModelManager *)arg1 source:(id<HDSPSource>)arg2 didUpdateSleepSettings:(HKSPSleepSettings *)arg3;
@end

