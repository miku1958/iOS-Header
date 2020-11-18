//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CompanionSync/SYSession.h>

@class NSMutableIndexSet, NSObject;
@protocol OS_dispatch_source;

@interface SYReceivingSession : SYSession
{
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_dispatch_source> *_sessionTimer;
    NSMutableIndexSet *_receivedBatchIndices;
    unsigned long long _activity;
    int _flagsLock;
    struct {
        unsigned int state:4;
        unsigned int canRestart:1;
        unsigned int canRollback:1;
        unsigned int isResetSync:1;
        unsigned int started:1;
        unsigned int cancelled:1;
        unsigned int completed:1;
        unsigned int changedMetadata:1;
    } _flags;
}

@property (readonly, nonatomic) BOOL metadataModified;

- (void).cxx_destruct;
- (void)_handleEndSession:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_handleEndSessionResponse:(id)arg1 error:(id *)arg2;
- (void)_handleRestartSession:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_handleRestartSessionResponse:(id)arg1 error:(id *)arg2;
- (BOOL)_handleStartSessionResponse:(id)arg1 error:(id *)arg2;
- (void)_handleSyncBatch:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_handleSyncBatchResponse:(id)arg1 error:(id *)arg2;
- (BOOL)_hasStarted;
- (void)_installStateListener;
- (void)_installTimers;
- (BOOL)_isMissingSyncBatches;
- (id)_newMessageHeader;
- (void)_notifyErrorAndShutdown;
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_processNextState;
- (void)_resolvedIdentifier:(id)arg1 forResponse:(id)arg2;
- (void)_resolvedIdentifierForRequest:(id)arg1;
- (void)_sendEndSessionAndError:(id)arg1;
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_sessionCancelled;
- (void)_sessionFinished;
- (void)_sessionRestarted;
- (void)_setCancelled;
- (void)_setCompleted;
- (void)_setStarted;
- (void)_setStateQuietly:(long long)arg1;
- (void)_tweakMessageHeader:(id)arg1;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (void)cancel;
- (id)initWithService:(id)arg1 isReset:(BOOL)arg2 metadata:(id)arg3;
- (BOOL)isResetSync;
- (BOOL)isSending;
- (void)setCanRestart:(BOOL)arg1;
- (void)setCanRollback:(BOOL)arg1;
- (void)setSessionMetadata:(id)arg1;
- (void)setState:(long long)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (long long)state;
- (BOOL)wasCancelled;

@end

