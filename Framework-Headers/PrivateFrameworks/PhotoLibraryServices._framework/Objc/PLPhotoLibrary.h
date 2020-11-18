//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCalendar, NSMutableArray, NSSet, NSString, PLAssetsdClient, PLFetchingAlbum, PLGenericAlbum, PLManagedAlbum, PLManagedAlbumList, PLManagedFolder, PLManagedObjectContext, PLPhotoAnalysisServiceClient, PLPhotoLibraryPathManager, PLSimpleDCIMDirectory;
@protocol PLAlbumProtocol;

@interface PLPhotoLibrary : NSObject
{
    BOOL _listeningForITunesSyncing;
    BOOL _isTransient;
    unsigned long long _pendingTransactions;
    struct __CFDictionary *_allPhotos;
    int _databaseMigrationKind;
    NSMutableArray *_transactionCompletionHandlers;
    PLGenericAlbum *_allImportedPhotosAlbum;
    PLGenericAlbum *_lastImportedPhotosAlbum;
    NSCalendar *_exifConversionCalendar;
    NSSet *_imageFileExtensions;
    NSSet *_rawImageFileExtensions;
    NSSet *_audioFileExtensions;
    NSSet *_extraVideoExtensions;
    PLManagedAlbum *_cameraRollAlbum;
    PLFetchingAlbum *_userLibraryAlbum;
    PLFetchingAlbum *_cameraSessionAlbum;
    PLManagedAlbumList *_rootAlbumList;
    PLManagedFolder *_rootFolder;
    NSString *_cachedName;
    PLAssetsdClient *_assetsdClient;
    PLPhotoAnalysisServiceClient *_photoAnalysisClient;
    PLSimpleDCIMDirectory *_simpleDCIMDirectory;
    PLSimpleDCIMDirectory *_iTunesSyncedAssetsDCIMDirectory;
    PLManagedObjectContext *managedObjectContext;
    PLPhotoLibraryPathManager *_pathManager;
    NSArray *_importAlbums;
    NSArray *_eventAlbums;
    NSArray *_faceAlbums;
    NSArray *_placeAlbums;
}

@property (readonly, copy, nonatomic) NSArray *albums;
@property (readonly, copy, nonatomic) NSArray *eventAlbums; // @synthesize eventAlbums=_eventAlbums;
@property (readonly, copy, nonatomic) NSArray *faceAlbums; // @synthesize faceAlbums=_faceAlbums;
@property (readonly, copy, nonatomic) NSObject<PLAlbumProtocol> *favoritesAlbum;
@property (readonly, copy, nonatomic) NSArray *importAlbums; // @synthesize importAlbums=_importAlbums;
@property (strong, nonatomic) PLManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager; // @synthesize pathManager=_pathManager;
@property (readonly, copy, nonatomic) NSArray *photoStreamAlbums;
@property (readonly, copy, nonatomic) NSArray *photoStreamAlbumsForPreferences;
@property (readonly, copy, nonatomic) NSArray *placeAlbums; // @synthesize placeAlbums=_placeAlbums;
@property (readonly, copy, nonatomic) NSObject<PLAlbumProtocol> *placesAlbum;
@property (readonly, strong, nonatomic) PLManagedAlbumList *rootAlbumList;
@property (readonly, strong, nonatomic) PLManagedFolder *rootFolder;
@property (readonly, copy, nonatomic) NSArray *userAlbums;
@property (readonly, strong, nonatomic) PLFetchingAlbum *userLibraryAlbum;

