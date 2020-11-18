//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSError, NSRecursiveLock, NSString, VMVoicemailTranscriptionTask;

@interface VVService : NSObject
{
    NSRecursiveLock *_lock;
    long long _capabilities;
    int _mailboxUsage;
    double _trashCompactionAge;
    unsigned int _unreadCount;
    unsigned int _trashedCount;
    NSError *_passwordError;
    NSError *_activationError;
    NSString *_password;
    NSString *_passwordMailboxName;
    NSArray *_retryIntervals;
    int _retryIntervalIndex;
    id _carrierParameters;
    Class _notificationInterpreter;
    struct {
        unsigned int offline:1;
        unsigned int subscribed:1;
        unsigned int initialSetupRequired:1;
        unsigned int fakeInitialSetup:1;
        unsigned int launchedWithFakeInitialSetup:1;
        unsigned int mwiState:1;
        unsigned int notificationFallbackEnabled:1;
        unsigned int capabilitiesLoaded:1;
    } _serviceFlags;
    NSString *_serviceIdentifier;
    VMVoicemailTranscriptionTask *_transcriptionTask;
    NSString *_retranscriptionTaskIdentifier;
    unsigned long long _numFailedAttemptsToSyncOverWifi;
    struct __CFString *_lastConnectionTypeUsed;
}

