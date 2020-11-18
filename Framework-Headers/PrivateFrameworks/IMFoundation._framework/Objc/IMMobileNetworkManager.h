//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMFoundation/IMNetworkManager.h>

@class NSMutableSet, NSNumber, NSRecursiveLock;

@interface IMMobileNetworkManager : IMNetworkManager
{
    BOOL _registered;
    BOOL _shouldBringUpDataContext;
    BOOL _dataContextActive;
    NSRecursiveLock *_lock;
    NSMutableSet *_disableFastDormancyTokens;
    NSMutableSet *_wiFiAutoAssociationTokens;
    NSMutableSet *_cellAutoAssociationTokens;
    void *__suspendDormancyAssertion;
}

@property (nonatomic) void *_suspendDormancyAssertion; // @synthesize _suspendDormancyAssertion=__suspendDormancyAssertion;
@property (readonly, nonatomic) BOOL autoAssociateCellular;
@property (readonly, nonatomic) BOOL autoAssociateWiFi;
@property (strong, nonatomic) NSMutableSet *cellularAutoAssociationTokens; // @synthesize cellularAutoAssociationTokens=_cellAutoAssociationTokens;
@property (readonly, nonatomic) BOOL dataConnectionExists;
@property (nonatomic) BOOL dataContextActive; // @synthesize dataContextActive=_dataContextActive;
@property (readonly, nonatomic) BOOL disableFastDormancy;
@property (strong, nonatomic) NSMutableSet *disableFastDormancyTokens; // @synthesize disableFastDormancyTokens=_disableFastDormancyTokens;
@property (readonly, nonatomic) BOOL has2GDataConnection;
@property (readonly, nonatomic) BOOL hasLTEDataConnection;
@property (readonly, nonatomic) BOOL inValidSIMState;
@property (readonly, nonatomic) BOOL isAirplaneModeEnabled;
@property (readonly, nonatomic) BOOL isDataConnectionActive;
@property (readonly, nonatomic) BOOL isDataSwitchEnabled;
@property (readonly, nonatomic) BOOL isHostingWiFiHotSpot;
@property (readonly, nonatomic) BOOL isSIMLocked;
@property (readonly, nonatomic) BOOL isSIMRemoved;
@property (readonly, nonatomic) BOOL isWiFiAssociated;
@property (readonly, nonatomic) BOOL isWiFiCaptive;
@property (readonly, nonatomic) BOOL isWiFiEnabled;
@property (readonly, nonatomic) BOOL isWiFiUsable;
@property (strong, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property (nonatomic) BOOL registered; // @synthesize registered=_registered;
@property (readonly, nonatomic) BOOL requiresSIMInserted;
@property (nonatomic) BOOL shouldBringUpDataContext; // @synthesize shouldBringUpDataContext=_shouldBringUpDataContext;
@property (strong, nonatomic) NSMutableSet *wiFiAutoAssociationTokens; // @synthesize wiFiAutoAssociationTokens=_wiFiAutoAssociationTokens;
@property (readonly, strong, nonatomic) NSNumber *wiFiScaledRSSI;
@property (readonly, strong, nonatomic) NSNumber *wiFiScaledRate;
@property (readonly, strong, nonatomic) NSNumber *wiFiSignalStrength;
@property (readonly, nonatomic) BOOL willTryToAutoAssociateWiFiNetwork;
@property (readonly, nonatomic) BOOL willTryToSearchForWiFiNetwork;

- (void)__adjustFastDormancyTokens;
- (void)_adjustCelluarAutoAssociation;
- (void)_adjustCellularAutoAssociation;
- (void)_adjustFastDormancyTokens;
- (void)_createCTServerConnection;
- (void)_ctServerCallBack:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (BOOL)_isDataConnectionAvailable;
- (void)_makeDataConnectionAvailable:(BOOL)arg1;
- (void)_releaseCTServerConnection;
- (void)_setFastDormancySuspended:(BOOL)arg1;
- (void)addCellularAutoAssociationClientToken:(id)arg1;
- (void)addFastDormancyDisableToken:(id)arg1;
- (void)addWiFiAutoAssociationClientToken:(id)arg1;
- (void)cutWiFiManagerLinkDidChange:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)removeCellularAutoAssociationClientToken:(id)arg1;
- (void)removeFastDormancyDisableToken:(id)arg1;
- (void)removeWiFiAutoAssociationClientToken:(id)arg1;
- (void)setDataConnectionActive:(BOOL)arg1;
- (void)showNetworkOptions;
- (void)showSIMUnlock;

@end