+ (unsigned long long)CloudPhotoLibrarySize;
+ (void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+ (BOOL)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+ (BOOL)_assetsdQueueingMode;
+ (BOOL)_canSetPauseMarkerWithUnpauseTime:(id)arg1 onPauseData:(id)arg2;
+ (void)_createPauseMarkerForReason:(short)arg1 withUnpauseTime:(id)arg2 withPath:(id)arg3;
+ (id)_dataMigratorFinishedFilePath;
+ (id)_dataMigratorFinishedMarkerQueue;
+ (id)_dataProtectionIndicatorFilePath;
+ (void)_enqeueRecoveryJob:(id)arg1;
+ (void)_enqueueOperationWithName:(id)arg1 priority:(long long)arg2 block:(CDUnknownBlockType)arg3;
+ (id)_getLibraryPathFromTriggerFile;
+ (void)_inq_createPhotoStreamAlbumStreamID:(id)arg1 inLibrary:(id)arg2;
+ (BOOL)_isRebuildingPersons;
+ (void)_loadFileExtensionInformation;
+ (id)_operationQueueForPriority:(long long)arg1;
+ (id)_pauseDataOnPath:(id)arg1;
+ (id)_rebuildingPersonsIndicatorFilePath;
+ (void)_setIsRebuildingPersons:(BOOL)arg1;
+ (id)_statusDescriptionForQueue:(id)arg1;
+ (void)_updateAssetCountKeyPath:(id)arg1 withPendingCountKeyPath:(id)arg2 inContext:(id)arg3;
+ (void)_updateMemoryCountKeyPath:(id)arg1 withPendingCountKeyPath:(id)arg2 inContext:(id)arg3;
+ (void)_writeDisableICloudPhotosMarker;
+ (void)_writeEnableICloudPhotosMarker;
+ (BOOL)areOpportunisticTasksDisabled;
+ (BOOL)canSaveVideoToCameraRoll:(id)arg1;
+ (BOOL)clearPauseMarkerForReason:(short)arg1;
+ (id)cplDownloadFinishedMarkerFilePath;
+ (id)cplEnableMarkerFilePath;
+ (id)crashRecoveryIndicatorFilePaths:(BOOL)arg1;
+ (void)createPauseMarkerWithUnpauseTime:(id)arg1 reason:(short)arg2;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 inLibrary:(id)arg2;
+ (void)createRelocateLibraryTriggerFileWithPath:(id)arg1;
+ (BOOL)createSqliteErrorIndicatorFile;
+ (short)currentPauseReason;
+ (unsigned long long)defaultUnverifiedFaceCountThreshold;
+ (void)delayedRefreshCachedCountsInAlbumIDs:(id)arg1;
+ (void)deleteCPLDownloadFinishedMarkerFilePath;
+ (id)deletedMemoryUUIDsFilePath;
+ (id)disableICloudPhotosFilePath;
+ (void)disableOpportunisticTasks;
+ (id)dupeAnalysisNeededFilePath;
+ (id)enableICloudPhotosFilePath;
+ (void)enableOpportunisticTasks;
+ (void)exitToRelocatePhotoLibrary;
+ (id)fileReservationForFileAtPath:(id)arg1 exclusive:(BOOL)arg2;
+ (void)forceSoftResetSync;
+ (id)forceSoftResetSyncPath;
+ (void)handlePossibleCoreDataError:(id)arg1;
+ (BOOL)hasITunesSyncedContent;
+ (BOOL)isAlbumSynced:(id)arg1;
+ (BOOL)isApplicationWildcat;
+ (BOOL)isAudioFileExtension:(id)arg1;
+ (BOOL)isDataMigratorFinished;
+ (BOOL)isDataProtectionComplete;
+ (BOOL)isDisableICloudPhotos;
+ (BOOL)isDupeAnalysisNeeded;
+ (BOOL)isEnableICloudPhotos;
+ (BOOL)isForceSoftResetSync;
+ (BOOL)isICloudPhotosPaused;
+ (BOOL)isImageFileExtension:(id)arg1;
+ (BOOL)isMomentAnalysisNeeded;
+ (BOOL)isNonRawImageFileExtension:(id)arg1;
+ (BOOL)isRawImageFileExtension:(id)arg1;
+ (BOOL)isRunningInStoreDemoMode;
+ (BOOL)isSafeToRecoverAfterCrash;
+ (BOOL)isStreamsLibraryUpdatingExpired;
+ (BOOL)isUserPause;
+ (BOOL)isVideoFileExtension:(id)arg1;
+ (BOOL)libraryAvailableIndicatorState;
+ (id)momentAnalysisNeededFilePath;
+ (id)opportunisticTaskIsolationQueue;
+ (id)pauseICloudPhotosFilePath;
+ (void)performAndWaitOnTransientLibraryWithName:(const char *)arg1 block:(CDUnknownBlockType)arg2;
+ (void)performOnTransientLibraryWithPriority:(long long)arg1 name:(const char *)arg2 block:(CDUnknownBlockType)arg3;
+ (void)performOnTransientLibraryWithPriority:(long long)arg1 name:(const char *)arg2 block:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)performTransactionAndWaitOnTransientLibraryWithName:(const char *)arg1 block:(CDUnknownBlockType)arg2;
+ (BOOL)photoLibraryIsObtainable;
+ (id)photoOutboundSharingTmpDirectoryURL;
+ (void)postGlobalPhotoLibraryAvailableNotification;
+ (int)priorityForFileExtension:(id)arg1;
+ (BOOL)processCanReadSandboxForPath:(id)arg1;
+ (BOOL)processCanWriteSandboxForPath:(id)arg1;
+ (BOOL)processWithID:(int)arg1 canReadSandboxForPath:(id)arg2;
+ (BOOL)processWithID:(int)arg1 canWriteSandboxForPath:(id)arg2;
+ (id)queueStatusDescription;
+ (void)recordDataMigrationInfo:(id)arg1;
+ (void)recoverFromCrashIfNeeded;
+ (void)refreshCachedCountsOnAllAssetContainersInContext:(id)arg1;
+ (void)refreshCachedCountsOnAssetsContainerClass:(Class)arg1 inContext:(id)arg2 withPredicate:(id)arg3;
+ (BOOL)removeFaceMetadataAtURL:(id)arg1 includingPeople:(BOOL)arg2;
+ (void)removeRelocateLibraryTriggerFile;
+ (void)repairSingletonObjects;
+ (void)setApplicationIsWildcat:(BOOL)arg1;
+ (void)setCameraRollCountedInQuota:(BOOL)arg1;
+ (void)setCloudAlbumSharingEnabled:(BOOL)arg1;
+ (void)setDataMigratorFinished:(BOOL)arg1;
+ (void)setDataProtectionComplete:(BOOL)arg1;
+ (void)setDupeAnalysisNeeded:(BOOL)arg1;
+ (void)setICloudPhotosEnabled:(BOOL)arg1;
+ (void)setICloudPhotosEnabledInternal:(BOOL)arg1;
+ (void)setImageWriterIsBusy:(BOOL)arg1;
+ (void)setLibraryAvailableIndicatorState:(BOOL)arg1;
+ (void)setMomentAnalysisNeeded:(BOOL)arg1;
+ (void)setPhotoStreamEnabled:(BOOL)arg1;
+ (void)setSqliteErrorAndExitIfNecessaryForSimulatedCorruption:(BOOL)arg1;
+ (void)setStreamsLibraryUpdatingExpired:(BOOL)arg1;
+ (void)setTakingPhotoIsBusy:(BOOL)arg1;
+ (void)setUnverifiedFaceCountThreshold:(unsigned long long)arg1;
+ (void)setVideoCaptureIsBusy:(BOOL)arg1;
+ (id)sharedPhotoLibrary;
+ (unsigned long long)sharedStreamsSize;
+ (id)syncedAlbumSubtitleStringFormat;
+ (id)unpauseTime;
+ (unsigned long long)unverifiedFaceCountThreshold;
+ (void)updateAlbumKeyAssetsInContext:(id)arg1 withPredicate:(id)arg2;
+ (void)updateAssetPlayShareViewCountsInContext:(id)arg1;
+ (void)updateICloudPhotosMarkerForEnable:(BOOL)arg1;
+ (void)updateMemoryPlayShareViewCountsInContext:(id)arg1;
+ (void)updateUnverifiedFaceCountThreshold;
- (void).cxx_destruct;
- (id)_allAssetsForDeletion:(id)arg1;
- (void)_applyAdjustmentFileInfo:(id)arg1 renderedContentFileInfo:(id)arg2 renderedVideoComplementFileInfo:(id)arg3 toAsset:(id)arg4 withMainFileURL:(id)arg5;
- (void)_applySideCarFiles:(id)arg1 toAsset:(id)arg2 withMainFileURL:(id)arg3;
- (void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1;
- (BOOL)_checkMomentAnalysisCompletion;
- (id)_dataMigrationInfo;
- (unsigned long long)_dbFileSizes;
- (void)_deleteEmptyImportAlbumsWithAddedAlbums:(id)arg1;
- (void)_deleteITunesSyncedContentWithReason:(id)arg1;
- (void)_deleteObsoleteMetadataFiles;
- (void)_doFilesystemImportIfNeededWithMOC:(id)arg1 reason:(id)arg2;
- (void)_enumerateFilesAtURL:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateFilesAtURLs:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_fetchCompleteAssetIDsWithSavedAssetType:(short)arg1 context:(id)arg2;
- (id)_fetchedObjectsForDeleteWithEntity:(id)arg1 predicate:(id)arg2 batchSize:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)_fileSizeAtPath:(id)arg1;
- (void)_filterAlbums:(id)arg1 toTrashableAlbums:(id *)arg2 deletableAlbums:(id *)arg3 otherAlbums:(id *)arg4;
- (void)_filterAssets:(id)arg1 toTrashableAssets:(id *)arg2 deletableAssets:(id *)arg3 otherAssets:(id *)arg4;
- (BOOL)_hasAtLeastOneItem:(BOOL)arg1;
- (BOOL)_hasIncompleteAsset;
- (BOOL)_hasPendingAssetsIgnoreiTunes:(BOOL)arg1;
- (BOOL)_isHeifUTI:(struct __CFString *)arg1;
- (BOOL)_isOTARestoreInProgress;
- (void)_linkAsideAlbumMetadataForOTARestore;
- (void)_loadDatabase:(const char *)arg1;
- (void)_photoLibraryCorruptNotification;
- (void)_photoLibraryForceClientExitNotification;
- (void)_processPhotoIrisSidecarIfNecessary:(id)arg1 forAsset:(id)arg2;
- (void)_recreateItemsFromMetadataAtDirectoryURLs:(id)arg1;
- (void)_removeOldFaceMetadataAsync;
- (void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1;
- (void)_reportExpungedAssets:(id)arg1;
- (void)_resetSyncedAssetsDCIMDirectory;
- (void)_safeSave:(id)arg1;
- (BOOL)_safeSave:(id)arg1 error:(id *)arg2;
- (BOOL)_shouldCreateDatabase;
- (void)_updateWithInsertedAssetsCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2;
- (void)_userApplyTrashedState:(short)arg1 toAlbums:(id)arg2;
- (void)_userApplyTrashedState:(short)arg1 toAssets:(id)arg2;
- (void)_userDeleteAlbums:(id)arg1;
- (void)_userDeleteAssets:(id)arg1 withReason:(id)arg2;
- (void)_withDispatchGroup:(id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 name:(id)arg4 shouldSave:(BOOL)arg5 performTransaction:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)addCompletionHandlerToCurrentTransaction:(CDUnknownBlockType)arg1;
- (id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(struct NSObject *)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(BOOL)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(short)arg9 replacementUUID:(id)arg10 publicGlobalUUID:(id)arg11 extendedInfo:(id)arg12 withUUID:(id)arg13 ignoreEmbeddedMetadata:(BOOL)arg14 isPlaceholder:(BOOL)arg15;
- (struct NSObject *)albumFromGroupURL:(id)arg1;
- (id)albumListForAlbumOfKind:(int)arg1;
- (id)albumListForContentMode:(int)arg1;
- (struct NSObject *)albumWithUuid:(id)arg1;
- (id)allImportedPhotosAlbum;
- (id)allImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1;
- (struct NSObject *)allPhotosAlbum;
- (struct NSObject *)allPhotosAlbumIfExists;
- (id)assetURLForPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1 extension:(id)arg2;
- (id)assetWithUUID:(id)arg1;
- (id)assetWithUUID:(id)arg1 inContainer:(id)arg2;
- (id)assetsdClient;
- (void)batchDeleteAssets:(id)arg1 withReason:(id)arg2;
- (BOOL)batchDeleteAssetsWithPredicate:(id)arg1 reason:(id)arg2 error:(id *)arg3;
- (BOOL)batchDeleteObjectsWithEntity:(id)arg1 predicate:(id)arg2 error:(id *)arg3;
- (void)cleanupAfterImportAllDCIMAssets;
- (void)cleanupFilesAfteriTunesSyncBeforeDate:(id)arg1;
- (void)cleanupForStoreDemoMode;
- (void)cleanupIncompleteAssetsAfterOTARestore;
- (void)cleanupModelForDataMigrationPurgeMissingSharedAndSynced;
- (void)clientApplicationWillEnterForeground;
- (unsigned long long)concurrencyType;
- (unsigned long long)countOfLocalAlbumsContainingAssets:(id)arg1 assetsInSomeAlbumCount:(long long *)arg2;
- (void)dealloc;
- (BOOL)deleteAllDiagnosticFiles:(id *)arg1;
- (void)deleteExpiredTrashBinObjects;
- (id)duplicatePhotoStreamPhotosForPhotos:(id)arg1;
- (unsigned long long)editableAlbumCount;
- (id)estimatedLibrarySizes;
- (struct NSObject *)eventAlbumContainingPhoto:(id)arg1;
- (struct NSObject *)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2;
- (struct NSObject *)filesystemImportProgressAlbum;
- (BOOL)getPhotoCount:(unsigned long long *)arg1 videoCount:(unsigned long long *)arg2;
- (BOOL)getPhotoCount:(unsigned long long *)arg1 videoCount:(unsigned long long *)arg2 excludeTrashed:(BOOL)arg3 excludeInvisible:(BOOL)arg4 excludeCloudShared:(BOOL)arg5;
- (id)globalValueForKey:(id)arg1;
- (BOOL)hasAtLeastOneItem;
- (BOOL)hasAtLeastOnePhoto;
- (BOOL)hasCompletedMomentAnalysis;
- (BOOL)hasCompletedRestorePostProcessing;
- (BOOL)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3;
- (struct NSObject *)iPadAllPhotosAlbum;
- (struct NSObject *)iPadAllPhotosAlbumIfExists;
- (id)iTunesSyncedAssetsDCIMDirectory;
- (id)iTunesSyncedContentInfo;
- (id)imageForFormat:(int)arg1 forAsset:(id)arg2;
- (id)incompleteRestoreProcesses;
- (id)init;
- (id)initWithName:(const char *)arg1;
- (id)initWithTransientContext:(BOOL)arg1 name:(const char *)arg2;
- (id)initWithTransientContext:(BOOL)arg1 name:(const char *)arg2 basePath:(id)arg3;
- (id)initWithTransientContext:(BOOL)arg1 name:(const char *)arg2 pathManager:(id)arg3;
- (BOOL)isReadyForCloudPhotoLibrary;
- (BOOL)isTransient;
- (id)lastImportedPhotosAlbum;
- (id)lastImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1;
- (id)librarySizes;
- (id)librarySizesFromDB;
- (id)managedObjectContextStoreUUID;
- (id)masterURLFromSidecarURLs:(id)arg1;
- (void)modifyDCIMEntryForPhoto:(id)arg1;
- (id)name;
- (BOOL)needsMigration;
- (id)newImageForPhoto:(id)arg1 format:(int)arg2;
- (id)newImageForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(BOOL)arg3 outImageProperties:(const struct __CFDictionary **)arg4 outDeliveredPlaceholder:(BOOL *)arg5;
- (unsigned long long)numberOfCPLSupportedAssetsOfKind:(short)arg1 includingTrashedSinceDate:(id)arg2;
- (unsigned long long)numberOfUnpushedAssetsOfKind:(short)arg1;
- (id)objectWithObjectID:(id)arg1;
- (struct NSObject *)otaRestoreProgressAlbum;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 withPriority:(long long)arg3;
- (void)performBlock:(CDUnknownBlockType)arg1 withPriority:(long long)arg2;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performTransaction:(CDUnknownBlockType)arg1;
- (void)performTransaction:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performTransaction:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 withPriority:(long long)arg3;
- (void)performTransaction:(CDUnknownBlockType)arg1 withPriority:(long long)arg2;
- (void)performTransactionAndWait:(CDUnknownBlockType)arg1;
- (void)performTransactionAndWait:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performTransactionAndWaitWithName:(id)arg1 transaction:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)photoAnalysisClient;
- (id)photoFromAssetURL:(id)arg1;
- (void)prepareDatabaseForOTAAssetsPhase;
- (void)processSyncSaveJob:(id)arg1 albumMap:(id)arg2;
- (void)recreateAlbumsAndPersonsFromMetadata;
- (void)recreatePersonsFromMetadata;
- (void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1;
- (void)scheduleUserInitiatedAnalysisForAssets:(id)arg1;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (void)setLastImportSessionUUID:(id)arg1;
- (id)simpleDCIMDirectory;
- (struct NSObject *)syncProgressAlbum;
- (id)syncProgressAlbumsIgnoreiTunes:(BOOL)arg1;
- (id)syncedAlbums;
- (void)testForRecoveryInBackground;
- (void)userExpungeAlbums:(id)arg1;
- (void)userExpungeAssets:(id)arg1;
- (void)userTrashAlbums:(id)arg1;
- (void)userTrashAssets:(id)arg1;
- (void)userUntrashAlbums:(id)arg1;
- (void)userUntrashAssets:(id)arg1;
- (void)withDispatchGroup:(id)arg1 performBlock:(CDUnknownBlockType)arg2;
- (void)withDispatchGroup:(id)arg1 performTransaction:(CDUnknownBlockType)arg2;
- (void)withDispatchGroup:(id)arg1 performTransaction:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

