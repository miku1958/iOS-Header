//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSError, NSLock, NSMutableArray, NSRunLoop, NSString, SSOperationProgress;
@protocol ISOperationDelegate;

@interface ISOperation : NSOperation
{
    id<ISOperationDelegate> _delegate;
    NSError *_error;
    NSLock *_lock;
    NSRunLoop *_operationRunLoop;
    ISOperation *_parentOperation;
    SSOperationProgress *_progress;
    BOOL _shouldMessageMainThread;
    NSString *_powerAssertionIdentifier;
    NSArray *_serializationLockIdentifiers;
    NSMutableArray *_subOperations;
    BOOL _shouldRunWithBackgroundPriority;
    BOOL _stopped;
    BOOL _success;
}

@property (weak) id<ISOperationDelegate> delegate;
@property (strong) NSError *error; // @synthesize error=_error;
@property (strong) NSRunLoop *operationRunLoop; // @synthesize operationRunLoop=_operationRunLoop;
@property (strong) ISOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
@property (strong) NSString *powerAssertionIdentifier; // @synthesize powerAssertionIdentifier=_powerAssertionIdentifier;
@property (readonly, nonatomic) SSOperationProgress *progress;
@property (readonly) long long progressWeight;
@property (copy) NSArray *serializationLockIdentifiers;
@property BOOL shouldMessageMainThread;
@property BOOL shouldRunWithBackgroundPriority; // @synthesize shouldRunWithBackgroundPriority=_shouldRunWithBackgroundPriority;
@property BOOL success; // @synthesize success=_success;
@property (readonly) NSString *uniqueKey;

- (void).cxx_destruct;
- (void)_addSubOperation:(id)arg1;
- (void)_failAfterException;
- (void)_keepAliveTimer:(id)arg1;
- (void)_main:(BOOL)arg1;
- (void)_removeSubOperation:(id)arg1;
- (void)_sendErrorToDelegate:(id)arg1;
- (void)_sendSuccessToDelegate;
- (void)_sendWillStartToDelegate;
- (unsigned long long)authenticatedAccountCredentialSource;
- (id)authenticatedAccountDSID;
- (void)cancel;
- (BOOL)copyAccountID:(id *)arg1 credentialSource:(unsigned long long *)arg2 byAuthenticatingWithContext:(id)arg3 returningError:(id *)arg4;
- (BOOL)copyAccountID:(id *)arg1 credentialSource:(unsigned long long *)arg2 byHandlingAuthenticateResponse:(id)arg3 returningError:(id *)arg4;
- (id)copyActivePowerAssertionIdentifiers;
- (id)copySerializationLocks;
- (void)delegateDispatch:(CDUnknownBlockType)arg1;
- (void)dispatchCompletionBlock;
- (id)init;
- (BOOL)loadSoftwareMapReturningError:(id *)arg1;
- (BOOL)loadURLBagWithContext:(id)arg1 returningError:(id *)arg2;
- (id)loadedURLBagWithContext:(id)arg1 accountDSID:(id)arg2 returningError:(id *)arg3;
- (id)loadedURLBagWithContext:(id)arg1 returningError:(id *)arg2;
- (void)lock;
- (void)main;
- (void)releasePowerAssertionsDuringBlock:(CDUnknownBlockType)arg1;
- (void)run;
- (void)run:(BOOL)arg1;
- (int)runRunLoopUntilStopped;
- (BOOL)runSubOperation:(id)arg1 onQueue:(id)arg2 error:(id *)arg3;
- (BOOL)runSubOperation:(id)arg1 returningError:(id *)arg2;
- (void)sendDidTakeSerializationLocks;
- (void)sendProgressToDelegate;
- (BOOL)shouldFailAfterUniquePredecessorError:(id)arg1;
- (BOOL)stopRunLoop;
- (void)unlock;

@end

