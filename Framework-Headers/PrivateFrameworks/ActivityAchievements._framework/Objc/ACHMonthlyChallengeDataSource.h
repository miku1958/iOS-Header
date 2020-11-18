//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACHActivitySummaryUtility, ACHWorkoutUtility;

@interface ACHMonthlyChallengeDataSource : NSObject
{
    ACHWorkoutUtility *_workoutUtility;
    ACHActivitySummaryUtility *_activitySummaryUtility;
}

@property (weak, nonatomic) ACHActivitySummaryUtility *activitySummaryUtility; // @synthesize activitySummaryUtility=_activitySummaryUtility;
@property (weak, nonatomic) ACHWorkoutUtility *workoutUtility; // @synthesize workoutUtility=_workoutUtility;

- (void).cxx_destruct;
- (double)caloriesDuringDateComponentInterval:(id)arg1;
- (double)exerciseMinutesDuringDateComponentInterval:(id)arg1;
- (id)initWithActivitySummaryUtility:(id)arg1 workoutUtility:(id)arg2;
- (long long)numberOfAllRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfDaysDoublingMoveGoalDuringDateComponentInterval:(id)arg1;
- (long long)numberOfExerciseRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfMoveRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfStandRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfWorkoutsCompletedDuringDateInterval:(id)arg1;
- (double)valueForMonthlyChallengeType:(unsigned long long)arg1 forDateComponentInterval:(id)arg2 inCalendar:(id)arg3;
- (double)walkingRunningDistanceDuringDateComponentInterval:(id)arg1;

@end

