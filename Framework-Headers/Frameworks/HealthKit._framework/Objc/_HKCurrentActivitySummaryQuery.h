//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@class NSDictionary;

@interface _HKCurrentActivitySummaryQuery : HKQuery
{
    CDUnknownBlockType _updateHandler;
    NSDictionary *_collectionIntervals;
}

@property (copy, nonatomic, getter=_collectionIntervals, setter=_setCollectionIntervals:) NSDictionary *collectionIntervals; // @synthesize collectionIntervals=_collectionIntervals;

+ (Class)_queryServerDataObjectClass;
- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (CDUnknownBlockType)_queue_errorHandler;
- (BOOL)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (BOOL)_requiresValidSampleType;
- (void)deliverActivitySummaries:(id)arg1 queryUUID:(id)arg2;
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1;

@end
