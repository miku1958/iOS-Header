//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBTransaction, NSArray;
@protocol FBSynchronizedTransaction;

@protocol FBSynchronizedTransactionDelegate <NSObject>
- (void)synchronizedTransaction:(FBTransaction<FBSynchronizedTransaction> *)arg1 didCommitSynchronizedTransactions:(NSArray *)arg2;
- (void)synchronizedTransaction:(FBTransaction<FBSynchronizedTransaction> *)arg1 willCommitSynchronizedTransactions:(NSArray *)arg2;
- (void)synchronizedTransactionReadyToCommit:(FBTransaction<FBSynchronizedTransaction> *)arg1;
@end

