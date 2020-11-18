//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HKActivityChartPointSummary : NSObject
{
    NSString *_formattedDateString;
    NSString *_workoutSummaryString;
    NSString *_energyBurnSummaryString;
    NSString *_activityGoalSummaryString;
}

@property (readonly, nonatomic) NSString *activityGoalSummaryString; // @synthesize activityGoalSummaryString=_activityGoalSummaryString;
@property (readonly, nonatomic) NSString *energyBurnSummaryString; // @synthesize energyBurnSummaryString=_energyBurnSummaryString;
@property (readonly, nonatomic) NSString *formattedDateString; // @synthesize formattedDateString=_formattedDateString;
@property (readonly, nonatomic) NSString *workoutSummaryString; // @synthesize workoutSummaryString=_workoutSummaryString;

+ (id)_dateFormatter;
+ (id)_distanceFormatter;
+ (id)_energyFormatter;
+ (id)_workoutDurationFormatter;
- (void).cxx_destruct;
- (void)_createWorkoutSummaryWithWorkouts:(id)arg1;
- (id)description;
- (id)initWithActivityCache:(id)arg1 workouts:(id)arg2;

@end

