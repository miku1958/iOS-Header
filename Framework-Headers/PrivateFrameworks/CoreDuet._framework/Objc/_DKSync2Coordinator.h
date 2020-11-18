//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKSyncContextObject.h>

#import <CoreDuet/APSConnectionDelegate-Protocol.h>
#import <CoreDuet/_DKKnowledgeStorageEventNotificationDelegate-Protocol.h>
#import <CoreDuet/_DKSyncCoordinator-Protocol.h>
#import <CoreDuet/_DKSyncRemoteKnowledgeStorageFetchDelegate-Protocol.h>

@class APSConnection, NSMutableArray, NSMutableSet, NSObject, NSString, NSUUID, _CDMutablePerfMetric, _CDPeriodicSchedulerJob, _DKDataProtectionStateMonitor, _DKKnowledgeStorage, _DKSync2State, _DKSyncToggle, _DKSyncType, _DKThrottledActivity;
@protocol NSObject, OS_xpc_object, _DKKeyValueStore, _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKSync2Coordinator : _DKSyncContextObject <APSConnectionDelegate, _DKKnowledgeStorageEventNotificationDelegate, _DKSyncRemoteKnowledgeStorageFetchDelegate, _DKSyncCoordinator>
{
    _DKThrottledActivity *_activityThrottler;
    id<NSObject> _observerToken;
    NSMutableSet *_busyTransactions;
    NSMutableArray *_insertedSyncedEvents;
    NSMutableArray *_deletedSyncedEvents;
    NSMutableSet *_activatedPeers;
    _DKDataProtectionStateMonitor *_dataProtectionMonitor;
    BOOL _hasRegisteredOptionalObservers;
    BOOL _isEnabled;
    NSString *_triggeredSyncDelayActivityName;
    NSString *_syncActivityName;
    _DKSync2State *_syncState;
    double _periodicJobInterval;
    BOOL _databaseObserversRegistered;
    BOOL _cloudDeviceCountChangedObserverRegistered;
    BOOL _cloudSyncAvailablityObserverRegistered;
    BOOL _rapportAvailablityObserverRegistered;
    BOOL _siriSyncEnabledObserverRegistered;
    BOOL _syncPolicyChangedObserverRegistered;
    APSConnection *_connection;
    NSMutableSet *_streamNamesObservedForAdditions;
    NSMutableSet *_streamNamesObservedForDeletions;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent _perfEvent;
    _DKSyncToggle *_syncEnabledToggler;
    _DKSyncToggle *_someTransportIsAvailableToggler;
    _DKSyncToggle *_cloudIsAvailableToggler;
    _DKSyncToggle *_rapportIsAvailableToggler;
    _CDPeriodicSchedulerJob *_periodicJob;
    BOOL _triggeredSyncActivityRegistered;
    NSObject<OS_xpc_object> *_triggeredSyncActivity;
    BOOL _isBusy;
    BOOL _hasSyncedUpHistoryToCloud;
    _DKKnowledgeStorage *_storage;
    id<_DKKeyValueStore> _keyValueStore;
    id<_DKSyncLocalKnowledgeStorage> _localStorage;
    id<_DKSyncRemoteKnowledgeStorage> _transportCloudDown;
    id<_DKSyncRemoteKnowledgeStorage> _transportCloudUp;
    id<_DKSyncRemoteKnowledgeStorage> _transportRapport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUUID *deviceUUID;
@property (nonatomic) BOOL hasSyncedUpHistoryToCloud; // @synthesize hasSyncedUpHistoryToCloud=_hasSyncedUpHistoryToCloud;
@property (readonly) unsigned long long hash;
@property BOOL isBusy; // @synthesize isBusy=_isBusy;
@property (strong, nonatomic) id<_DKKeyValueStore> keyValueStore; // @synthesize keyValueStore=_keyValueStore;
@property (strong, nonatomic) id<_DKSyncLocalKnowledgeStorage> localStorage; // @synthesize localStorage=_localStorage;
@property (readonly, nonatomic) _DKKnowledgeStorage *storage; // @synthesize storage=_storage;
@property (readonly) Class superclass;
@property (readonly, nonatomic) _DKSyncType *syncType;
@property (strong, nonatomic) id<_DKSyncRemoteKnowledgeStorage> transportCloudDown; // @synthesize transportCloudDown=_transportCloudDown;
@property (strong, nonatomic) id<_DKSyncRemoteKnowledgeStorage> transportCloudUp; // @synthesize transportCloudUp=_transportCloudUp;
@property (strong, nonatomic) id<_DKSyncRemoteKnowledgeStorage> transportRapport; // @synthesize transportRapport=_transportRapport;

+ (id)_syncTypeFromActivity:(id)arg1;
+ (void)_updateEventStatsWithSyncElapsedTimeStartDate:(id)arg1 endDate:(id)arg2;
+ (void)_updateEventStatsWithSyncType:(id)arg1;
+ (BOOL)canPerformSyncOperationWithClass:(Class)arg1 syncType:(id)arg2 history:(id)arg3 transport:(id)arg4 peer:(id)arg5 policy:(id)arg6;
+ (BOOL)isOnPower;
+ (id)keyValueStoreForDomain:(id)arg1;
+ (BOOL)shouldDeferSyncOperationWithClass:(Class)arg1 syncType:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5;
+ (id)storage;
+ (id)streamNamesToTombstone;
- (void).cxx_destruct;
- (void)__finishSyncWithTransaction:(id)arg1 startDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)__performSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)_checkInTriggeredSyncActivity:(id)arg1 isStartup:(BOOL)arg2;
- (void)_cloudIsAvailableToggle;
- (void)_cloudIsUnavailableToggle;
- (void)_cloudSyncAvailabilityDidChange:(id)arg1;
- (void)_createPushConnection;
- (void)_databaseDidDeleteFromStreamNameCounts:(id)arg1;
- (void)_deleteForeignSiriEvents;
- (void)_deleteNextBatchOfOurSiriEventsFromCloudWithStartDate:(id)arg1;
- (void)_deleteSiriCloudEvents;
- (void)_deleteSiriEventsIfSiriCloudSyncHasBeenDisabled;
- (void)_destroyPushConnection;
- (id)_executionCriteriaWithInterval:(double)arg1;
- (void)_finishActivityWithError:(id)arg1;
- (double)_intervalForJobGivenIsSingleDevice:(BOOL)arg1;
- (void)_noTransportIsAvailableToggle;
- (void)_performEnableAndStart;
- (void)_performInitialSync;
- (void)_performPeriodicJob;
- (void)_performSyncTogglesChangedActions;
- (void)_performSyncWithForceSync:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performSyncWithSyncType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_possiblyPerformInitialSync;
- (void)_rapportIsAvailableToggle;
- (void)_rapportIsUnavailableToggle;
- (void)_registerCloudDeviceCountChangedObserver;
- (void)_registerCloudSyncAvailablityObserver;
- (void)_registerDatabaseObservers;
- (void)_registerPeriodicJob;
- (void)_registerPeriodicJobWithInterval:(double)arg1;
- (void)_registerRapportAvailablityObserver;
- (void)_registerRapportLaunchOnDemandHandler;
- (void)_registerSiriSyncEnabledObserver;
- (void)_registerSyncPolicyChangedObserver;
- (void)_registerTriggeredSyncActivityWithIsStartup:(BOOL)arg1;
- (void)_reregisterPeriodicJob;
- (void)_runTriggeredSyncActivity:(id)arg1;
- (void)_siriSyncEnabledDidChange;
- (void)_someTransportIsAvailableToggle;
- (void)_syncDisabledToggle;
- (void)_syncEnabledToggle;
- (void)_syncPolicyDidChange:(id)arg1;
- (void)_synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_unregisterCloudDeviceCountChangedObserver;
- (void)_unregisterCloudSyncAvailablityObserver;
- (void)_unregisterDatabaseObservers;
- (void)_unregisterPeriodicJob;
- (void)_unregisterRapportAvailablityObserver;
- (void)_unregisterSiriSyncEnabledObserver;
- (void)_unregisterSyncPolicyChangedObserver;
- (void)_unregisterTriggeredSyncActivity;
- (void)_updateTriggeredSyncActivity;
- (id)_updatedExecutionCriteriaFromType:(id)arg1;
- (void)configureTracker;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)createBusyTransactionWithName:(const char *)arg1;
- (void)dealloc;
- (void)deleteRemoteStateWithReply:(CDUnknownBlockType)arg1;
- (id)deletedEventIDsSinceDate:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 endDate:(id *)arg4 error:(id *)arg5;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1;
- (void)handleDataProtectionChangeFor:(id)arg1 willBeAvailable:(BOOL)arg2;
- (void)handleFetchedSourceDeviceID:(id)arg1 version:(id)arg2 fromPeer:(id)arg3 error:(id)arg4;
- (void)handleStatusChangeForPeer:(id)arg1 previousTransports:(long long)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (BOOL)isSingleDevice;
- (void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didDeleteSyncedEvents:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didHaveInsertsAndDeletesWithCount:(unsigned long long)arg2;
- (void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didInsertSyncedEvents:(id)arg2;
- (id)policyForSyncTransportType:(long long)arg1;
- (void)possiblyUpdateIsBusyProperty;
- (void)removeBusyTransaction:(id)arg1;
- (void)setupStorage;
- (id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 compatibility:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id *)arg6;
- (id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 fetchOrder:(long long)arg4 error:(id *)arg5;
- (void)start;
- (void)syncWithReply:(CDUnknownBlockType)arg1;
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 reply:(CDUnknownBlockType)arg3;

@end
