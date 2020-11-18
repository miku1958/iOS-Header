//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@class HKQueryAnchor;

@interface HKAnchoredObjectQuery : HKQuery
{
    BOOL _initialHandlerCalled;
    BOOL _includeDeletedObjects;
    CDUnknownBlockType _updateHandler;
    CDUnknownBlockType _completionHandler;
    HKQueryAnchor *_anchor;
    unsigned long long _limit;
}

@property (strong, nonatomic) HKQueryAnchor *anchor; // @synthesize anchor=_anchor;
@property (readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (nonatomic) BOOL includeDeletedObjects; // @synthesize includeDeletedObjects=_includeDeletedObjects;
@property (nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property (copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;

+ (Class)_queryServerDataObjectClass;
- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (CDUnknownBlockType)_queue_errorHandler;
- (BOOL)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (void)deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 withAnchor:(id)arg3 forQuery:(id)arg4;
- (id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(unsigned long long)arg3 limit:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(id)arg3 limit:(unsigned long long)arg4 resultsHandler:(CDUnknownBlockType)arg5;

@end

