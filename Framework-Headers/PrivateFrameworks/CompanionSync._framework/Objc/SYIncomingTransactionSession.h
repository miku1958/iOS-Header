//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CompanionSync/SYSession.h>

@class SYChangeMessage;

@interface SYIncomingTransactionSession : SYSession
{
    unsigned long long _activity;
    SYChangeMessage *_message;
    CDUnknownBlockType _completion;
    BOOL canRestart;
    BOOL canRollback;
    long long state;
}

- (void).cxx_destruct;
- (void)_sendCancelled;
- (void)_sendChanges;
- (void)_sendComplete;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (void)cancel;
- (void)didCompleteSession;
- (id)initWithService:(id)arg1 transaction:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)isResetSync;
- (BOOL)isSending;
- (unsigned long long)protocolVersion;
- (void)setCanRestart:(BOOL)arg1;
- (void)setCanRollback:(BOOL)arg1;
- (void)setState:(long long)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (long long)state;
- (BOOL)wasCancelled;

@end

