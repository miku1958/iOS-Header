//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, NSMutableDictionary, NSRecursiveLock, NSString, VMCarrierStateRequestController, VMTranscriptionService, VVVerifier;
@protocol OS_dispatch_queue, VMTelephonySubscription;

@interface VVService : NSObject
{
    NSRecursiveLock *_lock;
    int _mailboxUsage;
    double _trashCompactionAge;
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
    BOOL _cellularNetworkAvailable;
    BOOL _SMSReady;
    BOOL _WiFiNetworkReachable;
    BOOL _WiFiNetworkSupported;
    struct os_unfair_lock_s _accessorLock;
    NSString *_isoCountryCode;
    NSMutableDictionary *_stateRequestAttemptCount;
    unsigned long long _trashedCount;
    unsigned long long _unreadCount;
    NSString *_serviceIdentifier;
    NSString *_serviceDestinationID;
    VMTranscriptionService *_transcriptionService;
    VVVerifier *_verifier;
    id<VMTelephonySubscription> _subscription;
    unsigned long long _numFailedAttemptsToSyncOverWifi;
    struct __CFString *_lastConnectionTypeUsed;
    NSDictionary *_accountDictionary;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    VMCarrierStateRequestController *_stateRequestController;
}

@property (nonatomic, getter=isSMSReady) BOOL SMSReady; // @synthesize SMSReady=_SMSReady;
@property (readonly, nonatomic, getter=isWiFiNetworkAvailable) BOOL WiFiNetworkAvailable;
@property (nonatomic, getter=isWiFiNetworkReachable) BOOL WiFiNetworkReachable; // @synthesize WiFiNetworkReachable=_WiFiNetworkReachable;
@property (nonatomic, getter=isWiFiNetworkSupported) BOOL WiFiNetworkSupported; // @synthesize WiFiNetworkSupported=_WiFiNetworkSupported;
@property (readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
@property (strong, nonatomic) NSDictionary *accountDictionary; // @synthesize accountDictionary=_accountDictionary;
@property (nonatomic, getter=isCellularNetworkAvailable) BOOL cellularNetworkAvailable; // @synthesize cellularNetworkAvailable=_cellularNetworkAvailable;
@property (readonly, copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property (nonatomic) struct __CFString *lastConnectionTypeUsed; // @synthesize lastConnectionTypeUsed=_lastConnectionTypeUsed;
@property (nonatomic) unsigned long long numFailedAttemptsToSyncOverWifi; // @synthesize numFailedAttemptsToSyncOverWifi=_numFailedAttemptsToSyncOverWifi;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // @synthesize serialDispatchQueue=_serialDispatchQueue;
@property (copy, nonatomic) NSString *serviceDestinationID; // @synthesize serviceDestinationID=_serviceDestinationID;
@property (copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *stateRequestAttemptCount; // @synthesize stateRequestAttemptCount=_stateRequestAttemptCount;
@property (readonly, nonatomic) VMCarrierStateRequestController *stateRequestController; // @synthesize stateRequestController=_stateRequestController;
@property (readonly, nonatomic) id<VMTelephonySubscription> subscription; // @synthesize subscription=_subscription;
@property (strong, nonatomic) VMTranscriptionService *transcriptionService; // @synthesize transcriptionService=_transcriptionService;
@property (nonatomic) unsigned long long trashedCount; // @synthesize trashedCount=_trashedCount;
@property (nonatomic) unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property (strong, nonatomic) VVVerifier *verifier; // @synthesize verifier=_verifier;

+ (struct __CTServerConnection *)CTServerConnection;
+ (void)_acquireAssertionsForInsomniaState:(BOOL)arg1;
+ (BOOL)_lockedSharedServiceIsSubscribed;
+ (void)_setInsomniaStateSupressed:(BOOL)arg1;
+ (void)_subscriptionStateChanged;
+ (unsigned int)_voicemailPowerAssertion;
+ (id)accountDictionaryForURL:(id)arg1;
+ (void)initialize;
+ (void)obtainInsomniaAssertion;
+ (void)releaseInsomniaAssertion;
+ (id)serviceWithIdentifier:(id)arg1 destinationID:(id)arg2 name:(id)arg3 isoCountryCode:(id)arg4 subscription:(id)arg5 stateRequestController:(id)arg6;
+ (BOOL)sharedServiceIsSubscribed;
- (void).cxx_destruct;
- (void)_attemptDelayedSynchronize;
- (void)_attemptScheduledTrashCompaction:(id)arg1;
- (void)_callStatusChanged;
- (void)_cancelAutomatedTrashCompaction;
- (void)_cancelIndicatorAction;
- (void)_carrierBundleChanged;
- (void)_dataRoamingStatusChanged;
- (void)_deliverFallbackNotification;
- (void)_enterFallbackMode;
- (void)_handleSMSCAvailable;
- (BOOL)_isOfflineDueToRoamingWithDataStatusDict:(struct __CFDictionary *)arg1;
- (void)_reactToIndicator;
- (void)_scheduleAutomatedTrashCompaction;
- (void)_scheduleFallbackActivityIfNecessary;
- (void)_setActivationError:(id)arg1;
- (void)_setOnline:(BOOL)arg1 fallbackMode:(BOOL)arg2;
- (void)_updateOnlineStatus;
- (id)accountParamsAtFilePath:(id)arg1;
- (id)activationError;
- (long long)attemptCountForStateRequest:(id)arg1;
- (void)cancelAutomatedTrashCompaction;
- (void)cancelDelayedSynchronize;
- (void)cancelNotificationFallback;
- (void)cancelPasswordRequest;
- (id)carrierParameterValueForKey:(id)arg1;
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
- (void)handleCPNetworkObserverNetworkReachableNotification:(id)arg1;
- (void)handleDataContextDeactivated;
- (void)handleNotification:(id)arg1 isMWI:(BOOL)arg2;
- (void)handlePasswordRequestCancellation;
- (void)handleVVServiceDataAvailableNotification:(id)arg1;
- (void)handleVoicemailInfoUpdate:(id)arg1;
- (BOOL)headerChangesPending;
- (void)incrementAttemptCountForStateRequest:(id)arg1;
- (id)initWithServiceIdentifier:(id)arg1 destinationID:(id)arg2 isoCountryCode:(id)arg3 subscription:(id)arg4 stateRequestController:(id)arg5;
- (BOOL)isInSync;
- (BOOL)isMessageWaiting;
- (BOOL)isOfflineDueToRoaming;
- (BOOL)isOnline;
- (BOOL)isPasswordReady;
- (BOOL)isSubscribed;
- (BOOL)isSyncInProgress;
- (void)kill;
- (BOOL)lastUsedConnectionTypeWasCellular;
- (long long)mailboxGreetingType;
- (id)mailboxName;
- (BOOL)mailboxRequiresSetup;
- (int)mailboxUsage;
- (int)maximumPasswordLength;
- (int)maximumRecordedNameDuration;
- (int)minimumPasswordLength;
- (void)moveRecordsWithIdentifiersToInbox:(id)arg1;
- (void)moveRecordsWithIdentifiersToTrash:(id)arg1;
- (Class)notificationInterpreterClass;
- (id)parametersFilePathForUUIDString:(id)arg1;
- (id)password;
- (BOOL)passwordChangeRequiresEnteringOldPassword;
- (id)passwordIgnoringSubscription:(BOOL)arg1;
- (void)performAtomicAccessorBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;
- (void)progressiveDataLengthsForRecord:(void *)arg1 expected:(unsigned int *)arg2 current:(unsigned int *)arg3;
- (id)provisionalPassword;
- (void)removeAttemptCountForStateRequest:(id)arg1;
- (void)removeServiceInformation;
- (void)reportError:(id)arg1;
- (void)reportFailedToSyncOverWifi;
- (void)reportSucessfulSync;
- (void)resetCounts;
- (void)resetDelayedSynchronizationAttemptCount;
- (BOOL)respectsMWINotifications;
- (void)retrieveDataForRecord:(void *)arg1;
- (void)retrieveGreetingForAccountUUID:(id)arg1;
- (id)retryIntervals;
- (void)scheduleAutomatedTrashCompaction;
- (void)scheduleDelayedSynchronize;
- (void)scheduleImmediateSynchronizeRetryOverCellular;
- (void)setGreetingType:(long long)arg1 data:(id)arg2 duration:(unsigned long long)arg3 forAccountUUID:(id)arg4;
- (void)setLastUsedConnectionType:(struct __CFString *)arg1;
- (void)setMailboxRequiresSetup:(BOOL)arg1;
- (void)setMailboxUsage:(int)arg1;
- (void)setMessageWaiting:(BOOL)arg1;
- (void)setOnline:(BOOL)arg1;
- (void)setPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPassword:(id)arg1;
- (void)setProvisionalPassword:(id)arg1;
- (void)setSubscribed:(BOOL)arg1;
- (BOOL)sharedSubscriptionRequiresSetup;
- (BOOL)shouldImmediatelyRetrySyncOverCellular;
- (BOOL)shouldScheduleAutoTrashOnMailboxUsageChange;
- (BOOL)shouldTrashCompactRecord:(void *)arg1;
- (BOOL)synchronizationPending;
- (void)synchronize:(BOOL)arg1;
- (BOOL)taskOfTypeExists:(long long)arg1;
- (double)trashCompactionAge;
- (void)updateCountsForChangedFlags:(unsigned int)arg1 currentRecordFlags:(unsigned int)arg2;

@end

