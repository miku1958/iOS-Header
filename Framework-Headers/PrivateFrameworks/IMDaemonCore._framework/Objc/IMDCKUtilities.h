//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/IMDCKSyncStateDelegate-Protocol.h>

@class FTDeviceSupport, IDSServerBag, IMDCKSyncState, IMDefaults, IMLockdownManager, NSString;

@interface IMDCKUtilities : NSObject <IMDCKSyncStateDelegate>
{
    BOOL _didKeyRollPendingCheck;
    BOOL _useDeprecatedApi;
    IMDCKSyncState *_syncState;
    IMLockdownManager *_lockdownManager;
    IDSServerBag *_serverBag;
    FTDeviceSupport *_deviceSupport;
    IMDefaults *_imDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDeviceCharging) BOOL deviceCharging;
@property (readonly, nonatomic, getter=isDeviceOnWifi) BOOL deviceOnWifi;
@property (strong, nonatomic) FTDeviceSupport *deviceSupport; // @synthesize deviceSupport=_deviceSupport;
@property (nonatomic) BOOL didKeyRollPendingCheck; // @synthesize didKeyRollPendingCheck=_didKeyRollPendingCheck;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) IMDefaults *imDefaults; // @synthesize imDefaults=_imDefaults;
@property (readonly, nonatomic) BOOL isInCloudKitDemoMode;
@property (readonly, nonatomic) BOOL isSyncingPaused;
@property (readonly, nonatomic, getter=isKeyRollPending) BOOL keyRollPending;
@property (strong, nonatomic) IMLockdownManager *lockdownManager; // @synthesize lockdownManager=_lockdownManager;
@property (strong, nonatomic) IDSServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property (readonly) Class superclass;
@property (readonly, nonatomic) IMDCKSyncState *syncState; // @synthesize syncState=_syncState;
@property (nonatomic) BOOL useDeprecatedApi; // @synthesize useDeprecatedApi=_useDeprecatedApi;

