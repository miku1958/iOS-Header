//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class HDDataOriginProvenance, HDDemoDataGeneratorWorkoutConfiguration, HDProfile, HKActivityCache, _HDDemoDataActivityWorkoutState;

@interface HDDemoDataActivitySampleGenerator : HDDemoDataBaseSampleGenerator
{
    HDProfile *_profile;
    HDDataOriginProvenance *_provenance;
    double _nextActiveCaloriesSampleTime;
    double _nextAppleStandHourSampleTime;
    double _nextRestingCaloriesSampleTime;
    double _nextFallSampleTime;
    double _nextFlightsClimbedSampleTime;
    double _nextStepsSampleTime;
    double _nextExerciseMinuteTime;
    double _nextHeartRateRecoveryStartTime;
    double _nextHeartRateRecoveryStopTime;
    double _nextUVIndexSampleTime;
    double _lastUVIndexPeakTime;
    double _lastUVExposure;
    double _lastUVIndexPeak;
    HKActivityCache *_lastActivityCache;
    HDDemoDataGeneratorWorkoutConfiguration *_currentWorkoutConfiguration;
    _HDDemoDataActivityWorkoutState *_workoutState;
}

@property (strong, nonatomic) HDDemoDataGeneratorWorkoutConfiguration *currentWorkoutConfiguration; // @synthesize currentWorkoutConfiguration=_currentWorkoutConfiguration;
@property (strong, nonatomic) HKActivityCache *lastActivityCache; // @synthesize lastActivityCache=_lastActivityCache;
@property (nonatomic) double lastUVExposure; // @synthesize lastUVExposure=_lastUVExposure;
@property (nonatomic) double lastUVIndexPeak; // @synthesize lastUVIndexPeak=_lastUVIndexPeak;
@property (nonatomic) double lastUVIndexPeakTime; // @synthesize lastUVIndexPeakTime=_lastUVIndexPeakTime;
@property (nonatomic) double nextActiveCaloriesSampleTime; // @synthesize nextActiveCaloriesSampleTime=_nextActiveCaloriesSampleTime;
@property (nonatomic) double nextAppleStandHourSampleTime; // @synthesize nextAppleStandHourSampleTime=_nextAppleStandHourSampleTime;
@property (nonatomic) double nextExerciseMinuteTime; // @synthesize nextExerciseMinuteTime=_nextExerciseMinuteTime;
@property (nonatomic) double nextFallSampleTime; // @synthesize nextFallSampleTime=_nextFallSampleTime;
@property (nonatomic) double nextFlightsClimbedSampleTime; // @synthesize nextFlightsClimbedSampleTime=_nextFlightsClimbedSampleTime;
@property (nonatomic) double nextHeartRateRecoveryStartTime; // @synthesize nextHeartRateRecoveryStartTime=_nextHeartRateRecoveryStartTime;
@property (nonatomic) double nextHeartRateRecoveryStopTime; // @synthesize nextHeartRateRecoveryStopTime=_nextHeartRateRecoveryStopTime;
@property (nonatomic) double nextRestingCaloriesSampleTime; // @synthesize nextRestingCaloriesSampleTime=_nextRestingCaloriesSampleTime;
@property (nonatomic) double nextStepsSampleTime; // @synthesize nextStepsSampleTime=_nextStepsSampleTime;
@property (nonatomic) double nextUVIndexSampleTime; // @synthesize nextUVIndexSampleTime=_nextUVIndexSampleTime;
@property (weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) HDDataOriginProvenance *provenance; // @synthesize provenance=_provenance;
@property (strong, nonatomic) _HDDemoDataActivityWorkoutState *workoutState; // @synthesize workoutState=_workoutState;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_computeCyclingDistanceWithStepCount:(id)arg1 demoPerson:(id)arg2;
- (double)_computeExerciseCaloriesForDemoPerson:(id)arg1 duration:(double)arg2 activity:(long long)arg3 weight:(double)arg4;
- (double)_computeExerciseTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3;
- (id)_computeFlightsClimbedForDemoPerson:(id)arg1 atTime:(double)arg2;
- (double)_computePercentCooledForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)_computeSwimmingStrokesFromDistance:(id)arg1 demoPerson:(id)arg2;
- (double)_computeUVIndexForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)_computeWalkingRunningDistanceWithStepCount:(id)arg1 demoPerson:(id)arg2;
- (void)_generateEllipticalWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (void)_generateHIITWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (void)_generateRunningWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (void)_generateSwimmingSegmentDataWithStartDate:(id)arg1 segmentTime:(double)arg2 segmentDistance:(double)arg3 numLaps:(long long)arg4 strokeStyle:(long long)arg5 objectCollection:(id)arg6 demoPerson:(id)arg7;
- (void)_generateSwimmingWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (void)_generateWalkingWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (void)_generateWorkoutDataWithHeartRates:(id)arg1 recoveryHeartRates:(id)arg2 objectCollection:(id)arg3 demoPerson:(id)arg4;
- (void)_generateYogaWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (BOOL)_isDemoPersonCoolingDown:(id)arg1 atTime:(double)arg2;
- (BOOL)_isDemoPersonInWorkoutRecovery:(id)arg1 atTime:(double)arg2;
- (BOOL)_isDemoPersonSedentary:(id)arg1 atTime:(double)arg2;
- (BOOL)_isDemoPersonWalking:(id)arg1 atTime:(double)arg2 samplePeriod:(double)arg3;
- (long long)_pickActivityForTime:(double)arg1;
- (id)_sumQuantity:(id)arg1 withQuantity:(id)arg2;
- (void)_updateWorkoutStateWithActiveEnergyBurned:(id)arg1 distanceWalking:(id)arg2 distanceCycling:(id)arg3 currentTime:(double)arg4 date:(id)arg5 objectCollection:(id)arg6 demoPerson:(id)arg7;
- (id)activeCaloriesForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)appleStandHourForDemoPerson:(id)arg1 atTime:(double)arg2 activeCalories:(id)arg3 exerciseMinutes:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)exerciseMinutesForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)fallsForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)flightsClimbedForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)restingCaloriesForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)setProfile:(id)arg1 provenance:(id)arg2;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (id)stepsForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)uvIndexForDemoPerson:(id)arg1 atTime:(double)arg2;

@end

