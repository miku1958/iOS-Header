//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;
@protocol OS_dispatch_queue;

@interface CUSystemMonitor : NSObject
{
    BOOL _activateCalled;
    BOOL _activateCompleted;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateCalled2;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _bluetoothAddressChangedHandler;
    CDUnknownBlockType _callChangedHandler;
    CDUnknownBlockType _consoleUserChangedHandler;
    CDUnknownBlockType _familyUpdatedHandler;
    CDUnknownBlockType _manateeChangedHandler;
    CDUnknownBlockType _meDeviceChangedHandler;
    CDUnknownBlockType _netFlagsChangedHandler;
    CDUnknownBlockType _netInterfacesChangedHandler;
    CDUnknownBlockType _primaryIPChangedHandler;
    CDUnknownBlockType _primaryNetworkChangedHandler;
    CDUnknownBlockType _powerUnlimitedChangedHandler;
    CDUnknownBlockType _primaryAppleIDChangedHandler;
    CDUnknownBlockType _rotatingIdentifierChangedHandler;
    CDUnknownBlockType _screenLockedChangedHandler;
    CDUnknownBlockType _screenOnChangedHandler;
    CDUnknownBlockType _screenSaverChangedHandler;
    CDUnknownBlockType _systemLockStateChangedHandler;
    CDUnknownBlockType _systemNameChangedHandler;
    CDUnknownBlockType _firstUnlockHandler;
    CDUnknownBlockType _wifiStateChangedHandler;
}

@property (readonly) int activeCallCount;
@property (readonly) CDStruct_83abfce7 bluetoothAddress48;
@property (copy) CDUnknownBlockType bluetoothAddressChangedHandler; // @synthesize bluetoothAddressChangedHandler=_bluetoothAddressChangedHandler;
@property (readonly, copy) NSData *bluetoothAddressData;
@property (copy) CDUnknownBlockType callChangedHandler; // @synthesize callChangedHandler=_callChangedHandler;
@property (readonly) int connectedCallCount;
@property (copy, nonatomic) CDUnknownBlockType consoleUserChangedHandler; // @synthesize consoleUserChangedHandler=_consoleUserChangedHandler;
@property (readonly) unsigned int consoleUserID;
@property (readonly, copy) NSString *consoleUserName;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly, copy) NSArray *familyMembers;
@property (copy) CDUnknownBlockType familyUpdatedHandler; // @synthesize familyUpdatedHandler=_familyUpdatedHandler;
@property (copy, nonatomic) CDUnknownBlockType firstUnlockHandler; // @synthesize firstUnlockHandler=_firstUnlockHandler;
@property (readonly, nonatomic) BOOL firstUnlocked;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (readonly) BOOL manateeAvailable;
@property (copy, nonatomic) CDUnknownBlockType manateeChangedHandler; // @synthesize manateeChangedHandler=_manateeChangedHandler;
@property (copy) CDUnknownBlockType meDeviceChangedHandler; // @synthesize meDeviceChangedHandler=_meDeviceChangedHandler;
@property (readonly, copy) NSString *meDeviceFMFDeviceID;
@property (readonly, copy) NSString *meDeviceIDSDeviceID;
@property (readonly) BOOL meDeviceIsMe;
@property (readonly, copy) NSString *meDeviceName;
@property (readonly) BOOL meDeviceValid;
@property (readonly) unsigned int netFlags;
@property (copy) CDUnknownBlockType netFlagsChangedHandler; // @synthesize netFlagsChangedHandler=_netFlagsChangedHandler;
@property (copy) CDUnknownBlockType netInterfacesChangedHandler; // @synthesize netInterfacesChangedHandler=_netInterfacesChangedHandler;
@property (readonly) BOOL powerUnlimited;
@property (copy) CDUnknownBlockType powerUnlimitedChangedHandler; // @synthesize powerUnlimitedChangedHandler=_powerUnlimitedChangedHandler;
@property (readonly, copy) NSString *primaryAppleID;
@property (copy) CDUnknownBlockType primaryAppleIDChangedHandler; // @synthesize primaryAppleIDChangedHandler=_primaryAppleIDChangedHandler;
@property (readonly) BOOL primaryAppleIDIsHSA2;
@property (copy) CDUnknownBlockType primaryIPChangedHandler; // @synthesize primaryIPChangedHandler=_primaryIPChangedHandler;
@property (readonly, nonatomic) CDUnion_fab80606 primaryIPv4Addr;
@property (readonly, nonatomic) CDUnion_fab80606 primaryIPv6Addr;
@property (copy, nonatomic) CDUnknownBlockType primaryNetworkChangedHandler; // @synthesize primaryNetworkChangedHandler=_primaryNetworkChangedHandler;
@property (readonly, copy, nonatomic) NSString *primaryNetworkSignature;
@property (readonly) CDStruct_83abfce7 rotatingIdentifier48;
@property (copy) CDUnknownBlockType rotatingIdentifierChangedHandler; // @synthesize rotatingIdentifierChangedHandler=_rotatingIdentifierChangedHandler;
@property (readonly, copy) NSData *rotatingIdentifierData;
@property (readonly) BOOL screenLocked;
@property (copy) CDUnknownBlockType screenLockedChangedHandler; // @synthesize screenLockedChangedHandler=_screenLockedChangedHandler;
@property (readonly) BOOL screenOn;
@property (copy) CDUnknownBlockType screenOnChangedHandler; // @synthesize screenOnChangedHandler=_screenOnChangedHandler;
@property (readonly) BOOL screenSaverActive;
@property (copy) CDUnknownBlockType screenSaverChangedHandler; // @synthesize screenSaverChangedHandler=_screenSaverChangedHandler;
@property (readonly, nonatomic) int systemLockState;
@property (copy, nonatomic) CDUnknownBlockType systemLockStateChangedHandler; // @synthesize systemLockStateChangedHandler=_systemLockStateChangedHandler;
@property (readonly, copy) NSString *systemName;
@property (copy) CDUnknownBlockType systemNameChangedHandler; // @synthesize systemNameChangedHandler=_systemNameChangedHandler;
@property (readonly, nonatomic) unsigned int wifiFlags;
@property (readonly, nonatomic) int wifiState;
@property (copy, nonatomic) CDUnknownBlockType wifiStateChangedHandler; // @synthesize wifiStateChangedHandler=_wifiStateChangedHandler;

- (void).cxx_destruct;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)invalidate;

@end
