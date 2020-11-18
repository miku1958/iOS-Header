//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKHeartRateSummaryStatistics, HKQuantity, NSArray, NSDateInterval;

@interface HKHeartRateSummary : NSObject <NSSecureCoding>
{
    long long _activityCacheIndex;
    NSDateInterval *_heartRateDateInterval;
    HKQuantity *_restingHeartRate;
    HKQuantity *_walkingAverageHeartRate;
    HKHeartRateSummaryStatistics *_allDayStatistics;
    NSArray *_workoutStatistics;
    NSArray *_workoutRecoveryStatistics;
    NSArray *_breatheStatistics;
}

@property (nonatomic) long long activityCacheIndex; // @synthesize activityCacheIndex=_activityCacheIndex;
@property (strong, nonatomic) HKHeartRateSummaryStatistics *allDayStatistics; // @synthesize allDayStatistics=_allDayStatistics;
@property (strong, nonatomic) NSArray *breatheStatistics; // @synthesize breatheStatistics=_breatheStatistics;
@property (strong, nonatomic) NSDateInterval *heartRateDateInterval; // @synthesize heartRateDateInterval=_heartRateDateInterval;
@property (strong, nonatomic) HKQuantity *restingHeartRate; // @synthesize restingHeartRate=_restingHeartRate;
@property (strong, nonatomic) HKQuantity *walkingAverageHeartRate; // @synthesize walkingAverageHeartRate=_walkingAverageHeartRate;
@property (strong, nonatomic) NSArray *workoutRecoveryStatistics; // @synthesize workoutRecoveryStatistics=_workoutRecoveryStatistics;
@property (strong, nonatomic) NSArray *workoutStatistics; // @synthesize workoutStatistics=_workoutStatistics;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActivityCacheIndex:(long long)arg1 heartRateDateInterval:(id)arg2 restingHeartRate:(id)arg3 walkingAverageHeartRate:(id)arg4 allDayStatistics:(id)arg5 workoutStatistics:(id)arg6 workoutRecoveryStatistics:(id)arg7 breatheStatistics:(id)arg8;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
