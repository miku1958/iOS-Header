//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol CKAsyncTransactionContainer

@property (nonatomic, getter=ck_isAsyncTransactionContainer, setter=ck_setAsyncTransactionContainer:) BOOL ck_asyncTransactionContainer;
@property (readonly, nonatomic) unsigned long long ck_asyncTransactionContainerState;

- (void)ck_asyncTransactionContainerStateDidChange;
- (void)ck_cancelAsyncTransactions;
@end

