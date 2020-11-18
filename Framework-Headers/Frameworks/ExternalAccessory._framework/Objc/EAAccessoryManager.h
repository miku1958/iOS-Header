//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ExternalAccessory/EABluetoothAccessoryPickerDelegate-Protocol.h>

@class EABluetoothAccessoryPicker, NSArray, NSMutableArray, NSRecursiveLock, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface EAAccessoryManager : NSObject <EABluetoothAccessoryPickerDelegate>
{
    NSMutableArray *_connectedAccessories;
    NSMutableArray *_sequesteredAccessories;
    NSString *_selectedBluetoothAddress;
    CDUnknownBlockType _pickerCompletion;
    BOOL _sequesterNewAccessories;
    NSTimer *_pickerTimer;
    NSRecursiveLock *_pickerLock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    EABluetoothAccessoryPicker *_picker;
}

@property (readonly, nonatomic) NSArray *connectedAccessories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)accessibilityStartListening;
+ (void)accessibilityStopListening;
+ (id)accessoryDictionaryForLogging:(id)arg1;
+ (BOOL)isLoggingEnabled;
+ (void)registerCapabilities:(unsigned int)arg1;
+ (id)sharedAccessoryManager;
- (void)_OOBBTPairingCompletionStatusReceived:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_cameraInfoUpdated:(id)arg1;
- (void)_checkForConnectedAccessories:(BOOL)arg1 backgroundTaskIdentifier:(unsigned long long)arg2;
- (void)_cleanUpForTaskSuspendWithTaskIdentifier:(unsigned long long)arg1;
- (id)_connectedAccessories;
- (void)_ephemerisURLAvailable:(id)arg1;
- (void)_externalAccessoryConnected:(id)arg1;
- (void)_externalAccessoryConnectedNotificationHandler:(id)arg1;
- (void)_externalAccessoryDisconnected:(id)arg1;
- (void)_externalAccessoryReconnected:(id)arg1;
- (void)_externalAccessoryUpdated:(id)arg1;
- (id)_findExtraAccessoriesContainedOnlyInEA:(id)arg1;
- (id)_findExtraAccessoriesContainedOnlyIniAP:(id)arg1;
- (void)_gpsTimeRequested:(id)arg1;
- (void)_handleAccessoryNotificationTimeout:(id)arg1;
- (void)_iapServerDied:(id)arg1;
- (id)_initFromSingletonCreationMethod;
- (void)_integrateSequesteredAccessories;
- (void)_locationNmeaDataAvailable:(id)arg1;
- (void)_locationPointDataAvailable:(id)arg1;
- (void)_nmeaFilteringSupportChanged:(id)arg1;
- (void)_notifyObserversThatAccessoryDisconnectedWithUserInfo:(id)arg1;
- (void)_pointOfInterestStatusReceived:(id)arg1;
- (void)_removeAlliAPAccessoriesFromArray:(id)arg1 notifyClients:(BOOL)arg2;
- (void)_timeSyncInfoUpdated:(id)arg1;
- (void)_vehicleDataUpdated:(id)arg1;
- (void)accessibilityAction:(id)arg1;
- (void)accessibilityContextChange:(id)arg1;
- (void)accessibilityItemPropertyRequest:(id)arg1;
- (void)accessibilitySystemPropertyChange:(id)arg1;
- (void)accessibilitySystemPropertyRequest:(id)arg1;
- (void)accessoryClosedEASession:(id)arg1;
- (BOOL)appDeclaresProtocol:(id)arg1;
- (BOOL)areLocationAccessoriesEnabled;
- (id)authCertForLegacyConnectionID:(unsigned int)arg1;
- (id)authCertSerialNumberForLegacyConnectionID:(unsigned int)arg1;
- (id)availableAccessories;
- (void)closeEASessionForEASessionUUID:(id)arg1;
- (void)closeInputStreamForEASessionUUID:(id)arg1;
- (void)createEASessionForProtocol:(id)arg1 accessoryUUID:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (id)currentVehicleInformation:(id)arg1;
- (void)dealloc;
- (BOOL)destinationInformation:(id)arg1 forAccessoryUUID:(id)arg2;
- (void)devicePicker:(id)arg1 didSelectAddress:(id)arg2 errorCode:(long long)arg3;
- (void)disconnectIPAccessory:(id)arg1;
- (void)endSession:(unsigned int)arg1 forConnectionID:(unsigned int)arg2;
- (void)handleIncomingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (id)init;
- (void)initiateConnectionToIPAccessory:(id)arg1;
- (void)openCompleteForSession:(unsigned int)arg1 connectionID:(unsigned int)arg2;
- (void)openSessionFromAccessoryToApp:(id)arg1;
- (void)openSessionFromAppToAccessory:(id)arg1;
- (void)pointOfInterestSelection:(id)arg1;
- (BOOL)processIDIsUsingAccessory:(struct __CFString *)arg1;
- (void)registerForLocalNotifications;
- (void)requestIAPAccessoryWiFiCredentials:(id)arg1;
- (void)resumeEASessionData:(id)arg1;
- (void)saveEASession:(id)arg1 forEASessionUUID:(id)arg2;
- (void)sendDeviceIdentifierNotification:(id)arg1 usbIdentifier:(id)arg2 forUUID:(id)arg3;
- (void)sendGPRMCDataStatus:(BOOL)arg1 ValueV:(BOOL)arg2 ValueX:(BOOL)arg3 forUUID:(id)arg4;
- (void)sendNMEAFilterList:(id)arg1 forUUID:(id)arg2;
- (void)sendOutgoingEAData:(id)arg1 forSessionUUID:(id)arg2;
- (void)setAreLocationAccessoriesEnabled:(BOOL)arg1;
- (void)setShouldAllowCppRuntime:(BOOL)arg1;
- (void)setShouldAllowInternalProtocols:(BOOL)arg1;
- (BOOL)shouldAllowCppRuntime;
- (BOOL)shouldAllowInternalProtocols;
- (void)showBluetoothAccessoryPickerWithNameFilter:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startIPAccessoryDiscovery;
- (void)startLocationForConnectedAccessories;
- (void)stopIPAccessoryDiscovery;
- (void)stopLocationForConnectedAccessories;
- (void)unregisterForLocalNotifications;
- (void)wakeAccessoryWithToken:(id)arg1;

@end

