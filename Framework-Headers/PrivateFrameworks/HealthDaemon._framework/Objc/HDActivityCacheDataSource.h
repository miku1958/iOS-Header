//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDActivityCacheStatisticsBuilderSourceOrderDelegate-Protocol.h>
#import <HealthDaemon/HDDataObserver-Protocol.h>

@class HDActivityCacheStatisticsBuilder, HDProfile, HKCategoryType, HKWorkoutType, NSSet, NSString, _HKDelayedOperation, _HKTimePeriod;
@protocol OS_dispatch_queue;

@interface HDActivityCacheDataSource : NSObject <HDActivityCacheStatisticsBuilderSourceOrderDelegate, HDDataObserver>
{
    vector_e4bf223f _previousWatchActivationLogEntryVector;
    BOOL _previousWatchActivationLogEntryIsSet;
    long long _quantitySampleAnchor;
    long long _nonQuantitySampleAnchor;
    NSString *_nonQuantitySamplesQueryString;
    NSString *_quantitySamplesQueryString;
    HKCategoryType *_standHoursType;
    HKCategoryType *_deepBreathingSessionType;
    HKWorkoutType *_workoutType;
    HKCategoryType *_watchActivationType;
    NSSet *_allObservedTypes;
    NSSet *_observedQuantityTypes;
    _HKDelayedOperation *_updateOperation;
    _HKDelayedOperation *_rebuildOperation;
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
    HDActivityCacheStatisticsBuilder *_targetDayStatisticsBuilder;
    HDActivityCacheStatisticsBuilder *_previousDayStatisticsBuilder;
    _HKTimePeriod *_targetDayDateRange;
    _HKTimePeriod *_previousDayDateRange;
    NSString *_targetDayStatisticsBuilderTag;
    NSString *_previousDayStatisticsBuilderTag;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSSet *observedQuantityTypes; // @synthesize observedQuantityTypes=_observedQuantityTypes;
@property (strong, nonatomic) _HKTimePeriod *previousDayDateRange; // @synthesize previousDayDateRange=_previousDayDateRange;
@property (readonly, nonatomic) HDActivityCacheStatisticsBuilder *previousDayStatisticsBuilder; // @synthesize previousDayStatisticsBuilder=_previousDayStatisticsBuilder;
@property (strong, nonatomic) NSString *previousDayStatisticsBuilderTag; // @synthesize previousDayStatisticsBuilderTag=_previousDayStatisticsBuilderTag;
@property (readonly) Class superclass;
@property (strong, nonatomic) _HKTimePeriod *targetDayDateRange; // @synthesize targetDayDateRange=_targetDayDateRange;
@property (readonly, nonatomic) HDActivityCacheStatisticsBuilder *targetDayStatisticsBuilder; // @synthesize targetDayStatisticsBuilder=_targetDayStatisticsBuilder;
@property (strong, nonatomic) NSString *targetDayStatisticsBuilderTag; // @synthesize targetDayStatisticsBuilderTag=_targetDayStatisticsBuilderTag;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_nonQuantitySampleRequiresWatchSource:(long long)arg1;
- (id)_nonQuantitySamplesQueryStringWithSampleTypes:(id)arg1;
- (id)_overallTimePeriod;
- (id)_parameterStringWithCount:(long long)arg1;
- (BOOL)_primeNonQuantitySamplesWithError:(id *)arg1;
- (BOOL)_primePreviousActivationLogEntryWithError:(id *)arg1;
- (BOOL)_primeQuantitySamplesWithError:(id *)arg1;
- (BOOL)_quantitySampleIsValidWithTypeCode:(long long)arg1 workoutSourceIdentifier:(long long)arg2 isWatchSource:(BOOL)arg3;
- (id)_quantitySamplesQueryStringWithQuatityTypes:(id)arg1;
- (BOOL)_quantityTypeRequiresWatchSource:(long long)arg1;
- (void)_queue_deregisterForSamplesAdded;
- (void)_queue_registerForSamplesAdded;
- (BOOL)_readyToPrimeActivationLogEntries;
- (BOOL)_readyToPrimeStatisticsBuilders;
- (void)_resetEverything;
- (void)_resetPreviousWatchActivationLogEntries;
- (void)_resetStatisticsBuilders;
- (void)_samplesAddedToWorkoutNotification:(id)arg1;
- (BOOL)_timePeriodsAreSet;
- (BOOL)_typeIsValidFromCompanionWithoutWorkout:(long long)arg1;
- (BOOL)_updateStatisticsBuildersWithError:(id *)arg1;
- (id)activityCacheStatisticsBuilder:(id)arg1 sourceOrderForObjectType:(id)arg2;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 observedQuantityTypes:(id)arg2 updateOperation:(id)arg3 rebuildOperation:(id)arg4 queue:(id)arg5;
- (void)pauseUpdates;
- (void)resumeUpdates;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (BOOL)updateWithError:(id *)arg1;

@end

