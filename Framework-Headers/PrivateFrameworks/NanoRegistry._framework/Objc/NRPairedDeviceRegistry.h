//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRFrameworkDeviceDelegate-Protocol.h>
#import <NanoRegistry/NRMutableStateParentDelegate-Protocol.h>
#import <NanoRegistry/NRPairedDeviceRegistryXPCFrameworkDelegate-Protocol.h>
#import <NanoRegistry/NSXPCConnectionDelegate-Protocol.h>

@class NRMutableDeviceCollection, NSMutableArray, NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NRPairedDeviceRegistry : NSObject <NSXPCConnectionDelegate, NRFrameworkDeviceDelegate, NRMutableStateParentDelegate, NRPairedDeviceRegistryXPCFrameworkDelegate>
{
    BOOL _shouldRestartDaemon;
    BOOL _xpcConnectionInvalidated;
    BOOL _hasSomeEntitlements;
    BOOL _hasSecurePropertyEntitlement;
    BOOL _isDeviceCollectionDiffRequested;
    BOOL _areSecurePropertiesRequested;
    BOOL _initialLastCompatibilityStateHasBeenSent;
    BOOL _initialStatusHasBeenSent;
    BOOL _isInitialized;
    BOOL _secureDataIsAvailable;
    BOOL _needToFetchSecureProperties;
    unsigned short _lastCompatibilityStateSent;
    int _devicesUpdateCounterNotifyToken;
    int _securePropertiesUnlockedNotifyToken;
    int _demoModeNotifyToken;
    int _idleNotifyToken;
    NSXPCConnection *_xpcConnection;
    NSMutableDictionary *_mutableDeviceDictionary;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_shouldRestartDaemonQueue;
    NSMutableArray *_finishedPairingSemaphores;
    long long _pairingCompatibilityVersion;
    long long _maxPairingCompatibilityVersion;
    long long _minPairingCompatibilityVersion;
    unsigned long long _devicesUpdateCounter;
    NRMutableDeviceCollection *_deviceCollection;
    NSMutableArray *_deviceCollectionUpdateBlocks;
    NSMutableArray *_securePropertiesUpdateBlocks;
    NSMutableArray *_waitForDeviceCollectionBlocks;
    unsigned long long _lastStatusSent;
    NSObject<OS_dispatch_queue> *_pairingOrSwitchCompleteQueue;
}

@property (nonatomic) BOOL areSecurePropertiesRequested; // @synthesize areSecurePropertiesRequested=_areSecurePropertiesRequested;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int demoModeNotifyToken; // @synthesize demoModeNotifyToken=_demoModeNotifyToken;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NRMutableDeviceCollection *deviceCollection; // @synthesize deviceCollection=_deviceCollection;
@property (strong, nonatomic) NSMutableArray *deviceCollectionUpdateBlocks; // @synthesize deviceCollectionUpdateBlocks=_deviceCollectionUpdateBlocks;
@property (nonatomic) unsigned long long devicesUpdateCounter; // @synthesize devicesUpdateCounter=_devicesUpdateCounter;
@property (nonatomic) int devicesUpdateCounterNotifyToken; // @synthesize devicesUpdateCounterNotifyToken=_devicesUpdateCounterNotifyToken;
@property (strong, nonatomic) NSMutableArray *finishedPairingSemaphores; // @synthesize finishedPairingSemaphores=_finishedPairingSemaphores;
@property (nonatomic) BOOL hasSecurePropertyEntitlement; // @synthesize hasSecurePropertyEntitlement=_hasSecurePropertyEntitlement;
@property (nonatomic) BOOL hasSomeEntitlements; // @synthesize hasSomeEntitlements=_hasSomeEntitlements;
@property (readonly) unsigned long long hash;
@property (nonatomic) int idleNotifyToken; // @synthesize idleNotifyToken=_idleNotifyToken;
@property (nonatomic) BOOL initialLastCompatibilityStateHasBeenSent; // @synthesize initialLastCompatibilityStateHasBeenSent=_initialLastCompatibilityStateHasBeenSent;
@property (nonatomic) BOOL initialStatusHasBeenSent; // @synthesize initialStatusHasBeenSent=_initialStatusHasBeenSent;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property (nonatomic) BOOL isDeviceCollectionDiffRequested; // @synthesize isDeviceCollectionDiffRequested=_isDeviceCollectionDiffRequested;
@property (nonatomic) BOOL isInitialized; // @synthesize isInitialized=_isInitialized;
@property (nonatomic) unsigned short lastCompatibilityStateSent; // @synthesize lastCompatibilityStateSent=_lastCompatibilityStateSent;
@property (nonatomic) unsigned long long lastStatusSent; // @synthesize lastStatusSent=_lastStatusSent;
@property (nonatomic) long long maxPairingCompatibilityVersion; // @synthesize maxPairingCompatibilityVersion=_maxPairingCompatibilityVersion;
@property (nonatomic) long long minPairingCompatibilityVersion; // @synthesize minPairingCompatibilityVersion=_minPairingCompatibilityVersion;
@property (strong, nonatomic) NSMutableDictionary *mutableDeviceDictionary; // @synthesize mutableDeviceDictionary=_mutableDeviceDictionary;
@property (nonatomic) BOOL needToFetchSecureProperties; // @synthesize needToFetchSecureProperties=_needToFetchSecureProperties;
@property (nonatomic) long long pairingCompatibilityVersion; // @synthesize pairingCompatibilityVersion=_pairingCompatibilityVersion;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *pairingOrSwitchCompleteQueue; // @synthesize pairingOrSwitchCompleteQueue=_pairingOrSwitchCompleteQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL secureDataIsAvailable; // @synthesize secureDataIsAvailable=_secureDataIsAvailable;
@property (nonatomic) int securePropertiesUnlockedNotifyToken; // @synthesize securePropertiesUnlockedNotifyToken=_securePropertiesUnlockedNotifyToken;
@property (strong, nonatomic) NSMutableArray *securePropertiesUpdateBlocks; // @synthesize securePropertiesUpdateBlocks=_securePropertiesUpdateBlocks;
@property (nonatomic) BOOL shouldRestartDaemon; // @synthesize shouldRestartDaemon=_shouldRestartDaemon;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *shouldRestartDaemonQueue; // @synthesize shouldRestartDaemonQueue=_shouldRestartDaemonQueue;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableArray *waitForDeviceCollectionBlocks; // @synthesize waitForDeviceCollectionBlocks=_waitForDeviceCollectionBlocks;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property (nonatomic) BOOL xpcConnectionInvalidated; // @synthesize xpcConnectionInvalidated=_xpcConnectionInvalidated;

