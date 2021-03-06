//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class _HKQuantityDistributionQueryServerConfiguration;

@interface HDQuantityDistributionQueryServer : HDQueryServer
{
    _HKQuantityDistributionQueryServerConfiguration *_quantityDistributionQueryServerConfiguration;
}

@property (readonly, copy, nonatomic) _HKQuantityDistributionQueryServerConfiguration *quantityDistributionQueryServerConfiguration; // @synthesize quantityDistributionQueryServerConfiguration=_quantityDistributionQueryServerConfiguration;

+ (Class)queryClass;
- (void).cxx_destruct;
- (id)_buildStatisticsCollectionCalculatorForAverageAndDuration;
- (id)_categoryPredicateWithTypeCode:(long long)arg1 matchingValue:(id)arg2 errorOut:(id *)arg3;
- (id)_combineDistributionResults:(id)arg1 withAverageAndDurations:(id)arg2 bucketUnits:(id)arg3;
- (id)_combineDistributionResults:(id)arg1 withIntersectingDateIntervals:(id)arg2;
- (id)_intervalsForContextStyle:(long long)arg1 includeContextIdentifiers:(BOOL)arg2 errorOut:(id *)arg3;
- (id)_mindfulnessPredicateWithErrorOut:(id *)arg1;
- (id)_queue_fetchHistogramDataWithError:(id *)arg1;
- (void)_queue_start;
- (id)_sqlitePredicateForObjectType:(id)arg1 errorOut:(id *)arg2;
- (id)_walkSampleDatesWithPredicate:(id)arg1 entityClass:(Class)arg2 errorOut:(id *)arg3;
- (id)_walkSampleDatesWithPredicate:(id)arg1 entityClass:(Class)arg2 includeUUID:(BOOL)arg3 errorOut:(id *)arg4;
- (BOOL)_walkSampleValuesWithPredicate:(id)arg1 errorOut:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_workoutPredicateWithErrorOut:(id *)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end

