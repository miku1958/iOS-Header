//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineIDMapping : CPLEngineStorage <CPLAbstractObject>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (BOOL)addAddEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)addCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(BOOL)arg3 direction:(unsigned long long)arg4 error:(id *)arg5;
- (BOOL)addDeleteEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg1 isFinal:(BOOL *)arg2;
- (BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (BOOL)hasPendingIdentifiers;
- (id)localScopedIdentifierForCloudScopedIdentifier:(id)arg1 isFinal:(BOOL *)arg2;
- (id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)arg1;
- (BOOL)markAllPendingIdentifiersForScopeWithIdentifier:(id)arg1 asFinalWithError:(id *)arg2;
- (BOOL)removeMappingForCloudScopedIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)resetAllFinalCloudIdentifiersForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (unsigned long long)scopeType;
- (BOOL)setFinalCloudScopedIdentifier:(id)arg1 forPendingCloudScopedIdentifier:(id)arg2 error:(id *)arg3;
- (id)setupCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(BOOL)arg3 direction:(unsigned long long)arg4 error:(id *)arg5;

@end
