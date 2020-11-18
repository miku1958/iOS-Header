//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/APSConnectionDelegate-Protocol.h>
#import <HealthDaemon/HDCloudSyncManagerTaskQueueDelegate-Protocol.h>
#import <HealthDaemon/HDDatabaseJournalMergeObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthDaemon/HDPeriodicActivityDelegate-Protocol.h>

@class ACAccountStore, APSConnection, HDCloudSyncManagerTaskQueue, HDDaemon, HDGatedActivity, HDPeriodicActivity, HDProfile, NSDate, NSMutableArray, NSProgress, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDCloudSyncCoordinator : NSObject <APSConnectionDelegate, HDCloudSyncManagerTaskQueueDelegate, HDDiagnosticObject, HDPeriodicActivityDelegate, HDHealthDaemonReadyObserver, HDDatabaseJournalMergeObserver>
{
    HDDaemon *_daemon;
    struct os_unfair_lock_s _lock;
    BOOL _lock_cloudSyncEnabled;
    BOOL _lock_hasComputedCloudSyncEnabled;
    BOOL _lock_cloudSyncSupportEnabled;
    BOOL _lock_cloudSyncSupportValueLoaded;
    ACAccountStore *_lock_accountStore;
    BOOL _lock_syncInProgress;
    BOOL _lock_hasUpdatedCachedLastSuccessfulSyncDates;
    NSDate *_lock_lastSuccessfulPullDate;
    NSDate *_lock_lastSuccessfulPushDate;
    HDCloudSyncManagerTaskQueue *_syncTaskQueue;
    NSProgress *_activeSyncProgress;
    NSMutableArray *_activeSyncCompletions;
    NSString *_latestSyncStartLog;
    NSString *_latestSyncEndLog;
    NSMutableArray *_progressCompletionBlocks;
    APSConnection *_apsConnection;
    NSObject<OS_dispatch_source> *_periodicActivityCriteriaUpdateSource;
    HDPeriodicActivity *_primaryPeriodicActivity;
    HDPeriodicActivity *_secondaryPeriodicActivity;
    HDPeriodicActivity *_userRequestedBackupActivity;
    HDGatedActivity *_subscriptionBasedSyncActivity;
    BOOL _lock_requiresTinkerUpload;
    BOOL _lock_requiresTinkerDownload;
    double _lock_lastTinkerDataDownloadTriggerTime;
    double _lock_lastTinkerDataUploadTriggerTime;
    HDProfile *_unitTest_primaryProfileOverride;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_computeCanPerformCloudSyncForAccount:(id)arg1 error:(id *)arg2;
- (void)_configurePrimaryPeriodicActivityCriteria:(id)arg1 hasPushed:(BOOL)arg2 hasRestored:(BOOL)arg3 timeSinceLastSuccess:(double)arg4;
- (void)_configureSecondaryPeriodicActivityCriteria:(id)arg1 hasPushed:(BOOL)arg2 hasRestored:(BOOL)arg3 timeSinceLastSuccess:(double)arg4;
- (void)_configureUserRequestedBackupPeriodicActivityCriteria:(id)arg1;
- (void)_disableAPSPush;
- (id)_disableAndDeleteAllSyncDataForProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_disableCloudSyncSupport;
- (void)_enableCloudSyncSupport;
- (id)_fetchDescriptionForProfile:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_getPersistedAccountInfo;
- (id)_lastLongTimeWithoutSuccessfulCloudSyncReportDateKeyWithError:(id *)arg1;
- (long long)_operationTypeForPull:(BOOL)arg1 push:(BOOL)arg2;
- (void)_performPendingSubscriptionSyncsWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_periodicActivityShouldTreatSyncErrorAsSuccess:(id)arg1;
- (void)_persistPeriodicSyncError:(id)arg1;
- (void)_prepareAllProfilesForSync;
- (id)_primaryProfile;
- (id)_profileIdentifiersForSubscriptionSync;
- (void)_queue_checkLastSyncDate;
- (void)_queue_enableAPSPush;
- (void)_queue_fetchAPSEnvironmentString:(CDUnknownBlockType)arg1;
- (void)_queue_generateRestoreEventMergeComplete;
- (void)_queue_handleIncomingCloudKitPushNotification:(id)arg1;
- (void)_queue_handleIncomingDataDownloadAvailableNotificationOnGuardianDevices;
- (void)_queue_handleIncomingDataDownloadAvailableNotificationOnTinkerDevices;
- (void)_queue_handleIncomingDataUploadRequest;
- (void)_queue_handleIncomingPrimaryMedicalIDDataAvailableForDownloadNotification;
- (void)_queue_handleIncomingTinkerMedicalIDDataAvailableForDownloadNotification;
- (void)_queue_handleSubscriptionWithID:(id)arg1;
- (void)_queue_setStartDateForRestoreEventSyncComplete;
- (void)_queue_setupPeriodicActivity;
- (id)_queue_syncAllProfilesWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_queue_syncProfilesWithIdentifiers:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_triggerSyncForAccountChange;
- (void)_queue_updatePeriodicActivitiesWithSyncSuccess:(BOOL)arg1;
- (void)_queue_updatePeriodicActivityCriteria;
- (id)_reportingDescriptionForError:(id)arg1;
- (id)_reportingDescriptionForPartialFailureError:(id)arg1;
- (BOOL)_requireInexpensiveNetworkingWithTimeSinceLastSuccess:(double)arg1;
- (void)_resetPersistedPeriodicSyncErrors;
- (id)_resetProfile:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setHealthAccountDataclassEnabled:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setupCloudSyncSupportIfRequired;
- (BOOL)_shouldPerformLastSyncDateCheckInternalSetting;
- (unsigned long long)_syncOptionsForPull:(BOOL)arg1 push:(BOOL)arg2;
- (id)_syncProfile:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (double)_timeSinceLastSyncSuccess;
- (id)_timestampedDescriptionForError:(id)arg1;
- (BOOL)_unitTest_shouldSyncProfile:(id)arg1;
- (void)_updateCachedLastSyncDatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)accountConfigurationDidChangeWithCompletion:(CDUnknownBlockType)arg1;
- (id)addCloudSyncProgressCompletion:(CDUnknownBlockType)arg1;
- (void)addManagerTask:(id)arg1;
- (BOOL)canPerformCloudSyncWithError:(id *)arg1;
- (void)cloudSyncSupportStatusDidChange;
- (long long)compareTask:(id)arg1 withTask:(id)arg2 queue:(id)arg3;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)daemonReady:(id)arg1;
- (void)databaseJournalMergeDidCompleteForProfile:(id)arg1;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)disableAndDeleteAllSyncDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableSyncLocallyWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableSyncLocallyWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchCloudDescriptionWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchCloudSyncProgressWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSyncStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDaemon:(id)arg1;
- (BOOL)isDeviceInManateeUnavailableCFUState;
- (id)lastSuccessfulPullDate;
- (id)lastSuccessfulPushDate;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (id)resetAllProfilesWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetSubscriptionSyncBackoff;
- (id)syncAllProfilesWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)triggerSubscription:(id)arg1;
- (void)unitTest_performPeriodicSyncWithCompletion:(CDUnknownBlockType)arg1;
- (id)unitTest_periodicActivity;
- (void)unitTest_setPeriodicActivity:(id)arg1;
- (void)unitTest_setPrimaryProfileOverride:(id)arg1;

@end
