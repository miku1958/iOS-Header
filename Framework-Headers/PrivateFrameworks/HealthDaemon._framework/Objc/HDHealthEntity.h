//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSQLiteEntity.h>

#import <HealthDaemon/HDHealthEntityEncoding-Protocol.h>

@interface HDHealthEntity : HDSQLiteEntity <HDHealthEntityEncoding>
{
}

+ (id)_syncQueryDescriptorWithPredicate:(id)arg1 orderingProperties:(id)arg2 orderingDirections:(id)arg3 limit:(unsigned long long)arg4 anchorProperty:(id)arg5;
+ (id)_syncQueryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4 limit:(unsigned long long)arg5 anchorProperty:(id)arg6;
+ (unsigned long long)_transactionOptionsForWriting:(BOOL)arg1 highPriority:(BOOL)arg2;
+ (id)anyWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)columnNamesForTimeOffset;
+ (id)columnsDefinition;
+ (long long)countOfObjectsWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)createTableSQL;
+ (id)databaseName;
+ (BOOL)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (BOOL)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 excludedSyncStore:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange)arg4 limit:(unsigned long long)arg5 lastSyncAnchor:(long long *)arg6 healthDatabase:(id)arg7 error:(id *)arg8 block:(CDUnknownBlockType)arg9;
+ (BOOL)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 excludedSyncStore:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange)arg4 orderingProperties:(id)arg5 orderingDirections:(id)arg6 limit:(unsigned long long)arg7 lastSyncAnchor:(long long *)arg8 healthDatabase:(id)arg9 error:(id *)arg10 block:(CDUnknownBlockType)arg11;
+ (BOOL)enumerateProperties:(id)arg1 withPredicate:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4 enumerationHandler:(CDUnknownBlockType)arg5;
+ (id)insertOrReplaceEntity:(BOOL)arg1 healthDatabase:(id)arg2 properties:(id)arg3 error:(id *)arg4 bindingHandler:(CDUnknownBlockType)arg5;
+ (id)maxRowIDForPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 excludedSyncStore:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 excludedSyncStore:(id)arg3 orderingProperties:(id)arg4 orderingDirections:(id)arg5 limit:(unsigned long long)arg6 healthDatabase:(id)arg7 error:(id *)arg8;
+ (BOOL)performHighPriorityReadTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (BOOL)performPostJournalMergeCleanupForDatabase:(id)arg1 error:(id *)arg2;
+ (BOOL)performReadTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3 inaccessibilityHandler:(CDUnknownBlockType)arg4;
+ (id)predicateForSyncWithPredicate:(id)arg1 excludedSyncStore:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncProvenance;
+ (id)propertyValueForAnyWithProperty:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (id)protectedDatabaseName;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (BOOL)updateProperties:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4 bindingHandler:(CDUnknownBlockType)arg5;
+ (id)updateSQLForTimeOffsetWithBindingCount:(unsigned long long *)arg1;
- (BOOL)getValuesForProperties:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
- (BOOL)updateProperties:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3 bindingHandler:(CDUnknownBlockType)arg4;
- (id)valueForProperty:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;

@end

