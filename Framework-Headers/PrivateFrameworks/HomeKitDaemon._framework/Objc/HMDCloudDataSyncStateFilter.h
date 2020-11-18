//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDMessageFilter.h>

#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDHomeManager, HMFMessageDispatcher, HMFTimer, NSDate, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMDCloudDataSyncStateFilter : HMDMessageFilter <HMFMessageReceiver, HMFTimerDelegate>
{
    BOOL _decryptionFailed;
    BOOL _deviceSetupRunning;
    BOOL _keychainSyncEnabled;
    BOOL _keychainSyncRequiredPopShown;
    BOOL _iCloudSwitchRequiredPopShown;
    BOOL _iCloudAccountActive;
    BOOL _cloudDataSyncCompleted;
    BOOL _serverTokenAvailable;
    BOOL _iCloudSwitchStateEnabled;
    BOOL _localDataDecryptionFailed;
    BOOL _networkConnectivityAvailable;
    BOOL _resetConfigDisplayTimeHasElapsed;
    BOOL _keychainSyncPeerAvailable;
    BOOL _cloudDataSyncPeerAvailable;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSUUID *_uuid;
    HMFMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_source> *_popupTimer;
    NSObject<OS_dispatch_source> *_iCloudSwitchPopupTimer;
    long long _totalHomes;
    HMFTimer *_cloudDataSyncInProgressTimer;
    double _remainingDataSyncPeriod;
    NSDate *_dataSyncTimerStartTimestamp;
    HMFTimer *_resetConfigDisplayTimer;
    double _remainingResetConfigDisplayPeriod;
    NSDate *_resetConfigDisplayTimerStartTimestamp;
    HMDHomeManager *_homeManager;
}

