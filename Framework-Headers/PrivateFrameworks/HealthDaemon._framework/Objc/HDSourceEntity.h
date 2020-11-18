//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSourceEntity : HDHealthEntity
{
}

+ (id)_firstSourceWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)_firstSourceWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)_insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 options:(unsigned long long)arg4 isCurrentDevice:(BOOL)arg5 productType:(id)arg6 deleted:(BOOL)arg7 modificationDate:(id)arg8 provenance:(long long)arg9 database:(id)arg10 error:(id *)arg11;
+ (id)_sourcesWithPredicate:(id)arg1 includeDeleted:(BOOL)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)bundleIdentifiersForSourcesWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (id)firstSourceWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)firstSourceWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)indices;
+ (id)insertCodableSource:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 options:(unsigned long long)arg4 isCurrentDevice:(BOOL)arg5 productType:(id)arg6 modificationDate:(id)arg7 provenance:(long long)arg8 profile:(id)arg9 error:(id *)arg10;
+ (id)orderedBundleIdentifiersFromSourceUUIDsData:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)sourceForLocalDeviceWithDatabase:(id)arg1 error:(id *)arg2;
+ (id)sourcesWithPredicate:(id)arg1 includeDeleted:(BOOL)arg2 database:(id)arg3 error:(id *)arg4;
+ (id)sourcesWithPredicate:(id)arg1 includeDeleted:(BOOL)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)sourcesWithPredicate:(id)arg1 orderingProperties:(id)arg2 orderingDirections:(id)arg3 includeDeleted:(BOOL)arg4 database:(id)arg5 error:(id *)arg6;
- (BOOL)_updateValues:(id)arg1 forProperties:(id)arg2 profile:(id)arg3 didUpdate:(BOOL *)arg4 error:(id *)arg5;
- (id)codableSourceWithEncoder:(id)arg1 error:(id *)arg2;
- (id)codableSourceWithProfile:(id)arg1 error:(id *)arg2;
- (BOOL)deleteSourceWithDatabase:(id)arg1 error:(id *)arg2;
- (BOOL)setBundleIdentifier:(id)arg1 UUID:(id)arg2 profile:(id)arg3 error:(id *)arg4;
- (BOOL)setName:(id)arg1 profile:(id)arg2 error:(id *)arg3;
- (BOOL)setOptions:(unsigned long long)arg1 profile:(id)arg2 didUpdate:(BOOL *)arg3 error:(id *)arg4;
- (id)sourceBundleIdentifierInDatabase:(id)arg1 error:(id *)arg2;
- (id)sourceUUIDWithHealthDatabase:(id)arg1 error:(id *)arg2;
- (id)sourceUUIDWithProfile:(id)arg1 error:(id *)arg2;
- (id)sourceWithProfile:(id)arg1 error:(id *)arg2;

@end
