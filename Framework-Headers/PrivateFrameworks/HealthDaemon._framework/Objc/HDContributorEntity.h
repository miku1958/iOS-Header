//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDContributorEntity : HDHealthEntity
{
}

+ (id)_contributorReferenceForEntityMatchingPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)_insertWithUUID:(id)arg1 appleID:(id)arg2 callerID:(id)arg3 deleted:(BOOL)arg4 modificationDate:(double)arg5 syncAnchor:(unsigned long long)arg6 syncProvenance:(long long)arg7 primaryUser:(BOOL)arg8 database:(id)arg9 error:(id *)arg10;
+ (id)_nextSyncAnchorInDatabase:(id)arg1 error:(id *)arg2;
+ (id)_predicateForContributorReference:(id)arg1;
+ (id)_predicateForContributorWithUUID:(id)arg1;
+ (id)_predicateForNonDeletedContributor;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)contributorEntityForNoContributorWithProfile:(id)arg1 error:(id *)arg2;
+ (id)contributorEntityWithUUID:(id)arg1 profile:(id)arg2 includeDeleted:(BOOL)arg3 error:(id *)arg4;
+ (id)contributorForReference:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)databaseTable;
+ (BOOL)deleteContributorWithUUID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)externalReferenceForContributorReference:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)insertOrLookupContributorEntityForNoContributorWithTransaction:(id)arg1 error:(id *)arg2;
+ (id)insertPrimaryUserWithAppleID:(id)arg1 callerID:(id)arg2 database:(id)arg3 error:(id *)arg4;
+ (id)insertWithUUID:(id)arg1 appleID:(id)arg2 callerID:(id)arg3 primaryUser:(BOOL)arg4 profile:(id)arg5 error:(id *)arg6;
+ (id)insertWithUUID:(id)arg1 appleID:(id)arg2 callerID:(id)arg3 primaryUser:(BOOL)arg4 syncProvenance:(long long)arg5 transaction:(id)arg6 error:(id *)arg7;
+ (id)noneContributorUUID;
+ (id)primaryUserContributorInDatabase:(id)arg1 error:(id *)arg2;
+ (id)primaryUserContributorInProfile:(id)arg1 error:(id *)arg2;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
- (id)appleIDInProfile:(id)arg1 error:(id *)arg2;
- (id)callerIDInProfile:(id)arg1 error:(id *)arg2;
- (BOOL)deletedInProfile:(id)arg1 error:(id *)arg2;
- (id)modificationDateInProfile:(id)arg1 error:(id *)arg2;
- (id)syncAnchorInProfile:(id)arg1 error:(id *)arg2;
- (BOOL)updateAppleID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
- (BOOL)updateCallerID:(id)arg1 profile:(id)arg2 error:(id *)arg3;

@end
