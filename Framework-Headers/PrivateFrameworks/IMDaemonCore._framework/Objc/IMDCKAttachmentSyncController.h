//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDaemonCore/IMDCKAbstractSyncController.h>

@class CKServerChangeToken, IMDCKAttachmentSyncCKOperationFactory, IMDRecordZoneManager, NSMutableArray, NSMutableDictionary, NSObject;
@protocol IMDCKSyncTokenStore, OS_dispatch_queue, OS_xpc_object;

@interface IMDCKAttachmentSyncController : IMDCKAbstractSyncController
{
    BOOL _assetDownloadInProgress;
    BOOL _shouldCheckDeviceConditions;
    CKServerChangeToken *_latestSyncToken;
    NSObject<OS_dispatch_queue> *_ckQueue;
    IMDRecordZoneManager *_recordZoneManager;
    IMDCKAttachmentSyncCKOperationFactory *_CKOperationFactory;
    id<IMDCKSyncTokenStore> _syncTokenStore;
    NSMutableDictionary *_completionBlocksForAssetFetchOperations;
    NSMutableDictionary *_recordIDToTransferMap;
    CDUnknownBlockType _perTransferProgress;
    NSMutableArray *_downloadAssetsForTransferGUIDs;
    NSObject<OS_xpc_object> *_activity;
}

@property (strong, nonatomic) IMDCKAttachmentSyncCKOperationFactory *CKOperationFactory; // @synthesize CKOperationFactory=_CKOperationFactory;
@property NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
@property (nonatomic) BOOL assetDownloadInProgress; // @synthesize assetDownloadInProgress=_assetDownloadInProgress;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // @synthesize ckQueue=_ckQueue;
@property (strong, nonatomic) NSMutableDictionary *completionBlocksForAssetFetchOperations; // @synthesize completionBlocksForAssetFetchOperations=_completionBlocksForAssetFetchOperations;
@property (strong, nonatomic) NSMutableArray *downloadAssetsForTransferGUIDs; // @synthesize downloadAssetsForTransferGUIDs=_downloadAssetsForTransferGUIDs;
@property (strong, nonatomic) CKServerChangeToken *latestSyncToken; // @synthesize latestSyncToken=_latestSyncToken;
@property (copy, nonatomic) CDUnknownBlockType perTransferProgress; // @synthesize perTransferProgress=_perTransferProgress;
@property (strong, nonatomic) NSMutableDictionary *recordIDToTransferMap; // @synthesize recordIDToTransferMap=_recordIDToTransferMap;
@property (strong, nonatomic) IMDRecordZoneManager *recordZoneManager; // @synthesize recordZoneManager=_recordZoneManager;
@property (nonatomic) BOOL shouldCheckDeviceConditions; // @synthesize shouldCheckDeviceConditions=_shouldCheckDeviceConditions;
@property (strong, nonatomic) id<IMDCKSyncTokenStore> syncTokenStore; // @synthesize syncTokenStore=_syncTokenStore;

+ (id)sharedInstance;
- (id)__databaseRequestForAttachmentsWithAssets;
- (BOOL)__shouldOptimizeAttachmentDefault;
- (unsigned long long)_attachmentDeleteBatchSize;
- (BOOL)_attachmentZoneCreated;
- (id)_attachmentZoneID;
- (id)_attachmentZoneSalt;
- (id)_ckUtilitiesInstance;
- (id)_constructAttachmentRecordIDUsingTombStoneDictionary:(id)arg1;
- (id)_copyRecordIDsToDeleteWithLimit:(unsigned long long)arg1;
- (void)_deleteAttachmentsWithRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_deviceConditionsAllowsMessageSync;
- (BOOL)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(BOOL)arg1;
- (void)_fetchAttachmentZoneChangesShouldWriteBackChanges:(BOOL)arg1 desiredKeys:(long long)arg2 syncType:(long long)arg3 currentBatchCount:(long long)arg4 maxBatchCount:(long long)arg5 syncToken:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)_fetchAttachmentZoneRecords:(id)arg1 desiredKeys:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchFileTransfersFromCloudKit:(id)arg1 capturedWithABC:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_kickOffAssetFetchForTransfersIfNeeded;
- (void)_markTransferAsNotBeingAbleToSyncUsingCKRecord:(id)arg1;
- (void)_migrateSyncToken;
- (unsigned long long)_numberOfAttachmentsToDownload;
- (unsigned long long)_numberOfAttachmentsToWriteUp;
- (id)_operationErrorForModifyingRecordCompletion:(id)arg1;
- (void)_processAssetFetchOperationCompletionBlock:(id)arg1 operationID:(id)arg2 error:(id)arg3;
- (void)_processAssetFetchPerRecordCompletionBlock:(id)arg1 recordID:(id)arg2 error:(id)arg3;
- (void)_processAssetFetchPerRecordProgressBlock:(id)arg1 progress:(double)arg2;
- (void)_processFetchRecordChangesCompleted:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_processModifyPerRecordCallBack:(id)arg1 error:(id)arg2;
- (void)_processModifyRecordCompletion:(id)arg1 deletedRecordIDs:(id)arg2 error:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_processRecordChanged:(id)arg1;
- (void)_processRecordDeletion:(id)arg1;
- (void)_processRecordZoneChangeTokenUpdated:(id)arg1 zoneID:(id)arg2 clienChangeToken:(id)arg3;
- (void)_processRecordZoneFetchCompletion:(id)arg1 zoneID:(id)arg2 clientChangeTokenData:(id)arg3 moreComing:(BOOL)arg4 shouldWriteBackChanges:(BOOL)arg5 desiredKeys:(long long)arg6 syncType:(long long)arg7 error:(id)arg8 currentBatchCount:(long long)arg9 maxBatchCount:(long long)arg10 completionBlock:(CDUnknownBlockType)arg11;
- (void)_processRecordsFetchedForAttachmentPurge:(id)arg1 recordIDsToTransfers:(id)arg2 capturedWithABC:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_recordIDsToProcessWithError:(id)arg1 error:(id)arg2;
- (id)_recordKeyManagerSharedInstance;
- (void)_removeTransferFromiCloudBackupWithGuid:(id)arg1;
- (void)_resetAttachmentSyncStateForRecord:(id)arg1 toState:(long long)arg2;
- (void)_resetSyncToken;
- (void)_scheduleOperation:(id)arg1;
- (BOOL)_shouldMarkAllAttachmentsAsNeedingSync;
- (void)_updateAllAttachmentsAsNotNeedingReUpload;
- (void)_updateTransferUsingCKRecord:(id)arg1 wasFetched:(BOOL)arg2;
- (void)_validateTransferFromCloudKit:(id)arg1 localTransfer:(id)arg2 validateCompletion:(CDUnknownBlockType)arg3;
- (void)_writeAttachmentsToCloudKit:(CDUnknownBlockType)arg1;
- (void)_writeCKRecordsToAttachmentZone:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)acceptFileTransfer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearLocalSyncState;
- (void)dealloc;
- (void)deleteAttachmentSyncToken;
- (void)deleteAttachmentZone;
- (void)downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAttachmentDataForTransfers:(id)arg1 highQuality:(BOOL)arg2 perTransferProgress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fileTransferCenter;
- (id)init;
- (id)initWithSyncTokenStore:(id)arg1;
- (void)syncAttachmentDeletesToCloudKit:(CDUnknownBlockType)arg1;
- (void)syncAttachmentsWithSyncType:(long long)arg1 shouldCheckDeviceConditions:(BOOL)arg2 activity:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

