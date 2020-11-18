//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CompanionSync/SYIncomingFullSyncSession.h>

@class NSMutableArray, NSMutableIndexSet, NSObject;
@protocol OS_dispatch_source;

@interface SYIncomingBatchSyncSession : SYIncomingFullSyncSession
{
    NSObject<OS_dispatch_source> *_sessionTimer;
    NSMutableIndexSet *_receivedBatchIndices;
    BOOL _hasReceivedEndSync;
    CDUnknownBlockType _completion;
    struct os_lock_handoff_s _queueLock;
    NSMutableArray *_incomingBatchQueue;
    BOOL canRestart;
    BOOL canRollback;
}

- (void).cxx_destruct;
- (void)_continueProcessing;
- (void)_handleBatchChunk:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleEndSync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sendEndSessionResponse:(id)arg1;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (id)initWithService:(id)arg1;
- (void)setCanRestart:(BOOL)arg1;
- (void)setCanRollback:(BOOL)arg1;

@end

