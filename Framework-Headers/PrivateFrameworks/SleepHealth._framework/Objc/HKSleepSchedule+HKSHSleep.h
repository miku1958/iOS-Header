//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKSleepSchedule.h>

@interface HKSleepSchedule (HKSHSleep)
- (id)hksh_bedtimeDateIntervalForMorningIndex:(long long)arg1 calendar:(id)arg2;
- (id)hksh_bedtimeDateIntervalForWakeTime:(id)arg1 calendar:(id)arg2;
- (BOOL)hksh_hasEquivalentOverrideDayToSleepSchedule:(id)arg1;
- (BOOL)hksh_hasEquivalentTimesToSleepSchedule:(id)arg1;
- (id)hksh_wakeDateComponentsForMorningIndex:(long long)arg1 calendar:(id)arg2;
@end
