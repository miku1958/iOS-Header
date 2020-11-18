//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTUILogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface AVTUILogger : NSObject <AVTUILogger>
{
    NSObject<OS_os_log> *_generalLog;
    NSObject<OS_os_log> *_interactionLog;
    NSObject<OS_os_log> *_backendLog;
}

@property (readonly, nonatomic) NSObject<OS_os_log> *backendLog; // @synthesize backendLog=_backendLog;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_os_log> *generalLog; // @synthesize generalLog=_generalLog;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *interactionLog; // @synthesize interactionLog=_interactionLog;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)checkingAccountInfo:(CDUnknownBlockType)arg1;
- (void)checkingIn:(CDUnknownBlockType)arg1;
- (void)copyingStorageAside:(CDUnknownBlockType)arg1;
- (void)deletingRecords:(CDUnknownBlockType)arg1;
- (void)duplicatingRecords:(CDUnknownBlockType)arg1;
- (void)exportingRecords:(CDUnknownBlockType)arg1;
- (void)fetchingRecords:(CDUnknownBlockType)arg1;
- (void)importingRecords:(CDUnknownBlockType)arg1;
- (id)init;
- (void)logAVTViewCancelingRenderingAvatar:(id)arg1;
- (void)logAVTViewDidRenderAvatar:(id)arg1 currentAvatar:(id)arg2;
- (void)logAVTViewDidRenderCurrentAvatar:(id)arg1;
- (void)logAVTViewSetAvatar:(id)arg1;
- (void)logAccountInfo:(id)arg1 status:(long long)arg2 deviceToDeviceEncryption:(BOOL)arg3;
- (void)logAvatarPreloadBeginForIdentifier:(id)arg1;
- (void)logAvatarPreloadEnd;
- (void)logAvatarsDaemonClientChecksIn:(int)arg1;
- (void)logAvatarsDaemonClientConnectionInterrupted;
- (void)logAvatarsDaemonClientConnectionInvalidated;
- (void)logAvatarsDaemonReceivesIncomingConnection;
- (void)logBackendVersionMismatch:(id)arg1 actual:(id)arg2;
- (void)logCancelTransition:(id)arg1;
- (void)logCancelingPreLoadingTask:(id)arg1;
- (void)logCarouselAddsTransitionToCoordinator:(id)arg1;
- (void)logCarouselCellStartUsingLiveView:(id)arg1 associatedTransition:(id)arg2;
- (void)logCarouselCellStopUsingLiveView:(id)arg1 associatedTransition:(id)arg2;
- (void)logCarouselChangesCenterItemTo:(id)arg1;
- (void)logCarouselChangingToMultiMode;
- (void)logCarouselChangingToSingleMode;
- (void)logCarouselDelegateDidFocusRecord:(id)arg1;
- (void)logCarouselDelegateDidUpdateRecord:(id)arg1;
- (void)logCarouselDelegateNearnessFactorDidChange:(double)arg1 towardRecord:(BOOL)arg2 editable:(BOOL)arg3;
- (void)logCarouselDelegateWillEndFocusRecord:(id)arg1;
- (void)logCarouselEndsDraggingWithVelocity:(double)arg1 willSwitchIndexPathInsteadOfScrollBack:(BOOL)arg2 forHighVelocity:(BOOL)arg3;
- (void)logCarouselErrorGettingFrameForElementAtIndex:(unsigned long long)arg1;
- (void)logCarouselSnapshotForIndex:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (void)logCarouselStopsFocusingOnCenterItem:(id)arg1 withCell:(id)arg2;
- (void)logCarouselTransitionCenterItem:(id)arg1 withCell:(id)arg2;
- (void)logChangesRequireExport;
- (void)logChangesRequireThumbnailUpdate;
- (void)logCheckingIfMigrationNeeded;
- (void)logCoalesceableEventOccured:(id)arg1;
- (void)logCouldntFindRecordIdentifierForChangeType:(long long)arg1 managedObjectID:(id)arg2;
- (void)logCreatingBackendDBAtPath:(id)arg1;
- (void)logCreatingBackendFolderAtPath:(id)arg1;
- (void)logCreatingImageStoreForPath:(id)arg1;
- (void)logCreatingStore:(id)arg1;
- (void)logCurrentHistoryTokenFileDoesntExist:(id)arg1;
- (void)logDebug:(id)arg1;
- (void)logDeduplicateRecordWithIdentifier:(id)arg1 toNewRecordWithIdentifier:(id)arg2;
- (void)logDeletingImagesWithIdentifierPrefix:(id)arg1;
- (void)logDeletingRecordWithIdentifier:(id)arg1;
- (void)logDidFinishEditingWithError:(id)arg1;
- (void)logDidFinishEditingWithSuccess;
- (void)logDidResetZoneWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)logDiscoveredDuplicates:(id)arg1 count:(unsigned long long)arg2;
- (void)logDispatchingRemoteChangeWithTransactionCount:(unsigned long long)arg1;
- (void)logDonePreLoadingPreset:(id)arg1 task:(id)arg2;
- (void)logDonePreLoadingThumbnailForPreLoadingTask:(id)arg1;
- (void)logDroppingUnsupportedAvatarRecord:(id)arg1;
- (void)logDuplicatingRecordWithIdentifier:(id)arg1;
- (void)logErrorAddingPersistentStore:(id)arg1;
- (void)logErrorCopyingStorageAside:(id)arg1;
- (void)logErrorCreatingBackendContent:(id)arg1;
- (void)logErrorDeletingMigratedContent:(id)arg1;
- (void)logErrorDeletingSomeThumbnail:(id)arg1;
- (void)logErrorDeletingThumbnailsForIdentifier:(id)arg1 error:(id)arg2;
- (void)logErrorDuplicatingThumbnailsForIdentifier:(id)arg1 error:(id)arg2;
- (void)logErrorFetchingChangeHistory:(id)arg1;
- (void)logErrorFetchingRecords:(id)arg1;
- (void)logErrorGettingAccountInfo:(id)arg1;
- (void)logErrorGettingAvatarsDaemonClientProxy:(id)arg1;
- (void)logErrorGettingChangedRecordsContentForIdentifiers:(id)arg1 error:(id)arg2;
- (void)logErrorLoadingTemplates:(id)arg1;
- (void)logErrorMergingCopiedAsideContent:(id)arg1;
- (void)logErrorMigratingBackupInclusionStatus:(id)arg1;
- (void)logErrorMitigatingDuplicates:(id)arg1;
- (void)logErrorPinningContextToCurrentQueryGenerationToken:(id)arg1;
- (void)logErrorProcessingChangeTransactionsToUpdateThumbnails:(id)arg1;
- (void)logErrorReadingCurrentHistoryToken:(id)arg1;
- (void)logErrorRemovingStoreFolder:(id)arg1;
- (void)logErrorSavingChangeToken:(id)arg1 location:(id)arg2;
- (void)logErrorSettingUpStore:(id)arg1;
- (void)logErrorSettingUserDirSuffix;
- (void)logErrorStartingServer:(id)arg1;
- (void)logErrorTearingDownCoreDataStack:(id)arg1;
- (void)logErrorUpdatingBackupInclusionStatus:(id)arg1;
- (void)logErrorUpdatingRecordsForMigration:(id)arg1;
- (void)logErrorUpdatingVersion:(id)arg1;
- (void)logErrorWhileMigratingBackend:(id)arg1;
- (void)logExportRequestResult:(BOOL)arg1 error:(id)arg2;
- (void)logFetchedRecords:(unsigned long long)arg1 criteria:(long long)arg2;
- (void)logFileSystemError:(id)arg1;
- (void)logFoundExistingRecordDuringMigration;
- (void)logFoundExistingRecordDuringMigration:(id)arg1;
- (void)logFoundRecordIdentifier:(id)arg1 changeType:(long long)arg2 managedObjectID:(id)arg3;
- (void)logGeneratingImageError:(id)arg1;
- (void)logGeneratingImageForRecord:(id)arg1 scope:(id)arg2 type:(long long)arg3;
- (void)logImageStoreBeginSavingImageForPath:(id)arg1;
- (void)logImageStoreCacheHitForItemDescription:(id)arg1 sizeCost:(unsigned long long)arg2;
- (void)logImageStoreCacheMiss:(id)arg1;
- (void)logImageStoreDoneSavingImageForPath:(id)arg1;
- (void)logImageStoreSavingError:(id)arg1 code:(long long)arg2;
- (void)logImportRequestResult:(BOOL)arg1 error:(id)arg2;
- (void)logInMemoryCacheEvictsResource:(id)arg1;
- (void)logInMemoryCacheHitForResource:(id)arg1;
- (void)logInMemoryCacheStorageForResource:(id)arg1;
- (void)logInspectingChangesForExportAfterToken:(id)arg1;
- (void)logLookingUpPreLoadedPreset:(id)arg1 task:(id)arg2;
- (void)logMaintenanceCompleted;
- (void)logMigratingSource:(id)arg1;
- (void)logMigrationXPCActivityFinished;
- (void)logMirroringRequestErrorWithCode:(long long)arg1 description:(id)arg2;
- (void)logMissingResetSyncReasonKey;
- (void)logMissingTombstonedIdentifier;
- (void)logNoAvatarPreset:(id)arg1;
- (void)logNoProxyToAvatarsDaemon;
- (void)logNotImportingOnLaunchWithRemainingTime:(double)arg1;
- (void)logNotificationDoesntContainChangeHistoryToken;
- (void)logParsingMetadataDefinitions;
- (void)logParsingMetadataDefinitionsError:(id)arg1;
- (void)logPerformTransition:(id)arg1;
- (void)logPostingChangeNotificationForIdentifiers:(id)arg1;
- (void)logPreLoadingNeededForIndex:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (void)logPreLoadingPreset:(id)arg1 task:(id)arg2;
- (void)logPushConnectionReceivedPublicToken:(id)arg1;
- (void)logPushConnectionReceivedToken:(id)arg1 topic:(id)arg2 identifier:(id)arg3;
- (void)logPushNotificationReceivedForTopic:(id)arg1 payload:(id)arg2;
- (void)logReadingBackendAtPath:(id)arg1;
- (void)logReadingError:(id)arg1;
- (void)logReceivedRemoteChange:(id)arg1;
- (void)logRecordNotFoundInPuppetStore:(id)arg1;
- (void)logRecordNotFoundInRecordStore:(id)arg1;
- (void)logRenderingConfiguration:(id)arg1;
- (void)logRenderingModelColor:(id)arg1;
- (void)logRenderingModelPreset:(id)arg1;
- (void)logRenderingRecord:(id)arg1 size:(struct CGSize)arg2;
- (void)logRequestingPreLoadingTask:(id)arg1 forIndex:(unsigned long long)arg2 section:(unsigned long long)arg3;
- (void)logRequestingThumbnailForIndex:(unsigned long long)arg1 section:(id)arg2;
- (void)logResetSyncReason:(unsigned long long)arg1;
- (void)logSavingBackend;
- (void)logSavingError:(id)arg1;
- (void)logSchedulingImport;
- (void)logSchedulingUpdateThumbnails;
- (void)logSetupHandlerCompletedForTransition:(id)arg1 state:(long long)arg2 finished:(BOOL)arg3;
- (void)logSetupSchedulingExport;
- (void)logSetupSchedulingImport;
- (void)logSetupSchedulingMigrationCheck;
- (void)logSingleModeCantSnapshotForLackOfWindow;
- (void)logSingleModeControllerStartUsingLiveView:(id)arg1;
- (void)logSingleModeControllerStopUsingLiveView:(id)arg1;
- (void)logSnapshotReturnedImage:(id)arg1;
- (void)logStartObservingRemoteChangeNotificationFrom:(id)arg1;
- (void)logStartObservingResetSync;
- (void)logStartTransition:(id)arg1 state:(long long)arg2;
- (void)logStartingPreLoadingTask:(id)arg1;
- (void)logStartingServer;
- (void)logSyncEnabled;
- (void)logTearingDownCoreDataStack:(id)arg1;
- (void)logThrottlingAVTView;
- (void)logToLivePoseTransitionBegins:(id)arg1;
- (void)logToLivePoseTransitionEnds:(id)arg1;
- (void)logTooManyAvatars:(unsigned long long)arg1 limit:(unsigned long long)arg2;
- (void)logTrackerProcessingChanges:(id)arg1 count:(unsigned long long)arg2 from:(id)arg3;
- (void)logTransactionHasChangesButNoToken;
- (void)logTransition:(id)arg1 state:(unsigned long long)arg2 reachedStage:(unsigned long long)arg3;
- (void)logUnableToCreatePushConnection:(id)arg1;
- (void)logUnableToReadRemoteRecord:(id)arg1;
- (void)logUnthrottlingAVTView;
- (void)logUpdatingBackupExclusionStatus:(BOOL)arg1;
- (void)logUpdatingLiveAvatarWithConfiguration:(id)arg1;
- (void)logUpdatingThumbnails;
- (void)logUsageTrackingBigDifferencesClusterCount:(unsigned long long)arg1;
- (void)logUsageTrackingRecordCount:(unsigned long long)arg1;
- (void)logUsageTrackingSmallDifferencesClusterCount:(unsigned long long)arg1;
- (void)logWillResetZone;
- (void)migratingPersistedContent:(CDUnknownBlockType)arg1;
- (void)performingMigrationXPCActivity:(CDUnknownBlockType)arg1;
- (void)postingAvatarStoreChangeNotification:(CDUnknownBlockType)arg1;
- (void)processingDidResetSyncNotification:(CDUnknownBlockType)arg1;
- (void)processingRemoteChangeNotification:(CDUnknownBlockType)arg1;
- (void)processingWillResetSyncNotification:(CDUnknownBlockType)arg1;
- (void)restoringStorage:(CDUnknownBlockType)arg1;
- (void)runningMaintenance:(CDUnknownBlockType)arg1;
- (void)savingChangeTrackerToken:(CDUnknownBlockType)arg1;
- (void)savingRecords:(CDUnknownBlockType)arg1;
- (void)settingUpStore:(CDUnknownBlockType)arg1;
- (void)updatingThumbnailsForRemoteChanges:(CDUnknownBlockType)arg1;

@end

