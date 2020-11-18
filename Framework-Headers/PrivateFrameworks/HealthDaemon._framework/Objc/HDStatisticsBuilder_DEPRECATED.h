//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, HKQuantityType, NSArray, NSMutableDictionary, NSSet, _HKFilter, _HKTimePeriod;

@interface HDStatisticsBuilder_DEPRECATED : NSObject
{
    NSMutableDictionary *_sourceIDsByBundleIdentifier;
    NSMutableDictionary *_bundleIdentifiersBySourceID;
    HKQuantityType *_quantityType;
    _HKFilter *_filter;
    unsigned long long _statisticsOptions;
    unsigned long long _mergeStrategy;
    NSSet *_restrictedSourceEntities;
    HDProfile *_profile;
    NSArray *_orderedSources;
    _HKTimePeriod *_timePeriod;
    long long _anchor;
}

@property (nonatomic) long long anchor; // @synthesize anchor=_anchor;
@property (readonly, nonatomic) _HKFilter *filter; // @synthesize filter=_filter;
@property (readonly, nonatomic) unsigned long long mergeStrategy; // @synthesize mergeStrategy=_mergeStrategy;
@property (readonly, nonatomic) NSArray *orderedSources; // @synthesize orderedSources=_orderedSources;
@property (readonly, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (readonly, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
@property (readonly, nonatomic) NSSet *restrictedSourceEntities; // @synthesize restrictedSourceEntities=_restrictedSourceEntities;
@property (readonly, nonatomic) unsigned long long statisticsOptions; // @synthesize statisticsOptions=_statisticsOptions;
@property (strong, nonatomic) _HKTimePeriod *timePeriod; // @synthesize timePeriod=_timePeriod;

+ (id)statisticsBuilderWithQuantityType:(id)arg1 filter:(id)arg2 statisticsOptions:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4 restrictedSourceEntities:(id)arg5 profile:(id)arg6;
- (void).cxx_destruct;
- (id)_buildPredicateWithError:(id *)arg1;
- (id)_bundleIdentifierForSourceId:(id)arg1;
- (void)_enumerateSamplesWithType:(id)arg1 predicate:(id)arg2 database:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (BOOL)_initialStatisticsForCollection:(id)arg1 database:(id)arg2 shouldStopProcessing:(CDUnknownBlockType)arg3 shouldSuspend:(CDUnknownBlockType)arg4 batchHandler:(CDUnknownBlockType)arg5 error:(id *)arg6;
- (id)_initialStatisticsForTimePeriod:(id)arg1 database:(id)arg2 shouldStopProcessing:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (void)_setupOrderedSources;
- (BOOL)_setupStatistics:(id)arg1 withCalculator:(id)arg2;
- (void)_updateSourceCache:(id)arg1 sourceIDs:(id)arg2;
- (id)_updateStatisticsCollection:(id)arg1 withSamples:(id)arg2 error:(id *)arg3;
- (id)buildStatisticsObjectFromCalculator:(id)arg1;
- (id)collectionCalculatorWithStatisticsCollection:(id)arg1;
- (id)collectionCalculatorWithTimePeriod:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)initWithQuantityType:(id)arg1 filter:(id)arg2 statisticsOptions:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4 restrictedSourceEntities:(id)arg5 profile:(id)arg6;
- (BOOL)initialStatisticsForCollection:(id)arg1 shouldStopProcessing:(CDUnknownBlockType)arg2 shouldSuspend:(CDUnknownBlockType)arg3 batchHandler:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (id)initialStatisticsShouldStopProcessing:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)orderedSourceIDsAndBundleIdentifierMapping:(id)arg1 error:(id *)arg2;
- (id)orderedSourceIDsFromSources:(id)arg1 sourcesByID:(id)arg2 type:(id)arg3 profile:(id)arg4 error:(id *)arg5;
- (id)orderedSourcesFromUnorderedIDs:(id)arg1 error:(id *)arg2;
- (id)updateStatisticsCollection:(id)arg1 withSamples:(id)arg2 anchor:(id)arg3 restrictedSourceEntities:(id)arg4 error:(id *)arg5;

@end

