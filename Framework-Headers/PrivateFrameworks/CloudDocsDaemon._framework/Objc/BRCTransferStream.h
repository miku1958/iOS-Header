//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCLifeCycle-Protocol.h>
#import <CloudDocsDaemon/BRCSuspendable-Protocol.h>

@class BRCAccountSession, BRCDeadlineSource, BRCSyncContext, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface BRCTransferStream : NSObject <BRCLifeCycle, BRCSuspendable>
{
    BRCAccountSession *_session;
    BRCSyncContext *_syncContext;
    long long _nextFire;
    NSMutableDictionary *_inFlightOpByID;
    BRCDeadlineSource *_schedulingSource;
    NSObject<OS_dispatch_workloop> *_transferWorkloop;
    unsigned long long _inFlightSize;
    NSObject<OS_dispatch_group> *_transferBatchRequestWaiter;
    BOOL _isWaitingForTransferBatch;
    BOOL _hasReachedCap;
    _Atomic int _multipleItemsInteractiveSchedulingCount;
    BOOL _isCancelled;
    CDUnknownBlockType _streamDidBecomeReadyToTransferRecords;
    unsigned long long _maxCountOfBatchesInFlight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long inFlightSize; // @synthesize inFlightSize=_inFlightSize;
@property (readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property (nonatomic) unsigned long long maxCountOfBatchesInFlight; // @synthesize maxCountOfBatchesInFlight=_maxCountOfBatchesInFlight;
@property (readonly) NSArray *operations;
@property (copy, nonatomic) CDUnknownBlockType streamDidBecomeReadyToTransferRecords; // @synthesize streamDidBecomeReadyToTransferRecords=_streamDidBecomeReadyToTransferRecords;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addBatchOperation:(id)arg1;
- (void)_evaluateCap;
- (void)_schedule;
- (void)_scheduleOneBatchWithQoS:(long long)arg1;
- (void)_setReachedCap:(BOOL)arg1;
- (void)addAliasItem:(id)arg1 toTransferWithID:(id)arg2 operationID:(id)arg3;
- (void)addBatchOperation:(id)arg1;
- (void)cancel;
- (void)cancelTransferID:(id)arg1 operationID:(id)arg2;
- (void)close;
- (void)endSchedulingMultipleItemsInteractively;
- (void)forceSchedulingPendingInteractiveTransfers;
- (id)initWithSyncContext:(id)arg1 name:(id)arg2 scheduler:(id)arg3;
- (double)progressForTransferID:(id)arg1 operationID:(id)arg2;
- (void)resume;
- (void)signal;
- (void)signalWithDeadline:(long long)arg1;
- (void)startSchedulingMultipleItemsInteractively;
- (void)suspend;

@end

