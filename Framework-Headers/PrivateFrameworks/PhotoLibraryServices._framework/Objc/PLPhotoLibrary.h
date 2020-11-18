//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSCalendar, NSMutableArray, NSMutableDictionary, NSSet, NSString, PLFetchingAlbum, PLGenericAlbum, PLManagedAlbum, PLManagedAlbumList, PLManagedFolder, PLManagedObjectContext;
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
    NSMutableDictionary *_photoStreamAlbumsByStreamID;
    NSMutableArray *_photoStreamAlbums;
    NSSet *_imageFileExtensions;
    NSSet *_rawImageFileExtensions;
    NSSet *_audioFileExtensions;
    NSSet *_extraVideoExtensions;
    unsigned long long _lastFetchedGPSCount;
    unsigned long long _insertedCountSinceLastFetchedGPSCount;
    unsigned long long _deletedCountSinceLastFetchedGPSCount;
    unsigned long long _newlyCompleteWithGPS;
    PLManagedAlbum *_cameraRollAlbum;
    PLFetchingAlbum *_userLibraryAlbum;
    PLFetchingAlbum *_cameraSessionAlbum;
    PLManagedAlbumList *_rootAlbumList;
    PLManagedFolder *_rootFolder;
    NSString *_cachedName;
    PLManagedObjectContext *managedObjectContext;
}

@property (readonly, copy, nonatomic) NSArray *albums;
@property (readonly, copy, nonatomic) NSArray *eventAlbums;
@property (readonly, copy, nonatomic) NSArray *faceAlbums;
@property (readonly, copy, nonatomic) NSObject<PLAlbumProtocol> *favoritesAlbum;
@property (readonly, copy, nonatomic) NSArray *imagePickerAlbums;
@property (readonly, copy, nonatomic) NSArray *importAlbums;
@property (strong, nonatomic) PLManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext;
@property (readonly, copy, nonatomic) NSArray *photoStreamAlbums;
@property (readonly, copy, nonatomic) NSArray *photoStreamAlbumsForPreferences;
@property (readonly, copy, nonatomic) NSArray *placeAlbums;
@property (readonly, strong, nonatomic) PLManagedAlbumList *rootAlbumList;
@property (readonly, strong, nonatomic) PLManagedFolder *rootFolder;
@property (readonly, copy, nonatomic) NSArray *userAlbums;
@property (readonly, strong, nonatomic) PLFetchingAlbum *userLibraryAlbum;
@property (readonly, copy, nonatomic) NSArray *wallpaperAlbums;

