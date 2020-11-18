//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSyncSession.h>

@class HDNanoSyncStore;

@interface HDNanoSyncSession : HDSyncSession
{
    BOOL _pullRequest;
    BOOL _requestedByRemote;
    CDUnknownBlockType _completion;
    unsigned long long _messageCount;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (readonly, nonatomic) unsigned long long messageCount; // @synthesize messageCount=_messageCount;
@property (readonly, nonatomic) HDNanoSyncStore *nanoSyncStore;
@property (readonly, nonatomic, getter=isPullRequest) BOOL pullRequest; // @synthesize pullRequest=_pullRequest;
@property (readonly, nonatomic, getter=isRequestedByRemote) BOOL requestedByRemote; // @synthesize requestedByRemote=_requestedByRemote;

- (void).cxx_destruct;
- (id)changeSetWithChanges:(id)arg1 statusCode:(int)arg2 error:(id)arg3;
- (void)incrementMessageCount;
- (id)initWithSyncStore:(id)arg1 attemptWhileLocking:(BOOL)arg2 pullRequest:(BOOL)arg3 requestedByRemote:(BOOL)arg4 reason:(id)arg5 delegate:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)invokeCompletionWithSuccess:(BOOL)arg1 error:(id)arg2;
- (long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (id)predicateForSyncEntityClass:(Class)arg1;

@end

