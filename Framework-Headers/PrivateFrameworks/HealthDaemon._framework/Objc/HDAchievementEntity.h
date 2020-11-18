//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

#import <HealthDaemon/HDNanoSyncEntity-Protocol.h>
#import <HealthDaemon/HDSyncEntity-Protocol.h>

@class NSString;

@interface HDAchievementEntity : HDHealthEntity <HDNanoSyncEntity, HDSyncEntity>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)_achievementsByRemovingDuplicatesWithSyncedAchievements:(id)arg1 achievementsToDelete:(id *)arg2 profile:(id)arg3;
+ (id)_insertAchievement:(id)arg1 provenance:(long long)arg2 database:(id)arg3 error:(id *)arg4;
+ (BOOL)_insertAchievements:(id)arg1 provenance:(long long)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (id)_predicateForProvenance:(long long)arg1;
+ (id)_predicateForSyncAnchor:(id)arg1;
+ (id)_unalertedAchievementsPredicate;
+ (id)_viewedEarnedAchievementsPredicate;
+ (id)achievementsWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)allAchievementDefinitionIdentifiersInHealthDatabase:(id)arg1 error:(id *)arg2;
+ (id)columnsDefinition;
+ (long long)countOfUnalertedAchievementsInHealthDatabase:(id)arg1;
+ (long long)countOfViewedEarnedAchievementsInHealthDatabase:(id)arg1 error:(id *)arg2;
+ (id)databaseTable;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (BOOL)deleteAchievementWithUUID:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (BOOL)deleteAchievements:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (BOOL)deleteAllAchievementsInHealthDatabase:(id)arg1 error:(id *)arg2;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (BOOL)generateSyncObjectsForSession:(id)arg1 predicate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 maxEncodedBytesPerMessage:(long long)arg4 profile:(id)arg5 error:(id *)arg6 handler:(CDUnknownBlockType)arg7;
+ (BOOL)insertAchievement:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (BOOL)insertAchievements:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (BOOL)markAchievement:(id)arg1 alertedInHealthDatabase:(id)arg2 error:(id *)arg3;
+ (BOOL)markAchievement:(id)arg1 viewedInHealthDatabase:(id)arg2 error:(id *)arg3;
+ (int)nanoSyncObjectType;
+ (long long)nextSyncAnchorWithSession:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 profile:(id)arg4 error:(id *)arg5;
+ (long long)numberOfUnviewedAchievementsInHealthDatabase:(id)arg1;
+ (id)predicateForAchievementsWithDefinitionIdentifiers:(id)arg1;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (BOOL)supportsSpeculativeNanoSyncChanges;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (long long)syncEntityType;
+ (id)unalertedAchievementsInProfile:(id)arg1;

@end

