//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CompanionSync/SYSession.h>

@class NSMutableIndexSet, NSObject;
@protocol OS_dispatch_source;

@interface SYSendingSession : SYSession
{
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_dispatch_source> *_sessionTimer;
    NSObject<OS_dispatch_source> *_messageTimer;
    unsigned long long _batchIndex;
    NSMutableIndexSet *_ackedBatchIndices;
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
        unsigned int remoteStartSent:1;
        unsigned int remoteStartConfirmed:1;
        unsigned int remoteEndSent:1;
        unsigned int remoteEndConfirmed:1;
        unsigned int localErrorOccurred:1;
    } _flags;
}

- (void).cxx_destruct;
- (void)_confirmedEnd;
- (void)_confirmedStart;
- (void)_fetchNextBatch;
- (void)_handleEndSession:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_handleEndSessionResponse:(id)arg1 error:(id *)arg2;
- (void)_handleError:(id)arg1;
- (void)_handleRestartSession:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_handleRestartSessionResponse:(id)arg1 error:(id *)arg2;
- (BOOL)_handleStartSessionResponse:(id)arg1 error:(id *)arg2;
- (void)_handleSyncBatch:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_handleSyncBatchResponse:(id)arg1 error:(id *)arg2;
- (BOOL)_hasSentEnd;
- (BOOL)_hasValidSessionID:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_installStateListener;
- (void)_installTimers;
- (BOOL)_localErrorOccurred;
- (id)_newMessageHeader;
- (void)_notifyErrorAndShutdown;
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_processNextState;
- (void)_resolvedIdentifier:(id)arg1 forResponse:(id)arg2;
- (void)_resolvedIdentifierForRequest:(id)arg1;
- (void)_sendEndSessionAndError:(id)arg1;
- (void)_sendSyncBatch:(id)arg1 nextState:(long long)arg2;
- (void)_sendSyncCancelled;
- (void)_sendSyncCompleteAndRunBlock:(CDUnknownBlockType)arg1;
- (void)_sendSyncRestart;
- (void)_sentEnd;
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_sentStart;
- (void)_sessionFinished;
- (void)_setCancelled;
- (void)_setComplete;
- (void)_setLocalErrorOccurred;
- (void)_setMessageTimer;
- (void)_setStateQuietly:(long long)arg1;
- (void)_tweakMessageHeader:(id)arg1;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (void)cancel;
- (id)initWithService:(id)arg1 isReset:(BOOL)arg2;
- (BOOL)isResetSync;
- (BOOL)isSending;
- (void)setCanRestart:(BOOL)arg1;
- (void)setCanRollback:(BOOL)arg1;
- (void)setState:(long long)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (long long)state;
- (BOOL)wasCancelled;

@end

