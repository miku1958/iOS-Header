//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@class NSArray, NSError, NSString;

@protocol AVTUILogger <NSObject>
- (void)checkingAccountInfo:(void (^)(void (^)(void)))arg1;
- (void)checkingIn:(void (^)(void (^)(void)))arg1;
- (void)copyingStorageAside:(void (^)(void (^)(void)))arg1;
- (void)deletingRecords:(void (^)(void (^)(void)))arg1;
- (void)deletingStickerRecentsForRemoteChanges:(void (^)(void (^)(void)))arg1;
- (void)duplicatingRecords:(void (^)(void (^)(void)))arg1;
- (void)exportingRecords:(void (^)(void (^)(void)))arg1;
- (void)fetchingRecords:(void (^)(void (^)(void)))arg1;
- (void)importingRecords:(void (^)(void (^)(void)))arg1;
- (void)logAVTViewCancelingRenderingAvatar:(NSString *)arg1;
- (void)logAVTViewDidRenderAvatar:(NSString *)arg1 currentAvatar:(NSString *)arg2;
- (void)logAVTViewDidRenderCurrentAvatar:(NSString *)arg1;
- (void)logAVTViewSetAvatar:(NSString *)arg1;
- (void)logAccountInfo:(NSString *)arg1 status:(long long)arg2 deviceToDeviceEncryption:(BOOL)arg3;
- (void)logAvatarPreloadBeginForIdentifier:(NSString *)arg1;
- (void)logAvatarPreloadEnd;
- (void)logAvatarsDaemonClientChecksIn:(int)arg1;
- (void)logAvatarsDaemonClientConnectionInterrupted;
- (void)logAvatarsDaemonClientConnectionInvalidated;
- (void)logAvatarsDaemonReceivesIncomingConnection;
- (void)logBackendVersionMismatch:(NSString *)arg1 actual:(NSString *)arg2;
- (void)logCancelTransition:(NSString *)arg1;
- (void)logCancelingPreLoadingTask:(NSString *)arg1;
- (void)logCarouselAddsTransitionToCoordinator:(NSString *)arg1;
- (void)logCarouselCellStartUsingLiveView:(NSString *)arg1 associatedTransition:(NSString *)arg2;
- (void)logCarouselCellStopUsingLiveView:(NSString *)arg1 associatedTransition:(NSString *)arg2;
- (void)logCarouselChangesCenterItemTo:(NSString *)arg1;
- (void)logCarouselChangingToMultiMode;
- (void)logCarouselChangingToSingleMode;
- (void)logCarouselDelegateDidFocusRecord:(NSString *)arg1;
- (void)logCarouselDelegateDidUpdateRecord:(NSString *)arg1;
- (void)logCarouselDelegateNearnessFactorDidChange:(double)arg1 towardRecord:(BOOL)arg2 editable:(BOOL)arg3;
- (void)logCarouselDelegateWillEndFocusRecord:(NSString *)arg1;
- (void)logCarouselEndsDraggingWithVelocity:(double)arg1 willSwitchIndexPathInsteadOfScrollBack:(BOOL)arg2 forHighVelocity:(BOOL)arg3;
- (void)logCarouselErrorGettingFrameForElementAtIndex:(unsigned long long)arg1;
- (void)logCarouselSnapshotForIndex:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (void)logCarouselStopsFocusingOnCenterItem:(NSString *)arg1 withCell:(NSString *)arg2;
- (void)logCarouselTransitionCenterItem:(NSString *)arg1 withCell:(NSString *)arg2;
- (void)logChangesRequireExport;
- (void)logChangesRequireThumbnailUpdate;
- (void)logCheckingIfMigrationNeeded;
- (void)logCoalesceableEventOccured:(NSString *)arg1;
- (void)logCouldntFindRecordIdentifierForChangeType:(long long)arg1 managedObjectID:(NSString *)arg2;
- (void)logCreatingBackendDBAtPath:(NSString *)arg1;
- (void)logCreatingBackendFolderAtPath:(NSString *)arg1;
- (void)logCreatingImageStoreForPath:(NSString *)arg1;
- (void)logCreatingStore:(NSString *)arg1;
- (void)logCurrentHistoryTokenFileDoesntExist:(NSString *)arg1;
- (void)logDebug:(NSString *)arg1;
- (void)logDeduplicateRecordWithIdentifier:(NSString *)arg1 toNewRecordWithIdentifier:(NSString *)arg2;
- (void)logDeletingImagesWithIdentifierPrefix:(NSString *)arg1;
- (void)logDeletingRecordWithIdentifier:(NSString *)arg1;
- (void)logDeletingStickerRecents;
- (void)logDidFinishEditingWithError:(NSString *)arg1;
- (void)logDidFinishEditingWithSuccess;
- (void)logDidResetZoneWithSuccess:(BOOL)arg1 error:(NSString *)arg2;
- (void)logDiscoveredDuplicates:(NSString *)arg1 count:(unsigned long long)arg2;
- (void)logDispatchingRemoteChangeWithTransactionCount:(unsigned long long)arg1 handlersCount:(unsigned long long)arg2;
- (void)logDonePreLoadingPreset:(NSString *)arg1 task:(NSString *)arg2;
- (void)logDonePreLoadingThumbnailForPreLoadingTask:(NSString *)arg1;
- (void)logDroppingUnsupportedAvatarRecord:(NSString *)arg1;
- (void)logDuplicatingRecordWithIdentifier:(NSString *)arg1;
- (void)logErrorAddingPersistentStore:(NSString *)arg1;
- (void)logErrorCopyingStorageAside:(NSString *)arg1;
- (void)logErrorCreatingBackendContent:(NSString *)arg1;
- (void)logErrorDeletingMigratedContent:(NSString *)arg1;
- (void)logErrorDeletingSomeThumbnail:(NSString *)arg1;
- (void)logErrorDeletingThumbnailsForIdentifier:(NSString *)arg1 error:(NSString *)arg2;
- (void)logErrorDuplicatingThumbnailsForIdentifier:(NSString *)arg1 error:(NSString *)arg2;
- (void)logErrorFetchingChangeHistory:(NSString *)arg1;
- (void)logErrorFetchingRecentStickers:(NSString *)arg1;
- (void)logErrorFetchingRecords:(NSString *)arg1;
- (void)logErrorGettingAccountInfo:(NSString *)arg1;
- (void)logErrorGettingAvatarsDaemonClientProxy:(NSString *)arg1;
- (void)logErrorGettingChangedRecordsContentForIdentifiers:(NSString *)arg1 error:(NSString *)arg2;
- (void)logErrorLoadingTemplates:(NSString *)arg1;
- (void)logErrorMergingCopiedAsideContent:(NSString *)arg1;
- (void)logErrorMigratingBackupInclusionStatus:(NSString *)arg1;
- (void)logErrorMitigatingDuplicates:(NSString *)arg1;
- (void)logErrorPinningContextToCurrentQueryGenerationToken:(NSString *)arg1;
- (void)logErrorProcessingChangeTransactionsToUpdateThumbnails:(NSString *)arg1;
- (void)logErrorReadingCurrentHistoryToken:(NSString *)arg1;
- (void)logErrorRemovingStoreFolder:(NSString *)arg1;
- (void)logErrorSandboxInit:(char *)arg1;
- (void)logErrorSavingChangeToken:(NSString *)arg1 location:(NSString *)arg2;
- (void)logErrorSavingRecentSticker:(NSString *)arg1;
- (void)logErrorSettingUpStore:(NSString *)arg1;
- (void)logErrorSettingUserDirSuffixForSandbox:(int)arg1;
- (void)logErrorSnapshottingAVTView:(NSString *)arg1;
- (void)logErrorStartingServer:(NSString *)arg1;
- (void)logErrorTearingDownCoreDataStack:(NSString *)arg1;
- (void)logErrorUpdatingBackupInclusionStatus:(NSString *)arg1;
- (void)logErrorUpdatingRecordsForMigration:(NSString *)arg1;
- (void)logErrorUpdatingVersion:(NSString *)arg1;
- (void)logErrorWhileMigratingBackend:(NSString *)arg1;
- (void)logExportRequestResult:(BOOL)arg1 error:(NSString *)arg2;
- (void)logFetchedOrphanedRecentSticker:(NSString *)arg1;
- (void)logFetchedRecentStickerWithNoStickerConfiguration:(NSString *)arg1;
- (void)logFetchedRecords:(unsigned long long)arg1 criteria:(long long)arg2;
- (void)logFileSystemError:(NSString *)arg1;
- (void)logFoundExistingRecordDuringMigration;
- (void)logFoundRecordIdentifier:(NSString *)arg1 changeType:(long long)arg2 managedObjectID:(NSString *)arg3;
- (void)logGeneratingImageError:(NSString *)arg1;
- (void)logGeneratingImageForRecord:(NSString *)arg1 scope:(NSString *)arg2 type:(long long)arg3;
- (void)logGenericSandboxError:(NSString *)arg1 error:(int)arg2;
- (void)logImageStoreBeginSavingImageForPath:(NSString *)arg1;
- (void)logImageStoreCacheHitForItemDescription:(NSString *)arg1 sizeCost:(unsigned long long)arg2;
- (void)logImageStoreCacheMiss:(NSString *)arg1;
- (void)logImageStoreDoneSavingImageForPath:(NSString *)arg1;
- (void)logImageStoreSavingError:(NSString *)arg1 code:(long long)arg2;
- (void)logImportRequestResult:(BOOL)arg1 error:(NSString *)arg2;
- (void)logInMemoryCacheEvictsResource:(NSString *)arg1;
- (void)logInMemoryCacheHitForResource:(NSString *)arg1;
- (void)logInMemoryCacheStorageForResource:(NSString *)arg1;
- (void)logInspectingChangesForExportAfterToken:(NSString *)arg1;
- (void)logLookingUpPreLoadedPreset:(NSString *)arg1 task:(NSString *)arg2;
- (void)logMaintenanceCompleted;
- (void)logMigratingSource:(NSString *)arg1;
- (void)logMigrationXPCActivityFinished;
- (void)logMirroringRequestErrorWithCode:(long long)arg1 description:(NSString *)arg2;
- (void)logMissingResetSyncReasonKey;
- (void)logMissingTombstonedIdentifier;
- (void)logNoAvatarPreset:(NSString *)arg1;
- (void)logNoProxyToAvatarsDaemon;
- (void)logNotImportingOnLaunchWithRemainingTime:(double)arg1;
- (void)logNotificationDoesntContainChangeHistoryToken;
- (void)logPaddleViewVideoPlayerFailed:(NSError *)arg1;
- (void)logParsingMetadataDefinitions;
- (void)logParsingMetadataDefinitionsError:(NSString *)arg1;
- (void)logPerformTransition:(NSString *)arg1;
- (void)logPerformedRecentStickersMigration:(BOOL)arg1;
- (void)logPersistentChangeNotOfInterest:(NSString *)arg1;
- (void)logPostingChangeNotificationForIdentifiers:(NSArray *)arg1;
- (void)logPreLoadingNeededForIndex:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (void)logPreLoadingPreset:(NSString *)arg1 task:(NSString *)arg2;
- (void)logPushConnectionReceivedPublicToken:(NSString *)arg1;
- (void)logPushConnectionReceivedToken:(NSString *)arg1 topic:(NSString *)arg2 identifier:(NSString *)arg3;
- (void)logPushNotificationReceivedForTopic:(NSString *)arg1 payload:(NSString *)arg2;
- (void)logReadingBackendAtPath:(NSString *)arg1;
- (void)logReadingError:(NSString *)arg1;
- (void)logReceivedRemoteChange:(NSString *)arg1;
- (void)logRecordsNotFoundInAnyStore:(NSString *)arg1;
- (void)logRecordsNotFoundInPuppetStore:(NSString *)arg1;
- (void)logRecordsNotFoundInRecordStore:(NSString *)arg1;
- (void)logRenderingConfiguration:(NSString *)arg1;
- (void)logRenderingModelColor:(NSString *)arg1;
- (void)logRenderingModelPreset:(NSString *)arg1;
- (void)logRenderingRecord:(NSString *)arg1 size:(struct CGSize)arg2;
- (void)logRenderingStickerEnd:(NSString *)arg1;
- (void)logRenderingStickerStart:(NSString *)arg1 forRecord:(NSString *)arg2;
- (void)logRequestingPreLoadingTask:(NSString *)arg1 forIndex:(unsigned long long)arg2 section:(unsigned long long)arg3;
- (void)logRequestingThumbnailForIndex:(unsigned long long)arg1 section:(NSString *)arg2;
- (void)logResetSyncReason:(unsigned long long)arg1;
- (void)logSavingBackend;
- (void)logSavingError:(NSString *)arg1;
- (void)logSchedulingImport;
- (void)logSchedulingUpdateThumbnails;
- (void)logSetupHandlerCompletedForTransition:(NSString *)arg1 state:(long long)arg2 finished:(BOOL)arg3;
- (void)logSetupSchedulingExport;
- (void)logSetupSchedulingImport;
- (void)logSetupSchedulingMigrationCheck;
- (void)logSingleModeCantSnapshotForLackOfWindow;
- (void)logSingleModeControllerStartUsingLiveView:(NSString *)arg1;
- (void)logSingleModeControllerStopUsingLiveView:(NSString *)arg1;
- (void)logSnapshotReturnedImage:(NSString *)arg1;
- (void)logStartObservingRemoteChangeNotificationFrom:(NSString *)arg1;
- (void)logStartObservingResetSync;
- (void)logStartTransition:(NSString *)arg1 state:(long long)arg2;
- (void)logStartingPreLoadingTask:(NSString *)arg1;
- (void)logStartingServer;
- (void)logStickerGeneratorPoolDidntHaveAvailableGenerator:(long long)arg1 maxCount:(long long)arg2;
- (void)logStickerViewSnapshotForBounds:(struct CGRect)arg1 offset:(struct CGPoint)arg2;
- (void)logSyncEnabled;
- (void)logTearingDownCoreDataStack:(NSString *)arg1;
- (void)logThrottlingAVTView;
- (void)logToLivePoseTransitionBegins:(NSString *)arg1;
- (void)logToLivePoseTransitionEnds:(NSString *)arg1;
- (void)logTooManyAvatars:(unsigned long long)arg1 limit:(unsigned long long)arg2;
- (void)logTrackerProcessingChanges:(NSString *)arg1 count:(unsigned long long)arg2 from:(NSString *)arg3;
- (void)logTransactionHasChangesButNoToken;
- (void)logTransition:(NSString *)arg1 state:(unsigned long long)arg2 reachedStage:(unsigned long long)arg3;
- (void)logUnableToCreatePushConnection:(NSString *)arg1;
- (void)logUnableToReadRemoteRecord:(NSString *)arg1;
- (void)logUnthrottlingAVTView;
- (void)logUpdatingBackupExclusionStatus:(BOOL)arg1;
- (void)logUpdatingLiveAvatarWithConfiguration:(NSString *)arg1;
- (void)logUpdatingThumbnails;
- (void)logUsageTrackingBigDifferencesClusterCount:(unsigned long long)arg1;
- (void)logUsageTrackingRecordCount:(unsigned long long)arg1;
- (void)logUsageTrackingSmallDifferencesClusterCount:(unsigned long long)arg1;
- (void)logUserRequestedBackupXPCActivityFinished;
- (void)logWarningNoHOME;
- (void)logWillResetZone;
- (void)migratingPersistedContent:(void (^)(void (^)(void)))arg1;
- (void)performingMigrationXPCActivity:(void (^)(void (^)(void)))arg1;
- (void)performingUserRequestedBackupActivity:(void (^)(void (^)(void)))arg1;
- (void)postingAvatarStoreChangeNotification:(void (^)(void (^)(void)))arg1;
- (void)processingDidResetSyncNotification:(void (^)(void (^)(void)))arg1;
- (void)processingRemoteChangeNotification:(void (^)(void (^)(void)))arg1;
- (void)processingWillResetSyncNotification:(void (^)(void (^)(void)))arg1;
- (void)restoringStorage:(void (^)(void (^)(void)))arg1;
- (void)runningMaintenance:(void (^)(void (^)(void)))arg1;
- (void)savingChangeTrackerToken:(void (^)(void (^)(void)))arg1;
- (void)savingRecords:(void (^)(void (^)(void)))arg1;
- (void)settingUpStore:(void (^)(void (^)(void)))arg1;
- (void)updatingThumbnailsForRemoteChanges:(void (^)(void (^)(void)))arg1;
@end
