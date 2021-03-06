//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CompanionSync/SYSession.h>

@class NSObject, SYChangeMessage;
@protocol OS_os_activity;

@interface SYIncomingTransactionSession : SYSession
{
    NSObject<OS_os_activity> *_sessionActivity;
    SYChangeMessage *_message;
    CDUnknownBlockType _completion;
    BOOL canRestart;
    BOOL canRollback;
    unsigned int state;
}

- (void).cxx_destruct;
- (void)_sendCancelled;
- (void)_sendChanges;
- (void)_sendComplete;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (void)cancelWithError:(id)arg1;
- (void)didCompleteSession;
- (id)initWithService:(id)arg1 transaction:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)isResetSync;
- (BOOL)isSending;
- (unsigned long long)protocolVersion;
- (void)setCanRestart:(BOOL)arg1;
- (void)setCanRollback:(BOOL)arg1;
- (void)setState:(unsigned int)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (unsigned int)state;
- (BOOL)wasCancelled;

@end

