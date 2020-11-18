//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKWorkout.h>

@interface HKWorkout (FitnessUI)
+ (BOOL)_isHeartRateSupportedInPowerSettingsForActivityType:(unsigned long long)arg1;
+ (BOOL)_isHeartRateSupportedInPrivacySettings;
+ (unsigned long long)fiui_associatedMetricForGoalType:(unsigned long long)arg1;
+ (BOOL)fiui_isHeartRateSupportedForActivityType:(unsigned long long)arg1 isIndoor:(BOOL)arg2;
+ (BOOL)fiui_shouldTrackPaceWithOdometerForActivityType:(unsigned long long)arg1;
+ (id)fiui_supportedGoalTypesForActivityType:(id)arg1;
+ (id)fiui_supportedMetricsForActivityType:(id)arg1;
+ (double)fiui_weightedAverageHeartRateWithSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_fiui_averagePaceQty;
- (id)fiui_activityType;
- (long long)fiui_averageCadence;
- (double)fiui_averagePace;
- (double)fiui_averagePower;
- (double)fiui_averageTimePerLap;
- (double)fiui_completionFactor;
- (id)fiui_connectedGymBrandName;
- (id)fiui_elevation;
- (id)fiui_eventsOfType:(long long)arg1;
- (BOOL)fiui_hasAveragePace;
- (BOOL)fiui_hasElevation;
- (BOOL)fiui_hasWeatherData;
- (BOOL)fiui_isConnectedGymWorkout;
- (id)fiui_lapLength;
- (long long)fiui_numberOfEventsOfType:(long long)arg1;
- (id)fiui_splitsFromDistanceSamples:(id)arg1 distanceInMetersPerSplit:(double)arg2;
- (long long)fiui_strokeStyle;
- (long long)fiui_swimmingLocationType;
- (double)fiui_totalStepCount;
@end

