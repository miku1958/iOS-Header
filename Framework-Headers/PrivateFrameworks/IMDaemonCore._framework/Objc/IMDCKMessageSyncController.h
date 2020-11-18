//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDaemonCore/IMDCKAbstractSyncController.h>

@class CKServerChangeToken, IMDCKMessageSyncCKOperationFactory, IMDRecordZoneManager, NSMutableDictionary, NSObject;
@protocol IMDCKSyncTokenStore, OS_dispatch_queue, OS_xpc_object;

@interface IMDCKMessageSyncController : IMDCKAbstractSyncController
{
    BOOL _encounteredIncompatibleMessage;
    CKServerChangeToken *_archivedRecordSyncToken;
    NSObject<OS_dispatch_queue> *_ckQueue;
    IMDRecordZoneManager *_recordZoneManager;
    id<IMDCKSyncTokenStore> _syncTokenStore;
    IMDCKMessageSyncCKOperationFactory *_CKOperationFactory;
    NSObject<OS_xpc_object> *_activity;
    unsigned long long _deviceConditionsToCheck;
    NSMutableDictionary *_visitedChats;
}

@property (strong, nonatomic) IMDCKMessageSyncCKOperationFactory *CKOperationFactory; // @synthesize CKOperationFactory=_CKOperationFactory;
@property NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
@property (strong, nonatomic) CKServerChangeToken *archivedRecordSyncToken; // @synthesize archivedRecordSyncToken=_archivedRecordSyncToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // @synthesize ckQueue=_ckQueue;
@property (nonatomic) unsigned long long deviceConditionsToCheck; // @synthesize deviceConditionsToCheck=_deviceConditionsToCheck;
@property (nonatomic) BOOL encounteredIncompatibleMessage; // @synthesize encounteredIncompatibleMessage=_encounteredIncompatibleMessage;
@property (strong, nonatomic) CKServerChangeToken *latestSyncToken;
@property (strong, nonatomic) IMDRecordZoneManager *recordZoneManager; // @synthesize recordZoneManager=_recordZoneManager;
@property (strong, nonatomic) id<IMDCKSyncTokenStore> syncTokenStore; // @synthesize syncTokenStore=_syncTokenStore;
@property (strong, nonatomic) NSMutableDictionary *visitedChats; // @synthesize visitedChats=_visitedChats;

+ (id)sharedInstance;
- (id)_changeTokenKey;
- (id)_chatRegistry;
- (id)_ckUtilitiesInstance;
- (id)_constructMessageRecordIDUsingTombStoneDictionary:(id)arg1;
- (id)_copyRecordIDsToDeleteWithLimit:(unsigned long long)arg1;
- (void)_deleteMessagesWithRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deleteStingRaySyncToken;
- (BOOL)_deviceConditionsAllowsMessageSyncForActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 currentBatchCount:(long long)arg3 maxBatchCount:(long long)arg4;
- (BOOL)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;
- (BOOL)_doesAnyRecordZoneIDHavePendingArchivedRecords:(long long)arg1;
- (void)_fetchArchivedRecordsIfNeeded:(BOOL)arg1 currentBatchCount:(long long)arg2 maxNumberOfBatches:(long long)arg3 WithCompletionBlock:(CDUnknownBlockType)arg4;
- (void)_fetchMessageZoneChangesSyncType:(long long)arg1 currentBatchCount:(long long)arg2 maxNumberOfBatches:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_hasMarkedAllMessagesAsNeedingSync;
- (BOOL)_isCoreDuetSyncForMaxBatchCount:(long long)arg1;
- (BOOL)_isDiskSpaceAvailableForSyncType:(long long)arg1 currentBatchCount:(long long)arg2;
- (BOOL)_isValidCKRecordToSync:(id)arg1;
- (BOOL)_kickOffWriteIfNeededForSyncType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_kickOffWriteOnCKQueueWithCompletion:(CDUnknownBlockType)arg1;
- (void)_markAllIncompatibleMessagesForDeletion;
- (void)_markAllUnsuccessFullSyncMessagesAsNeedingSync;
- (unsigned long long)_messageDeleteBatchSize;
- (id)_messageRecordSalt;
- (BOOL)_messageZoneCreated;
- (id)_messageZoneID;
- (void)_migrateSyncTokens;
- (void)_needsToMarkAllMessagesAsNeedingSync;
- (void)_noteSyncEnded;
- (long long)_numberOfBatchesOfMessagesToFetchInInitialSync;
- (unsigned long long)_numberOfMessagesToUpload;
- (unsigned long long)_numberOfRecordsToFetchForSyncType:(long long)arg1;
- (id)_operationErrorForModifyingRecordCompletion:(id)arg1;
- (void)_processArchivedRecordsFetchCompletionZoneID:(id)arg1 serverChangeToken:(id)arg2 moreComing:(BOOL)arg3 currentBatchCount:(long long)arg4 maxNumberOfBatches:(long long)arg5 NSError:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)_processFetchArchivedRecordCompletionWithError:(id)arg1 WithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_processFetchRecordZoneChangesCompletionWithError:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_processModifyRecordsCompletion:(id)arg1 deletedRecordIDs:(id)arg2 operationError:(id)arg3 isLastBatchOfWrite:(BOOL)arg4 writeCompletionBlock:(CDUnknownBlockType)arg5;
- (void)_processRecordChange:(id)arg1;
- (void)_processRecordDeletionCompletion:(id)arg1 error:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_processRecordWriteCompletionForRecord:(id)arg1 NSError:(id)arg2;
- (void)_processRecordZoneFetchCompletionZoneID:(id)arg1 serverChangeToken:(id)arg2 clientChangeTokenData:(id)arg3 moreComing:(BOOL)arg4 NSError:(id)arg5 syncType:(long long)arg6 currentBatchCount:(long long)arg7 maxNumberOfBatches:(long long)arg8 shouldFetchArchivedRecords:(BOOL)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (id)_recordKeyManagerSharedInstance;
- (id)_recordsToSave;
- (id)_recordsToSaveWithAttemptCount:(unsigned long long)arg1;
- (void)_resetArvchivedRecordSyncToken;
- (void)_resetSyncToken;
- (void)_scheduleOperation:(id)arg1;
- (id)_sharedIMDMessageStore;
- (BOOL)_shouldDeferCoreDuetMessagesSync;
- (BOOL)_shouldFetchArchivedRecords:(id)arg1;
- (BOOL)_shouldMarkAllMessagesAsNeedingSync;
- (id)_syncOperationGroupName;
- (void)_updateDeviceConditionsToCheckIfNeededForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;
- (void)_writeDirtyMessagesToCloudKitWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (void)dealloc;
- (void)deleteMessageSyncToken;
- (void)deleteMessagesZone;
- (void)incompatibleMessageDeleteDetected:(id)arg1;
- (id)init;
- (id)initWithSyncTokenStore:(id)arg1;
- (long long)syncControllerRecordType;
- (void)syncDeletedMessagesToCloudKitWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncMessagesWithSyncType:(long long)arg1 deviceConditionsToCheck:(unsigned long long)arg2 activity:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