@property (nonatomic) BOOL cloudDataSyncCompleted; // @synthesize cloudDataSyncCompleted=_cloudDataSyncCompleted;
@property (strong, nonatomic) HMFTimer *cloudDataSyncInProgressTimer; // @synthesize cloudDataSyncInProgressTimer=_cloudDataSyncInProgressTimer;
@property (nonatomic, getter=isCloudDataSyncPeerAvailable) BOOL cloudDataSyncPeerAvailable; // @synthesize cloudDataSyncPeerAvailable=_cloudDataSyncPeerAvailable;
@property (strong, nonatomic) NSDate *dataSyncTimerStartTimestamp; // @synthesize dataSyncTimerStartTimestamp=_dataSyncTimerStartTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL decryptionFailed; // @synthesize decryptionFailed=_decryptionFailed;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL deviceSetupRunning; // @synthesize deviceSetupRunning=_deviceSetupRunning;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (nonatomic) BOOL iCloudAccountActive; // @synthesize iCloudAccountActive=_iCloudAccountActive;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *iCloudSwitchPopupTimer; // @synthesize iCloudSwitchPopupTimer=_iCloudSwitchPopupTimer;
@property (nonatomic) BOOL iCloudSwitchRequiredPopShown; // @synthesize iCloudSwitchRequiredPopShown=_iCloudSwitchRequiredPopShown;
@property (nonatomic) BOOL iCloudSwitchStateEnabled; // @synthesize iCloudSwitchStateEnabled=_iCloudSwitchStateEnabled;
@property (nonatomic) BOOL keychainSyncEnabled; // @synthesize keychainSyncEnabled=_keychainSyncEnabled;
@property (nonatomic, getter=isKeychainSyncPeerAvailable) BOOL keychainSyncPeerAvailable; // @synthesize keychainSyncPeerAvailable=_keychainSyncPeerAvailable;
@property (nonatomic) BOOL keychainSyncRequiredPopShown; // @synthesize keychainSyncRequiredPopShown=_keychainSyncRequiredPopShown;
@property (nonatomic) BOOL localDataDecryptionFailed; // @synthesize localDataDecryptionFailed=_localDataDecryptionFailed;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (nonatomic) BOOL networkConnectivityAvailable; // @synthesize networkConnectivityAvailable=_networkConnectivityAvailable;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *popupTimer; // @synthesize popupTimer=_popupTimer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (nonatomic) double remainingDataSyncPeriod; // @synthesize remainingDataSyncPeriod=_remainingDataSyncPeriod;
@property (nonatomic) double remainingResetConfigDisplayPeriod; // @synthesize remainingResetConfigDisplayPeriod=_remainingResetConfigDisplayPeriod;
@property (nonatomic) BOOL resetConfigDisplayTimeHasElapsed; // @synthesize resetConfigDisplayTimeHasElapsed=_resetConfigDisplayTimeHasElapsed;
@property (strong, nonatomic) HMFTimer *resetConfigDisplayTimer; // @synthesize resetConfigDisplayTimer=_resetConfigDisplayTimer;
@property (strong, nonatomic) NSDate *resetConfigDisplayTimerStartTimestamp; // @synthesize resetConfigDisplayTimerStartTimestamp=_resetConfigDisplayTimerStartTimestamp;
@property (nonatomic) BOOL serverTokenAvailable; // @synthesize serverTokenAvailable=_serverTokenAvailable;
@property (readonly) Class superclass;
@property (nonatomic) long long totalHomes; // @synthesize totalHomes=_totalHomes;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (BOOL)isWhitelistedRemoteTransportMessage:(id)arg1;
- (void).cxx_destruct;
- (void)__handleDeviceSetupRunningUpdated;
- (void)_clearResetConfigDisplayTimer;
- (BOOL)_cloudSyncinProgressCheck:(id)arg1 supressPopup:(BOOL)arg2 sendCanceledError:(BOOL *)arg3 dataSyncState:(unsigned long long *)arg4;
- (void)_handleAccountStatusChanged:(id)arg1;
- (void)_postNotificationForDataSyncInProgress:(BOOL)arg1 dataSyncState:(unsigned long long)arg2 forcePost:(BOOL)arg3;
- (void)_registerForMessages;
- (void)_resetCloudDataSyncTimer;
- (void)_stallCloudDataSyncTimer;
- (void)_stallResetConfigDisplayTimer;
- (void)_startCloudDataSyncTimer;
- (void)_startDataConfigResetTimers;
- (void)_startPopupTimer;
- (void)_startResetConfigDisplayTimer;
- (void)_startiCloudSwitchPopupTimer;
- (void)_stopCloudDataSyncTimer;
- (void)_stopDataConfigResetTimers;
- (void)_stopPopupTimer;
- (void)_stopResetConfigDisplayTimer;
- (void)_stopiCloudSwitchPopupTimer;
- (void)_updateCloudDataSyncState:(BOOL)arg1;
- (void)_updateCurrentAccount:(id)arg1;
- (void)_updateKeychainSyncEnabled:(BOOL)arg1;
- (BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id *)arg3;
- (BOOL)dataSyncInProgressWithState:(unsigned long long *)arg1 withMessage:(id)arg2;
- (void)dealloc;
- (void)handleKeychainSyncStateChangedNotification:(id)arg1;
- (id)initWithName:(id)arg1 homeManager:(id)arg2 messageDispatcher:(id)arg3 serverTokenAvailable:(BOOL)arg4 homeDataHasBeenDecrypted:(BOOL)arg5 homeManagerServerTokenAvailable:(BOOL)arg6 localDataDecryptionFailed:(BOOL)arg7 totalHomes:(long long)arg8 currentAccount:(id)arg9;
- (BOOL)isLocalDataDecryptionFailed;
- (BOOL)isiCloudSwitchEnabled;
- (void)kickResetConfigDisplayTimer;
- (void)resetConfiguration;
- (BOOL)shouldCloudSyncData;
- (void)startDataConfigResetTimers;
- (void)timerDidFire:(id)arg1;
- (void)updateCloudDataSyncState:(BOOL)arg1;
- (void)updateCurrentAccount:(id)arg1;
- (void)updateLocalDataDecryptionFailed:(BOOL)arg1;
- (void)updateNetworkConnectivity:(BOOL)arg1;
- (void)updateServerTokenAvailable:(BOOL)arg1;
- (void)updateTotalHomes:(long long)arg1;
- (void)updateWithoutDataSynCheckServerTokenAvailable:(BOOL)arg1;
- (void)updateiCloudSwitchState:(BOOL)arg1;

@end

