//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/APSConnectionDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class APSConnection, CKContainer, CKDatabase, HMDCloudCache, HMDCloudDataSyncStateFilter, HMDCloudHomeManagerZone, HMDCloudLegacyZone, HMDCloudMetadataZone, HMDSyncOperationManager, HMFMessageDispatcher, NSData, NSMutableArray, NSObject, NSString;
@protocol HMDCloudManagerDataSource, HMDCloudManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HMDCloudManager : HMFObject <HMFLogging, APSConnectionDelegate>
{
    BOOL _accountActive;
    BOOL _cloudHomeDataRecordExists;
    BOOL _keychainSyncEnabled;
    BOOL _firstV3FetchRun;
    BOOL _firstDBQueryRun;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id<HMDCloudManagerDelegate> _delegate;
    id<HMDCloudManagerDataSource> _dataSource;
    CKContainer *_container;
    CKDatabase *_database;
    HMDCloudCache *_cloudCache;
    HMFMessageDispatcher *_configSyncDispatcher;
    NSObject<OS_dispatch_queue> *_workQueue;
    CDUnknownBlockType _fetchCompletionHandler;
    NSObject<OS_dispatch_queue> *_clientCallbackQueue;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSObject<OS_dispatch_source> *_pollTimer;
    NSObject<OS_dispatch_source> *_controllerKeyPollTimer;
    NSObject<OS_dispatch_source> *_watchdogControllerKeyPollTimer;
    APSConnection *_pushConnection;
    CDUnknownBlockType _cloudDataDeletedNotificationHandler;
    CDUnknownBlockType _cloudMetadataDeletedNotificationHandler;
    CDUnknownBlockType _controllerKeyAvailableNotificationHandler;
    HMDCloudDataSyncStateFilter *_cloudDataSyncStateFilter;
    HMFMessageDispatcher *_msgDispatcher;
    HMDSyncOperationManager *_syncManager;
    NSMutableArray *_currentBackoffTimerValuesInMinutes;
    CDUnknownBlockType _dataDecryptionFailedHandler;
    CDUnknownBlockType _accountActiveUpdateHandler;
}

