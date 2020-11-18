//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDBatchedQueryServer.h>

@class HKQueryAnchor, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HDAnchoredObjectQueryServer : HDBatchedQueryServer
{
    BOOL _deliversUpdates;
    BOOL _initialResultsSent;
    BOOL _objectsDeleted;
    BOOL _includeDeletedObjects;
    HKQueryAnchor *_startAnchor;
    unsigned long long _deliveredResults;
    NSObject<OS_dispatch_queue> *_batchQueue;
    NSMutableArray *_addedSamplesPendingResume;
    NSMutableArray *_deletedSamplesPendingResume;
    BOOL _shouldResetAnchor;
    HKQueryAnchor *_anchor;
    unsigned long long _limit;
}

@property (readonly, nonatomic) HKQueryAnchor *anchor; // @synthesize anchor=_anchor;
@property (readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;

- (void).cxx_destruct;
- (id)_maxRowIDInDatabaseWithError:(id *)arg1;
- (void)_queue_deliverSamples:(id)arg1 deletedObjects:(id)arg2 anchor:(id)arg3 clearPendingSamples:(BOOL)arg4 deliverResults:(BOOL)arg5 description:(id)arg6;
- (void)_queue_handleBatchedQueryResult:(long long)arg1 error:(id)arg2;
- (void)_queue_samplesWereRemovedWithAnchor:(id)arg1;
- (BOOL)_queue_shouldAcceptUpdates;
- (BOOL)_queue_shouldAccumulateUpdates;
- (void)_queue_start;
- (void)_queue_startForInitialResults;
- (void)_queue_startForUpdate;
- (BOOL)_shouldListenForUpdates;
- (BOOL)_shouldObserveOnPause;
- (id)anchoredObjectQueryClient;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (id)requiredEntitlements;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;

@end
