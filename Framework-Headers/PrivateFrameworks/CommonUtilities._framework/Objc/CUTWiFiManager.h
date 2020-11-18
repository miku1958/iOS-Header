//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CommonUtilities/CUTPowerMonitorDelegate-Protocol.h>

@class NSDictionary, NSHashTable, NSMutableSet, NSNumber, NSRecursiveLock, NSRunLoop, NSString, NSThread;

@interface CUTWiFiManager : NSObject <CUTPowerMonitorDelegate>
{
    BOOL _shouldAutoAssociateAsForeground;
    BOOL _isHostingHotSpot;
    BOOL _isWifiEnabled;
    BOOL _isWakeOnWiFiEnabled;
    BOOL _isWakeOnWiFiSupported;
    int _linkToken;
    NSMutableSet *_wiFiAutoAssociationTokens;
    NSRecursiveLock *_lock;
    NSHashTable *_delegateMap;
    NSHashTable *_wowClients;
    void *_currentNetwork;
    void *_wifiManager;
    void *_wifiDevice;
    void *_dynamicStore;
    NSDictionary *_lastWiFiPowerInfo;
    NSThread *_wifiThread;
    struct __CFRunLoopSource *_runLoopSource;
    NSRunLoop *_wifiRunLoop;
}

@property (readonly, nonatomic) BOOL autoAssociateWiFi;
@property (nonatomic) BOOL autoAssociateWiFiAsForegroundClient; // @synthesize autoAssociateWiFiAsForegroundClient=_shouldAutoAssociateAsForeground;
@property (nonatomic) void *currentNetwork; // @synthesize currentNetwork=_currentNetwork;
@property (readonly, strong, nonatomic) NSString *currentSSID;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSHashTable *delegateMap; // @synthesize delegateMap=_delegateMap;
@property (readonly, copy) NSString *description;
@property (nonatomic) void *dynamicStore; // @synthesize dynamicStore=_dynamicStore;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isHostingWiFiHotSpot; // @synthesize isHostingWiFiHotSpot=_isHostingHotSpot;
@property (readonly, nonatomic) BOOL isWiFiAssociated;
@property (readonly, nonatomic) BOOL isWiFiCaptive;
@property (readonly, nonatomic) BOOL isWiFiEnabled; // @synthesize isWiFiEnabled=_isWifiEnabled;
@property (readonly, nonatomic) BOOL isWoWEnabled; // @synthesize isWoWEnabled=_isWakeOnWiFiEnabled;
@property (readonly, nonatomic) BOOL isWoWSupported; // @synthesize isWoWSupported=_isWakeOnWiFiSupported;
@property (copy, nonatomic) NSDictionary *lastWiFiPowerInfo; // @synthesize lastWiFiPowerInfo=_lastWiFiPowerInfo;
@property (nonatomic) int linkToken; // @synthesize linkToken=_linkToken;
@property (strong, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property (nonatomic) struct __CFRunLoopSource *runLoopSource; // @synthesize runLoopSource=_runLoopSource;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableSet *wiFiAutoAssociationTokens; // @synthesize wiFiAutoAssociationTokens=_wiFiAutoAssociationTokens;
@property (readonly, strong, nonatomic) NSNumber *wiFiScaledRSSI;
@property (readonly, strong, nonatomic) NSNumber *wiFiScaledRate;
@property (readonly, strong, nonatomic) NSNumber *wiFiSignalStrength;
@property (nonatomic) void *wifiDevice; // @synthesize wifiDevice=_wifiDevice;
@property (nonatomic) void *wifiManager; // @synthesize wifiManager=_wifiManager;
@property (strong, nonatomic) NSRunLoop *wifiRunLoop; // @synthesize wifiRunLoop=_wifiRunLoop;
@property (strong, nonatomic) NSThread *wifiThread; // @synthesize wifiThread=_wifiThread;
@property (readonly, nonatomic) BOOL willTryToAutoAssociateWiFiNetwork;
@property (readonly, nonatomic) BOOL willTryToSearchForWiFiNetwork;
@property (strong, nonatomic) NSHashTable *wowClients; // @synthesize wowClients=_wowClients;

+ (id)sharedInstance;
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_adjustWoWState;
- (void)_createDynamicStore;
- (void)_createWiFiManager;
- (BOOL)_isPrimaryCellular;
- (void)_updateIsWiFiAssociatedAsync:(BOOL)arg1;
- (void)_updateIsWiFiEnabled;
- (double)_wifiMeasurementErrorForInterval:(double)arg1;
- (void)addDelegate:(id)arg1;
- (void)addWiFiAutoAssociationClientToken:(id)arg1;
- (void)addWoWClient:(id)arg1;
- (void)currentWiFiNetworkPowerUsageWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (BOOL)hasWiFiAutoAssociationClientToken:(id)arg1;
- (BOOL)hasWoWClient:(id)arg1;
- (id)init;
- (void)removeDelegate:(id)arg1;
- (void)removeWiFiAutoAssociationClientToken:(id)arg1;
- (void)removeWoWClient:(id)arg1;
- (void)showNetworkOptions;

@end