@property (nonatomic) BOOL accountActive; // @synthesize accountActive=_accountActive;
@property (copy, nonatomic) CDUnknownBlockType accountActiveUpdateHandler; // @synthesize accountActiveUpdateHandler=_accountActiveUpdateHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackQueue; // @synthesize clientCallbackQueue=_clientCallbackQueue;
@property (strong, nonatomic) HMDCloudCache *cloudCache; // @synthesize cloudCache=_cloudCache;
@property (copy, nonatomic) CDUnknownBlockType cloudDataDeletedNotificationHandler; // @synthesize cloudDataDeletedNotificationHandler=_cloudDataDeletedNotificationHandler;
@property (strong, nonatomic) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter; // @synthesize cloudDataSyncStateFilter=_cloudDataSyncStateFilter;
@property (nonatomic) BOOL cloudHomeDataRecordExists; // @synthesize cloudHomeDataRecordExists=_cloudHomeDataRecordExists;
@property (copy, nonatomic) CDUnknownBlockType cloudMetadataDeletedNotificationHandler; // @synthesize cloudMetadataDeletedNotificationHandler=_cloudMetadataDeletedNotificationHandler;
@property (strong, nonatomic) HMFMessageDispatcher *configSyncDispatcher; // @synthesize configSyncDispatcher=_configSyncDispatcher;
@property (strong, nonatomic) CKContainer *container; // @synthesize container=_container;
@property (copy, nonatomic) CDUnknownBlockType controllerKeyAvailableNotificationHandler; // @synthesize controllerKeyAvailableNotificationHandler=_controllerKeyAvailableNotificationHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *controllerKeyPollTimer; // @synthesize controllerKeyPollTimer=_controllerKeyPollTimer;
@property (strong, nonatomic) NSMutableArray *currentBackoffTimerValuesInMinutes; // @synthesize currentBackoffTimerValuesInMinutes=_currentBackoffTimerValuesInMinutes;
@property (copy, nonatomic) CDUnknownBlockType dataDecryptionFailedHandler; // @synthesize dataDecryptionFailedHandler=_dataDecryptionFailedHandler;
@property (readonly, weak) id<HMDCloudManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (strong, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL decryptionFailed;
@property (readonly, weak) id<HMDCloudManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property (nonatomic, getter=isFirstDBQueryRun) BOOL firstDBQueryRun; // @synthesize firstDBQueryRun=_firstDBQueryRun;
@property (nonatomic, getter=isFirstV3FetchRun) BOOL firstV3FetchRun; // @synthesize firstV3FetchRun=_firstV3FetchRun;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMDCloudHomeManagerZone *homeManagerZone;
@property (nonatomic) BOOL keychainSyncEnabled; // @synthesize keychainSyncEnabled=_keychainSyncEnabled;
@property (readonly, nonatomic) HMDCloudLegacyZone *legacyZone;
@property (readonly, nonatomic) HMDCloudMetadataZone *metadataZone;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *pollTimer; // @synthesize pollTimer=_pollTimer;
@property (strong, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *retryTimer; // @synthesize retryTimer=_retryTimer;
@property (readonly, nonatomic) NSData *serverTokenData;
@property (readonly) Class superclass;
@property (weak, nonatomic) HMDSyncOperationManager *syncManager; // @synthesize syncManager=_syncManager;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *watchdogControllerKeyPollTimer; // @synthesize watchdogControllerKeyPollTimer=_watchdogControllerKeyPollTimer;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)__addCKDatabaseOperation:(id)arg1;
- (void)__deleteRecordWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__deleteRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__deleteRecordZonesWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__fetchAllRecordZonesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)__fetchRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__fetchSubscriptionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__saveRecordZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__saveSubscription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_accountIsActive;
- (void)_addHomeZoneName:(id)arg1 owner:(id)arg2;
- (void)_auditProxSetupNotification:(id)arg1;
- (id)_changeTokenFromData:(id)arg1;
- (void)_checkZoneAndUploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createZoneAndFetchChanges:(CDUnknownBlockType)arg1;
- (void)_createZoneAndUploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchAndVerifyZoneRootRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchDatabaseZoneChangesCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchLegacyTransaction:(id)arg1 forceFetch:(BOOL)arg2 accountCompletionHandler:(CDUnknownBlockType)arg3 dataCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_fetchTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_forceCleanCloud:(BOOL)arg1 fetchTransaction:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleAccountStatus:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleControllerKeyAvailable;
- (void)_handleKeychainSyncStateChanged:(BOOL)arg1;
- (void)_processFetchCompletedWithError:(id)arg1 serverToken:(id)arg2 fetchTransaction:(id)arg3 migrationOptions:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5 moreRecordsComing:(BOOL)arg6 emptyRecord:(BOOL)arg7;
- (BOOL)_processFetchedTransaction:(id)arg1;
- (void)_registerForProxSetupNotifications;
- (void)_registerForPushNotifications;
- (void)_removeAllHomeZonesCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_removeHomeZoneName:(id)arg1;
- (void)_removeZonesTransactions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_resetCloudCache:(CDUnknownBlockType)arg1;
- (void)_resetCloudDataAndDeleteMetadataForCurrentAccount:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_resetCloudServerTokenData;
- (void)_resetCloudZonesIgnoreHomeManager:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_resetHomeDataRecordState;
- (void)_scheduleZoneFetch:(id)arg1;
- (id)_serverTokenData;
- (void)_setupSubscriptionForZone:(id)arg1;
- (void)_startControllerKeyPollTimer;
- (void)_startControllerKeyPollTimerWithBackoff;
- (void)_startControllerKeyPollTimerWithValue:(long long)arg1;
- (void)_startFetchPollTimer;
- (void)_startFetchRetryTimer;
- (void)_startWatchdogControllerKeyPollTimer;
- (void)_stopControllerKeyPollTimer;
- (void)_stopFetchPollTimer;
- (void)_stopFetchRetryTimer;
- (void)_stopWatchdogControllerKeyPollTimer;
- (void)_updateServerTokenStatusOnCloudFilter;
- (void)_uploadLegacyTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_uploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_validFetchRetryCKErrorCode:(long long)arg1;
- (void)_verifyAndRemoveAllHomeZonesCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_verifyAndRemoveZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_verifyZoneHasBeenDeletedTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_verifyZonesExist:(id)arg1 zoneIndex:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addHomeZoneName:(id)arg1 owner:(id)arg2;
- (void)cacheDatabaseServerToken;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)dealloc;
- (void)fetchCurrentAccountStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchDatabaseZoneChanges;
- (void)fetchLegacyTransaction:(id)arg1 forceFetch:(BOOL)arg2 accountCompletionHandler:(CDUnknownBlockType)arg3 dataCompletionHandler:(CDUnknownBlockType)arg4;
- (void)fetchTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleKeychainStateChangedNotification:(id)arg1;
- (id)initWithMessageDispatcher:(id)arg1 cloudDataSyncStateFilter:(id)arg2 cloudCache:(id)arg3 delegate:(id)arg4 dataSource:(id)arg5 syncManager:(id)arg6 callbackQueue:(id)arg7;
- (id)initWithMessageDispatcher:(id)arg1 cloudDataSyncStateFilter:(id)arg2 cloudCache:(id)arg3 delegate:(id)arg4 dataSource:(id)arg5 syncManager:(id)arg6 callbackQueue:(id)arg7 container:(id)arg8 workQueue:(id)arg9;
- (void)initializeServerTokenStatusOnCloudFilter;
- (BOOL)legacyZoneHasRecordsAvaliable;
- (void)removeHomeZoneName:(id)arg1;
- (void)removeZonesTransactions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetCloudCache:(CDUnknownBlockType)arg1;
- (void)resetCloudDataAndDeleteMetadataForCurrentAccount:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetCloudServerTokenData:(id)arg1;
- (void)setAccountActiveUpdateCallback:(CDUnknownBlockType)arg1;
- (void)setCloudDataDeletedNotificationBlock:(CDUnknownBlockType)arg1;
- (void)setCloudMetadataDeletedNotificationBlock:(CDUnknownBlockType)arg1;
- (void)setControllerKeyAvailableNotificationBlock:(CDUnknownBlockType)arg1;
- (void)setDataAvailableFromCloudCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setDataDecryptionFailedCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateAccountStatusChanged:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateCloudDataSyncFilterState:(BOOL)arg1;
- (void)updateServerTokenStatusOnCloudFilter;
- (void)uploadLegacyTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
