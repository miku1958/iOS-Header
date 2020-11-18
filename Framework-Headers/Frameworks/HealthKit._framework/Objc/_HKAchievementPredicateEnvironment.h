//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKBaseAchievementPredicateEnvironment.h>

@class NSString, _HKAchievementPredicateActivityDataEnvironment, _HKAchievementPredicateDatesEnvironment, _HKAchievementPredicateWorkoutsEnvironment;

@interface _HKAchievementPredicateEnvironment : _HKBaseAchievementPredicateEnvironment
{
    NSString *_currentCountryCode;
    NSString *_currentDefinitionIdentifier;
    _HKAchievementPredicateActivityDataEnvironment *_activityData;
    _HKAchievementPredicateDatesEnvironment *_dates;
    _HKAchievementPredicateWorkoutsEnvironment *_workouts;
}

@property (readonly, nonatomic) _HKAchievementPredicateActivityDataEnvironment *activityData; // @synthesize activityData=_activityData;
@property (readonly, nonatomic) NSString *currentCountryCode;
@property (readonly, nonatomic) NSString *currentDefinitionIdentifier;
@property (readonly, nonatomic) _HKAchievementPredicateDatesEnvironment *dates; // @synthesize dates=_dates;
@property (readonly, nonatomic) _HKAchievementPredicateWorkoutsEnvironment *workouts; // @synthesize workouts=_workouts;

- (void).cxx_destruct;
- (id)initWithActivityDataEnvironment:(id)arg1 datesEnvironment:(id)arg2 workoutsEnvironment:(id)arg3;
- (void)setCurrentDefinitionIdentifier:(id)arg1;
- (void)setCurrentLocale:(id)arg1;

@end

