//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutEventEntity : HDHealthEntity
{
}

+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;
+ (id)deleteStatementForWorkoutEventsWithTransaction:(id)arg1;
+ (BOOL)enumerateEventsForOwner:(long long)arg1 withStatement:(id)arg2 error:(id *)arg3 eventHandler:(CDUnknownBlockType)arg4;
+ (id)foreignKeys;
+ (id)insertPersistableWorkoutEvent:(id)arg1 ownerID:(id)arg2 database:(id)arg3 error:(id *)arg4;
+ (BOOL)insertWorkoutEventsFromWorkout:(id)arg1 ownerID:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;
+ (long long)protectionClass;
+ (id)statementForEnumeratingEventsForOwnerInDatabase:(id)arg1 error:(id *)arg2;
+ (Class)workoutEventClass;
+ (id)workoutEventsForOwner:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
+ (id)workoutEventsWithOwnerID:(id)arg1 database:(id)arg2 error:(id *)arg3;

@end

