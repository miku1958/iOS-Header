//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDatabase, CKNotificationListener, CKSyncEngineMetadata, NSOperationQueue;
@protocol CKSyncEngineDataSource, OS_dispatch_queue;

@interface CKSyncEngine : NSObject
{
    BOOL _ignoringSystemConditions;
    BOOL _allowMetadataCallbackDeferral;
    BOOL _waitingForIdentityUpdate;
    BOOL _waitingForHSA2;
    BOOL _useUniqueActivityIdentifiers;
    BOOL _skipRetryOnOperationError;
    BOOL _automaticSyncingEnabled;
    id<CKSyncEngineDataSource> _dataSource;
    CKDatabase *_database;
    CKSyncEngineMetadata *_metadata;
    unsigned long long _lastNotifiedMetadataChangeCount;
    CKNotificationListener *_notificationListener;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_batchCreationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    unsigned long long _maxRecordCountPerBatch;
    unsigned long long _maxRecordBytesPerBatch;
    unsigned long long _maxZoneCountPerBatch;
    long long _lastKnownAccountStatus;
    long long _priority;
    CDUnknownBlockType _updateMetadataBlock;
}

@property (nonatomic) BOOL allowMetadataCallbackDeferral; // @synthesize allowMetadataCallbackDeferral=_allowMetadataCallbackDeferral;
@property (nonatomic, getter=isAutomaticSyncingEnabled) BOOL automaticSyncingEnabled; // @synthesize automaticSyncingEnabled=_automaticSyncingEnabled;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *batchCreationQueue; // @synthesize batchCreationQueue=_batchCreationQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (readonly, weak, nonatomic) id<CKSyncEngineDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (strong, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property (readonly, nonatomic) BOOL ignoringSystemConditions; // @synthesize ignoringSystemConditions=_ignoringSystemConditions;
@property (nonatomic) long long lastKnownAccountStatus; // @synthesize lastKnownAccountStatus=_lastKnownAccountStatus;
@property (nonatomic) unsigned long long lastNotifiedMetadataChangeCount; // @synthesize lastNotifiedMetadataChangeCount=_lastNotifiedMetadataChangeCount;
@property (nonatomic) unsigned long long maxRecordBytesPerBatch; // @synthesize maxRecordBytesPerBatch=_maxRecordBytesPerBatch;
@property (nonatomic) unsigned long long maxRecordCountPerBatch; // @synthesize maxRecordCountPerBatch=_maxRecordCountPerBatch;
@property (nonatomic) unsigned long long maxZoneCountPerBatch; // @synthesize maxZoneCountPerBatch=_maxZoneCountPerBatch;
@property (strong, nonatomic) CKSyncEngineMetadata *metadata; // @synthesize metadata=_metadata;
@property (strong, nonatomic) CKNotificationListener *notificationListener; // @synthesize notificationListener=_notificationListener;
@property (strong, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (nonatomic) long long priority; // @synthesize priority=_priority;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (nonatomic) BOOL skipRetryOnOperationError; // @synthesize skipRetryOnOperationError=_skipRetryOnOperationError;
@property (copy, nonatomic) CDUnknownBlockType updateMetadataBlock; // @synthesize updateMetadataBlock=_updateMetadataBlock;
@property (nonatomic) BOOL useOpportunisticPushTopic;
@property (nonatomic) BOOL useUniqueActivityIdentifiers; // @synthesize useUniqueActivityIdentifiers=_useUniqueActivityIdentifiers;
@property (nonatomic, getter=isWaitingForHSA2) BOOL waitingForHSA2; // @synthesize waitingForHSA2=_waitingForHSA2;
@property (nonatomic, getter=isWaitingForIdentityUpdate) BOOL waitingForIdentityUpdate; // @synthesize waitingForIdentityUpdate=_waitingForIdentityUpdate;

+ (id)activityIdentifierWithName:(id)arg1 database:(id)arg2 ignoringSystemConditions:(BOOL)arg3 uniquenessPointer:(id)arg4;
+ (id)earliestStartDateAfterError:(id)arg1;
+ (id)errorForAccountStatus:(long long)arg1;
+ (BOOL)fastErrorRetry;
+ (id)saveSubscriptionActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(BOOL)arg2;
+ (void)setFastErrorRetry:(BOOL)arg1;
+ (BOOL)shouldDeferAfterError:(id)arg1;
+ (id)supportedDatabaseScopes;
+ (id)syncActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(BOOL)arg2;
+ (void)unregisterActivitiesWithDatabase:(id)arg1 ignoringSystemConditions:(BOOL)arg2;
+ (id)userRequestedBackupActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(BOOL)arg2;
- (void).cxx_destruct;
- (void)_fetchChangesForZoneIDs:(id)arg1 ifNecessary:(BOOL)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_fetchChangesForZoneIDs:(id)arg1 operationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_hasPendingModifications;
- (void)_modifyPendingChangesInZoneIDs:(id)arg1 operationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_needsToFetchChangesForZoneIDs:(id)arg1;
- (void)_queue_fetchChangesForZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_queue_modifyPendingChangesInZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_saveSubscriptionIfNecessaryWithOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountChangedNotification:(id)arg1;
- (id)activityIdentifierWithName:(id)arg1;
- (void)addOperationsToModifyZonesIfNecessaryFilteredByZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3;
- (void)addRecordIDsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (void)addRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;
- (void)commonInitWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 useUniqueActivityIdentifiers:(BOOL)arg5 automaticSyncingEnabled:(BOOL)arg6 priority:(long long)arg7;
- (id)databaseSubscription;
- (void)dealloc;
- (id)defaultOperationConfiguration;
- (void)didReceiveDatabaseNotification:(id)arg1;
- (void)ensureAccountAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)existingOperationToFetchChangesForZoneIDs:(id)arg1 includingExecutingOperations:(BOOL)arg2;
- (id)existingOperationToModifyRecordBatchesForZoneIDs:(id)arg1 includingExecutingOperations:(BOOL)arg2;
- (id)existingOperationsToModifyAnyZonesInZoneIDs:(id)arg1;
- (void)fetchChangesForZoneIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchChangesForZoneIDs:(id)arg1 ifNecessary:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchChangesOperation:(id)arg1 completedFetchingChangesForRecordZoneID:(id)arg2 serverChangeToken:(id)arg3 clientChangeToken:(id)arg4 error:(id)arg5;
- (void)fetchChangesOperation:(id)arg1 completedFetchingDatabaseChangesWithError:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 completedWithError:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 databaseChangeTokenUpdated:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 recordChanged:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
- (void)fetchChangesOperation:(id)arg1 recordZoneWithIDChanged:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 recordZoneWithIDWasDeleted:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 recordZoneWithIDWasPurged:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 updatedServerChangeToken:(id)arg2 clientChangeToken:(id)arg3 forRecordZoneID:(id)arg4;
- (void)fetchChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)hasPendingModifications;
- (BOOL)hasSchedulerActivityWithIdentifier:(id)arg1;
- (void)identityUpdateNotification:(id)arg1;
- (id)init;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 ignoringSystemConditions:(BOOL)arg5 useUniqueActivityIdentifiers:(BOOL)arg6 automaticSyncingEnabled:(BOOL)arg7;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 priority:(long long)arg5;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 useUniqueActivityIdentifiers:(BOOL)arg4 automaticSyncingEnabled:(BOOL)arg5;
- (BOOL)isReadyToSubmitSchedulerActivity;
- (void)modifyPendingChangesInZoneIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)modifyPendingChangesInZoneIDs:(id)arg1 operationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)modifyPendingChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)modifyRecordBatchesOperation:(id)arg1 completedBatch:(id)arg2 withSavedRecords:(id)arg3 deletedRecordIDs:(id)arg4 error:(id)arg5;
- (void)modifyRecordBatchesOperation:(id)arg1 completedWithError:(id)arg2;
- (void)modifyRecordBatchesOperation:(id)arg1 perDeleteRecordIDCompletion:(id)arg2 inBatch:(id)arg3 error:(id)arg4;
- (void)modifyRecordBatchesOperation:(id)arg1 perRecordProgressForRecord:(id)arg2 progress:(double)arg3;
- (void)modifyRecordBatchesOperation:(id)arg1 perRecordSaveCompletionForRecord:(id)arg2 inBatch:(id)arg3 error:(id)arg4;
- (BOOL)needsToFetchChangesForZoneIDs:(id)arg1;
- (id)newOperationToFetchChangesForZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3;
- (id)newOperationToModifyRecordBatchesInZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3;
- (id)newOperationToModifyZonesToSave:(id)arg1 zoneIDsToDelete:(id)arg2 inOperationGroup:(id)arg3 osActivity:(id)arg4;
- (id)nextBatchOfRecordsToModifyDefaultBehaviorInZoneIDs:(id)arg1;
- (id)nextBatchOfRecordsToModifyInZoneIDs:(id)arg1;
- (id)nextBatchOfRecordsToModifyWithCustomBatchingInZoneIDs:(id)arg1;
- (void)notifyDataSourceForUnserializedMetadataIfNecessaryWithCoalescing:(BOOL)arg1;
- (unsigned long long)numberOfModifyPendingRecordsOperations;
- (void)performSaveSubscriptionActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performSyncActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performUserRequestedBackupActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerForSubscriptions;
- (void)registerSchedulerActivities;
- (id)saveSubscriptionActivityIdentifier;
- (void)saveSubscriptionIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveSubscriptionIfNecessaryWithOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scheduleInitialWorkIfNecessary;
- (void)scheduleSaveSubscriptionIfNecessaryWithEarliestStartDate:(id)arg1;
- (void)scheduleSyncIfNecessaryWithEarliestStartDate:(id)arg1;
- (void)scheduleUserRequestedBackupActivityIfNecessary;
- (BOOL)shouldFetchChangesForZoneID:(id)arg1;
- (BOOL)shouldRetryAfterError:(id)arg1;
- (void)startWaitingForHSA2IfNecessary;
- (void)startWaitingForIdentityUpdateIfNecessary;
- (void)submitActivityIfNecessaryWithIdentifier:(id)arg1 earliestStartDate:(id)arg2 priority:(long long)arg3 userRequestedBackupTask:(BOOL)arg4;
- (id)syncActivityIdentifier;
- (void)unregisterActivities;
- (void)updateAccountInfoAndScheduleWorkIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateAccountInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateReadinessStateFromError:(id)arg1;
- (id)userRequestedBackupActivityIdentifier;

@end