@property (nonatomic) struct __CFString *lastConnectionTypeUsed; // @synthesize lastConnectionTypeUsed=_lastConnectionTypeUsed;
@property (nonatomic) unsigned long long numFailedAttemptsToSyncOverWifi; // @synthesize numFailedAttemptsToSyncOverWifi=_numFailedAttemptsToSyncOverWifi;
@property (readonly, copy, nonatomic) NSString *retranscriptionTaskIdentifier; // @synthesize retranscriptionTaskIdentifier=_retranscriptionTaskIdentifier;
@property (strong, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property (strong, nonatomic) VMVoicemailTranscriptionTask *transcriptionTask; // @synthesize transcriptionTask=_transcriptionTask;

+ (struct __CTServerConnection *)CTServerConnection;
+ (void)_acquireAssertionsForInsomniaState:(BOOL)arg1;
+ (void)_handleSIMChanged;
+ (BOOL)_lockedSharedServiceIsSubscribed;
+ (void)_setInsomniaStateSupressed:(BOOL)arg1;
+ (void)_subscriptionStateChanged;
+ (unsigned int)_voicemailPowerAssertion;
+ (BOOL)_vvmAssertionReady;
+ (BOOL)_waitingForInsomniaStateToBecomeActive;
+ (void)initialize;
+ (void)obtainInsomniaAssertion;
+ (void)releaseInsomniaAssertion;
+ (id)sharedService;
+ (BOOL)sharedServiceIsSubscribed;
- (void).cxx_destruct;
- (void)_attemptDelayedSynchronize;
- (void)_attemptScheduledTrashCompaction:(id)arg1;
- (void)_callStatusChanged;
- (void)_cancelAutomatedTrashCompaction;
- (void)_cancelIndicatorAction;
- (void)_contextActivationSucceeded:(id)arg1;
- (void)_dataAvailabilityChanged;
- (void)_dataRoamingStatusChanged;
- (void)_deliverFallbackNotification;
- (void)_enterFallbackMode;
- (void)_handleDataAvailableNotificationForDictation:(id)arg1;
- (void)_handleDataAvailableNotificationForMetricCollection:(id)arg1;
- (void)_handleIndicatorNotification:(struct __CFDictionary *)arg1;
- (void)_handleSMSCAvailable;
- (void)_handleSMSReady:(BOOL)arg1;
- (BOOL)_isOfflineDueToRoamingWithDataStatusDict:(struct __CFDictionary *)arg1;
- (void)_processTranscriptForRecord:(void *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processTranscriptForRecord:(void *)arg1 priority:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_reactToIndicator;
- (void)_reportReachabilityChange:(id)arg1;
- (void)_scheduleAutomatedTrashCompaction;
- (void)_scheduleFallbackActivityIfNecessary;
- (void)_setActivationError:(id)arg1;
- (void)_setOnline:(BOOL)arg1 fallbackMode:(BOOL)arg2;
- (void)_updateOnlineStatus;
- (id)activationError;
- (void)cancelAutomatedTrashCompaction;
- (void)cancelDelayedSynchronize;
- (void)cancelNotificationFallback;
- (void)cancelPasswordRequest;
- (void)cancelRetranscriptionTaskActivity;
- (long long)capabilities;
- (id)carrierParameterValueForKey:(id)arg1;
- (void)changePassword:(id)arg1 fromPassword:(id)arg2;
- (void)clearActivationError;
- (void)clearRemoteUIDsForDetachedMessages;
- (struct __CFString *)connectionServiceType;
- (struct __CFString *)dataConnectionServiceTypeOverride;
- (BOOL)dataForRecordPending:(void *)arg1 progressiveLoadInProgress:(BOOL *)arg2;
- (void)dealloc;
- (void)displayPasswordRequestIfNecessary;
- (BOOL)doTrashCompaction;
- (BOOL)doesClientManageTrashCompaction;
- (BOOL)greetingAvailable;
- (BOOL)greetingFetchExistsProgressiveLoadInProgress:(BOOL *)arg1;
- (void)handleNotification:(id)arg1 isMWI:(BOOL)arg2;
- (void)handlePasswordRequestCancellation;
- (BOOL)headerChangesPending;
- (id)init;
- (BOOL)isInSync;
- (BOOL)isMessageWaiting;
- (BOOL)isOfflineDueToRoaming;
- (BOOL)isOnline;
- (BOOL)isPasswordReady;
- (BOOL)isSubscribed;
- (BOOL)isSyncInProgress;
- (BOOL)isVVMAvailableOverWiFi;
- (void)kill;
- (BOOL)lastUsedConnectionTypeWasCellular;
- (long long)mailboxGreetingType;
- (id)mailboxName;
- (BOOL)mailboxRequiresSetup;
- (int)mailboxUsage;
- (int)maximumGreetingDuration;
- (int)maximumPasswordLength;
- (int)maximumRecordedNameDuration;
- (int)minimumPasswordLength;
- (void)moveRecordFromTrash:(void *)arg1;
- (void)moveRecordToTrash:(void *)arg1;
- (Class)notificationInterpreterClass;
- (id)password;
- (BOOL)passwordChangeRequiresEnteringOldPassword;
- (id)passwordIgnoringSubscription:(BOOL)arg1;
- (void)progressiveDataLengthsForRecord:(void *)arg1 expected:(unsigned int *)arg2 current:(unsigned int *)arg3;
- (id)provisionalPassword;
- (void)removeAllNonDetachedRecords;
- (void)removeAllRecords;
- (void)reportError:(id)arg1;
- (void)reportFailedToSyncOverWifi;
- (void)reportSucessfulSync;
- (void)reportTranscriptionProblemForRecord:(void *)arg1;
- (void)reportTranscriptionRatedAccurate:(BOOL)arg1 forRecord:(void *)arg2;
- (void)resetCounts;
- (void)resetDelayedSynchronizationAttemptCount;
- (BOOL)respectsMWINotifications;
- (void)retranscribeAllVoicemails;
- (void)retrieveDataForRecord:(void *)arg1;
- (void)retrieveGreeting;
- (id)retryIntervals;
- (void)scheduleAutomatedTrashCompaction;
- (void)scheduleDelayedSynchronize;
- (void)scheduleImmediateSynchronizeRetryOverCellular;
- (void)scheduleRetranscriptionTaskActivity;
- (void)setGreetingType:(long long)arg1 withData:(id)arg2 duration:(unsigned long long)arg3;
- (void)setLastUsedConnectionType:(struct __CFString *)arg1;
- (void)setMailboxRequiresSetup:(BOOL)arg1;
- (void)setMailboxUsage:(int)arg1;
- (void)setMessageWaiting:(BOOL)arg1;
- (void)setOnline:(BOOL)arg1;
- (void)setPassword:(id)arg1;
- (void)setProvisionalPassword:(id)arg1;
- (void)setSubscribed:(BOOL)arg1;
- (void)setTrashedCount:(unsigned int)arg1;
- (void)setUnreadCount:(unsigned int)arg1;
- (BOOL)sharedSubscriptionRequiresSetup;
- (BOOL)shouldImmediatelyRetrySyncOverCellular;
- (BOOL)shouldScheduleAutoTrashOnMailboxUsageChange;
- (BOOL)shouldTrashCompactRecord:(void *)arg1;
- (BOOL)synchronizationPending;
- (void)synchronize:(BOOL)arg1;
- (BOOL)taskOfTypeExists:(long long)arg1;
- (double)trashCompactionAge;
- (unsigned int)trashedCount;
- (unsigned int)unreadCount;
- (void)updateCountsForChangedFlags:(unsigned int)arg1 currentRecordFlags:(unsigned int)arg2;
- (void)updateLoggingSettings;

@end

