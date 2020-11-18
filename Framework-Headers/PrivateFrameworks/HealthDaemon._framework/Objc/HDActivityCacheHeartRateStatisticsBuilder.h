//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHeartRateSummary, HKHeartRateSummaryStatistics, HKQuantity, NSDateInterval, NSMutableArray, NSMutableDictionary;

@interface HDActivityCacheHeartRateStatisticsBuilder : NSObject
{
    NSDateInterval *_dateInterval;
    long long _activityCacheIndex;
    vector_8ece868d _heartRateSamples;
    vector_89c96404 _workouts;
    HKQuantity *_restingHeartRate;
    HKQuantity *_walkingAverageHeartRate;
    HKHeartRateSummaryStatistics *_allDayStatistics;
    NSMutableArray *_workoutStatistics;
    NSMutableArray *_workoutRecoveryStatistics;
    NSMutableArray *_breatheStatistics;
    NSMutableDictionary *_averageCalculatorsByWorkoutUUID;
    NSMutableDictionary *_recoveryReadingsByWorkoutUUID;
    NSMutableDictionary *_breatheSessionReadingsBySessionUUID;
    NSMutableDictionary *_breatheSessionDateIntervalBySessionUUID;
}

@property (readonly, nonatomic) HKHeartRateSummary *heartRateSummary;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addBeatsPerMinute:(double)arg1 time:(double)arg2 toSessionStatistics:(id)arg3;
- (void)_addHeartRateSamples:(const vector_8ece868d *)arg1 toStatistics:(id)arg2;
- (void)_addHeartRateSamplesToAllStatistics:(const vector_8ece868d *)arg1;
- (void)_addHeartRateStatisticsForNewWorkouts:(const vector_89c96404 *)arg1;
- (id)_averageCalculatorForWorkoutStatistics:(id)arg1;
- (id)_filteredRecoveryReadings:(id)arg1;
- (id)_recoveryReadingsForWorkoutStatistics:(id)arg1;
- (id)_sessionReadingsForBreatheStatistics:(id)arg1;
- (void)_updateMetricsForBreatheStatistics:(id)arg1;
- (void)_updateMetricsForSessionStatistics:(id)arg1;
- (void)_updateMetricsForWorkoutRecoveryStatistics:(id)arg1;
- (void)_updateMetricsForWorkoutStatistics:(id)arg1;
- (void)addBreatheSessions:(const vector_b2eb559c *)arg1;
- (void)addHeartRateSamples:(const vector_8ece868d *)arg1;
- (void)addWorkouts:(const vector_89c96404 *)arg1;
- (id)heartRateDateInterval;
- (id)initWithDateInterval:(id)arg1 activityCacheIndex:(long long)arg2;
- (id)restingHeartRate;
- (id)walkingAverageHeartRate;

@end

