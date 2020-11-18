//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CKContainer, NSError, NSMutableDictionary, NSMutableSet, NSString, PKPaymentTransactionProcessor, PKPeerPaymentAccount;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, PDCloudStoreDataSource, PDCloudStoreManagerDelegate;

@interface PDCloudStoreManager : NSObject
{
    CKContainer *_container;
    PKPeerPaymentAccount *_peerPaymentAccount;
    NSMutableDictionary *_subscriptionsByIdentifier;
    NSMutableDictionary *_zonesByName;
    NSMutableDictionary *_changeTokensByZoneID;
    NSMutableDictionary *_completedFetchTimestampByZoneID;
    PKPaymentTransactionProcessor *_transactionProcessor;
    NSMutableSet *_initalizationCompletionHandlers;
    NSError *_operationError;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSObject<OS_dispatch_group> *_batchUpdateGroup;
    unsigned long long _nextExpectedState;
    long long _suspendCount;
    BOOL _cloudStoreSetupInProgress;
    BOOL _resettingCloudStore;
    BOOL _accountChangedNotificationReceived;
    BOOL _shouldInvalidateCloudStore;
    id<PDCloudStoreDataSource> _dataSource;
    NSString *_archivePath;
    id<PDCloudStoreManagerDelegate> _delegate;
}

@property (readonly, copy, nonatomic) NSString *archivePath; // @synthesize archivePath=_archivePath;
@property (readonly, nonatomic) id<PDCloudStoreDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (weak, nonatomic) id<PDCloudStoreManagerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)_addOperation:(id)arg1;
- (void)_attachToContainer;
- (id)_cachedFetchTimestamps;
- (id)_cachedServerChangeTokens;
- (void)_callInitalizationCompletionHandlersWithSuccess:(BOOL)arg1 error:(id)arg2;
- (BOOL)_canFormTransactionFromCloudStoreRecord:(id)arg1;
- (BOOL)_canSyncTransactionToCloudKit:(id)arg1;
- (id)_cannotPerformActionErrorWithFailureReason:(id)arg1;
- (void)_cloudStoreAccountChanged:(id)arg1;
- (void)_cloudStoreAccountInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_createZone:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_createZoneSubscriptionWithIdentifier:(id)arg1 forZone:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_deleteAllZoneSubscriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deleteAllZonesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_detachFromContainerWithState:(unsigned long long)arg1;
- (BOOL)_ensureState:(unsigned long long)arg1;
- (id)_errorWithCode:(long long)arg1 description:(id)arg2;
- (void)_fetchAllSubscriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchAndStoreChangesWithForceFetch:(BOOL)arg1 updateReasons:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchAndStoreChangesWithUpdateReasons:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchCounterpartRecordsWithFetchedRecords:(id)arg1 zone:(id)arg2 shouldUpdateLocalDatabase:(BOOL)arg3 updateReasons:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_fetchRecordZonesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchRecordsWithQuery:(id)arg1 cursor:(id)arg2 fetchedRecords:(id)arg3 zone:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_fetchRecordsWithQuery:(id)arg1 zone:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchRecordsWithRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_isTransactionItemFromRecordType:(id)arg1;
- (void)_keychainSyncFinishedFired;
- (void)_modifyRecordsOperationWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_originDeviceIDForCloudStoreRecord:(id)arg1;
- (id)_parseRecords:(id)arg1 shouldUpdateLocalDatabase:(BOOL)arg2 updateReasons:(unsigned long long)arg3;
- (id)_passUniqueIdentifierForCloudStoreRecord:(id)arg1;
- (void)_peerPaymentAccountChanged:(id)arg1;
- (void)_processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 retryCount:(unsigned long long)arg3 shouldRetry:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_recordNamesAssociatedWithRecordName:(id)arg1 inZone:(id)arg2;
- (void)_resetChangeTokens;
- (void)_resetSubscriptionsByIdentifier;
- (void)_resetZonesByName;
- (void)_retryContainerStateWithError:(id)arg1 retryCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveServerChangeTokens;
- (void)_saveServerFetchTimestamps;
- (id)_serverChangeTokenFromArchiveData:(id)arg1;
- (id)_serviceIdentifierForRecord:(id)arg1;
- (id)_serviceIdentifierForRecordType:(id)arg1 recordID:(id)arg2;
- (void)_setContainerState:(unsigned long long)arg1;
- (void)_setContainerState:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setContainerState:(unsigned long long)arg1 retryCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_startFetchRetryTimerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_stopFetchRetryTimer;
- (id)_strippedRecordName:(id)arg1;
- (void)_subscriptionOperationWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_zoneForCloudStoreCodingItemClass:(Class)arg1;
- (void)_zoneOperationWithZonesToSave:(id)arg1 zonesIDsToDelete:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)allItemsOfClassType:(Class)arg1 storeLocally:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)canSyncTransactionFromCloudKitForPassUniqueIdentifier:(id)arg1;
- (BOOL)canSyncTransactionToCloudKitWithBackingData:(BOOL)arg1 passUniqueIdentifier:(id)arg2 serviceIdentifier:(id)arg3;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (id)cloudStoreSpecificKeysForItem:(id)arg1;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAndStoreChangesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAndStoreChangesWithForceFetch:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDataSource:(id)arg1 transactionProcessor:(id)arg2;
- (void)initialCloudDatabaseSetupWithCompletion:(CDUnknownBlockType)arg1;
- (void)initialCloudDatabaseSetupWithHandler:(CDUnknownBlockType)arg1;
- (id)insertOrUpdatePaymentTransaction:(id)arg1 withOriginDeviceID:(id)arg2 forPassUniqueIdentifier:(id)arg3 paymentApplication:(id)arg4 withInsertionMode:(unsigned long long)arg5 performTruncation:(BOOL)arg6;
- (void)invalidateCloudStore;
- (id)lastFetchDateForZoneWithName:(id)arg1;
- (void)removeItemsWithRecordNames:(id)arg1 itemClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetContainerWithHandler:(CDUnknownBlockType)arg1;
- (void)simulateCloudStorePushWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

