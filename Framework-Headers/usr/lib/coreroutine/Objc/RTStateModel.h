//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, RTMetricManager, RTStateModelEarliestLatestEl;
@protocol OS_dispatch_queue;

@interface RTStateModel : NSObject
{
    RTStateModelEarliestLatestEl *_earliestLatestStateModelEl;
    NSObject<OS_dispatch_queue> *_queue;
    RTMetricManager *_metricManager;
    NSMutableDictionary *_stateModelLut;
}

@property (strong, nonatomic) RTStateModelEarliestLatestEl *earliestLatestStateModelEl; // @synthesize earliestLatestStateModelEl=_earliestLatestStateModelEl;
@property (strong, nonatomic) RTMetricManager *metricManager; // @synthesize metricManager=_metricManager;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSMutableDictionary *stateModelLut; // @synthesize stateModelLut=_stateModelLut;

+ (double)deriveClusterThresholdFromUncClustAplha:(double)arg1 andUncClustBeta:(double)arg2;
+ (double)getDistfromLat:(double)arg1 fromLon:(double)arg2 toLat:(double)arg3 toLon:(double)arg4;
+ (double)getOutOfStateConfidenceWithOneStatePred:(id)arg1;
- (void).cxx_destruct;
- (id)_getNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3;
- (id)_getRecursivelyAllLOIsWithinDistance:(double)arg1 ofLocation:(id)arg2 previouslyFoundLocationsOfInterest:(id)arg3;
- (BOOL)anyClusterOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 andEnteredEarlierThan:(double)arg3;
- (double)calculateConfidenceWithNearbyLOIs:(unsigned long long)arg1 impossibleTransitions:(unsigned long long)arg2;
- (unsigned long long)calculateDominantLocationsWithOptions:(id)arg1;
- (unsigned long long)calculateNumberOfImpossibleTransitions;
- (unsigned long long)calculateNumberOfNearbyLOIs;
- (unsigned int)calculateStateModelAvailabilityPrecisionRecallOnDate:(id)arg1 predictedLocations:(id)arg2 isHighConfidenceOnly:(BOOL)arg3;
- (void)collectMetricsWithIntervalSinceLastUpdate:(double)arg1;
- (id)findClusterWithLocation:(id)arg1;
- (id)getAllLOIsWithinDistance:(double)arg1 ofLocation:(id)arg2;
- (struct CLLocationCoordinate2D)getEndingCoordinateWithStartingLocation:(id)arg1 distance:(double)arg2;
- (id)getLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2;
- (double)getMaxDistFromInterval:(double)arg1 withVelocity:(double)arg2;
- (id)getMostRecentLocationForDate:(id)arg1;
- (id)getNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3;
- (double)getNumberOfWeeksInStateModel;
- (id)getOOStClusterData:(double)arg1 predictionWindow:(double)arg2 numOfWeeks:(int)arg3 refLoc:(id)arg4;
- (id)getPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2;
- (id)getPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)getPredictedLocationsOfInterestWithCriteria:(id)arg1;
- (id)init;
- (id)initWithLearnedLocationsOfInterest:(id)arg1 metricManager:(id)arg2 queue:(id)arg3;
- (void)logStateModelAvailabilityMetricWithAvailability:(unsigned long long)arg1 precisionRecall:(unsigned int)arg2;
- (void)logStateModelAvailabilityMetricWithIntervalSinceLastUpdate:(double)arg1 untilNow:(id)arg2;
- (void)logStateModelConfidenceMetric;
- (void)logStateModelDominantPlacesMetric;
- (void)logStateModelEntryExitsStandardDeviations;
- (void)logStateModelLengthMetric;
- (void)updateInternalState;

@end
