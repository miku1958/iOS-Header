//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSArray, NSString, PKPass, PKPaymentPass;
@protocol NPKPassesDataSourceObserver;

@protocol NPKPassesDataSource <NSObject>
- (void)enableRemoteUpdates;
- (void)movePassAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (PKPass *)passForUniqueID:(NSString *)arg1;
- (NSArray *)passes;
- (NSArray *)paymentPasses;
- (void)registerObserver:(id<NPKPassesDataSourceObserver>)arg1;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(void (^)(NSArray *))arg1;
- (void)removePass:(PKPass *)arg1;
- (void)setDefaultPaymentPass:(PKPaymentPass *)arg1;
- (BOOL)shouldAllowMovingItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)suppressRemoteUpdates;
- (void)unregisterObserver:(id<NPKPassesDataSourceObserver>)arg1;
@end

