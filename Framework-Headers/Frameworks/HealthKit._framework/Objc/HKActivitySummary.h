//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKQuantity, NSArray, NSDate, NSDateComponents;

@interface HKActivitySummary : NSObject <NSSecureCoding, NSCopying>
{
    long long _activitySummaryIndex;
    NSDateComponents *_dateComponents;
    HKQuantity *_activeEnergyBurned;
    HKQuantity *_appleExerciseTime;
    HKQuantity *_appleStandHours;
    HKQuantity *_distanceWalkingRunning;
    HKQuantity *_stepCount;
    HKQuantity *_activeEnergyBurnedGoal;
    HKQuantity *_appleExerciseTimeGoal;
    HKQuantity *_appleStandHoursGoal;
    HKQuantity *_deepBreathingDuration;
    HKQuantity *_pushCount;
    HKQuantity *_flightsClimbed;
    long long _wheelchairUse;
    NSArray *_dailyEnergyBurnedStatistics;
    NSArray *_dailyBriskMinutesStatistics;
    BOOL _dataLoading;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_creationDate;
    NSDate *_energyBurnedGoalDate;
}

@property (strong, nonatomic) HKQuantity *activeEnergyBurned;
@property (strong, nonatomic) HKQuantity *activeEnergyBurnedGoal;
@property (readonly, nonatomic, getter=_activeEnergyCompletionPercentage) double activeEnergyCompletionPercentage;
@property (nonatomic, getter=_activitySummaryIndex, setter=_setActivitySummaryIndex:) long long activitySummaryIndex;
@property (strong, nonatomic) HKQuantity *appleExerciseTime;
@property (strong, nonatomic) HKQuantity *appleExerciseTimeGoal;
@property (strong, nonatomic) HKQuantity *appleStandHours;
@property (strong, nonatomic) HKQuantity *appleStandHoursGoal;
@property (strong, nonatomic, getter=_creationDate, setter=_setCreationDate:) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (strong, nonatomic, getter=_dailyBriskMinutesStatistics, setter=_setDailyBriskMinutesStatistics:) NSArray *dailyBriskMinutesStatistics; // @synthesize dailyBriskMinutesStatistics=_dailyBriskMinutesStatistics;
@property (strong, nonatomic, getter=_dailyEnergyBurnedStatistics, setter=_setDailyEnergyBurnedStatistics:) NSArray *dailyEnergyBurnedStatistics; // @synthesize dailyEnergyBurnedStatistics=_dailyEnergyBurnedStatistics;
@property (nonatomic, getter=_isDataLoading, setter=_setDataLoading:) BOOL dataLoading; // @synthesize dataLoading=_dataLoading;
@property (strong, nonatomic, getter=_deepBreathingDuration, setter=_setDeepBreathingDuration:) HKQuantity *deepBreathingDuration;
@property (strong, nonatomic) HKQuantity *distanceWalkingRunning;
@property (strong, nonatomic, getter=_endDate, setter=_setEndDate:) NSDate *endDate; // @synthesize endDate=_endDate;
@property (strong, nonatomic, getter=_energyBurnedGoalDate, setter=_setEnergyBurnedGoalDate:) NSDate *energyBurnedGoalDate; // @synthesize energyBurnedGoalDate=_energyBurnedGoalDate;
@property (readonly, nonatomic, getter=_exerciseTimeCompletionPercentage) double exerciseTimeCompletionPercentage;
@property (strong, nonatomic, getter=_flightsClimbed, setter=_setFlightsClimbed:) HKQuantity *flightsClimbed;
@property (copy, nonatomic, getter=_gregorianDateComponents, setter=_setGregorianDateComponents:) NSDateComponents *gregorianDateComponents;
@property (readonly, nonatomic, getter=_hasMoveGoal) BOOL hasMoveGoal;
@property (strong, nonatomic, getter=_pushCount, setter=_setPushCount:) HKQuantity *pushCount;
@property (readonly, nonatomic, getter=_standHoursCompletionPercentage) double standHoursCompletionPercentage;
@property (strong, nonatomic, getter=_startDate, setter=_setStartDate:) NSDate *startDate; // @synthesize startDate=_startDate;
@property (strong, nonatomic) HKQuantity *stepCount;
@property (nonatomic, getter=_wheelchairUse, setter=_setWheelchairUse:) long long wheelchairUse;

+ (id)_highestEnergyBurnedActivityCacheAmongCaches:(id)arg1;
+ (id)_mostSignificantCacheAmongCaches:(id)arg1;
+ (BOOL)_validateActivitySummaryDateComponents:(id)arg1 errorMessage:(id *)arg2;
+ (BOOL)_validateActivitySummaryDateComponentsRange:(id)arg1 endDateComponents:(id)arg2 errorMessage:(id *)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_allFieldsAreEqual:(id)arg1;
- (id)_decodeQuantityFromCoder:(id)arg1 forKey:(id)arg2 unit:(id)arg3;
- (void)_encodeQuantity:(id)arg1 withCoder:(id)arg2 key:(id)arg3 unit:(id)arg4;
- (BOOL)_hasExerciseGoal;
- (BOOL)_hasStandHoursGoal;
- (id)_initWithActivityCache:(id)arg1 shouldIncludePrivateProperties:(BOOL)arg2;
- (double)_percentageCompleteWithQuantity:(id)arg1 goalQuantity:(id)arg2 unit:(id)arg3;
- (BOOL)_useHourlyGoalComparison;
- (void)_validateQuantityAssignment:(id)arg1 expectedUnit:(id)arg2 propertyName:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dateComponentsForCalendar:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

