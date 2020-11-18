//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, ICSelectorDelayer, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSTimer;
@protocol ICCloudContextDelegate, OS_dispatch_queue;

@interface ICCloudContext : NSObject
{
    BOOL _fetchOperationsPending;
    BOOL _needsToUpdateSubscriptions;
    BOOL _disabled;
    BOOL _disabledInternal;
    BOOL _needsToProcessAllObjects;
    BOOL _didAddObservers;
    BOOL _fetchingEnabled;
    BOOL _syncDisabledByServer;
    BOOL _didCheckForLongLivedOperations;
    id<ICCloudContextDelegate> _cloudContextDelegate;
    NSDate *_lastSyncDate;
    long long _qualityOfService;
    unsigned long long _discretionaryNetworkBehavior;
    CKContainer *_container;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSMutableSet *_objectIDsToRetry;
    NSTimer *_retryTimer;
    NSMutableDictionary *_retryCountsByOperationType;
    NSMutableSet *_objectIDsToProcess;
    ICSelectorDelayer *_processingSelectorDelayer;
    ICSelectorDelayer *_pollingSelectorDelayer;
    NSMutableSet *_zoneIDsNeedingFetchChanges;
    NSMutableSet *_zoneIDsFetchingChanges;
    NSMutableSet *_zoneIDsNeedingToBeSaved;
    NSMutableSet *_subscribedSubscriptionIDs;
}

