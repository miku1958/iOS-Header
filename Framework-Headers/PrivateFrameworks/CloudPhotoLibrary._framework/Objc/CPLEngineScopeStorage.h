//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSMutableSet, NSString, _CPLEngineScopeCache;

@interface CPLEngineScopeStorage : CPLEngineStorage <CPLAbstractObject>
{
    _CPLEngineScopeCache *_scopeCache;
    NSMutableSet *_scopeIdentifiersExcludedFromMingling;
    NSMutableSet *_scopeIdentifiersManuallyExcludedFromMingling;
    BOOL _shouldResetGlobalsForMainScope;
    BOOL _scheduleATransportUpdate;
    BOOL _scheduleAScopeUpdate;
    BOOL _schedulePushHighPriorityToTransport;
    BOOL _schedulePushToTransport;
    BOOL _schedulePullFromTransport;
    BOOL _schedulePullFromClient;
    BOOL _shouldChangeSyncManagerPriorityBoost;
    BOOL _syncManagerPriorityBoost;
    BOOL _someScopeMightHaveToBePulledByClient;
    BOOL _clearSomeScopeMightHaveToBePulledByClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasStagedSyncAnchors;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cacheScope:(id)arg1;
- (void)_checkSyncManagerPriorityBoost;
- (void)_clearScopeCache;
- (id)_createScopeFromScopeChange:(id)arg1 error:(id *)arg2;
- (BOOL)_forceClientToPullScopeIfNecessary:(id)arg1 error:(id *)arg2;
- (void)_forceSyncManagerPriorityBoost;
- (BOOL)_handledDisabledFeaturesForScopeIfNecessary:(id)arg1 type:(long long)arg2 error:(id *)arg3;
- (unsigned long long)_indexOfCurrentClassForInitialQueriesForScope:(id)arg1;
- (BOOL)_resetCompleteSyncStateForScope:(id)arg1 error:(id *)arg2;
- (void)_resetGlobalsForMainScope;
- (BOOL)_resetLocalSyncStateForScope:(id)arg1 error:(id *)arg2;
- (id)_scopeChangeToBePulledByClientForScope:(id)arg1;
- (id)_scopeWithIdentifier:(id)arg1;
- (id)_scopeWithStableIndex:(long long)arg1;
- (BOOL)_setScopeType:(long long)arg1 forScope:(id)arg2 error:(id *)arg3;
- (BOOL)activateScope:(id)arg1 error:(id *)arg2;
- (id)allScopeIdentifiersIncludeInactive:(BOOL)arg1;
- (Class)classOfRecordsForInitialQueryForScope:(id)arg1;
- (BOOL)clearTransportGroupsForScope:(id)arg1 error:(id *)arg2;
- (BOOL)clientAcknowledegedScopeChanges:(id)arg1 error:(id *)arg2;
- (BOOL)commitSyncAnchorForScope:(id)arg1 error:(id *)arg2;
- (id)createScopeWithIdentifier:(id)arg1 scopeType:(long long)arg2 flags:(long long)arg3 transportScope:(id)arg4 error:(id *)arg5;
- (BOOL)deactivateScope:(id)arg1 error:(id *)arg2;
- (id)deleteDateForScope:(id)arg1;
- (BOOL)deleteScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)didDropSomeRecordsForScope:(id)arg1;
- (BOOL)disableInitialQueriesForScope:(id)arg1 error:(id *)arg2;
- (BOOL)disablePrimaryScopeWithError:(id *)arg1;
- (id)disabledDateForScope:(id)arg1;
- (BOOL)discardStagedSyncAnchorForScope:(id)arg1 error:(id *)arg2;
- (BOOL)discardStagedSyncAnchorWithScopeFilter:(id)arg1 error:(id *)arg2;
- (BOOL)doScopesNeedMetadataSync:(id)arg1;
- (BOOL)doesScopeNeedToBePulledByClient:(id)arg1;
- (BOOL)doesScopeNeedToPullChangesFromTransport:(id)arg1;
- (BOOL)doesScopeNeedToPushChangesToTransport:(id)arg1;
- (BOOL)doesScopeNeedToUpdateTransport:(id)arg1;
- (BOOL)doesScopeSupportToBePulledByClient:(id)arg1;
- (id)downloadTransportGroupForScope:(id)arg1;
- (BOOL)enablePrimaryScopeWithError:(id *)arg1;
- (id)enumeratorForScopesIncludeInactive:(BOOL)arg1;
- (id)enumeratorForScopesNeedingToPullChangesFromTransport;
- (id)enumeratorForScopesNeedingToPushChangesToTransport;
- (id)enumeratorForScopesNeedingToPushHighPriorityChangesToTransport;
- (id)enumeratorForScopesNeedingToUpdateTransport;
- (id)enumeratorForScopesNeedingUpdateFromTransport;
- (unsigned long long)estimatedAssetCountForScope:(id)arg1;
- (unsigned long long)estimatedSizeForScope:(id)arg1;
- (void)excludeScopeIdentifierFromMingling:(id)arg1;
- (id)filterForExcludedScopeIdentifiers:(id)arg1;
- (id)filterForIncludedScopeIdentifiers:(id)arg1;
- (id)filterOnScopesAllowingMingling;
- (id)flagsForScope:(id)arg1;
- (void)forceExcludeScopeIdentifierFromMingling:(id)arg1;
- (void)forceIncludeScopeIdentifierInMingling:(id)arg1;
- (BOOL)hasFinishedAFullSyncForScope:(id)arg1;
- (BOOL)hasFinishedInitialSyncForScope:(id)arg1;
- (BOOL)hasScopeFetchedInitialSyncAnchor:(id)arg1;
- (BOOL)hasScopesNeedingToPullChangesFromTransport;
- (BOOL)hasScopesNeedingToPushChangesToTransport;
- (BOOL)hasScopesNeedingToPushHighPriorityChangesToTransport;
- (BOOL)hasScopesNeedingToUpdateTransport;
- (BOOL)hasStagedSyncAnchorForScope:(id)arg1;
- (void)includeScopeIdentifierInMingling:(id)arg1;
- (long long)indexForCloudScopeIdentifier:(id)arg1;
- (long long)indexForLocalScopeIdentifier:(id)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (id)initialSyncAnchorForScope:(id)arg1;
- (id)lastDateOfClearedPushRepositoryForScope:(id)arg1;
- (id)lastDateOfCompletedPullFromTransportForScope:(id)arg1;
- (BOOL)markInitialQueryIsDoneForRecordsOfClass:(Class)arg1 forScope:(id)arg2 error:(id *)arg3;
- (BOOL)openWithError:(id *)arg1;
- (id)primaryScope;
- (long long)pullFromTransportTaskForScope:(id)arg1;
- (long long)pushToTransportTaskForScope:(id)arg1;
- (id)remainingClassesForInitialQueryForScope:(id)arg1;
- (BOOL)resetCloudRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)resetCompleteSyncStateForScope:(id)arg1 error:(id *)arg2;
- (BOOL)resetCompleteSyncStateIncludingIDMappingForScope:(id)arg1 error:(id *)arg2;
- (BOOL)resetInitialSyncAnchorForScope:(id)arg1 error:(id *)arg2;
- (BOOL)resetLocalRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)resetLocalSyncStateForScope:(id)arg1 error:(id *)arg2;
- (BOOL)resetStableRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)resetSyncAnchorForScope:(id)arg1 error:(id *)arg2;
- (BOOL)resetSyncStateForScope:(id)arg1 error:(id *)arg2;
- (id)scopeChangeForScope:(id)arg1;
- (id)scopeChangesNeedingToBePulledByClientWithMaximumCount:(unsigned long long)arg1;
- (id)scopeIdentifierForCloudScopeIndex:(long long)arg1;
- (id)scopeIdentifierForLocalScopeIndex:(long long)arg1;
- (id)scopeListSyncAnchor;
- (unsigned long long)scopeType;
- (id)scopeWithCloudScopeIndex:(long long)arg1;
- (id)scopeWithIdentifier:(id)arg1;
- (id)scopeWithLocalScopeIndex:(long long)arg1;
- (id)scopedIdentifierForCloudScopedIdentifier:(id)arg1;
- (id)scopedIdentifierForLocalScopedIdentifier:(id)arg1;
- (BOOL)setAllScopesHasChangesToPullFromTransportWithError:(id *)arg1;
- (BOOL)setCloudScopeIndexOnChange:(id)arg1;
- (BOOL)setDeleteDate:(id)arg1 forScope:(id)arg2 error:(id *)arg3;
- (BOOL)setDidDropSomeRecordsForScope:(id)arg1 error:(id *)arg2;
- (BOOL)setDisabledDate:(id)arg1 forScope:(id)arg2 error:(id *)arg3;
- (BOOL)setHasFetchedInitialSyncAnchor:(BOOL)arg1 forScope:(id)arg2 error:(id *)arg3;
- (BOOL)setInitialSyncAnchor:(id)arg1 forScope:(id)arg2 error:(id *)arg3;
- (BOOL)setLocalScopeIndexOnChange:(id)arg1;
- (BOOL)setPullFromTransportExpirationInterval:(double)arg1 scope:(id)arg2 error:(id *)arg3;
- (BOOL)setScope:(id)arg1 hasCompletedPullFromTransportTask:(long long)arg2 error:(id *)arg3;
- (BOOL)setScope:(id)arg1 hasCompletedPushToTransportTask:(long long)arg2 error:(id *)arg3;
- (BOOL)setScope:(id)arg1 hasCompletedTransportUpdate:(long long)arg2 error:(id *)arg3;
- (BOOL)setScopeHasChangesToPullFromTransport:(id)arg1 error:(id *)arg2;
- (BOOL)setScopeHasChangesToPushToTransport:(id)arg1 error:(id *)arg2;
- (BOOL)setScopeNeedsToBePulledByClient:(id)arg1 error:(id *)arg2;
- (BOOL)setScopeNeedsToUpdateTransport:(id)arg1 error:(id *)arg2;
- (BOOL)setScopeNeedsUpdateFromTransport:(id)arg1 error:(id *)arg2;
- (BOOL)setSyncAnchor:(id)arg1 forScope:(id)arg2 error:(id *)arg3;
- (BOOL)setTransportScope:(id)arg1 forScope:(id)arg2 error:(id *)arg3;
- (BOOL)setValue:(BOOL)arg1 forFlag:(long long)arg2 forScope:(id)arg3 error:(id *)arg4;
- (BOOL)setupAnchorResetTransportGroupForScope:(id)arg1 error:(id *)arg2;
- (BOOL)setupInitialSyncTransportGroupsForScope:(id)arg1 error:(id *)arg2;
- (BOOL)setupResetSyncTransportGroupForScope:(id)arg1 error:(id *)arg2;
- (long long)stableScopeIndexForScopeIdentifier:(id)arg1;
- (id)status;
- (id)statusDictionaryForScope:(id)arg1;
- (BOOL)storeEstimatedSize:(unsigned long long)arg1 estimatedAssetCount:(unsigned long long)arg2 forScope:(id)arg3 error:(id *)arg4;
- (BOOL)storeLastDateOfClearedPushRepository:(id)arg1 forScope:(id)arg2 error:(id *)arg3;
- (BOOL)storeScopeChange:(id)arg1 forScope:(id)arg2 error:(id *)arg3;
- (BOOL)storeScopeListSyncAnchor:(id)arg1 error:(id *)arg2;
- (BOOL)storeSupportedFeatureVersionInLastSync:(unsigned long long)arg1 forScope:(id)arg2 error:(id *)arg3;
- (BOOL)storeTransientSyncAnchor:(id)arg1 forScope:(id)arg2 error:(id *)arg3;
- (unsigned long long)supportedFeatureVersionInLastSyncForScope:(id)arg1;
- (BOOL)supportedFeatureVersionIsMostRecentForScope:(id)arg1;
- (id)syncAnchorForScope:(id)arg1;
- (id)transientSyncAnchorForScope:(id)arg1;
- (id)transportScopeForScope:(id)arg1;
- (long long)transportUpdateTaskForScope:(id)arg1;
- (BOOL)updateFlags:(id)arg1 forScope:(id)arg2 error:(id *)arg3;
- (BOOL)updateInitialSyncTransportGroupEstimatedSize:(unsigned long long)arg1 assetCount:(unsigned long long)arg2 forScope:(id)arg3 error:(id *)arg4;
- (BOOL)updateScopeWithChange:(id)arg1 error:(id *)arg2;
- (BOOL)upgradeScopesWithNewLibraryOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)uploadTransportGroupForScope:(id)arg1;
- (id)validCloudScopeIndexes;
- (id)validLocalScopeIndexes;
- (BOOL)valueForFlag:(long long)arg1 forScope:(id)arg2;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end

