//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CXCallObserverDelegate-Protocol.h>
#import <CoreUtils/FMFSessionDelegate-Protocol.h>

@class CUBluetoothClient, CUNetInterfaceMonitor, CUSystemMonitor, CUWiFiManager, CXCallObserver, NSArray, NSData, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CUSystemMonitorImp : NSObject <FMFSessionDelegate, CXCallObserverDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct NSMutableSet *_monitors;
    CDStruct_83abfce7 _bluetoothAddress48;
    NSData *_bluetoothAddressData;
    CUBluetoothClient *_bluetoothClient;
    CXCallObserver *_callObserver;
    int _activeCallCount;
    BOOL _familyFailed;
    NSArray *_familyMembers;
    BOOL _familyObserving;
    CUSystemMonitor *_familyPrimaryIPMonitor;
    int _familyUpdatedToken;
    int _fmfDevicesChangedToken;
    int _meDeviceChangedToken;
    int _meDeviceRetryToken;
    NSString *_meDeviceFMFDeviceID;
    NSString *_meDeviceIDSDeviceID;
    NSString *_meDeviceName;
    BOOL _meDeviceValid;
    CUNetInterfaceMonitor *_netInterfaceMonitor;
    unsigned int _netFlags;
    CDUnion_fab80606 _primaryIPv4Addr;
    CDUnion_fab80606 _primaryIPv6Addr;
    NSString *_primaryNetworkSignature;
    int _powerSourceToken;
    BOOL _powerUnlimited;
    BOOL _primaryAppleIDIsHSA2;
    int _primaryAppleIDNotifyToken;
    BOOL _primaryAppleIDObserving;
    CDStruct_83abfce7 _rotatingIdentifier48;
    NSData *_rotatingIdentifierData;
    CUSystemMonitor *_rotatingIdentifierBluetoothAddressMonitor;
    NSObject<OS_dispatch_source> *_rotatingIdentifierTimer;
    BOOL _screenLocked;
    int _screenLockedToken;
    BOOL _screenOn;
    int _screenBlankedToken;
    BOOL _screenSaverActive;
    CUWiFiManager *_wifiManager;
    unsigned int _wifiFlags;
    int _wifiState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_activeCallCountUnached;
- (void)_bluetoothAddressMonitorStart;
- (void)_bluetoothAddressMonitorStop;
- (void)_callMonitorStart;
- (void)_callMonitorStop;
- (void)_familyGetMembers:(BOOL)arg1;
- (void)_familyMonitorStart;
- (void)_familyMonitorStop;
- (void)_familyNetworkChanged;
- (void)_familyUpdated:(id)arg1;
- (void)_firstUnlockMonitorStart;
- (void)_firstUnlockMonitorStop;
- (BOOL)_hasMonitorPassingTest:(CDUnknownBlockType)arg1;
- (void)_invokeBlock:(CDUnknownBlockType)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)_meDeviceCheckCompletion:(id)arg1 error:(id)arg2 firstCheck:(BOOL)arg3;
- (void)_meDeviceCheckStart:(BOOL)arg1;
- (void)_meDeviceMonitorStart;
- (void)_meDeviceMonitorStop;
- (void)_netInterfaceMonitorStart;
- (void)_netInterfaceMonitorStop;
- (void)_powerUnlimitedMonitorStart;
- (void)_powerUnlimitedMonitorStop;
- (void)_primaryAppleIDChanged:(id)arg1;
- (void)_primaryAppleIDMonitorStart;
- (void)_primaryAppleIDMonitorStop;
- (void)_rotatingIdentifierBTUpdated;
- (void)_rotatingIdentifierMonitorStart;
- (void)_rotatingIdentifierMonitorStop;
- (void)_rotatingIdentifierTimerFired;
- (void)_rotatingIdentifierTimerReset:(BOOL)arg1;
- (void)_screenChanged:(BOOL)arg1;
- (void)_screenLockedChanged;
- (void)_screenLockedMonitorStart;
- (void)_screenLockedMonitorStop;
- (void)_screenOnMonitorStart;
- (void)_screenOnMonitorStop;
- (void)_screenSaverMonitorStart;
- (void)_screenSaverMonitorStop;
- (void)_update;
- (void)_wifiMonitorStart;
- (void)_wifiMonitorStateChanged:(BOOL)arg1;
- (void)_wifiMonitorStop;
- (void)addMonitor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (id)init;
- (void)removeMonitor:(id)arg1;
- (void)updateWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