+ (id)im_AKSecurityLevelKey;
+ (id)logHandle;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)CKPartialError:(id)arg1 hasErrorCode:(id)arg2;
- (BOOL)CKPartialError:(id)arg1 onlyHasErrorCodes:(id)arg2;
- (BOOL)CKPartialErrorOnlyHasQuotaExceededError:(id)arg1;
- (BOOL)_accountInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_accountManager;
- (BOOL)_accountNeedsRepairOverride;
- (id)_accountStore;
- (BOOL)_allowDestructiveMOCFeaturesBasedOnDSID;
- (void)_askToTapToRadarWithString:(id)arg1 internalOnly:(BOOL)arg2;
- (id)_authenticationController;
- (BOOL)_checkEligibilityWithAccountInfo:(id)arg1;
- (void)_checkEligibilityWithLoggedInAccountWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_checkIfEnabledByServerBagOrDefault:(id)arg1;
- (id)_createAccountError:(id)arg1;
- (BOOL)_deviceActive;
- (id)_errorsFromPartialError:(id)arg1;
- (void)_fetchPrimaryAccountWithCompletion:(CDUnknownBlockType)arg1;
- (id)_getKeepMessagesValue;
- (BOOL)_isCKErrorPartialFailure:(id)arg1;
- (BOOL)_isInExitState;
- (BOOL)_isSyncingPausedOverride;
- (long long)_mininimumServerBagClientValue;
- (unsigned long long)_mocEnabledStateFromAccountStatus:(long long)arg1;
- (BOOL)_mocFeatureEnabled;
- (id)_personIdFromAccount:(id)arg1;
- (id)_primaryiCloudAccount;
- (id)_primaryiCloudAccountAltDSID;
- (unsigned long long)_primaryiCloudAccountSecurityLevel;
- (void)_resetKeepMessagesSettingandBroadcastToAllDevices;
- (BOOL)_serverAllowsCacheDelete;
- (BOOL)_serverAllowsRemovalFromBackUp;
- (BOOL)_serverAllowsSync;
- (void)_setiCloudSettingsSwitchEnabled:(BOOL)arg1;
- (BOOL)_shouldDisplayPopUpForResettingKeepMessages;
- (BOOL)_shouldiCloudSwitchBeEnabled;
- (void)_showCKLogNotificationWithCompletion:(CDUnknownBlockType)arg1;
- (id)_truthContainer;
- (id)_truthDatabase;
- (BOOL)acceptableErrorCodeWhileDeleting:(id)arg1;
- (id)accountDSID:(id)arg1;
- (BOOL)accountIsVerifiedForMOCAndSafeForCacheDelete;
- (id)accountWithDSID:(id)arg1;
- (void)broadcastCloudKitState;
- (void)broadcastCloudKitStateAfterClearingErrors;
- (BOOL)cacheDeleteEnabled;
- (void)checkCloudkitEnabledStatusAndToggleiCloudSwitchIfNeeded;
- (void)checkiCloudQuota:(CDUnknownBlockType)arg1;
- (id)ckStatisticCalculations;
- (BOOL)cloudKitSyncDownloadAssetsOnly;
- (BOOL)cloudKitSyncingEnabled;
- (id)deviceActiveString;
- (id)deviceConditions;
- (BOOL)deviceConditionsAllowPeriodicSync;
- (void)disableAllDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)downgradingFromHSA2AndDisablingMOC;
- (id)dsid;
- (void)eligibleForTruthZoneWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)enableAttachmentMetricCollection;
- (void)enableMOCIfNeeded;
- (BOOL)errorIndicateDeviceDoesNotHaveKeysToSync:(id)arg1;
- (BOOL)errorIndicatesChatZoneCreationFailed:(id)arg1;
- (BOOL)errorIndicatesDeviceConditionsDontAllowSync:(id)arg1;
- (BOOL)errorIndicatesIdentityWasLost:(id)arg1;
- (BOOL)errorIndicatesQuotaExceeded:(id)arg1;
- (BOOL)errorIndicatesUserDeletedZone:(id)arg1;
- (BOOL)errorIndicatesZoneNotCreated:(id)arg1;
- (void)evalToggleiCloudSettingsSwitch;
- (id)extractRecordIDsDeletedFromCKPartialError:(id)arg1;
- (id)extractServerRecordFromCKServerErrorRecordChanged:(id)arg1;
- (void)fetchCloudKitAccountStatusAndCheckForAccountNeedsRepairWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchCloudKitAccountStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchLocalAccountSecurityLevel:(CDUnknownBlockType)arg1;
- (void)fetchMOCEnabledStateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchSecurityLevelAndUpdateMiCSwitchEligibility;
- (void)fetchSecurityLevelAndUpdateMiCSwitchEligibilityIfNeededOnImagentLaunch;
- (void)fetchSecurityLevelForAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchiCloudAccountPersonID:(CDUnknownBlockType)arg1;
- (BOOL)iCloudAccountMatchesiMessageAccount;
- (id)init;
- (id)initWithServerBag:(id)arg1 lockDownmanager:(id)arg2 deviceSupport:(id)arg3 imDefaults:(id)arg4;
- (void)isFirstSyncWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)isRecoverableCloudKitError:(id)arg1 withRetryInterval:(id *)arg2;
- (void)keyRollPendingStateDidChange;
- (id)lastDeviceBackUpDate;
- (id)logCollectorAddress;
- (void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3;
- (void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 isInitialSync:(BOOL)arg4 requirePreviousPrompt:(BOOL)arg5 willSendBlock:(CDUnknownBlockType)arg6;
- (void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 requirePreviousPrompt:(BOOL)arg4 willSendBlock:(CDUnknownBlockType)arg5;
- (BOOL)logDumpIsNecessaryAfterSync;
- (id)logHandle;
- (unsigned long long)messageDatabaseSize;
- (id)metricForPCSReportManateeStatusWithReason:(id)arg1;
- (id)newfilteredArrayRemovingCKRecordDupes:(id)arg1;
- (id)newfilteredArrayRemovingCKRecordIDDupes:(id)arg1;
- (void)noteAllSyncedItemsPriorToSync;
- (long long)overrideNumberOfChatsToFetch;
- (long long)overrideNumberOfChatsToWrite;
- (void)primaryAccountHasiCloudBackupEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (id)recordNameForMessageWithGUID:(id)arg1 usingSalt:(id)arg2;
- (BOOL)removeFromBackUpAllowed;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 sendToHandle:(id)arg4;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 sendToHandle:(id)arg4 reasonString:(id)arg5;
- (void)resetLastSyncDate;
- (void)setCloudKitSyncingEnabled:(BOOL)arg1;
- (BOOL)shouldCollectDailyLogDump;
- (BOOL)shouldCollectDailyLogDumpForRestoreFailures;
- (BOOL)shouldForceArchivedMessagesSync;
- (BOOL)shouldLogDumpOnCloudKitError;
- (BOOL)shouldPresentTTROnCloudKitError;
- (BOOL)shouldRepairAccountWithDeviceAccountSecurityLevel:(unsigned long long)arg1 serverAccountStatus:(long long)arg2;
- (BOOL)shouldSyncToSRContainer;
- (BOOL)shouldUseDevContainer;
- (void)submitPCSReportManateeStatuMetricWithPrefix:(id)arg1 andReason:(id)arg2;
- (id)syncFailureMetricString:(id)arg1 isRecoverable:(BOOL)arg2 error:(id)arg3;
- (void)syncStateWillUpdate:(id)arg1;

@end

