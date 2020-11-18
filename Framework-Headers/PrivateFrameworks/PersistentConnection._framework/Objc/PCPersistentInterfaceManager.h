//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersistentConnection/PCInterfaceMonitorDelegate-Protocol.h>

@class NSMapTable, NSRecursiveLock, NSString, NSTimer, PCSimpleTimer;

@interface PCPersistentInterfaceManager : NSObject <PCInterfaceMonitorDelegate>
{
    NSRecursiveLock *_lock;
    NSMapTable *_delegatesAndQueues;
    struct __CFSet *_WiFiAutoAssociationDelegates;
    PCSimpleTimer *_WiFiAutoAssociationDisableTimer;
    struct __CFSet *_wakeOnWiFiDelegates;
    PCSimpleTimer *_wakeOnWiFiDisableTimer;
    void *_ctServerConnection;
    void *_interfaceAssertion;
    int _WWANContextIdentifier;
    NSString *_WWANInterfaceName;
    BOOL _isWWANInterfaceUp;
    NSTimer *_inCallWWANOverrideTimer;
    BOOL _isWWANInterfaceDataActive;
    BOOL _ctIsWWANInHomeCountry;
    BOOL _hasWWANStatusIndicator;
    BOOL _isPowerStateDetectionSupported;
    BOOL _isWWANInterfaceInProlongedHighPowerState;
    BOOL _isWWANInterfaceActivationPermitted;
    double _lastActivationTime;
    int _wwanRSSI;
    BOOL _isInCall;
    BOOL _isWakeOnWiFiSupported;
    BOOL _isWakeOnWiFiEnabled;
    BOOL _shouldOverrideOnCallBehavior;
}

@property (readonly) NSString *WWANInterfaceName;
@property (readonly) BOOL areAllNetworkInterfacesDisabled;
@property (readonly, strong, nonatomic) NSString *currentLinkQualityString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL doesWWANInterfaceExist;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isInCall;
@property (readonly) BOOL isInternetReachable;
@property (readonly) BOOL isInternetReachableViaWiFi;
@property (readonly) BOOL isPowerStateDetectionSupported;
@property (readonly) BOOL isWWANBetterThanWiFi;
@property (readonly) BOOL isWWANInHomeCountry;
@property (readonly) BOOL isWWANInterfaceActivationPermitted;
@property (readonly) BOOL isWWANInterfaceInProlongedHighPowerState;
@property (readonly) BOOL isWWANInterfaceUp;
@property (readonly) BOOL isWakeOnWiFiSupported;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void)_adjustWakeOnWiFi;
- (void)_adjustWakeOnWiFiLocked;
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (BOOL)_allowBindingToWWAN;
- (void)_clearInCallWWANOverrideTimerLocked;
- (void)_createCTConnection;
- (void)_ctConnectionAttempt;
- (void)_inCallWWANOverrideTimerFired;
- (BOOL)_isInternetReachableLocked;
- (BOOL)_isWWANInHomeCountryLocked;
- (BOOL)_isWiFiUsable;
- (void)_mainThreadCTConnectionAttempt;
- (void)_scheduleCalloutsForSelector:(SEL)arg1;
- (void)_updateCTIsWWANInHomeCountry:(BOOL)arg1 isWWANInterfaceDataActive:(BOOL)arg2;
- (void)_updateWWANInterfaceAssertions;
- (void)_updateWWANInterfaceAssertionsLocked;
- (void)_updateWWANInterfaceUpState;
- (void)_updateWWANInterfaceUpStateLocked;
- (BOOL)_wantsWWANInterfaceAssertion;
- (BOOL)_wantsWakeOnWiFiEnabled;
- (BOOL)_wifiIsPoorLinkQuality;
- (BOOL)_wwanIsPoorLinkQuality;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)bindCFStream:(struct __CFReadStream *)arg1 toWWANInterface:(BOOL)arg2;
- (void)bindCFStreamToWWANInterface:(struct __CFReadStream *)arg1;
- (void)cutWiFiManagerDeviceAttached:(id)arg1;
- (void)dealloc;
- (void)enableWakeOnWiFi:(BOOL)arg1 forDelegate:(id)arg2;
- (void)enableWiFiAutoAssociation:(BOOL)arg1 forDelegate:(id)arg2;
- (void)handleMachMessage:(void *)arg1;
- (id)init;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)urlConnectionBoundToWWANInterface:(BOOL)arg1 withRequest:(id)arg2 delegate:(id)arg3 usesCache:(BOOL)arg4 maxContentLength:(long long)arg5 startImmediately:(BOOL)arg6 connectionProperties:(id)arg7;
- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6;

@end

