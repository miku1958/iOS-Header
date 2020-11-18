//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@class HKCorrelationType, NSDictionary;

@interface HKCorrelationQuery : HKQuery
{
    NSDictionary *_samplePredicates;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_filterDictionary;
    long long _behaviorVersion;
}

@property (nonatomic, getter=_behaviorVersion, setter=_setBehaviorVersion:) long long behaviorVersion; // @synthesize behaviorVersion=_behaviorVersion;
@property (readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) HKCorrelationType *correlationType;
@property (readonly, nonatomic) NSDictionary *filterDictionary; // @synthesize filterDictionary=_filterDictionary;
@property (readonly, copy) NSDictionary *samplePredicates;

+ (Class)_queryServerDataObjectClass;
- (void).cxx_destruct;
- (id)_predicateFilterClasses;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (CDUnknownBlockType)_queue_errorHandler;
- (void)_queue_validate;
- (void)deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 withAnchor:(id)arg3 forQuery:(id)arg4;
- (id)initWithType:(id)arg1 predicate:(id)arg2 samplePredicates:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

