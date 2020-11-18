//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDaemonCore/IMDCKAbstractSyncController.h>

#import <IMDaemonCore/IMDXPCEventStreamHandlerDelegate-Protocol.h>

@class CKFetchRecordZonesOperation, IMTimer, NSDate, NSString, NSTimer;

@interface IMDCKSyncController : IMDCKAbstractSyncController <IMDXPCEventStreamHandlerDelegate>
{
    NSDate *_syncStartDate;
    NSTimer *_longRunningSyncTimer;
    IMTimer *_nightlySyncTimer;
    long long _initialSyncAttempts;
    CKFetchRecordZonesOperation *_cloudKitMetricsFetchOp;
    NSDate *_lastLogDumpDate;
}

@property (strong, nonatomic) CKFetchRecordZonesOperation *cloudKitMetricsFetchOp; // @synthesize cloudKitMetricsFetchOp=_cloudKitMetricsFetchOp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long initialSyncAttempts; // @synthesize initialSyncAttempts=_initialSyncAttempts;
@property (strong, nonatomic) NSDate *lastLogDumpDate; // @synthesize lastLogDumpDate=_lastLogDumpDate;
@property (strong, nonatomic) NSTimer *longRunningSyncTimer; // @synthesize longRunningSyncTimer=_longRunningSyncTimer;
@property (strong, nonatomic) IMTimer *nightlySyncTimer; // @synthesize nightlySyncTimer=_nightlySyncTimer;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSDate *syncStartDate; // @synthesize syncStartDate=_syncStartDate;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (double)_IMAHDAgentFallbackIntervalInSeconds;
- (void)_accountDidChange:(id)arg1;
- (BOOL)_accountHasMultipleDevices;
- (BOOL)_anyStartingFlagIsEnabled;
- (void)_autoBugCaptureWithSubType:(id)arg1 debugDescription:(id)arg2;
- (void)_beginExitStateCleanupIfNeededWithActivity:(id)arg1 useNonHSA2ManateeDatabase:(BOOL)arg2;
- (void)_beginPeriodicSyncWithActivity:(id)arg1 shouldCheckDeviceConditions:(BOOL)arg2 attemptCount:(unsigned long long)arg3;
- (void)_beginPeriodicSyncWithActivity:(id)arg1 shouldCheckDeviceConditions:(BOOL)arg2 attemptCount:(unsigned long long)arg3 useStingRay:(BOOL)arg4 syncChatsCompletionBlock:(CDUnknownBlockType)arg5;
- (void)_callSyncWithCompletion:(CDUnknownBlockType)arg1 activity:(id)arg2;
- (BOOL)_chatSyncedRecently;
- (unsigned long long)_currentHour;
- (id)_dateForNext24LogDumpAtHour:(long long)arg1 timeNow:(id)arg2 dumpNow:(BOOL *)arg3;
- (void)_dealWithEncryptionKeyLostErrorIfApplicable:(id)arg1;
- (void)_didRecieveSyncStateChangeNotification:(id)arg1;
- (void)_didUpdatePersistentValueNotification:(id)arg1;
- (void)_dispatchNotification:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)_errorIndicatesDeviceNotGoodForSync:(id)arg1;
- (BOOL)_hasDumpedLogsInPastHour;
- (void)_ifCloudKitAbleToSyncIsFullSync:(BOOL)arg1 callBlock:(CDUnknownBlockType)arg2 activity:(id)arg3;
- (void)_instantStateChange:(id)arg1;
- (BOOL)_isSyncingToStingRay;
- (void)_kickOffNightlyPeriodicSyncIfApplicable;
- (void)_logIMAutomaticHistorySyncDidNotOccurMetricsUnderFirstUnlock:(BOOL)arg1 isSyncing:(BOOL)arg2 deviceConditionsAllowSync:(BOOL)arg3 syncNotCompletedRecently:(BOOL)arg4;
- (long long)_manualSyncAttemptCount;
- (unsigned long long)_maxTimeToDeferInSeconds;
- (double)_minimumChatComingOnlineSyncInterval;
- (void)_nightlySyncTimerFired;
- (void)_noteDownSyncStartedWithIsPeriodicSync:(BOOL)arg1;
- (void)_noteMeticsForSyncEndedWithSuccces:(BOOL)arg1;
- (void)_noteMetricsForSyncStartFrom:(id)arg1 fullSync:(BOOL)arg2;
- (void)_noteSyncEnded;
- (void)_nukeCKData;
- (long long)_periodicSyncAttemptCount;
- (void)_postMetricsToCloudKitOnAutomaticHistoryDeletionAgentLaunch;
- (void)_postSyncStateChanged;
- (id)_recordManager;
- (void)_reloadChatRegistryOnMainThread;
- (BOOL)_serverDoesNotAllowComingBackOnlineChatSync;
- (BOOL)_serverDoesNotSingleDeviceLimitation;
- (void)_setSyncStateFlagsWithAccountStatus:(long long)arg1;
- (id)_sharedDatabaseManager;
- (void)_syncChatsWithActivity:(id)arg1;
- (void)_syncDeletesIfCloudKitEnabled;
- (BOOL)_syncNotCompletedRecently;
- (BOOL)_withinAnHourOfLogDumpHour;
- (void)_writeDownSyncDateUseManatee:(BOOL)arg1;
- (id)attachmentSyncController;
- (void)beginChatSyncPeriodic:(BOOL)arg1 activity:(id)arg2;
- (void)beginComingBackOnlineSync;
- (void)beginFullSyncPeriodic:(BOOL)arg1 shouldCheckDeviceConditions:(BOOL)arg2 activity:(id)arg3;
- (void)beginInitialSync;
- (void)beginInitialSyncAttemptCount:(unsigned long long)arg1;
- (id)chatSyncController;
- (void)clearCKRelatedDefaults;
- (void)clearLocalCloudKitSyncState;
- (void)collectLogsIfNeeded;
- (void)dealloc;
- (void)eventStreamHandler:(id)arg1 didReceiveEventWithName:(id)arg2 userInfo:(id)arg3;
- (id)exitManager;
- (void)handleAKUserInfoChangedNotification:(id)arg1;
- (id)init;
- (BOOL)isSyncing;
- (void)kickOffCloudKitSyncIfNeededOnImagentLaunch;
- (id)messageSyncController;
- (void)performInitialSyncOnFirstConnectionOfImagentIfNeeded;
- (void)performMetricForSuccessfulSync;
- (id)rampManager;
- (void)recordMetricIsCloudKitEnabled;
- (void)registerForAccountNotifications;
- (void)registerForSyncStateChanges;
- (void)resetAllSyncStates;
- (void)setCloudKitSyncState:(BOOL)arg1;
- (void)setStartingInitialSync:(BOOL)arg1;
- (void)setStartingPeriodicSync:(BOOL)arg1;
- (void)syncChatsWithMessageContext:(id)arg1;
- (long long)syncControllerRecordType;
- (void)syncDeletesToCloudKitWithCompletion:(CDUnknownBlockType)arg1;
- (id)syncStateDebuggingInfo:(id)arg1;
- (void)updateAllCachedSyncStateFlags;
- (void)updateCloudKitSyncingState;
- (void)updateStartingFlags;
- (void)updateSyncStateFlags;

@end

