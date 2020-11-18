//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKBaseAchievementPredicateEnvironment.h>

@class HKWorkout, NSNumber, NSUUID;

@interface _HKAchievementPredicateWorkoutEnvironment : _HKBaseAchievementPredicateEnvironment
{
    HKWorkout *_workout;
}

@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) double calories;
@property (readonly, nonatomic) double distanceInKilometers;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSNumber *endDate;
@property (readonly, nonatomic) NSNumber *startDate;
@property (readonly, nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)initWithWorkout:(id)arg1;

@end
