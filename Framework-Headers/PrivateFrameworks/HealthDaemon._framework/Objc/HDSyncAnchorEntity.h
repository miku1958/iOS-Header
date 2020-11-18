//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSyncAnchorEntity : HDHealthEntity
{
}

+ (BOOL)_getAnchorsForProperty:(id)arg1 set:(id)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (id)_predicateForSyncEntityClass:(Class)arg1;
+ (id)_predicateForSyncEntityClass:(Class)arg1 syncStore:(id)arg2;
+ (id)_predicateForSyncStore:(id)arg1;
+ (BOOL)_setSyncAnchor:(long long)arg1 options:(unsigned long long)arg2 updatePolicy:(long long)arg3 entityClass:(Class)arg4 store:(id)arg5 database:(id)arg6 error:(id *)arg7;
+ (BOOL)_setSyncAnchor:(long long)arg1 options:(unsigned long long)arg2 updatePolicy:(long long)arg3 entityClass:(Class)arg4 store:(id)arg5 healthDatabase:(id)arg6 error:(id *)arg7;
+ (long long)_syncAnchorForProperty:(id)arg1 entityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (BOOL)enumerateSyncAnchorsForStoreID:(long long)arg1 database:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
+ (BOOL)getNextAnchorsWithMap:(id)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (BOOL)getReceivedAnchorsWithMap:(id)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (long long)nextSyncAnchorForEntityClass:(Class)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (long long)protectionClass;
+ (long long)receivedAnchorForEntityClass:(Class)arg1 store:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (BOOL)resetNextSyncAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (BOOL)resetReceivedAnchorsForStore:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (BOOL)resetSyncStore:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (BOOL)setAcknowledgedAnchorsWithMap:(id)arg1 store:(id)arg2 resetNext:(BOOL)arg3 resetInvalid:(BOOL)arg4 healthDatabase:(id)arg5 error:(id *)arg6;
+ (BOOL)setNextSyncAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (BOOL)setReceivedAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (id)uniquedColumns;

@end

