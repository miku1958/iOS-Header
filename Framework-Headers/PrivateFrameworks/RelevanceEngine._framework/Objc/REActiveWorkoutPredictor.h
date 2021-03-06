//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

#import <RelevanceEngine/REActiveWorkoutPredictorProperties-Protocol.h>

@class HKQuery, NSDate, REUpNextTimer;

@interface REActiveWorkoutPredictor : REPredictor <REActiveWorkoutPredictorProperties>
{
    int _workoutStateNotifyToken;
    float _dailyAverageWorkouts;
    unsigned long long _numberOfWorkoutsPerformedToday;
    HKQuery *_workoutObservationQuery;
    REUpNextTimer *_workoutQueryCoalesceTimer;
    BOOL _hasActiveWorkout;
    NSDate *_lastCompletedWorkoutDate;
}

@property (readonly, nonatomic, getter=isActiveWorkout) BOOL activeWorkout;
@property (readonly, nonatomic) BOOL currentlyHasActiveWorkout;
@property (readonly, nonatomic) float dailyAverageWorkouts;
@property BOOL hasActiveWorkout; // @synthesize hasActiveWorkout=_hasActiveWorkout;
@property (strong) NSDate *lastCompletedWorkoutDate; // @synthesize lastCompletedWorkoutDate=_lastCompletedWorkoutDate;
@property (readonly, nonatomic) NSDate *lastWorkoutDate;
@property (readonly, nonatomic) unsigned long long numberOfWorkoutsPerformedToday;

+ (id)supportedFeatures;
+ (double)updateInterval;
- (void).cxx_destruct;
- (void)_cancelMonitoringWorkoutIfNeeded;
- (id)_init;
- (void)_processWorkoutHistoryData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_fetchWorkoutHistory;
- (void)_scheduleFetchWorkoutTimer;
- (void)_updateWorkoutState;
- (void)dealloc;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)pause;
- (void)resume;
- (void)update;

@end

