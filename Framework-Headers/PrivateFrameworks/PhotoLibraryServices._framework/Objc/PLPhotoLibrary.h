//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSPersistentStore, NSSet, NSString, PAImageConversionServiceClient, PAVideoConversionServiceClient, PLGenericAlbum, PLKeywordManager, PLLibraryServicesManager, PLManagedObjectContext, PLPhotoLibraryBundle, PLPhotoLibraryOptions, PLPhotoLibraryPathManager, PLSimpleDCIMDirectory, PLThumbnailIndexes, PLThumbnailManager;
@protocol PLAlbumProtocol;

@interface PLPhotoLibrary : NSObject
{
    unsigned long long _pendingTransactions;
    NSMutableArray *_transactionCompletionHandlers;
    PLGenericAlbum *_allImportedPhotosAlbum;
    PLGenericAlbum *_lastImportedPhotosAlbum;
    NSSet *_imageFileExtensions;
    NSSet *_rawImageFileExtensions;
    NSSet *_audioFileExtensions;
    NSSet *_extraVideoExtensions;
    PLPhotoLibraryBundle *_libraryBundle;
    PLSimpleDCIMDirectory *_simpleDCIMDirectory;
    struct os_unfair_lock_s _managedObjectContextLock;
    PLManagedObjectContext *_managedObjectContext;
    NSPersistentStore *_loadedPersistentStore;
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
    PLPhotoLibraryPathManager *_pathManager;
    PLLibraryServicesManager *_libraryServicesManager;
    NSString *_name;
    PLPhotoLibraryOptions *_options;
}

@property (readonly, getter=isCloudPhotoLibraryEnabled) BOOL cloudPhotoLibraryEnabled;
@property (readonly, strong, nonatomic) NSObject<PLAlbumProtocol> *filesystemImportProgressAlbum;
@property (readonly, nonatomic) PAImageConversionServiceClient *imageConversionServiceClient;
@property (readonly) PLKeywordManager *keywordManager;
@property (readonly) PLPhotoLibraryBundle *libraryBundle; // @synthesize libraryBundle=_libraryBundle;
@property (readonly, weak, nonatomic) PLLibraryServicesManager *libraryServicesManager; // @synthesize libraryServicesManager=_libraryServicesManager;
@property (readonly, nonatomic) PLManagedObjectContext *managedObjectContext;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) PLPhotoLibraryOptions *options; // @synthesize options=_options;
@property (readonly, strong, nonatomic) NSObject<PLAlbumProtocol> *otaRestoreProgressAlbum;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager; // @synthesize pathManager=_pathManager;
@property (readonly, copy, nonatomic) NSArray *photoStreamAlbums;
@property (readonly, copy, nonatomic) NSArray *photoStreamAlbumsForPreferences;
@property (readonly, strong, nonatomic) NSObject<PLAlbumProtocol> *syncProgressAlbum;
@property (readonly, strong, nonatomic) NSArray *syncedAlbums;
@property (readonly, nonatomic) PLThumbnailIndexes *thumbnailIndexes;
@property (readonly, nonatomic) PLThumbnailManager *thumbnailManager;
@property (readonly, nonatomic) PAVideoConversionServiceClient *videoConversionServiceClient;

