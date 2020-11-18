//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BluetoothManager : NSObject
{
    struct BTLocalDeviceImpl *_localDevice;
    struct BTSessionImpl *_session;
    int _available;
    int _state;
    BOOL _airplaneMode;
    BOOL _audioConnected;
    BOOL _scanningEnabled;
    BOOL _scanningInProgress;
    unsigned int _scanningServiceMask;
    struct BTDiscoveryAgentImpl *_discoveryAgent;
    struct BTPairingAgentImpl *_pairingAgent;
    struct BTAccessoryManagerImpl *_accessoryManager;
    NSMutableDictionary *_btAddrDict;
    NSMutableDictionary *_btDeviceDict;
    BOOL _blacklistEnabled;
}

@property (nonatomic) BOOL blacklistEnabled; // @synthesize blacklistEnabled=_blacklistEnabled;

+ (int)lastInitError;
+ (void)setSharedInstanceQueue:(id)arg1;
+ (id)sharedInstance;
- (struct BTAccessoryManagerImpl *)_accessoryManager;
- (void)_advertisingChanged;
- (BOOL)_attach;
- (void)_cleanup:(BOOL)arg1;
- (void)_connectabilityChanged;
- (void)_connectedStatusChanged;
- (void)_discoveryStateChanged;
- (void)_pairedStatusChanged;
- (void)_postNotification:(id)arg1;
- (void)_postNotificationWithArray:(id)arg1;
- (void)_powerChanged;
- (void)_removeDevice:(id)arg1;
- (void)_restartScan;
- (void)_scanForServices:(unsigned int)arg1 withMode:(int)arg2;
- (void)_setScanState:(int)arg1;
- (BOOL)_setup:(struct BTSessionImpl *)arg1;
- (void)_updateAirplaneModeStatus;
- (void)_updateBlacklistMode;
- (void)_updateBluetoothState;
- (void)acceptSSP:(long long)arg1 forDevice:(id)arg2;
- (id)addDeviceIfNeeded:(struct BTDeviceImpl *)arg1;
- (BOOL)audioConnected;
- (BOOL)available;
- (int)bluetoothState;
- (void)bluetoothStateAction;
- (void)bluetoothStateActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelPairing;
- (void)connectDevice:(id)arg1;
- (void)connectDevice:(id)arg1 withServices:(unsigned int)arg2;
- (BOOL)connectable;
- (BOOL)connected;
- (id)connectedDeviceNamesThatMayBeBlacklisted;
- (id)connectedDevices;
- (id)connectingDevices;
- (void)dealloc;
- (struct BTDeviceImpl *)deviceFromIdentifier:(id)arg1;
- (BOOL)devicePairingEnabled;
- (BOOL)deviceScanningEnabled;
- (BOOL)deviceScanningInProgress;
- (void)disconnectDevice:(id)arg1;
- (void)disconnectDevicePhysicalLink:(id)arg1;
- (void)enableTestMode;
- (BOOL)enabled;
- (void)endVoiceCommand:(id)arg1;
- (id)init;
- (BOOL)isAnyoneAdvertising;
- (BOOL)isAnyoneScanning;
- (BOOL)isDiscoverable;
- (BOOL)isServiceSupported:(unsigned int)arg1;
- (id)localAddress;
- (int)maskLocalDeviceEvents:(unsigned int)arg1;
- (id)pairedDevices;
- (void)postNotification:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3;
- (int)powerState;
- (BOOL)powered;
- (void)resetDeviceScanning;
- (void)scanForConnectableDevices:(unsigned int)arg1;
- (void)scanForServices:(unsigned int)arg1;
- (void)setAudioConnected:(BOOL)arg1;
- (void)setConnectable:(BOOL)arg1;
- (void)setDevicePairingEnabled:(BOOL)arg1;
- (void)setDeviceScanningEnabled:(BOOL)arg1;
- (void)setDiscoverable:(BOOL)arg1;
- (BOOL)setEnabled:(BOOL)arg1;
- (void)setPincode:(id)arg1 forDevice:(id)arg2;
- (BOOL)setPowered:(BOOL)arg1;
- (void)showPowerPrompt;
- (void)startVoiceCommand:(id)arg1;
- (void)unpairDevice:(id)arg1;
- (BOOL)wasDeviceDiscovered:(id)arg1;

@end

