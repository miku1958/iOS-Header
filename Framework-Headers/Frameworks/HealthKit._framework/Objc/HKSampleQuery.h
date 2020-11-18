//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@class NSArray;

@interface HKSampleQuery : HKQuery
{
    unsigned long long _limit;
    NSArray *_sortDescriptors;
    CDUnknownBlockType _resultHandler;
}

@property (readonly) unsigned long long limit;
@property (readonly, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property (readonly, copy) NSArray *sortDescriptors;

+ (Class)_queryServerDataObjectClass;
- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (CDUnknownBlockType)_queue_errorHandler;
- (void)_queue_validate;
- (void)deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 withAnchor:(id)arg3 forQuery:(id)arg4;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;

@end