+ (unsigned long long)CloudPhotoLibrarySize;
+ (void)_activateStatusTimer;
+ (void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+ (BOOL)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+ (BOOL)_assetsdQueueingMode;
+ (BOOL)_canSetPauseMarkerWithUnpauseTime:(id)arg1 onPauseData:(id)arg2;
+ (void)_createPauseMarkerForReason:(short)arg1 withUnpauseTime:(id)arg2 withPath:(id)arg3;
+ (id)_dataMigratorFinishedFilePath;
+ (id)_dataProtectionIndicatorFilePath;
+ (void)_doFilesystemImportIfNeededWithMOC:(id)arg1 reason:(id)arg2;
+ (void)_enqeueRecoveryJob:(id)arg1;
+ (void)_enqueueOperationWithName:(id)arg1 priority:(long long)arg2 block:(CDUnknownBlockType)arg3;
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
+ (id)allPersistedDirectoryURLs;
+ (BOOL)areOpportunisticTasksDisabled;
+ (id)assetsDataDirectory;
+ (BOOL)canSaveVideoToCameraRoll:(id)arg1;
+ (BOOL)clearPauseMarkerForReason:(short)arg1;
+ (id)cplAssetsDirectoryURL;
+ (id)cplDownloadFinishedMarkerFilePath;
+ (id)cplEnableMarkerFilePath;
+ (id)crashRecoveryIndicatorFilePaths:(BOOL)arg1;
+ (void)createPauseMarkerWithUnpauseTime:(id)arg1 reason:(short)arg2;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 inLibrary:(id)arg2;
+ (BOOL)createSqliteErrorIndicatorFile;
+ (short)currentPauseReason;
+ (id)dcimDirectory;
+ (id)dcimDirectoryURL;
+ (unsigned long long)defaultUnverifiedFaceCountThreshold;
+ (void)delayedRefreshCachedCountsInAlbumIDs:(id)arg1;
+ (id)deletedMemoryUUIDsFilePath;
+ (id)disableICloudPhotosFilePath;
+ (void)disableOpportunisticTasks:(BOOL)arg1;
+ (id)dupeAnalysisNeededFilePath;
+ (id)enableICloudPhotosFilePath;
+ (id)fileReservationForFileAtPath:(id)arg1 exclusive:(BOOL)arg2;
+ (void)forceSoftResetSync;
+ (id)forceSoftResetSyncPath;
+ (void)handlePossibleCoreDataError:(id)arg1;
+ (id)iTunesPhotosDirectory;
+ (id)iTunesSyncedAssetMetadataThumbnailsDirectory;
+ (id)iTunesSyncedAssetSmallThumbnailsDirectory;
+ (id)iTunesSyncedAssetsDirectory;
+ (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
+ (id)iTunesSyncedFaceDataDirectory;
+ (id)imageWriterIndicatorFilePath;
+ (void)initializeGraphicsServices;
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
+ (id)libraryAvailableIndicatorFilePath;
+ (BOOL)libraryAvailableIndicatorState;
+ (id)lightweightReimportPhotoCloudSharingAssetDirectoryForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2;
+ (id)lightweightReimportPhotoCloudSharingAssetFileNameWithCloudAssetGUID:(id)arg1 type:(id)arg2;
+ (id)lightweightReimportPhotoCloudSharingDataDirectory;
+ (id)mediaFilesDirectoryURL;
+ (id)migrationIndicatorFilePath;
+ (id)momentAnalysisNeededFilePath;
+ (id)opportunisticTaskIsolationQueue;
+ (id)pathToAssetsToAlbumsMapping;
+ (id)pauseICloudPhotosFilePath;
+ (void)performAndWaitOnTransientLibraryWithName:(const char *)arg1 block:(CDUnknownBlockType)arg2;
+ (void)performOnTransientLibraryWithPriority:(long long)arg1 name:(const char *)arg2 block:(CDUnknownBlockType)arg3;
+ (void)performOnTransientLibraryWithPriority:(long long)arg1 name:(const char *)arg2 block:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)performTransactionAndWaitOnTransientLibraryWithName:(const char *)arg1 block:(CDUnknownBlockType)arg2;
+ (id)persistedAlbumDataDirectoryURL;
+ (id)persistedFaceDataDirectoryURL;
+ (id)photoCloudSharingCacheDataDirectory;
+ (id)photoCloudSharingDataDirectory;
+ (id)photoCloudSharingMetadataDirectory;
+ (id)photoDataCPLDerivativeDirectory;
+ (id)photoDataCPLDirectory;
+ (id)photoDataCPLLibraryIdentifier;
+ (id)photoDataCPLResourceDestinationDirectoryWithIdentifier:(id)arg1;
+ (id)photoDataCachesDirectory;
+ (id)photoDataDirectory;
+ (id)photoDataDirectoryURL;
+ (id)photoDataMiscDirectory;
+ (BOOL)photoLibraryIsObtainable;
+ (id)photoMetadataDirectoryURL;
+ (id)photoMetadataDirectoryURLForMediaInMainDirectory:(id)arg1;
+ (id)photoMutationsDirectory;
+ (id)photoOutboundSharingTmpDirectoryURL;
+ (id)photoStreamsDataDirectory;
+ (void)postGlobalPhotoLibraryAvailableNotification;
+ (int)priorityForFileExtension:(id)arg1;
+ (BOOL)processCanReadSandboxForPath:(id)arg1;
+ (BOOL)processCanWriteSandboxForPath:(id)arg1;
+ (BOOL)processWithID:(int)arg1 canReadSandboxForPath:(id)arg2;
+ (BOOL)processWithID:(int)arg1 canWriteSandboxForPath:(id)arg2;
+ (id)queueStatusDescription;
+ (void)recoverFromCrashIfNeeded;
+ (void)refreshCachedCountsOnAllAssetContainersInContext:(id)arg1;
+ (void)refreshCachedCountsOnAssetsContainerClass:(Class)arg1 inContext:(id)arg2 withPredicate:(id)arg3;
+ (BOOL)removeFaceMetadataAtURL:(id)arg1 includingPeople:(BOOL)arg2;
+ (void)repairSingletonObjects;
+ (void)resetSyncedAssetsDCIMDirectory;
+ (void)scheduleUserInitiatedAnalysisForAssets:(id)arg1;
+ (void)setApplicationIsWildcat:(BOOL)arg1;
+ (void)setCameraRollCountedInQuota:(BOOL)arg1;
+ (void)setCloudAlbumSharingEnabled:(BOOL)arg1;
+ (void)setDataMigratorFinished:(BOOL)arg1;
+ (void)setDataProtectionComplete:(BOOL)arg1;
+ (void)setDisableICloudPhotos:(BOOL)arg1;
+ (void)setDupeAnalysisNeeded:(BOOL)arg1;
+ (void)setEnableICloudPhotos:(BOOL)arg1;
+ (void)setICloudPhotosEnabled:(BOOL)arg1;
+ (void)setImageWriterIsBusy:(BOOL)arg1;
+ (void)setLibraryAvailableIndicatorState:(BOOL)arg1;
+ (void)setMigratorIsBusy:(BOOL)arg1;
+ (void)setMomentAnalysisNeeded:(BOOL)arg1;
+ (void)setPhotoStreamEnabled:(BOOL)arg1;
+ (void)setSqliteErrorAndExitIfNecessaryForSimulatedCorruption:(BOOL)arg1;
+ (void)setStreamsLibraryUpdatingExpired:(BOOL)arg1;
+ (void)setTakingPhotoIsBusy:(BOOL)arg1;
+ (void)setUnverifiedFaceCountThreshold:(unsigned long long)arg1;
+ (void)setVideoCaptureIsBusy:(BOOL)arg1;
+ (id)sharedPhotoLibrary;
+ (unsigned long long)sharedStreamsSize;
+ (id)simpleDCIMDirectory;
+ (id)sqliteErrorIndicatorFilePath;
+ (id)streamsLibraryUpdatingExpiredIndicatorFilePath;
+ (id)syncInfoPath;
+ (id)syncedAlbumSubtitleStringFormat;
+ (id)takingPhotoIndicatorFilePath;
+ (id)takingVideoIndicatorFilePath;
+ (id)tmpDragAndDropDirectoryURL;
+ (id)unpauseTime;
+ (unsigned long long)unverifiedFaceCountThreshold;
+ (void)updateAlbumKeyAssetsInContext:(id)arg1 withPredicate:(id)arg2;
+ (void)updateAssetPlayShareViewCountsInContext:(id)arg1;
+ (void)updateICloudPhotosMarkerForEnable:(BOOL)arg1;
+ (void)updateMemoryPlayShareViewCountsInContext:(id)arg1;
+ (void)updateUnverifiedFaceCountThreshold;
+ (id)videosPath;
- (void).cxx_destruct;
- (id)_allAssetsForDeletion:(id)arg1;
- (void)_applyAdjustmentFileInfo:(id)arg1 renderedContentFileInfo:(id)arg2 renderedVideoComplementFileInfo:(id)arg3 toAsset:(id)arg4 withMainFileURL:(id)arg5;
- (void)_applySideCarFiles:(id)arg1 toAsset:(id)arg2 withMainFileURL:(id)arg3;
- (void)_batchDeleteAssets:(id)arg1 inManagedObjectContext:(id)arg2 withReason:(id)arg3;
- (void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1;
- (BOOL)_checkMomentAnalysisCompletion;
- (void)_deleteEmptyImportAlbumsWithAddedAlbums:(id)arg1;
- (void)_deleteObsoleteMetadataFiles;
- (void)_enumerateFilesAtURL:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateFilesAtURLs:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_fetchCompleteAssetIDsWithSavedAssetType:(short)arg1 context:(id)arg2;
- (void)_filterAlbums:(id)arg1 toTrashableAlbums:(id *)arg2 deletableAlbums:(id *)arg3 otherAlbums:(id *)arg4;
- (void)_filterAssets:(id)arg1 toTrashableAssets:(id *)arg2 deletableAssets:(id *)arg3 otherAssets:(id *)arg4;
- (BOOL)_hasAtLeastOneItem:(BOOL)arg1;
- (BOOL)_hasIncompleteAsset;
- (BOOL)_hasPendingAssetsIgnoreiTunes:(BOOL)arg1;
- (id)_init;
- (BOOL)_isHeifUTI:(struct __CFString *)arg1;
- (BOOL)_isOTARestoreFinished;
- (void)_linkAsideAlbumMetadataForOTARestore;
- (void)_loadDatabase:(const char *)arg1;
- (void)_photoLibraryCorruptNotification;
- (void)_photoLibraryForceClientExitNotification;
- (void)_processPhotoIrisSidecarIfNecessary:(id)arg1 forAsset:(id)arg2;
- (void)_recreateItemsFromMetadataAtDirectoryURLs:(id)arg1;
- (void)_removeOldFaceMetadataAsync;
- (void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1;
- (void)_safeSave:(id)arg1;
- (BOOL)_shouldCreateDatabase;
- (void)_updateHasAtLeastOnePhotoWithGPSWithInsertedCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3;
- (void)_updateWithInsertedAssetsCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3;
- (void)_userApplyTrashedState:(short)arg1 toAlbums:(id)arg2;
- (void)_userApplyTrashedState:(short)arg1 toAssets:(id)arg2;
- (void)_userDeleteAlbums:(id)arg1;
- (void)_userDeleteAssets:(id)arg1 withReason:(id)arg2;
- (void)_withDispatchGroup:(id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 name:(id)arg4 shouldSave:(BOOL)arg5 performTransaction:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)addCompletionHandlerToCurrentTransaction:(CDUnknownBlockType)arg1;
- (id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(struct NSObject *)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(BOOL)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(short)arg9 replacementUUID:(id)arg10 publicGlobalUUID:(id)arg11 extendedInfo:(id)arg12 withUUID:(id)arg13 ignoreEmbeddedMetadata:(BOOL)arg14 isPlaceholder:(BOOL)arg15;
- (void)addToKnownPhotoStreamAlbums:(id)arg1;
- (struct NSObject *)albumFromGroupURL:(id)arg1;
- (id)albumListForAlbumOfKind:(int)arg1;
- (id)albumListForContentMode:(int)arg1;
- (struct NSObject *)albumWithUuid:(id)arg1;
- (id)albumsForContentMode:(int)arg1;
- (id)allImportedPhotosAlbum;
- (id)allImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1;
- (struct NSObject *)allPhotoStreamPhotosAlbum;
- (struct NSObject *)allPhotosAlbum;
- (struct NSObject *)allPhotosAlbumIfExists;
- (id)assetURLForManagedPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1 extension:(id)arg2;
- (id)assetWithUUID:(id)arg1;
- (id)assetWithUUID:(id)arg1 inContainer:(id)arg2;
- (void)cleanupAfterImportAllDCIMAssets;
- (void)cleanupFilesAfteriTunesSyncBeforeDate:(id)arg1;
- (void)cleanupForStoreDemoMode;
- (void)cleanupModelForDataMigrationPurgeMissingSharedAndSynced;
- (void)clientApplicationWillEnterForeground;
- (unsigned long long)concurrencyType;
- (void)copyAssetToCameraRoll:(id)arg1;
- (unsigned long long)countOfLocalAlbumsContainingAssets:(id)arg1 assetsInSomeAlbumCount:(long long *)arg2;
- (void)dealloc;
- (BOOL)deleteAllDiagnosticFiles:(id *)arg1;
- (void)deleteAllImages;
- (void)deleteExpiredTrashBinObjects;
- (void)deleteFailedInMemoryCameraAsset:(id)arg1;
- (void)deleteITunesSyncedContentWithReason:(id)arg1;
- (id)duplicatePhotoStreamPhotosForPhotos:(id)arg1;
- (unsigned long long)editableAlbumCount;
- (struct NSObject *)eventAlbumContainingPhoto:(id)arg1;
- (struct NSObject *)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id *)arg2;
- (struct NSObject *)filesystemImportProgressAlbum;
- (void)flushAlbums;
- (void)flushDCIMAlbums;
- (void)flushPhotoStreamAlbums;
- (BOOL)getPhotoCount:(unsigned long long *)arg1 videoCount:(unsigned long long *)arg2;
- (BOOL)getPhotoCount:(unsigned long long *)arg1 videoCount:(unsigned long long *)arg2 excludeTrashed:(BOOL)arg3 excludeInvisible:(BOOL)arg4 excludeCloudShared:(BOOL)arg5;
- (id)globalValueForKey:(id)arg1;
- (BOOL)hasAtLeastOneItem;
- (BOOL)hasAtLeastOnePhoto;
- (BOOL)hasAtLeastOnePhotoWithGPS;
- (BOOL)hasCompletedMomentAnalysis;
- (BOOL)hasCompletedRestorePostProcessing;
- (BOOL)hasITunesSyncedContent;
- (BOOL)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3;
- (struct NSObject *)iPadAllPhotosAlbum;
- (struct NSObject *)iPadAllPhotosAlbumIfExists;
- (id)iTunesSyncedContentInfo;
- (id)imageForFormat:(int)arg1 forAsset:(id)arg2;
- (id)incompleteRestoreProcesses;
- (id)init;
- (id)initWithName:(const char *)arg1;
- (id)initWithTransientContext:(BOOL)arg1 name:(const char *)arg2;
- (BOOL)isReadyForCloudPhotoLibrary;
- (BOOL)isTransient;
- (id)lastImportSessionUUID;
- (id)lastImportedPhotosAlbum;
- (id)lastImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1;
- (id)librarySizes;
- (id)librarySizesFromDB;
- (id)managedObjectContextStoreUUID;
- (id)managedObjectWithObjectID:(id)arg1;
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
- (id)photoFromAssetURL:(id)arg1;
- (void)prepareDatabaseForOTAAssetsPhase;
- (void)processSyncSaveJob:(id)arg1 albumMap:(id)arg2;
- (void)recreateAlbumsAndPersonsFromMetadata;
- (void)recreatePersonsFromMetadata;
- (void)removeFromKnownPhotoStreamAlbums:(id)arg1;
- (void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (void)setLastImportSessionUUID:(id)arg1;
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

