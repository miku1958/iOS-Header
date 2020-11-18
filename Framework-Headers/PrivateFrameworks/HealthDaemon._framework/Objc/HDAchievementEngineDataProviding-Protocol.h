//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDAchievementEngineV2, HKQuantity, NSArray, NSDate;

@protocol HDAchievementEngineDataProviding <NSObject>

@property (nonatomic) long long lastCheckedSummaryIndexForAllGoals;
@property (nonatomic) long long lastCheckedSummaryIndexForDistance;
@property (nonatomic) long long lastCheckedSummaryIndexForExercise;
@property (nonatomic) long long lastCheckedSummaryIndexForMove;
@property (nonatomic) long long lastCheckedSummaryIndexForStand;
@property (strong, nonatomic) HKQuantity *lastTodayDistanceValue;
@property (strong, nonatomic) HKQuantity *lastTodayExerciseGoal;
@property (strong, nonatomic) HKQuantity *lastTodayExerciseValue;
@property (strong, nonatomic) HKQuantity *lastTodayMoveGoal;
@property (strong, nonatomic) HKQuantity *lastTodayMoveValue;
@property (nonatomic) unsigned long long lastTodayStandGoal;
@property (nonatomic) unsigned long long lastTodayStandValue;
@property (strong, nonatomic) HKQuantity *previousTodayExerciseValue;
@property (strong, nonatomic) HKQuantity *previousTodayMoveValue;
@property (nonatomic) unsigned long long previousTodayStandValue;

- (NSDate *)currentDateForEngine:(HDAchievementEngineV2 *)arg1;
- (HKQuantity *)todayActiveEnergyBurnedForEngine:(HDAchievementEngineV2 *)arg1;
- (long long)todayActivitySummaryIndexForEngine:(HDAchievementEngineV2 *)arg1;
- (HKQuantity *)todayDistanceForEngine:(HDAchievementEngineV2 *)arg1;
- (HKQuantity *)todayExerciseGoalForEngine:(HDAchievementEngineV2 *)arg1;
- (HKQuantity *)todayExerciseTimeForEngine:(HDAchievementEngineV2 *)arg1;
- (HKQuantity *)todayMoveGoalForEngine:(HDAchievementEngineV2 *)arg1;
- (unsigned long long)todayStandGoalForEngine:(HDAchievementEngineV2 *)arg1;
- (unsigned long long)todayStandHoursForEngine:(HDAchievementEngineV2 *)arg1;
- (NSArray *)workoutsForEngine:(HDAchievementEngineV2 *)arg1 endingAfterAnchor:(long long)arg2 newAnchor:(long long *)arg3;
- (HKQuantity *)yesterdayActiveEnergyBurnedForEngine:(HDAchievementEngineV2 *)arg1;
- (HKQuantity *)yesterdayExerciseGoalForEngine:(HDAchievementEngineV2 *)arg1;
- (HKQuantity *)yesterdayExerciseTimeForEngine:(HDAchievementEngineV2 *)arg1;
- (HKQuantity *)yesterdayMoveGoalForEngine:(HDAchievementEngineV2 *)arg1;
- (unsigned long long)yesterdayStandGoalForEngine:(HDAchievementEngineV2 *)arg1;
- (unsigned long long)yesterdayStandHoursForEngine:(HDAchievementEngineV2 *)arg1;
@end

