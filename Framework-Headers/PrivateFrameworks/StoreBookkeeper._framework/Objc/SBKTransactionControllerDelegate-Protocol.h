//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreBookkeeper/NSObject-Protocol.h>

@class SBKStoreError, SBKTransaction, SBKTransactionController;

@protocol SBKTransactionControllerDelegate <NSObject>
- (void)transactionController:(SBKTransactionController *)arg1 transactionDidCancel:(SBKTransaction *)arg2 error:(SBKStoreError *)arg3;
- (BOOL)transactionController:(SBKTransactionController *)arg1 transactionDidFail:(SBKTransaction *)arg2 error:(SBKStoreError *)arg3;
- (void)transactionController:(SBKTransactionController *)arg1 transactionDidFinish:(SBKTransaction *)arg2;

@optional
- (BOOL)transactionController:(SBKTransactionController *)arg1 shouldScheduleTransaction:(SBKTransaction *)arg2;
@end
