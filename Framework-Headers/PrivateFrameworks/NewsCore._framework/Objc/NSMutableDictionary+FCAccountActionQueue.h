//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (FCAccountActionQueue)
- (id)fc_dequeueTransactions;
- (BOOL)fc_enqueueActionType:(long long)arg1;
- (void)fc_enqueueTransaction:(id)arg1 withMaxTransactionCount:(unsigned long long)arg2;
- (void)fc_mergeWithDictionary:(id)arg1 withValueCombiner:(CDUnknownBlockType)arg2;
- (void)fc_popActionTypesUpToCount:(unsigned long long)arg1;
- (void)fc_removeObjectsForKeysNotInArray:(id)arg1;
- (void)fc_removeObjectsForKeysNotInSet:(id)arg1;
- (void)fc_removeObjectsForKeysPassingTest:(CDUnknownBlockType)arg1;
- (void)fc_safelySetObject:(id)arg1 forKey:(id)arg2;
- (void)fc_safelySetObjectAllowingNil:(id)arg1 forKey:(id)arg2;
- (void)fc_safelySetObjectAllowingNil:(id)arg1 forKeyAllowingNil:(id)arg2;
- (void)fc_setLocalDataHintIfNeeded:(BOOL)arg1;
- (void)fc_transformValuesWithKeyAndValueBlock:(CDUnknownBlockType)arg1;
@end