+ (unsigned long long)CloudPhotoLibrarySize;
+ (void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+ (BOOL)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+ (void)_context:(id)arg1 saveFailedWithError:(id)arg2;
+ (void)_contextSaveFailedDueToChangingSPL:(id)arg1;
+ (void)_contextSaveFailedDueToClientRequestedShutdown:(id)arg1;
+ (void)_contextSaveFailedWithError:(id)arg1;
+ (void)_contextSaveFailedWithNoPersistentStores:(id)arg1;
+ (void)_contextSaveFailedWithSQLiteError:(id)arg1;
+ (void)_contextSaveFailedWithTimeoutError:(id)arg1;
+ (id)_getLibraryPathFromTriggerFile;
+ (void)_getResourceData:(id)arg1 nonDerivativeSizeOut:(unsigned long long *)arg2 derivativesSizeOut:(unsigned long long *)arg3 fileBackedThumbnailsSizeOut:(float *)arg4 tableThumbnailsSizeOut:(float *)arg5;
+ (id)_internalSystemPhotoLibrary;
+ (void)_loadFileExtensionInformation;
+ (BOOL)areOpportunisticTasksDisabled;
+ (id)cameraPhotoLibrary;
+ (BOOL)canSaveVideoToLibrary:(id)arg1;
+ (id)cloudSharingPhotoLibrary;
+ (id)cmmPhotoLibrary;
+ (id)cplPhotoLibrary;
+ (void)createRelocateLibraryTriggerFileWithPath:(id)arg1;
+ (id)diagnosticsPhotoLibrary;
+ (void)exitToRelocatePhotoLibrary;
+ (id)fileReservationForFileAtPath:(id)arg1 exclusive:(BOOL)arg2;
+ (void)initialize;
+ (BOOL)isAdjustmentEnvelopeExtension:(id)arg1;
+ (BOOL)isAudioFileExtension:(id)arg1;
+ (BOOL)isImageFileExtension:(id)arg1;
+ (BOOL)isNonRawImageFileExtension:(id)arg1;
+ (BOOL)isRawImageFileExtension:(id)arg1;
+ (BOOL)isVideoFileExtension:(id)arg1;
+ (id)masterURLFromSidecarURLs:(id)arg1;
+ (id)myPhotoStreamPhotoLibrary;
+ (id)newPhotoLibraryWithName:(const char *)arg1 loadedFromBundle:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)newPhotoLibraryWithName:(const char *)arg1 loadedFromURL:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)opportunisticTaskIsolationQueue;
+ (BOOL)photoLibraryIsObtainable;
+ (id)photoOutboundSharingTmpDirectoryURL;
+ (void)postGlobalPhotoLibraryAvailableIfNecessary;
+ (int)priorityForFileExtension:(id)arg1;
+ (void)refreshCachedCountsAndDates:(BOOL)arg1 onAssetsContainerClass:(Class)arg2 inContext:(id)arg3 withPredicate:(id)arg4;
+ (void)refreshCachedCountsOnAllAssetContainersInContext:(id)arg1;
+ (BOOL)removeFaceMetadataAtURL:(id)arg1 includingPeople:(BOOL)arg2;
+ (void)removeRelocateLibraryTriggerFile;
+ (id)resourcesInfoFromMoc:(id)arg1;
+ (void)setCloudAlbumSharingEnabled:(BOOL)arg1;
+ (void)setPhotoStreamEnabled:(BOOL)arg1;
+ (id)sharedPhotoLibrary;
+ (id)systemMainQueuePhotoLibrary;
+ (id)systemPhotoLibrary;
+ (BOOL)systemPhotoLibraryIsObtainable;
+ (id)unitTestPhotoLibrary;
- (void).cxx_destruct;
- (void)_applyAdjustmentFileInfo:(id)arg1 renderedContentFileInfo:(id)arg2 renderedVideoComplementFileInfo:(id)arg3 toAsset:(id)arg4 withMainFileURL:(id)arg5;
- (void)_applySideCarFiles:(id)arg1 toAsset:(id)arg2 withMainFileURL:(id)arg3;
- (BOOL)_checkMomentAnalysisCompletion;
- (unsigned long long)_dbFileSizes;
- (void)_deleteEmptyImportAlbumsWithAddedAlbums:(id)arg1;
- (void)_deleteObsoleteMetadataFiles;
- (void)_doFilesystemImportIfNeededWithMOC:(id)arg1 reason:(id)arg2;
- (void)_enumerateFilesAtURL:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateFilesAtURLs:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_fetchCompleteAssetIDsWithSavedAssetType:(short)arg1 context:(id)arg2;
- (id)_fetchedObjectsForDeleteWithEntity:(id)arg1 predicate:(id)arg2 batchSize:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)_fileSizeAtPath:(id)arg1;
- (void)_filterAlbums:(id)arg1 toTrashableAlbums:(id *)arg2 deletableAlbums:(id *)arg3 otherAlbums:(id *)arg4;
- (void)_filterAssets:(id)arg1 toTrashableAssets:(id *)arg2 deletableAssets:(id *)arg3 otherAssets:(id *)arg4;
- (BOOL)_hasIncompleteAsset;
- (id)_initWithPathManager:(id)arg1;
- (void)_inq_createPhotoStreamAlbumStreamID:(id)arg1;
- (id)_loadClientDatabaseContext:(id *)arg1;
- (id)_loadClientDatabaseContextFastPathAndReturnAbortAfterOpen:(BOOL *)arg1;
- (id)_loadDatabaseContext:(id *)arg1;
- (id)_loadServerDatabaseContext:(id *)arg1;
- (void)_photoLibraryCorruptNotification;
- (void)_photoLibraryForceClientExitNotification;
- (void)_processPhotoIrisSidecarIfNecessary:(id)arg1 forAsset:(id)arg2;
- (void)_recreateItemsFromMetadataAtDirectoryURLs:(id)arg1 includeAlbums:(BOOL)arg2;
- (void)_removeOldFaceMetadataAsync;
- (void)_reportExpungedAssets:(id)arg1;
- (void)_safeSave:(id)arg1;
- (void)_setManagedObjectContext:(id)arg1;
- (BOOL)_shouldTryFastPath;
- (void)_updateAssetCountKeyPath:(id)arg1 withPendingCountKeyPath:(id)arg2 inContext:(id)arg3;
- (void)_updateMemoryCountKeyPath:(id)arg1 withPendingCountKeyPath:(id)arg2 inContext:(id)arg3;
- (void)_userApplyTrashedState:(short)arg1 toAlbums:(id)arg2;
- (void)_userApplyTrashedState:(short)arg1 toAssets:(id)arg2;
- (void)_userDeleteAlbums:(id)arg1;
- (void)_userDeleteAssets:(id)arg1 withReason:(id)arg2;
- (void)_withDispatchGroup:(id)arg1 synchronously:(BOOL)arg2 name:(id)arg3 shouldSave:(BOOL)arg4 performTransaction:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)addCompletionHandlerToCurrentTransaction:(CDUnknownBlockType)arg1;
- (id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(struct NSObject *)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(BOOL)arg6 previewImage:(struct NSObject *)arg7 thumbnailImage:(struct NSObject *)arg8 savedAssetType:(short)arg9 replacementUUID:(id)arg10 publicGlobalUUID:(id)arg11 extendedInfo:(id)arg12 withUUID:(id)arg13 ignoreEmbeddedMetadata:(BOOL)arg14 isPlaceholder:(BOOL)arg15 placeholderFileURL:(id)arg16;
- (struct NSObject *)albumFromGroupURL:(id)arg1;
- (id)albumListForAlbumOfKind:(int)arg1;
- (id)albumListForContentMode:(int)arg1;
- (struct NSObject *)albumWithUuid:(id)arg1;
- (id)allImportedPhotosAlbum;
- (id)allImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1;
- (id)assetURLForPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1 extension:(id)arg2;
- (id)assetWithUUID:(id)arg1;
- (id)assetWithUUID:(id)arg1 inContainer:(id)arg2;
- (id)assetsdClient;
- (void)batchDeleteAssets:(id)arg1 withReason:(id)arg2;
- (BOOL)batchDeleteAssetsWithPredicate:(id)arg1 reason:(id)arg2 error:(id *)arg3;
- (BOOL)batchDeleteObjectsWithEntity:(id)arg1 predicate:(id)arg2 error:(id *)arg3;
- (void)cleanupAfterImportAllDCIMAssets;
- (void)cleanupIncompleteAssetsAfterOTARestore;
- (void)clientApplicationWillEnterForeground;
- (id)constraintsDirector;
- (unsigned long long)countOfLocalAlbumsContainingAssets:(id)arg1 assetsInSomeAlbumCount:(long long *)arg2;
- (void)countOfReferencedMediaWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)createPhotoStreamAlbumWithStreamID:(id)arg1;
- (void)dataMigratorSupportCleanupModelForDataMigrationPurgeMissingSharedAndSynced;
- (void)dealloc;
- (BOOL)deleteAllDiagnosticFiles:(id *)arg1;
- (void)deleteExpiredTrashedAssetsAndAlbums;
- (void)deleteExpiredTrashedResources;
- (void)deleteITunesSyncedContentForEnablingiCPL;
- (id)description;
- (void)disableOpportunisticTasks;
- (id)duplicatePhotoStreamPhotosForPhotos:(id)arg1;
- (void)enableOpportunisticTasks;
- (id)estimatedLibrarySizes;
- (struct NSObject *)eventAlbumContainingPhoto:(id)arg1;
- (struct NSObject *)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2;
- (BOOL)getPhotoCount:(unsigned long long *)arg1 videoCount:(unsigned long long *)arg2;
- (BOOL)getPhotoCount:(unsigned long long *)arg1 videoCount:(unsigned long long *)arg2 excludeTrashed:(BOOL)arg3 excludeInvisible:(BOOL)arg4 excludeCloudShared:(BOOL)arg5;
- (id)globalValueForKey:(id)arg1;
- (void)handlePersistentStoreRemoval:(id)arg1;
- (void)handlePossibleCoreDataError:(id)arg1;
- (BOOL)hasCompletedMomentAnalysis;
- (BOOL)hasCompletedRestorePostProcessing;
- (BOOL)hasITunesSyncedContent;
- (BOOL)hasPendingAssetsIgnoreiTunes:(BOOL)arg1;
- (id)iTunesSyncedContentInfo;
- (struct NSObject *)imageForFormat:(unsigned short)arg1 forAsset:(id)arg2;
- (id)incompleteRestoreProcesses;
- (id)init;
- (id)initWithName:(const char *)arg1 libraryBundle:(id)arg2 options:(id)arg3;
- (void)invalidateWithReason:(id)arg1;
- (BOOL)isAlbumSynced:(id)arg1;
- (BOOL)isReadyForCloudPhotoLibrary;
- (id)lastImportedPhotosAlbum;
- (id)lastImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1;
- (id)libraryID;
- (id)librarySizes;
- (id)librarySizesFromDB;
- (BOOL)loadDatabase:(id *)arg1;
- (id)managedObjectContextStoreUUID;
- (void)modifyDCIMEntryForPhoto:(id)arg1;
- (struct NSObject *)newImageForPhoto:(id)arg1 format:(unsigned short)arg2;
- (struct NSObject *)newImageForPhoto:(id)arg1 format:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 outImageProperties:(const struct __CFDictionary **)arg4 outDeliveredPlaceholder:(BOOL *)arg5;
- (unsigned long long)numberOfCPLSupportedAssetsOfKind:(short)arg1 includingTrashedSinceDate:(id)arg2;
- (unsigned long long)numberOfUnpushedAssetsOfKind:(short)arg1;
- (id)objectWithObjectID:(id)arg1;
- (void)old_refreshCachedCountsOnAllAssetContainersInContext:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 withPriority:(long long)arg3;
- (void)performBlock:(CDUnknownBlockType)arg1 withPriority:(long long)arg2;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1 forceSave:(BOOL)arg2;
- (void)performTransaction:(CDUnknownBlockType)arg1;
- (void)performTransaction:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performTransaction:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 withPriority:(long long)arg3;
- (void)performTransaction:(CDUnknownBlockType)arg1 withPriority:(long long)arg2;
- (void)performTransactionAndWait:(CDUnknownBlockType)arg1;
- (void)performTransactionAndWait:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performTransactionAndWaitWithName:(id)arg1 transaction:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performTransactionWithName:(id)arg1 transaction:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)personInfoManager;
- (id)photoAnalysisClient;
- (id)photoFromAssetURL:(id)arg1;
- (id)photoOutboundSharingTmpDirectoryURL;
- (id)queueStatusDescription;
- (void)recreateAlbumsAndPersonsFromMetadata;
- (void)recreateMemoriesAndPersonsFromMetadata;
- (void)recreatePersonsFromMetadata;
- (void)repairSingletonObjects;
- (void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1;
- (BOOL)safeSave:(id)arg1 error:(id *)arg2;
- (void)scheduleUserInitiatedAnalysisForAssets:(id)arg1;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (void)setICloudPhotosEnabled:(BOOL)arg1 withClient:(id)arg2;
- (unsigned long long)sharedStreamsSize;
- (id)simpleDCIMDirectory;
- (id)syncProgressAlbumsIgnoreiTunes:(BOOL)arg1;
- (id)syncedAlbumSubtitleStringFormat;
- (BOOL)unloadDatabase:(id *)arg1;
- (void)updateAlbumKeyAssetsInContext:(id)arg1 withPredicate:(id)arg2;
- (void)updateAssetPlayShareViewCountsInContext:(id)arg1;
- (void)updateMemoryPlayShareViewCountsInContext:(id)arg1;
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
