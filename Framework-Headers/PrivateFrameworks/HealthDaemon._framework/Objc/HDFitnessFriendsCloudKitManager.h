//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/APSConnectionDelegate-Protocol.h>
#import <HealthDaemon/HDFitnessFriendsManagerReadyObserver-Protocol.h>

@class APSConnection, CKContainer, CKShare, HDFitnessFriendsCloudKitServerChangeTokenCache, HDFitnessFriendsCloudKitUtility, HDFitnessFriendsManager, HDFitnessFriendsNotificationStep, NSArray, NSHashTable, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDFitnessFriendsCloudKitManager : NSObject <APSConnectionDelegate, HDFitnessFriendsManagerReadyObserver>
{
    HDFitnessFriendsManager *_fitnessFriendsManager;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    APSConnection *_apsConnection;
    CKShare *_activityDataShare;
    NSHashTable *_observers;
    HDFitnessFriendsNotificationStep *_relationshipNotificationStep;
    HDFitnessFriendsNotificationStep *_remoteRelationshipNotificationStep;
    HDFitnessFriendsNotificationStep *_privateDatabaseActivitySnapshotNotificationStep;
    HDFitnessFriendsNotificationStep *_activitySnapshotNotificationStep;
    HDFitnessFriendsNotificationStep *_workoutNotificationStep;
    HDFitnessFriendsNotificationStep *_achievementNotificationStep;
    HDFitnessFriendsNotificationStep *_notificationEventNotificationStep;
    BOOL _pushNotificationRecieved;
    unsigned long long _currentFetchPriority;
    BOOL _subscriptionNotificationWasReceivedDuringCurrentFetch;
    NSArray *_blocksWaitingOnFetch;
    NSArray *_blocksWaitingOnSuccessfulFetch;
    HDFitnessFriendsCloudKitServerChangeTokenCache *_serverChangeTokenCache;
    long long _cloudKitAccountStatus;
    NSObject<OS_dispatch_source> *_newAccountTasksTimer;
    BOOL _readyForOperations;
    BOOL _hasCompletedFirstFetch;
    CKContainer *_container;
    HDFitnessFriendsCloudKitUtility *_cloudKitUtility;
}

@property (strong, nonatomic) HDFitnessFriendsCloudKitUtility *cloudKitUtility; // @synthesize cloudKitUtility=_cloudKitUtility;
@property (strong, nonatomic) CKContainer *container; // @synthesize container=_container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCompletedFirstFetch; // @synthesize hasCompletedFirstFetch=_hasCompletedFirstFetch;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL readyForOperations; // @synthesize readyForOperations=_readyForOperations;
@property (readonly) Class superclass;

+ (id)_activityDataShareRecordID;
+ (id)_subscriptionWithID:(id)arg1 recordType:(id)arg2 highPriority:(BOOL)arg3;
+ (id)activityDataRecordZoneID;
+ (id)activityDataRootRecordID;
+ (id)relationshipZone;
- (void).cxx_destruct;
- (void)_cancelNewAccountTasksTimer;
- (void)_cloudKitAccountStatusChanged:(id)arg1;
- (void)_createActivityDataShareWithCompletion:(CDUnknownBlockType)arg1;
- (void)_createNotificationSteps;
- (void)_enumerateRecordsByRecordZoneID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_fetchAllChangesWithPriority:(long long)arg1 completion:(CDUnknownBlockType)arg2 waitingForSuccessfulFetchCompletion:(CDUnknownBlockType)arg3;
- (void)_fetchCloudKitAccountStatusAndNotifyOfChanges;
- (id)_friendUUIDForActivityDataShareRecordZoneID:(id)arg1;
- (void)_handleAccountStatusChange:(long long)arg1;
- (void)_handleIncomingNotification:(id)arg1;
- (void)_handleNewPrivateDatabaseRecordChanges:(id)arg1 sharedDatabaseRecordChanges:(id)arg2;
- (void)_observerQueue_notifyObserversOfBeginUpdates;
- (void)_observerQueue_notifyObserversOfEndUpdates;
- (void)_observerQueue_performNotificationStep:(id)arg1 onRecords:(id)arg2 dispatchGroup:(id)arg3;
- (void)_performAndRetryNewAccountTasksIfNecessaryWithShouldCreateSubscriptions:(BOOL)arg1 shouldFetch:(BOOL)arg2;
- (void)_performAndRetryNewAccountTasksWithRetryInterval:(double)arg1 shouldCreateSubscriptions:(BOOL)arg2 shouldFetch:(BOOL)arg3;
- (void)_performNewAccountTasksCreatingSubscriptions:(BOOL)arg1 fetching:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_pushDisable;
- (id)_queue_apsEnvironmentString;
- (void)_queue_callFetchCompletionBlocksWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)_queue_cancelAllExecutingFetches;
- (void)_queue_clearChangeTokenCacheAndFriendListWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_fetchAllChangesWithPriority:(long long)arg1;
- (BOOL)_queue_isCloudKitAccountDifferentFromLastAccount;
- (void)_queue_notifyObserversOfStatusChanged;
- (void)_queue_pushEnable;
- (void)_queue_saveCloudKitAccountToKeyValueStore;
- (void)_queue_setHasCompletedFirstFetch:(BOOL)arg1;
- (void)_queue_startFetchAllChangesOperationWithPriority:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_saveSubscriptions:(id)arg1 andDeleteSubscriptionsWithIdentifiers:(id)arg2 inDatabase:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_subscribeToChangesInDatabase:(id)arg1 subscriptionPrefix:(id)arg2 recordTypes:(id)arg3 recordTypesToDelete:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_subscribeToChangesInPrivateDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)_subscribeToChangesInSharedDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)_verifyOrCreateSubscriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)acceptSharesWithURLs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addObserver:(id)arg1;
- (void)addParticipantWithCloudKitAddress:(id)arg1 toShares:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cloudKitAccountStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)createShareWithRootRecord:(id)arg1 otherRecordsToSave:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)fetchAllChangesWithPriority:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllChangesWithPriority:(long long)arg1 waitingForSuccessfulFetchCompletion:(CDUnknownBlockType)arg2;
- (void)fetchAndHandleAccountStatus;
- (void)fetchOrCreateActivityDataShareWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchShareWithShareRecordID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fitnessFriendsManagerReady:(id)arg1;
- (void)forceSaveRecordsIntoPrivateDatabaseIgnoringServerChanges:(id)arg1 priority:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)removeParticpantWithCloudKitAddress:(id)arg1 fromShares:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveRecordsIntoPrivateDatabase:(id)arg1 priority:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHasCompletedFirstFetch:(BOOL)arg1;
- (id)shareURLForShare:(id)arg1;

@end

