//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface HFCharacteristicValueCacheManager : NSObject
{
    NSObject<OS_dispatch_group> *_dispatchGroup;
    struct os_unfair_lock_s _cacheLock;
    struct os_unfair_lock_s _unprocessedTransctionLock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_transactionsByCharacteristicID;
    NSMutableDictionary *_transactionsByActionSetID;
    NSMutableOrderedSet *_unprocessedAddedTransactions;
    NSMutableOrderedSet *_unprocessedRemovedTransactions;
}

@property (strong, nonatomic) NSMutableDictionary *transactionsByActionSetID; // @synthesize transactionsByActionSetID=_transactionsByActionSetID;
@property (strong, nonatomic) NSMutableDictionary *transactionsByCharacteristicID; // @synthesize transactionsByCharacteristicID=_transactionsByCharacteristicID;
@property (strong, nonatomic) NSMutableOrderedSet *unprocessedAddedTransactions; // @synthesize unprocessedAddedTransactions=_unprocessedAddedTransactions;
@property (strong, nonatomic) NSMutableOrderedSet *unprocessedRemovedTransactions; // @synthesize unprocessedRemovedTransactions=_unprocessedRemovedTransactions;

- (void).cxx_destruct;
- (void)_enumerateTransactionsRemovingFailingItems:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_locked_updateWithAddedTransaction:(id)arg1;
- (void)_locked_updateWithRemovedTransaction:(id)arg1;
- (id)_perfomUpdatedCacheRead:(CDUnknownBlockType)arg1;
- (id)_performLock:(struct os_unfair_lock_s *)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)_transaction:(id)arg1 isWritingCharacteristic:(id)arg2;
- (BOOL)_transaction:(id)arg1 isWritingCharacteristic:(id)arg2 allowingActions:(BOOL)arg3;
- (id)cachedValueForCharacteristic:(id)arg1;
- (BOOL)containsTransactionsExecutingActionSet:(id)arg1;
- (BOOL)containsTransactionsReadingCharacteristic:(id)arg1 filterBlock:(CDUnknownBlockType)arg2;
- (BOOL)containsTransactionsWritingCharacteristic:(id)arg1;
- (id)init;
- (void)transactionAdded:(id)arg1;
- (void)transactionRemoved:(id)arg1;
- (id)transactionsExecutingActionSet:(id)arg1;
- (id)transactionsReadingCharacteristic:(id)arg1 filterBlock:(CDUnknownBlockType)arg2;
- (id)transactionsWritingCharacteristic:(id)arg1;

@end