+ (CDUnknownBlockType)activeDeviceSelectorBlock;
+ (CDUnknownBlockType)activePairedDeviceSelectorBlock;
+ (CDUnknownBlockType)pairedDevicesSelectorBlock;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_addRemoveRecoveryStepBackup:(BOOL)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepDeleteAccounts:(BOOL)arg1;
- (void)_addRemoveRecoveryStepDeletePairingStore:(BOOL)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepDisableDaemons:(BOOL)arg1;
- (void)_addRemoveRecoveryStepICloudDeletePaymentCards:(BOOL)arg1;
- (void)_addRemoveRecoveryStepIDSFinalize:(BOOL)arg1;
- (void)_addRemoveRecoveryStepIDSFinalizeQS:(BOOL)arg1 withPairedBTDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepIDSUnpair:(BOOL)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepIDSUnpairStart:(BOOL)arg1;
- (void)_addRemoveRecoveryStepIDSUnpairStartQS:(BOOL)arg1 withPairedBTDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepObliterate:(BOOL)arg1 withStatePath:(id)arg2;
- (void)_addRemoveRecoveryStepRemoteUnpair:(BOOL)arg1 withAdvertisedName:(id)arg2 andPairedDeviceID:(id)arg3;
- (void)_addRemoveRecoveryStepResetNVRAM:(BOOL)arg1;
- (void)_addRemoveRecoveryStepStockholmReset:(BOOL)arg1;
- (void)_addRemoveRecoveryStepUnpairBluetooth:(BOOL)arg1 withPairingDeviceID:(id)arg2;
- (id)_deviceIDAtSwitchIndex:(unsigned int)arg1 date:(id *)arg2;
- (id)_findActivePairedDevice;
- (void)_getActiveDeviceAssertionsWithInlineBlock:(CDUnknownBlockType)arg1;
- (id)_getChangeHistory;
- (id)_getClientInfo;
- (id)_getLocalDeviceCollection;
- (id)_getSecureProperties:(id)arg1;
- (void)_getSwitchEventsFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 inlineCallback:(CDUnknownBlockType)arg3;
- (void)_invalidateActiveDeviceAssertionWithIdentifier:(id)arg1;
- (BOOL)_migrate;
- (void)_pairingStorePathPairingID:(CDUnknownBlockType)arg1;
- (void)_pingActiveGizmoWithPriority:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_privateDaemonConnection;
- (id)_privateDaemonProxyWithErrorString:(id)arg1;
- (void)_qsRecoveryMigrationWithPairedBTDeviceID:(id)arg1;
- (id)_recoveryDescription;
- (void)_setObliterationEnabled:(BOOL)arg1;
- (void)_submitAlbertPairingReport;
- (void)_submitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned int)arg3;
- (BOOL)_supportsWatch;
- (id)_synchronousPrivateDaemonProxyWithErrorString:(id)arg1;
- (void)_triggerRecovery;
- (id)_xpcInitializeConnection;
- (void)_xpcInterruptionHandler;
- (void)_xpcInvalidationHandler;
- (void)abortPairing;
- (void)abortPairingWithReason:(id)arg1;
- (void)beginDiscovery;
- (id)blockAndQueryVersions;
- (void)blockUntilDeviceCollectionIsInitialized;
- (void)checkStatusAndCompatibilityState;
- (void)child:(id)arg1 didApplyDiff:(id)arg2;
- (void)companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)companionPasscodePairWithDevice:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (unsigned short)compatibilityState;
- (void)createDevicesFromMutableDevicesAndPropertyStore:(id)arg1;
- (void)dealloc;
- (id)deviceForBTDeviceID:(id)arg1;
- (id)deviceForIDSDevice:(id)arg1;
- (id)deviceForNRDevice:(id)arg1 fromIDSDevices:(id)arg2;
- (id)deviceForPairingID:(id)arg1;
- (id)deviceIDForIDSDevice:(id)arg1;
- (id)deviceIDForNRDevice:(id)arg1;
- (void)endDiscovery;
- (void)enterCompatibilityState:(unsigned short)arg1 forDevice:(id)arg2;
- (void)fireAllDeviceCollectionBlocksWithStatus:(BOOL)arg1;
- (void)fireAllInitialDeviceCollectionBlocksWith:(BOOL)arg1;
- (void)fireDeviceCollectionBlocksUpUntilIndex:(unsigned long long)arg1;
- (id)getActivePairedDevice;
- (id)getAllDevices;
- (id)getDevices;
- (id)getDevicesMatching:(CDUnknownBlockType)arg1;
- (void)getDevicesWithBlock:(CDUnknownBlockType)arg1;
- (id)getPairedDevices;
- (void)getSwitchEventsFromIndex:(unsigned int)arg1 inlineCallback:(CDUnknownBlockType)arg2;
- (void)gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (id)init;
- (void)initNotifyTokens;
- (void)initializeWithShouldMakeEmptyDeviceCollection:(BOOL)arg1;
- (BOOL)isDaemonIdle;
- (BOOL)isPaired;
- (unsigned int)majorVersion;
- (long long)maxPairedDeviceCount;
- (long long)minQuickSwitchCompatibilityVersion;
- (unsigned int)minorVersion;
- (void)notifyActivationCompleted:(id)arg1 withSuccess:(BOOL)arg2;
- (void)notifyPairingShouldContinue;
- (void)notifyPasscode:(id)arg1 forDevice:(id)arg2;
- (void)overrideSignalStrengthLimit:(long long)arg1;
- (void)pairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)pairedDeviceCountIsLessThanMaxPairedDevices;
- (BOOL)pairedDeviceSupportQuickSwitch;
- (void)pairingClientDidEnterPhase:(id)arg1;
- (id)pairingID;
- (id)pairingStorePath;
- (void)pairingStorePathPairingID:(CDUnknownBlockType)arg1;
- (void)parseDiffForNRDeviceUpdatesAndPairUnpair:(id)arg1 hasSecurePropertyEntitlement:(BOOL)arg2 shouldBeQuiet:(BOOL)arg3;
- (void)postNotification:(id)arg1 forDeviceID:(id)arg2 withUserInfo:(id)arg3;
- (unsigned long long)readNotifyToken:(int)arg1;
- (int)registerNotifyTokenWithName:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)requestDeviceCollectionDiffWithForce:(BOOL)arg1;
- (void)requestSecureProperties;
- (void)resumePairingClientCrashMonitoring;
- (void)resumePairingOrSwitchCompleteQueue;
- (id)retrieveSecurePropertiesWithIDs:(id)arg1;
- (void)retriggerUnpairInfoDialog;
- (void)sendCompatibilityStateChangeNotification;
- (void)sendDevicesUpdatedNotification;
- (void)sendStatusChangeNotification;
- (id)serverRequestReporterWithType:(id)arg1;
- (void)setActivePairedDevice:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)setActivePairedDevice:(id)arg1 operationHasCompleted:(CDUnknownBlockType)arg2;
- (void)setActivePairedDevice:(id)arg1 withActiveDeviceAssertionHandler:(CDUnknownBlockType)arg2;
- (void)setupDeviceCollectionObserver;
- (BOOL)supportsPairedDevice;
- (void)suspendPairingClientCrashMonitoring;
- (unsigned int)switchIndex;
- (void)switchToSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)syncDevicesWithDevice:(id)arg1;
- (void)transitionToCompatibilityState:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)unpairWithDevice:(id)arg1 shouldObliterate:(BOOL)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)unpairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateDeviceCollectionWithQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateSecurePropertiesWithQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)userIsCheckingForUpdate;
- (void)waitForPairingStorePathPairingID:(CDUnknownBlockType)arg1;
- (void)xpcDeviceID:(id)arg1 needsPasscode:(id)arg2;
- (void)xpcHasNewOOBKey:(id)arg1;

@end

