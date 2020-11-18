//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSyncSession.h>

@class HDNanoSyncStore;
@protocol HDNanoSyncSessionDelegate;

@interface HDNanoSyncSession : HDSyncSession
{
    BOOL _pullRequest;
    BOOL _requestedByRemote;
    id<HDNanoSyncSessionDelegate> _delegate;
    CDUnknownBlockType _completion;
    unsigned long long _messageCount;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (readonly, weak, nonatomic) id<HDNanoSyncSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) unsigned long long messageCount; // @synthesize messageCount=_messageCount;
@property (readonly, nonatomic) HDNanoSyncStore *nanoSyncStore;
@property (readonly, nonatomic, getter=isPullRequest) BOOL pullRequest; // @synthesize pullRequest=_pullRequest;
@property (readonly, nonatomic, getter=isRequestedByRemote) BOOL requestedByRemote; // @synthesize requestedByRemote=_requestedByRemote;

- (void).cxx_destruct;
- (id)changeSetWithChanges:(id)arg1 statusCode:(int)arg2 error:(id)arg3;
- (void)incrementMessageCount;
- (id)initWithDaemon:(id)arg1 syncStore:(id)arg2 attemptWhileLocking:(BOOL)arg3 pullRequest:(BOOL)arg4 requestedByRemote:(BOOL)arg5 reason:(id)arg6 delegate:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)invokeCompletionWithSuccess:(BOOL)arg1 error:(id)arg2;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (id)predicateForSyncEntityClass:(Class)arg1;
- (void)sendChanges:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncDidFinishWithSuccess:(BOOL)arg1 error:(id)arg2;
- (unsigned long long)syncObjectLimitForEntityClass:(Class)arg1;

@end

