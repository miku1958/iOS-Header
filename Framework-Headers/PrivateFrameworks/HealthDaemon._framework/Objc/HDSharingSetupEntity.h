//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSharingSetupEntity : HDHealthEntity
{
}

+ (id)_sampleTypesForSetupWithPersistentID:(long long)arg1 database:(id)arg2 error:(id *)arg3;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (BOOL)createShareWithProfile:(id)arg1 identifier:(id)arg2 predicate:(id)arg3 error:(id *)arg4;
+ (id)databaseTable;
+ (BOOL)enumerateSharesWithProfile:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)privateSubEntities;
+ (long long)protectionClass;

@end