@property (nonatomic) long long accountStatus;
@property (weak, nonatomic) id<ICCloudContextDelegate> cloudContextDelegate; // @synthesize cloudContextDelegate=_cloudContextDelegate;
@property (readonly, nonatomic) NSDictionary *cloudObjectClassesByRecordType;
@property (strong, nonatomic) CKContainer *container; // @synthesize container=_container;
@property (nonatomic) BOOL didAddObservers; // @synthesize didAddObservers=_didAddObservers;
@property (nonatomic) BOOL didCheckForLongLivedOperations; // @synthesize didCheckForLongLivedOperations=_didCheckForLongLivedOperations;
@property (getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property (getter=isDisabledInternal) BOOL disabledInternal; // @synthesize disabledInternal=_disabledInternal;
@property (nonatomic) unsigned long long discretionaryNetworkBehavior; // @synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior;
@property (readonly, nonatomic) BOOL fetchOperationsPending; // @synthesize fetchOperationsPending=_fetchOperationsPending;
@property (nonatomic, getter=isFetchingEnabled) BOOL fetchingEnabled; // @synthesize fetchingEnabled=_fetchingEnabled;
@property (strong) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property (nonatomic) BOOL needsToProcessAllObjects; // @synthesize needsToProcessAllObjects=_needsToProcessAllObjects;
@property BOOL needsToUpdateSubscriptions; // @synthesize needsToUpdateSubscriptions=_needsToUpdateSubscriptions;
@property (strong, nonatomic) NSMutableSet *objectIDsToProcess; // @synthesize objectIDsToProcess=_objectIDsToProcess;
@property (strong, nonatomic) NSMutableSet *objectIDsToRetry; // @synthesize objectIDsToRetry=_objectIDsToRetry;
@property (strong, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (strong) ICSelectorDelayer *pollingSelectorDelayer; // @synthesize pollingSelectorDelayer=_pollingSelectorDelayer;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property (strong) ICSelectorDelayer *processingSelectorDelayer; // @synthesize processingSelectorDelayer=_processingSelectorDelayer;
@property (nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property (strong, nonatomic) NSMutableDictionary *retryCountsByOperationType; // @synthesize retryCountsByOperationType=_retryCountsByOperationType;
@property (strong) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property (strong) NSMutableSet *subscribedSubscriptionIDs; // @synthesize subscribedSubscriptionIDs=_subscribedSubscriptionIDs;
@property (nonatomic) BOOL syncDisabledByServer; // @synthesize syncDisabledByServer=_syncDisabledByServer;
@property (strong, nonatomic) NSMutableSet *zoneIDsFetchingChanges; // @synthesize zoneIDsFetchingChanges=_zoneIDsFetchingChanges;
@property (strong, nonatomic) NSMutableSet *zoneIDsNeedingFetchChanges; // @synthesize zoneIDsNeedingFetchChanges=_zoneIDsNeedingFetchChanges;
@property (strong, nonatomic) NSMutableSet *zoneIDsNeedingToBeSaved; // @synthesize zoneIDsNeedingToBeSaved=_zoneIDsNeedingToBeSaved;

+ (id)deduplicatedRecordsForCloudObjects:(id)arg1;
+ (void)deleteAllServerChangeTokens;
+ (id)errorCodesToIgnoreForBackoffTimer;
+ (id)errorForDisabledCloudSyncing;
+ (id)errorFromErrors:(id)arg1;
+ (id)errorFromOperations:(id)arg1;
+ (id)errorsFromError:(id)arg1;
+ (BOOL)isZoneOptions:(id)arg1 subsetOfZoneOptions:(id)arg2;
+ (id)metadataZoneID;
+ (id)newNotesContainer;
+ (id)notesZoneID;
+ (id)objectsByDatabaseScope:(id)arg1;
+ (id)sharedContext;
+ (BOOL)shouldIgnoreErrorForBackoffTimer:(id)arg1;
+ (id)sortedRecords:(id)arg1;
+ (id)zoneIDsFromZoneInfos:(id)arg1;
+ (id)zoneInfosFromZoneIDs:(id)arg1;
- (void).cxx_destruct;
- (void)_addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg1 delete:(id)arg2 waitForDependencies:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_processCloudObjects:(id)arg1 operationQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_syncWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addCallbackBlocksToModifyRecordsOperation:(id)arg1 rootRecordIDsByShareID:(id)arg2;
- (void)addDependenciesForModifyRecordsOperation:(id)arg1;
- (void)addFetchOperationsForRecordIDs:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg1 delete:(id)arg2 waitForDependencies:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addOperationToProcessObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addOperationsToFetchRecordZoneChangesForZoneIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addStateHandler;
- (id)allCloudObjectsInContext:(id)arg1;
- (id)allZoneIDs;
- (BOOL)canRetryImmediatelyAfterError:(id)arg1;
- (void)cancelEverythingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)checkForLongLivedOperations;
- (void)clearPendingActivity;
- (void)clearRetryCountForOperationType:(id)arg1;
- (void)clearSubscribedSubscriptionIDs;
- (void)clearZoneFetchState;
- (void)cloudKitAccountChanged:(id)arg1;
- (void)contextDidSave:(id)arg1;
- (void)dealloc;
- (void)deleteCloudObjects:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteRecordZonesWithZoneIDs:(id)arg1 markZonesAsUserPurged:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteServerChangeTokenForChangedZonesInDatabase:(id)arg1;
- (void)deleteServerChangeTokenForRecordZoneID:(id)arg1 databaseScope:(long long)arg2;
- (void)didFetchShare:(id)arg1 context:(id)arg2;
- (void)disableCloudSyncingIfCurrentVersionNotSuppported;
- (id)existingCloudObjectForRecord:(id)arg1 context:(id)arg2;
- (id)existingCloudObjectForRecordID:(id)arg1 recordType:(id)arg2 context:(id)arg3;
- (id)existingCloudObjectForUserSpecificRecordID:(id)arg1 createPlaceholderIfNecessary:(BOOL)arg2 context:(id)arg3;
- (void)fetchCloudObjects:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDatabaseChangesForDatabases:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDatabaseChangesOperation:(id)arg1 changeTokenUpdated:(id)arg2;
- (void)fetchDatabaseChangesOperation:(id)arg1 finishedWithServerChangeToken:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDChanged:(id)arg2;
- (void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDWasDeleted:(id)arg2;
- (void)fetchDatabaseChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchOperation:(id)arg1 didCompleteWithRecordsByRecordID:(id)arg2 error:(id)arg3;
- (void)fetchOperation:(id)arg1 fetchedRecord:(id)arg2 recordID:(id)arg3 error:(id)arg4;
- (void)fetchOperation:(id)arg1 progressWithRecordID:(id)arg2 progress:(double)arg3;
- (void)fetchRecordIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchRecordZoneChangesForZoneIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchRecordZoneChangesOperation:(id)arg1 completedFetchForZoneID:(id)arg2 serverChangeToken:(id)arg3 error:(id)arg4;
- (void)fetchRecordZoneChangesOperation:(id)arg1 recordChanged:(id)arg2 context:(id)arg3;
- (void)fetchRecordZoneChangesOperation:(id)arg1 recordWasDeletedWithRecordID:(id)arg2 recordType:(id)arg3 context:(id)arg4;
- (void)fetchRecordZoneChangesOperation:(id)arg1 zoneID:(id)arg2 changeTokenUpdated:(id)arg3;
- (void)fetchRecordZoneChangesOperationDidComplete:(id)arg1 error:(id)arg2;
- (void)fetchRecordZoneChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchSubscriptionsForDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchUserRecordWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishOperationsForRecordID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)firePollingSyncRequest;
- (void)handleGenericPartialFailuresForError:(id)arg1 operation:(id)arg2;
- (void)handleNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)hasPendingOperations;
- (void)incrementOrClearRetryCountForOperationType:(id)arg1 error:(id)arg2;
- (void)incrementRetryCountForOperationType:(id)arg1;
- (id)init;
- (BOOL)isCloudKitAccountAvailable;
- (BOOL)isFetchingAllRecordZones;
- (BOOL)isInForeground;
- (BOOL)isInternetReachable;
- (BOOL)isReadyToSync;
- (void)loadZoneFetchState;
- (void)modifyRecordsOperation:(id)arg1 didCompleteWithSavedRecords:(id)arg2 deletedRecordIDs:(id)arg3 rootRecordIDsByShareID:(id)arg4 error:(id)arg5;
- (void)modifyRecordsOperation:(id)arg1 perDeleteRecordIDCompletion:(id)arg2 rootRecordIDsByShareID:(id)arg3 error:(id)arg4;
- (void)modifyRecordsOperation:(id)arg1 perSaveRecordCompletion:(id)arg2 error:(id)arg3;
- (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
- (id)newOperationToFetchRecordZoneChangesWithZoneOptions:(id)arg1 database:(id)arg2;
- (id)newPlaceholderObjectForRecordID:(id)arg1 recordType:(id)arg2 context:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)operationToFetchDatabaseChangesForDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)operationToFetchRecordIDs:(id)arg1 database:(id)arg2 qualityOfService:(long long)arg3;
- (id)operationToFetchRecordZoneChangesForZoneIDs:(id)arg1 database:(id)arg2;
- (id)operationToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4;
- (id)operationToSaveZonesForZoneIDs:(id)arg1;
- (id)operationToSaveZonesIfNecessary;
- (id)operationsToFetchRecordIDs:(id)arg1 database:(id)arg2 qualityOfService:(long long)arg3;
- (id)operationsToFetchRecordIDs:(id)arg1 qualityOfService:(long long)arg2;
- (id)operationsToFetchRecordZoneChangesForZoneIDs:(id)arg1;
- (id)operationsToModifyRecordsForCloudObjectsToSave:(id)arg1 delete:(id)arg2 deleteShares:(id)arg3 saveUserSpecificRecords:(id)arg4 addDependencies:(BOOL)arg5;
- (id)operationsToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4;
- (BOOL)partialError:(id)arg1 containsErrorCode:(long long)arg2;
- (void)printOperationQueue;
- (void)processAllCloudObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processObjectIDs:(id)arg1 operationQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)processPendingCloudObjects;
- (void)processPendingCloudObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pushCloudObjects:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reachabilityChanged:(id)arg1;
- (id)readinessLoggingDescription;
- (void)receivedZoneNotFound:(id)arg1 operation:(id)arg2;
- (void)recursiveCancelDependentOperations:(id)arg1;
- (void)retryOperationsIfNecessary;
- (void)retryProcessingCloudObjects;
- (void)saveServerChangeToken:(id)arg1 forChangedZonesInDatabase:(id)arg2;
- (void)saveServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2 databaseScope:(long long)arg3;
- (void)saveSubscriptionsForDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveZoneFetchState;
- (id)serverChangeTokenForChangedZonesInDatabase:(id)arg1;
- (id)serverChangeTokenForRecordZoneID:(id)arg1 databaseScope:(long long)arg2;
- (void)startRetryTimerIfNecessaryWithError:(id)arg1;
- (id)subscriptionForDatabase:(id)arg1;
- (void)syncIfNecessary;
- (void)syncWithCompletionHandler:(CDUnknownBlockType)arg1;
- (double)timeIntervalToRetryAfterFromError:(id)arg1;
- (void)updateAccountStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateCloudContextState;
- (void)updateConfiguration;
- (void)updateSelectorDelayers;
- (void)updateSubscriptionsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

