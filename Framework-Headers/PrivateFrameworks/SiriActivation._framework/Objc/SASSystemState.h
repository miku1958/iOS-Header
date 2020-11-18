//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFNotifyObserver, NSHashTable, SASLockStateMonitor, SUICApplicationStateHelper;

@interface SASSystemState : NSObject
{
    BOOL _accessibilityShortcutEnabled;
    BOOL _enabled;
    int _carPlayConnectionState;
    SASLockStateMonitor *_lockStateMonitor;
    SUICApplicationStateHelper *_applicationStateHelper;
    NSHashTable *_listeners;
    AFNotifyObserver *_observerWirelessSplitter;
    AFNotifyObserver *_observerBluetoothGuestConnected;
}

@property (nonatomic) BOOL accessibilityShortcutEnabled; // @synthesize accessibilityShortcutEnabled=_accessibilityShortcutEnabled;
@property (strong, nonatomic) SUICApplicationStateHelper *applicationStateHelper; // @synthesize applicationStateHelper=_applicationStateHelper;
@property (nonatomic) int carPlayConnectionState; // @synthesize carPlayConnectionState=_carPlayConnectionState;
@property (nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property (strong, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
@property (strong, nonatomic) SASLockStateMonitor *lockStateMonitor; // @synthesize lockStateMonitor=_lockStateMonitor;
@property (strong, nonatomic) AFNotifyObserver *observerBluetoothGuestConnected; // @synthesize observerBluetoothGuestConnected=_observerBluetoothGuestConnected;
@property (strong, nonatomic) AFNotifyObserver *observerWirelessSplitter; // @synthesize observerWirelessSplitter=_observerWirelessSplitter;

+ (id)new;
+ (id)sharedSystemState;
- (void).cxx_destruct;
- (void)_updateAccessibilityState;
- (void)addStateChangeListener:(id)arg1;
- (BOOL)carDNDActive;
- (id)currentSpokenLanguageCode;
- (BOOL)deviceIsBlocked;
- (BOOL)deviceIsPasscodeLocked;
- (id)foregroundAppInfosForPresentationIdentifier:(long long)arg1;
- (BOOL)hasUnlockedSinceBoot;
- (id)init;
- (BOOL)isConnectedToCarPlay;
- (BOOL)isConnectedToTrustedCarPlay;
- (BOOL)isGuestConnected;
- (BOOL)isInActiveCall;
- (BOOL)isPad;
- (BOOL)isWirelessSplitterOn;
- (void)monitorCarSessions;
- (void)removeStateChangeListener:(id)arg1;
- (BOOL)siriIsEnabled;
- (BOOL)siriIsRestricted;
- (BOOL)siriIsSupported;
- (BOOL)smartCoverClosed;

@end
