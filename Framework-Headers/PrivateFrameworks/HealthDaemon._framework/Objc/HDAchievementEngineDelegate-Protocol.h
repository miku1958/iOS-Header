//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKQuantity, NSArray, NSDate;

@protocol HDAchievementEngineDelegate <NSObject>
- (long long)activitySummaryIndexToday;
- (double)briskMinutesToday;
- (double)briskMinutesYesterday;
- (double)caloriesBurnedToday;
- (double)caloriesBurnedYesterday;
- (NSDate *)currentDate;
- (HKQuantity *)energyBurnedGoalToday;
- (HKQuantity *)energyBurnedGoalYesterday;
- (long long)mostRecentWorkoutAnchor;
- (unsigned long long)standingHoursToday;
- (unsigned long long)standingHoursYesterday;
- (unsigned long long)stepsTakenToday;
- (unsigned long long)stepsTakenYesterday;
- (NSArray *)workoutsEndingAfterAnchor:(long long)arg1 newAnchor:(long long *)arg2;
@end
