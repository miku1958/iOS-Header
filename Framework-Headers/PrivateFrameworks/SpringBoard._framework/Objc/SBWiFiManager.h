//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString, NWSystemPathMonitor;
@protocol OS_dispatch_source;

@interface SBWiFiManager : NSObject
{
    NSRecursiveLock *_lock;
    struct __CFRunLoop *_callbackRunLoop;
    void *_manager;
    void *_device;
    NSString *_deviceInterfaceName;
    BOOL _mainThread_devicePresent;
    void *_currentNetwork;
    void *_previousNetwork;
    BOOL _currentNetworkHasBeenSet;
    BOOL _currentNetworkIsIOSHotspot;
    BOOL _currentNetworkIsIOSHotspotHasBeenSet;
    BOOL _powered;
    BOOL _poweredHasBeenSet;
    int _mainThread_signalStrengthBars;
    int _mainThread_signalStrengthRSSI;
    BOOL _mainThread_signalStrengthHasBeenSet;
    NWSystemPathMonitor *_systemPathMonitor;
    NSObject<OS_dispatch_source> *_primaryInterfaceUpdateTimeoutSource;
    void *_primaryInterface;
    BOOL _primaryInterfaceHasBeenSet;
    BOOL _isPrimaryInterface;
    BOOL _isPrimaryInterfaceChanging;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_cachedIsAssociated;
- (void)_linkDidChange;
- (void *)_lock_manager;
- (void)_lock_setWiFiDevice:(void *)arg1;
- (void)_lock_spawnManagerCallbackThread;
- (void)_powerStateDidChange;
- (void)_primaryInterfaceChanged:(BOOL)arg1;
- (void)_runManagerCallbackThread;
- (void)_updateCurrentNetwork;
- (void)_updateDevicePresence;
- (void)_updateSignalStrength;
- (void)_updateSignalStrengthFromRawRSSI:(int)arg1 andScaledRSSI:(float)arg2;
- (void)_updateWiFiState;
- (id)_wifiInterface;
- (id)currentNetworkName;
- (id)init;
- (BOOL)isAssociated;
- (BOOL)isAssociatedToIOSHotspot;
- (BOOL)isPowered;
- (BOOL)isPrimaryInterface;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setPowered:(BOOL)arg1;
- (void)setWiFiEnabled:(BOOL)arg1;
- (int)signalStrengthBars;
- (int)signalStrengthRSSI;
- (BOOL)wiFiEnabled;
- (struct __CFRunLoop *)wifiRunLoopRef;

@end
