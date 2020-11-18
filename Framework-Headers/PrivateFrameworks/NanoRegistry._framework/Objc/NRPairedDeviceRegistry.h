//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NRRegistryClient.h>

#import <NanoRegistry/NRPairedDeviceRegistryXPCFrameworkDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NRPairedDeviceRegistry : NRRegistryClient <NRPairedDeviceRegistryXPCFrameworkDelegate>
{
    BOOL _disconnected;
    unsigned short _lastCompatibilityState;
    NSMutableDictionary *_legacyDevices;
    NSObject<OS_dispatch_queue> *_pairedDeviceRegistryDeviceListQueue;
    NSObject<OS_dispatch_queue> *_pairedRegistryGetDevicesQueue;
    unsigned long long _lastStatus;
    NSMutableArray *_waitingForRegistryUpdateBlocks;
    unsigned long long _callCount;
}

@property (readonly, nonatomic) unsigned long long status;

+ (CDUnknownBlockType)activeDeviceSelectorBlock;
+ (CDUnknownBlockType)activePairedDeviceSelectorBlock;
+ (CDUnknownBlockType)pairedDevicesSelectorBlock;
+ (Class)proxyClass;
+ (id)sharedInstance;
+ (BOOL)shouldBoostProcess;
- (void).cxx_destruct;
- (id)_;
- (id)_deviceIDAtSwitchIndex:(unsigned int)arg1 date:(id *)arg2;
- (void)_getActiveDeviceAssertionsWithInlineBlock:(CDUnknownBlockType)arg1;
- (id)_getChangeHistory;
- (id)_getClientInfo;
- (id)_getLocalDeviceCollection;
- (id)_getSecureProperties:(id)arg1;
- (unsigned long long)_getStatusWithCollection:(id)arg1;
- (void)_invalidateActiveDeviceAssertionWithIdentifier:(id)arg1;
- (void)_pingActiveGizmoWithPriority:(long long)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_submitAlbertPairingReport;
- (void)_submitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned int)arg3;
- (void)abortPairing;
- (void)abortPairingWithReason:(id)arg1;
- (void)altAccountPairingStorePathPairingID:(CDUnknownBlockType)arg1;
- (id)applyDiff:(id)arg1;
- (void)beginDiscovery;
- (void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)beginMigrationWithDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)blockAndQueryVersions;
- (void)checkIfFlaggedForRecoveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearRecoveryFlagWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearWatchNeedsGraduation:(CDUnknownBlockType)arg1;
- (void)companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(CDUnknownBlockType)arg4;
- (void)companionPasscodePairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (unsigned short)compatibilityState;
- (void)completeRTCPairingMetricForMetricID:(id)arg1 withSuccess:(CDUnknownBlockType)arg2;
- (id)deviceForBTDeviceID:(id)arg1;
- (id)deviceForBluetoothID:(id)arg1;
- (id)deviceForIDSDevice:(id)arg1;
- (id)deviceForNRDevice:(id)arg1 fromIDSDevices:(id)arg2;
- (id)deviceForPairingID:(id)arg1;
- (id)deviceIDForIDSDevice:(id)arg1;
- (id)deviceIDForNRDevice:(id)arg1;
- (id)devicesFromMigrationConsentRequestData:(id)arg1;
- (void)endDiscovery;
- (void)enterCompatibilityState:(unsigned short)arg1 forDevice:(id)arg2;
- (void)fakePairedSyncIsCompleteWithCompletion:(CDUnknownBlockType)arg1;
- (id)getActivePairedDevice;
- (id)getAllDevices;
- (id)getAllDevicesWithArchivedAltAccountDevicesMatching:(CDUnknownBlockType)arg1;
- (id)getAllDevicesWithArchivedDevices;
- (id)getAllDevicesWithArchivedDevicesMatching:(CDUnknownBlockType)arg1;
- (id)getDevices;
- (id)getDevicesMatching:(CDUnknownBlockType)arg1;
- (void)getDevicesWithBlock:(CDUnknownBlockType)arg1;
- (void)getMigrationPairingCharacteristicReadDataWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getPairedDevices;
- (void)getSwitchEventsFromIndex:(unsigned int)arg1 inlineCallback:(CDUnknownBlockType)arg2;
- (void)gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (BOOL)hasCompletedInitialSyncForPairingID:(id)arg1;
- (id)init;
- (id)initWithBoost:(BOOL)arg1;
- (id)initWithBoost:(BOOL)arg1 disconnected:(BOOL)arg2;
- (BOOL)isAssertionActive:(id)arg1;
- (BOOL)isKeychainEnabled;
- (BOOL)isPaired;
- (void)isPhoneReadyToMigrateDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)isWatchSetupPushActive;
- (void)keepPhoneUnlockedInternalTestSPI:(CDUnknownBlockType)arg1;
- (id)lastMigrationRequestPhoneName;
- (unsigned long long)lastSyncSwitchIndex;
- (void)logCallFrequency;
- (long long)maxPairedDeviceCount;
- (long long)maxPairingCompatibilityVersion;
- (long long)maxTinkerPairedDeviceCount;
- (id)migrationConsentRequestData;
- (unsigned long long)migrationCountForPairingID:(id)arg1;
- (long long)minPairingCompatibilityVersion;
- (long long)minQuickSwitchCompatibilityVersion;
- (id)nonActiveDeviceForBTDeviceID:(id)arg1;
- (id)nonActiveDeviceForBluetoothID:(id)arg1;
- (id)nonActiveDeviceForIDSDevice:(id)arg1;
- (void)notifyActivationCompleted:(id)arg1 withSuccess:(BOOL)arg2;
- (void)notifyPairingShouldContinue;
- (void)notifyPasscode:(id)arg1 forDevice:(id)arg2;
- (void)overrideSignalStrengthLimit:(long long)arg1;
- (void)pairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)pairedDeviceCountIsLessThanMaxPairedDevices;
- (BOOL)pairedDeviceCountIsLessThanMaxTinkerPairedDevices;
- (BOOL)pairedDeviceSupportQuickSwitch;
- (void)pairingClientDidEnterPhase:(id)arg1;
- (void)pairingClientSetAltAccountName:(id)arg1 altDSID:(id)arg2 forDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pairingClientSetAltAccountName:(id)arg1 forDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pairingClientSetPairingParentName:(id)arg1 pairingParentAltDSID:(id)arg2 forDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)pairingCompatibilityVersion;
- (id)pairingID;
- (id)pairingStorePath;
- (void)pairingStorePathPairingID:(CDUnknownBlockType)arg1;
- (void)putMigrationChallengeCharacteristicWriteData:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resumePairingClientCrashMonitoring;
- (void)retriggerUnpairInfoDialog;
- (void)sendDevicesUpdatedNotification;
- (id)serverRequestReporterWithType:(id)arg1;
- (void)setActivePairedDevice:(id)arg1 isMagicSwitch:(BOOL)arg2 operationHasCompleted:(CDUnknownBlockType)arg3;
- (void)setActivePairedDevice:(id)arg1 operationHasCompleted:(CDUnknownBlockType)arg2;
- (void)setActivePairedDevice:(id)arg1 withActiveDeviceAssertionHandler:(CDUnknownBlockType)arg2;
- (void)setMigrationConsented:(BOOL)arg1 forDevice:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setMigrationConsented:(BOOL)arg1 forDeviceID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setWatchNeedsGraduation:(CDUnknownBlockType)arg1;
- (void)startWatchSetupPush;
- (void)stopWatchSetupPush;
- (BOOL)supportsPairedDevice;
- (BOOL)supportsWatch;
- (void)suspendPairingClientCrashMonitoring;
- (unsigned int)switchIndex;
- (void)switchToSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)threadIsBlockedWaitingOn_nanoregistryd_syncGrabLegacyRegistryWithBlock:(CDUnknownBlockType)arg1;
- (void)unpairWithDevice:(id)arg1 shouldObliterate:(BOOL)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)unpairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)unpairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)userIsCheckingForUpdate;
- (id)waitForActiveDevice;
- (id)waitForActiveOrAltAccountDevice;
- (id)waitForActivePairedDevice;
- (id)waitForActivePairedOrAltAccountDevice;
- (void)waitForAltAccountPairingStorePathPairingID:(CDUnknownBlockType)arg1;
- (void)waitForPairingStorePathPairingID:(CDUnknownBlockType)arg1;
- (void)waitForWatchPairingExtendedMetadataForAdvertisedName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)watchNeedsGraduation;
- (void)xpcDeviceID:(id)arg1 needsPasscode:(id)arg2;
- (void)xpcHasNewOOBKey:(id)arg1;

@end
