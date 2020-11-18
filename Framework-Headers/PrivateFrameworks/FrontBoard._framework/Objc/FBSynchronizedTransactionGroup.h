//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBTransaction.h>

#import <FrontBoard/FBSynchronizedTransaction-Protocol.h>
#import <FrontBoard/FBSynchronizedTransactionDelegate-Protocol.h>

@class NSMutableSet, NSString;
@protocol FBSynchronizedTransactionDelegate, FBSynchronizedTransactionGroupDelegate;

@interface FBSynchronizedTransactionGroup : FBTransaction <FBSynchronizedTransaction, FBSynchronizedTransactionDelegate>
{
    BOOL _commitAllowed;
    BOOL _readyForCommit;
    BOOL _didCommit;
    NSMutableSet *_synchronizedTransactions;
    NSMutableSet *_synchronizedTransactionsAwaitingCommitReadiness;
    NSMutableSet *_synchronizedTransactionsReadyToCommit;
    id<FBSynchronizedTransactionGroupDelegate> _synchronizationDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) id<FBSynchronizedTransactionDelegate> synchronizationDelegate; // @synthesize synchronizationDelegate=_synchronizationDelegate;

- (BOOL)_canBeInterrupted;
- (void)_checkPreconditionsAndCommitIfReady;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_performSynchronizedCommit:(id)arg1;
- (void)_performSynchronizedCommitIfReady;
- (BOOL)_shouldFailForChildTransaction:(id)arg1;
- (void)addSynchronizedTransaction:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isReadyForSynchronizedCommit;
- (void)performSynchronizedCommit;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (id)synchronizedTransactions;

@end

