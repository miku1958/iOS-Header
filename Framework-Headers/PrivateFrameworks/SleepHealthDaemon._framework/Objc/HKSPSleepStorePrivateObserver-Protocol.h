//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepHealthDaemon/HKSPSleepStoreObserver-Protocol.h>

@class HKSPSleepEventRecord, HKSPSleepScheduleModel, HKSPSleepStore;

@protocol HKSPSleepStorePrivateObserver <HKSPSleepStoreObserver>

@optional
- (void)sleepStore:(HKSPSleepStore *)arg1 sleepEventRecordDidChange:(HKSPSleepEventRecord *)arg2;
- (void)sleepStore:(HKSPSleepStore *)arg1 sleepScheduleModelDidChange:(HKSPSleepScheduleModel *)arg2;
@end
