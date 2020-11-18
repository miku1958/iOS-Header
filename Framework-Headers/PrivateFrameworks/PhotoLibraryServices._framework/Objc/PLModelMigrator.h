//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSFileManager, PLPhotoLibrary, PLXPCTransaction;

@interface PLModelMigrator : NSObject
{
    double _startTime;
    NSFileManager *_fileManager;
    PLXPCTransaction *_transaction;
    PLPhotoLibrary *_photoLibrary;
    struct os_unfair_lock_s _photoLibraryLock;
    NSDictionary *_syncedPropertiesByUUID;
}

@property (strong, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;

+ (BOOL)_addCameraCaptureDeviceForAssetsInStore:(id)arg1;
+ (BOOL)_addCloudKindSubtypeAndBurstFlagsInStore:(id)arg1;
+ (BOOL)_addLocationHashesToAssets:(id)arg1;
+ (BOOL)_addUUIDsToCollectionLists:(id)arg1 skipMomentLists:(BOOL)arg2;
+ (BOOL)_applyDataProtectionToDCIMFromClassBToClassC;
+ (void)_applySyncedProperties:(id)arg1 toAsset:(id)arg2;
+ (BOOL)_batchOfflineDeleteFromDatabaseOnlyAssets:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (BOOL)_cleanupInvalidAlbumsAndFoldersInStore:(id)arg1;
+ (BOOL)_commitSQLTransactionAndCloseDB:(struct sqlite3 *)arg1;
+ (BOOL)_convertManagedAdjustmentsInStore:(id)arg1;
+ (BOOL)_convertNameSourceFromBoolToIntForDeferredRebuildFaceInStore:(id)arg1;
+ (void)_createDatabase;
+ (void)_createPhotoDataDirectoryFailedWithNoPermission:(id)arg1;
+ (BOOL)_createPhotoDataDirectoryIfNecessary;
+ (id)_dateForFirstCRVSPhoto;
+ (id)_dateForVariations;
+ (id)_dateForWideGamutCapture;
+ (id)_dateWithiTunesTimeInterval:(double)arg1;
+ (BOOL)_deleteAllMemoriesInStore:(id)arg1;
+ (BOOL)_deleteAllMomentsViaSQLFromStore:(id)arg1;
+ (BOOL)_deleteCloudSharedAndSyncedAssetReferencesInStore:(id)arg1;
+ (BOOL)_deleteOrphanedUnverifiedPeople:(id)arg1;
+ (BOOL)_deletePersonsMissingUUIDInStore:(id)arg1;
+ (BOOL)_deletePhotoCloudSharingMetadataInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (BOOL)_deletePhotoStreamAssetReferencesInStore:(id)arg1;
+ (BOOL)_disableICloudPhoto;
+ (BOOL)_ensureAllUserVerifiedPersonsHaveFaceCropsInStore:(id)arg1;
+ (BOOL)_executeBatchDeleteWithEntityName:(id)arg1 predicate:(id)arg2 managedObjectContext:(id)arg3;
+ (BOOL)_executeBatchUpdateWithEntityName:(id)arg1 predicate:(id)arg2 propertiesToUpdate:(id)arg3 managedObjectContext:(id)arg4;
+ (id)_fetchRequestToIdentifyAdjustedDepthAndVariationsCandidates;
+ (id)_fetchRequestToIdentifyBakedInVariationsCandidatesIncludingLongExposure:(BOOL)arg1;
+ (BOOL)_fixAdjustedAssets:(id)arg1;
+ (BOOL)_fixAlbumAndFolderSortAscending:(id)arg1;
+ (BOOL)_fixAssetMasterResources:(id)arg1;
+ (BOOL)_fixCloudMasterCloudLocalState:(id)arg1;
+ (BOOL)_fixCloudSharedGIFsInStore:(id)arg1;
+ (BOOL)_fixCloudSharedVideosInStore:(id)arg1;
+ (BOOL)_fixCorruptedOrientationsInStore:(id)arg1;
+ (BOOL)_fixCustomKeyAssetForAlbum:(id)arg1;
+ (BOOL)_fixCustomRenderedValues:(id)arg1;
+ (BOOL)_fixDuplicatedAssets:(id)arg1;
+ (BOOL)_fixEmptyVideoResourcePathsInStore:(id)arg1;
+ (BOOL)_fixFaceAlgorithmVersion:(id)arg1;
+ (BOOL)_fixFaceGroupUnverifiedPerson:(id)arg1;
+ (BOOL)_fixIncorrectAddedDateForAssetsInStore:(id)arg1;
+ (void)_fixIncorrectHeifMetadataForAsset:(id)arg1;
+ (BOOL)_fixIncorrectHeifMetadataInStore:(id)arg1;
+ (BOOL)_fixIncorrectThumbnailTables;
+ (BOOL)_fixInitialSyncMarker;
+ (BOOL)_fixItemIdentifierForVideoCmplInStore:(id)arg1;
+ (BOOL)_fixKeywordsInStagedStore:(id)arg1;
+ (BOOL)_fixLastPrefetchDateInStore:(id)arg1;
+ (BOOL)_fixLocalPathForVideoCmplDerivativesInStore:(id)arg1;
+ (BOOL)_fixLocallyAvailableFlagForThumbnailsInStore:(id)arg1;
+ (BOOL)_fixMasterCloudLocalStateEnum:(id)arg1;
+ (BOOL)_fixMemoriesWithAssetLists:(id)arg1;
+ (BOOL)_fixMergedPeopleThatShouldBeVerified:(id)arg1;
+ (BOOL)_fixMovieAttributesInStore:(id)arg1;
+ (BOOL)_fixNilCloudMasterGUID:(id)arg1;
+ (BOOL)_fixNonDuplicatedAssets:(id)arg1 adjusted:(BOOL)arg2;
+ (BOOL)_fixOriginalPropertiesForCloudSharedAssetsInStore:(id)arg1;
+ (void)_fixPathForResource:(id)arg1 withPath:(id)arg2;
+ (BOOL)_fixPersonAndFaceGroup:(id)arg1;
+ (BOOL)_fixRejectedKeyFace:(id)arg1;
+ (BOOL)_fixSingletonFaceFaceGroup:(id)arg1;
+ (BOOL)_fixTrashedDate:(id)arg1;
+ (BOOL)_fixUTIforSlowMoInStore:(id)arg1;
+ (BOOL)_fixVideoDimensionsForAsset:(id)arg1;
+ (BOOL)_fixVideoDimensionsInStore:(id)arg1;
+ (BOOL)_fixVideoJPGPath:(id)arg1;
+ (BOOL)_fixVisibleBurstAsset:(id)arg1;
+ (BOOL)_fixWhitelistOwnerForPendingInvitationsInStore:(id)arg1;
+ (BOOL)_fixZeroDurationPhotoIrisWithLocalResourcesInStore:(id)arg1 assumeAdjustedIrisIsVisible:(BOOL)arg2;
+ (BOOL)_fixZeroTrashedDateForEntityName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (BOOL)_fixupAlbumOrderInAlbumListInStore:(id)arg1;
+ (BOOL)_fixupAssetPersistence:(id)arg1;
+ (BOOL)_fixupBrokenBurstPicksInStore:(id)arg1;
+ (BOOL)_fixupCloudResourcesInStore:(id)arg1;
+ (BOOL)_fixupCroppedUnadjustedAssets:(id)arg1;
+ (BOOL)_fixupEditorBundleIDsInStore:(id)arg1;
+ (BOOL)_fixupImportedAssetsInStore:(id)arg1;
+ (BOOL)_fixupImportedEventsInStore:(id)arg1;
+ (BOOL)_fixupKeyAssetsForAlbumsInStore:(id)arg1;
+ (BOOL)_fixupLocalResourcesStates:(id)arg1;
+ (BOOL)_fixupSharedStreamOrientationsInStore:(id)arg1;
+ (BOOL)_fixupSharedVideosWithoutThumbnailsInStore:(id)arg1;
+ (BOOL)_fixupSyncedAssetAttributesInStore:(id)arg1;
+ (BOOL)_flattenUnknownCustomRenderedValues:(id)arg1;
+ (BOOL)_forceAlbumMetadataToDiskInStore:(id)arg1;
+ (void)_forceCreateIndexOnOrderedAssets:(BOOL)arg1;
+ (BOOL)_forceDupeAnalysis;
+ (BOOL)_forceSoftResetSync;
+ (BOOL)_generateAddedDateForAssetsInStore:(id)arg1;
+ (void)_generateAlbumMetadataFromLastiTunesSyncedPlist;
+ (BOOL)_identifyVariationsAndDepthAdjustmentsForAsset:(id)arg1;
+ (BOOL)_identifyVariationsAndDepthAdjustmentsIncludingBakedInLongExposure:(BOOL)arg1 inStore:(id)arg2;
+ (BOOL)_initiateLightweightReimportOfAllPhotoCloudSharingMetadataInStore:(id)arg1;
+ (BOOL)_isReasonableCreationDate:(id)arg1;
+ (id)_managedObjectModelForLightweightMigrationStageWithURL:(id)arg1;
+ (BOOL)_markAllProcessedAnalysisStatesDirtyForWorkerType:(short)arg1 withStartingWorkerFlags:(int)arg2 inStore:(id)arg3;
+ (BOOL)_markMigrationVerifiedTypePersonsInStore:(id)arg1;
+ (BOOL)_markOldPhotoIrisEditsEvaluatedInStore:(id)arg1;
+ (BOOL)_markPhotoIrisVideoOrphansInStore:(id)arg1;
+ (BOOL)_migrateAssetLocationData:(id)arg1;
+ (BOOL)_migrateCloudResourcesRelationshipsInStagedStore:(id)arg1;
+ (BOOL)_migrateDetectedFacesGroupInStagedStore:(id)arg1;
+ (int)_migrateLegacySlomoAdjustmentsForAsset:(id)arg1;
+ (BOOL)_migrateLegacySlomoAdjustmentsInStore:(id)arg1 fromLegacySLMFormat:(BOOL)arg2;
+ (BOOL)_migrateOriginalColorSpaceInStagedStore:(id)arg1;
+ (BOOL)_migrateRejectedFacesGroupInStagedStore:(id)arg1;
+ (BOOL)_migrateRevGeoLocationDataFromKeyedArchiverFormat:(id)arg1;
+ (BOOL)_migrateTransformableUUIDsToStringsInStore:(id)arg1;
+ (id)_modelMigrator;
+ (BOOL)_moveCloudSharedDerivativesInStore:(id)arg1;
+ (BOOL)_moveMyPhotoStreamToAlbumsListInStore:(id)arg1;
+ (id)_newSyncedPropertiesByAssetUUIDs:(BOOL)arg1;
+ (id)_nextRequiredStagedMigrationVersionAfterVersion:(id)arg1;
+ (struct sqlite3 *)_openSQLTransactionWithDBPath:(const char *)arg1;
+ (void)_parseDMContextForRestartingAfterRestoreFromBackup:(BOOL *)arg1 restartingAfterRestoreFromCloud:(BOOL *)arg2;
+ (BOOL)_performChangesOnBatchFetchedObjects:(id)arg1 inMOC:(id)arg2 batchSize:(unsigned long long)arg3 objectHandler:(CDUnknownBlockType)arg4 error:(id *)arg5;
+ (BOOL)_performMigrationCacheDateCreatedOnResources:(BOOL)arg1 cacheItemIdentifierOnResources:(BOOL)arg2 store:(id)arg3;
+ (BOOL)_persistMemoriesInStore:(id)arg1;
+ (BOOL)_persistMetadataToFileSystemForAlbum:(id)arg1;
+ (BOOL)_persistPersonsInStore:(id)arg1;
+ (BOOL)_persistPhotoIrisVisibilityStateToDiskInStore:(id)arg1;
+ (BOOL)_persistPlaceAnnotationData:(id)arg1;
+ (BOOL)_persistStoreUUIDToMobileCPLPlist:(id)arg1;
+ (BOOL)_persistVideoComplPropertiesInStore:(id)arg1;
+ (BOOL)_populateAdjustmentTimestampsOnAssets:(id)arg1;
+ (BOOL)_populateAlbumAndFolderOrderKeysInStagedStore:(id)arg1;
+ (BOOL)_populateCloudNameSourceOnFacesInStore:(id)arg1;
+ (BOOL)_populateCloudResourceLocalStateInStor:(id)arg1;
+ (BOOL)_populateCloudVerifiedTypeOnPersonsInStore:(id)arg1;
+ (BOOL)_populateDurationAndHDRTypeFromAdditionalAssetAttributesInStagedStore:(id)arg1;
+ (void)_populateFaceRegionsForAsset:(id)arg1;
+ (BOOL)_populateFaceRegionsInStore:(id)arg1;
+ (BOOL)_populateGroupingStateOnAllGroupedAssetsInStore:(id)arg1;
+ (BOOL)_populateHasAdjustmentsForAssetsInStore:(id)arg1;
+ (BOOL)_populateLatLongInAsset:(id)arg1;
+ (BOOL)_populateLightweightReimportDirectoryWithPhotoCloudSharingAssetsInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (BOOL)_populateNilOriginalFilename:(id)arg1;
+ (BOOL)_populateNilOriginalFilenameOnMaster:(id)arg1;
+ (BOOL)_populateRepresentativeAssets:(id)arg1;
+ (BOOL)_populateReverseLocationDataContainsLocation:(id)arg1;
+ (BOOL)_populateUserKeyFacePickSourceForPersonInStore:(id)arg1;
+ (BOOL)_populateVideoCpFieldsInStagedStore:(id)arg1;
+ (BOOL)_postProcessFromVersion6006Store:(id)arg1;
+ (id)_predicateForInconsistentHeifAssets;
+ (void)_printCountsForEntityName:(id)arg1 groupByProperties:(id)arg2 inManagedObjectContext:(id)arg3;
+ (void)_printMigrationSummaryInStore:(id)arg1;
+ (BOOL)_processDeletesForUUIDs:(id)arg1;
+ (BOOL)_purgeCloudSharedResourcesInStore:(id)arg1;
+ (BOOL)_rebuildAllMomentsInStore:(id)arg1;
+ (BOOL)_rebuildWideCaptureThumbsInStore:(id)arg1;
+ (BOOL)_recoverSingleBurstPhotos:(id)arg1;
+ (BOOL)_refreshTriggerValues:(id)arg1;
+ (BOOL)_removeAllWallpaperAssetsInStore:(id)arg1;
+ (BOOL)_removeAutoloopCacheIfExists;
+ (BOOL)_removeAutoloopWorkerStatesInStore:(id)arg1;
+ (BOOL)_removeCameraRollInStore:(id)arg1;
+ (BOOL)_removeEvents:(id)arg1;
+ (void)_removeFileAt:(id)arg1 forResource:(id)arg2;
+ (BOOL)_removeOldPersonMetadataInStore:(id)arg1;
+ (BOOL)_removeUntrackedCloudResourceImageDerivativesInStore:(id)arg1;
+ (BOOL)_removeUntrackedPersonMetadataInStore:(id)arg1;
+ (BOOL)_removingDuplicatedCloudAssetGuid:(id)arg1;
+ (void)_repairCloudPlaceholderKindForVideoAsset:(id)arg1;
+ (void)_repairRootFolderFixedOrderKeysInContext:(id)arg1;
+ (BOOL)_repairSingletonObjectsInDatabaseForOfflineStore:(id)arg1;
+ (BOOL)_repairSingletonObjectsInDatabaseUsingContext:(id)arg1 error:(id *)arg2;
+ (void)_repairSingletonObjectsInNewDatabase:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_repairSingletonObjectsInNewDatabaseFailedWithError:(id)arg1;
+ (void)_repairSingletonObjectsInNewDatabaseFailedWithInvalidDatabase;
+ (void)_repairSingletonObjectsInNewDatabaseFailedWithMissingDatabase;
+ (void)_repairSingletonObjectsInNewDatabaseFailedWithNoPersistentStores;
+ (BOOL)_repersistDuplicatedAssets:(id)arg1;
+ (BOOL)_repushAssetsMatchingPredicate:(id)arg1 inStore:(id)arg2;
+ (BOOL)_repushAssetsWithAnyUserConfirmedFaceInStore:(id)arg1;
+ (BOOL)_repushAssetsWithNewGroupingPropertiesInStore:(id)arg1;
+ (BOOL)_repushMemoriesWithNewFeaturesInStore:(id)arg1;
+ (BOOL)_repushPersonsWithMergeTargetInStore:(id)arg1;
+ (BOOL)_resetAlbumToFolderOrderKeyForAlbums:(id)arg1;
+ (BOOL)_resetDupesAnalysisInStore:(id)arg1;
+ (BOOL)_resetFailedAssets:(id)arg1;
+ (BOOL)_resetFailedCloudMasters:(id)arg1;
+ (void)_resetICPLPrompt;
+ (void)_resetLocalResourcesStateForAssetsWithContext:(id)arg1 usingPredicate:(id)arg2;
+ (BOOL)_resetThumbnailIndexesAndInitiateRebuildRequestIfSuccessful;
+ (BOOL)_resetThumbnailsAndInitiateRebuildRequestIfNeeded;
+ (BOOL)_resetUploadAttempts:(id)arg1;
+ (BOOL)_rollbackSQLTransactionAndCloseDB:(struct sqlite3 *)arg1;
+ (BOOL)_runMigrationStepWithName:(id)arg1 fetchRequest:(id)arg2 store:(id)arg3 migrationHandler:(CDUnknownBlockType)arg4;
+ (BOOL)_saveChangesToPhotoIrisInStore:(id)arg1 matchingPredicate:(id)arg2 countChanged:(unsigned long long *)arg3 error:(id *)arg4 changeBlock:(CDUnknownBlockType)arg5;
+ (void)_setIsPostProcessingLightWeightMigration:(BOOL)arg1;
+ (void)_setLastWelcomedDBVersion;
+ (BOOL)_setPlaybackStyleForAnimatedGIFsInStore:(id)arg1;
+ (BOOL)_setUserTypeOnKeyFace:(id)arg1;
+ (BOOL)_setupRootFolderInStore:(id)arg1;
+ (id)_sharedModelMigratorForImport;
+ (BOOL)_shouldConvertManagedAdjustmentsForAsset:(id)arg1;
+ (void)_shouldRepromptUserIfNeeded;
+ (BOOL)_shouldTriggerLightweightMigrationFailureForInternalTesting;
+ (id)_stagedManagedObjectModelURLWithStageVersion:(id)arg1;
+ (id)_stagedVersions;
+ (BOOL)_storeContainsFaceCrops:(id)arg1 success:(BOOL *)arg2;
+ (BOOL)_tagScreenshotsForAssetsInStore:(id)arg1;
+ (BOOL)_trimInvalidAlbumAssetsMappingRecords;
+ (BOOL)_tryToPromoteUnknownAssetsInStore:(id)arg1;
+ (BOOL)_ungroupDuplicateGroupedAssetsInStore:(id)arg1;
+ (BOOL)_unquarantineClass:(Class)arg1 inManagedObject:(id)arg2;
+ (BOOL)_unquarantinedQuarantinedItems:(id)arg1;
+ (BOOL)_updateKeyAssetInMemory:(id)arg1;
+ (BOOL)_updateKindSubtypeForPanoramaPhotosNeedsReset:(BOOL)arg1 inStore:(id)arg2;
+ (BOOL)_updatePlaybackStylesAndVariationsInStore:(id)arg1;
+ (BOOL)_updatePlaybackWithBatchUpdateRequest:(id)arg1 targetDescription:(id)arg2 inContext:(id)arg3;
+ (BOOL)_updateSidecarForCloudSharedIrisInStore:(id)arg1;
+ (void)_validateCurrentModelVersionAttempt:(long long)arg1;
+ (void)_validateCurrentModelVersionFailedWithMismatchedVersion:(int)arg1;
+ (void)_validateCurrentModelVersionFailedWithNoVersionFromServer;
+ (BOOL)_validateOrDeleteFileAtPath:(id)arg1 forCloudResource:(id)arg2;
+ (BOOL)_verifyCloudAssetsLocalAvailability:(id)arg1;
+ (void)_writeToPhotoDataDirectoryFailedWithNoPermission:(id)arg1;
+ (void)applyDataProtectionToAllPhotosFilesOnce;
+ (void)archiveAssetUUIDForPathPlist:(id)arg1;
+ (id)archivedAssetUUIDForURL:(id)arg1;
+ (id)assetUUIDForPathPlistURL;
+ (BOOL)attemptLightweightMigrationFromVersion:(id)arg1 onStore:(id)arg2 withMetadata:(id)arg3 orStoreURL:(id)arg4 options:(id)arg5 coordinator:(id)arg6;
+ (int)checkForceMigrationTypeRequestedAndGetOptionalSourceModelVersion:(id *)arg1;
+ (void)cleanupModelForDataMigration;
+ (BOOL)clearVisionWorkerCache;
+ (void)createDatabase;
+ (int)currentModelVersion;
+ (BOOL)debug_resetThumbnailsAndInitiateRebuildRequest;
+ (BOOL)deleteAllAssetAnalysisStatesInStore:(id)arg1;
+ (id)descriptionForForceMigrationType:(int)arg1;
+ (BOOL)didCreateSqliteErrorFileForLightweightMigration;
+ (BOOL)didImportFileSystemAssets;
+ (BOOL)didImportFileSystemAssetsWithMOC:(id)arg1;
+ (void)dontImportFileSystemDataIntoDatabase;
+ (id)eventNameFromDate:(id)arg1;
+ (id)extractPathToAssetUUIDRecoveryMappingFromDatabasePath:(id)arg1;
+ (long long)faceMigrationResetLevelRequiredForPreviousStoreVersion:(unsigned long long)arg1;
+ (BOOL)faceQualityResetRequiredForPreviousStoreVersion:(unsigned long long)arg1;
+ (BOOL)fixPossiblyIncorrectAddedDateForAsset:(id)arg1;
+ (BOOL)fixupStatesWithUnreachableAssetUUIDsInStore:(id)arg1;
+ (BOOL)fixupUnknownAnalysisStatesInStore:(id)arg1;
+ (void)forceImportFileSystemDataIntoDatabase;
+ (id)generatePathToAssetUUIDRecoveryMapping;
+ (BOOL)graphPersonResetRequiredForPreviousStoreVersion:(unsigned long long)arg1;
+ (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (BOOL)isLoadingFacesFromFileSystem;
+ (BOOL)isPostProcessingLightweightMigration;
+ (void)loadFacesFileSystemDataIntoDatabase;
+ (void)loadFileSystemDataIntoDatabaseIfNeededWithReason:(id)arg1;
+ (BOOL)markAllDirtyFaceAnalysisStatesWithFaceDetectionWorkerFlagsInStore:(id)arg1;
+ (BOOL)markAllSceneAnalysisStatesDirtyAndClearDistanceIdentitiesInStore:(id)arg1;
+ (BOOL)markUserConfirmedFacesAndCorrespondingFaceAnalysisStatesDirtyInStore:(id)arg1;
+ (void)migratePersonContactInfo;
+ (BOOL)migrateToRequiredAnalysisState:(id)arg1;
+ (BOOL)performFaceAnalysisResetMigrationStepWithResetLevel:(long long)arg1 store:(id)arg2;
+ (void)postProcessFixesAfterOTARestoreForCompleteAsset:(id)arg1 fixAddedDate:(BOOL)arg2;
+ (BOOL)postProcessMigratedStore:(id)arg1 fromVersion:(int)arg2;
+ (BOOL)postProcessThumbnailsOnlyIfVersionMismatchOrMissing:(BOOL *)arg1;
+ (BOOL)processWelterweightMigrationStageOnStore:(id)arg1 fromVersion:(int)arg2 toVersion:(int)arg3 migrationContext:(id)arg4;
+ (void)repairPotentialModelCorruption;
+ (void)repairSingletonObjectsInDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)repairSingletonObjectsInNewDatabaseOrFail;
+ (BOOL)resetFaceQualityInStore:(id)arg1;
+ (BOOL)resetGraphPersonsInStore:(id)arg1;
+ (BOOL)resetManualOrderForNonFavoritePeopleInManagedObjectContext:(id)arg1;
+ (BOOL)resetManualOrderForNonFavoritePeopleInStore:(id)arg1;
+ (BOOL)resetRejectedFacesOnAllPersonsInStore:(id)arg1;
+ (BOOL)restartingAfterNonCloudRestoreFromBackup;
+ (BOOL)restartingAfterOTAMigration;
+ (BOOL)restartingAfterRestoreFromBackup;
+ (BOOL)retryQuarantinedAssetsAndFixResourceRelation:(id)arg1;
+ (BOOL)sceneStepRequiredForPreviousStoreVersion:(unsigned long long)arg1;
+ (void)setDidImportFileSystemAssets:(BOOL)arg1;
+ (void)setLoadingFacesFromFileSystem:(BOOL)arg1;
+ (BOOL)shouldRebuildDCIMSubDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 assetsKind:(int *)arg3;
+ (BOOL)skipDataProtectionForFilePath:(id)arg1;
+ (BOOL)touchAnalysisStateSortTokensInStoreInStore:(id)arg1;
+ (void)validateCurrentModelVersion;
+ (BOOL)waitForDataMigratorToExit;
- (void)_collectFileURLs:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4 testCreationDates:(BOOL)arg5;
- (void)_importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_importAllDCIMAssets;
- (id)_importFileSystemImportAssets:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)_loadFacesFileSystemDataIntoDatabase;
- (void)_loadFileSystemDataIntoDatabaseIfNeededWithReason:(id)arg1;
- (void)_migratePersonContactInfo;
- (id)_orderedAssetsToImportCameraRollOnly:(BOOL)arg1;
- (void)_prepareForImportDeleteCorruptAssetsWithImporter:(id)arg1 context:(id)arg2;
- (void)_removeLegacyMemoryRelatedSnapshotDirectory;
- (void)_removeLegacyModelInterestDatabase;
- (id)_syncedPropertiesForAssetUUID:(id)arg1;
- (void)cleanupModelForDataMigration;
- (void)collectContentsOfDirectoryURL:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4;
- (void)dealloc;
- (void)dontImportFileSystemDataIntoDatabase;
- (id)init;
- (id)initWithImplicitTransaction:(BOOL)arg1;
- (void)pausePhotoStreams;
- (void)repairPotentialModelCorruption;
- (void)resumePhotoStreams;
- (BOOL)shouldRebuildDCIMDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 isPhotoStream:(BOOL *)arg3 isCPLAssets:(BOOL *)arg4 cameraRollOnly:(BOOL)arg5;

@end

