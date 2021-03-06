//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RTDistanceCalculator, RTMetricManager;

@interface RTLearnedLocationAlgorithmMetricCalculator : NSObject
{
    RTDistanceCalculator *_distanceCalculator;
    RTMetricManager *_metricManager;
}

@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator; // @synthesize distanceCalculator=_distanceCalculator;
@property (readonly, nonatomic) RTMetricManager *metricManager; // @synthesize metricManager=_metricManager;

+ (unsigned long long)addressComponentMatchesBetweenInferredAddress:(id)arg1 trueAddress:(id)arg2;
+ (id)collectPlaceVersionsFromInferredPlaces:(id)arg1 existingPlaces:(id)arg2 rottedPlaces:(id)arg3;
+ (BOOL)inferredAddressComponent:(id)arg1 consistentWithTrueComponent:(id)arg2;
+ (id)newAlgorithmInstanceWithInference:(id)arg1 distanceCalculator:(id)arg2;
+ (id)normalize:(id)arg1;
+ (void)submitMetricsForInferredPlaces:(id)arg1 existingPlaces:(id)arg2 rottedPlaces:(id)arg3 distanceCalculator:(id)arg4 metricManager:(id)arg5;
+ (void)updateAlgorithmInstance:(id)arg1 byComparingInferredMapItem:(id)arg2 withTruthfulMapItem:(id)arg3 withDistanceCalculator:(id)arg4;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDistanceCalculator:(id)arg1 metricManager:(id)arg2;
- (void)submitMetricsForInferredPlaces:(id)arg1 existingPlaces:(id)arg2 rottedPlaces:(id)arg3;

@end

