//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSNumber, NSRecursiveLock;

@interface IMMobileNetworkManager : NSObject
{
    BOOL _registered;
    BOOL _shouldBringUpDataContext;
    BOOL _isDataPossible;
    BOOL _isDataContextActive;
    BOOL _isDataIndicatorNone;
    BOOL _isDataContextUsable;
    NSRecursiveLock *_lock;
    NSMutableSet *_cellAutoAssociationTokens;
}

@property (readonly, nonatomic) BOOL autoAssociateCellular;
@property (readonly, nonatomic) BOOL autoAssociateWiFi;
@property (strong, nonatomic) NSMutableSet *cellularAutoAssociationTokens; // @synthesize cellularAutoAssociationTokens=_cellAutoAssociationTokens;
@property (readonly, nonatomic) BOOL dataConnectionExists;
@property (readonly, nonatomic) BOOL disableFastDormancy;
@property (readonly, nonatomic) BOOL has2GDataConnection;
@property (readonly, nonatomic) BOOL hasLTEDataConnection;
@property (readonly, nonatomic) BOOL inValidSIMState;
@property (readonly, nonatomic) BOOL isAirplaneModeEnabled;
@property (readonly, nonatomic) BOOL isDataConnectionActive;
@property (nonatomic) BOOL isDataContextActive; // @synthesize isDataContextActive=_isDataContextActive;
@property (nonatomic) BOOL isDataContextUsable; // @synthesize isDataContextUsable=_isDataContextUsable;
@property (nonatomic) BOOL isDataIndicatorNone; // @synthesize isDataIndicatorNone=_isDataIndicatorNone;
@property (nonatomic) BOOL isDataPossible; // @synthesize isDataPossible=_isDataPossible;
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
@property (readonly, strong, nonatomic) NSNumber *wiFiScaledRSSI;
@property (readonly, strong, nonatomic) NSNumber *wiFiScaledRate;
@property (readonly, strong, nonatomic) NSNumber *wiFiSignalStrength;
@property (readonly, nonatomic) BOOL willTryToAutoAssociateWiFiNetwork;
@property (readonly, nonatomic) BOOL willTryToSearchForWiFiNetwork;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_adjustCellularAutoAssociation;
- (BOOL)_isDataConnectionAvailable;
- (BOOL)_legacy_inValidSIMState;
- (void)_lockedAdjustCellularAutoAssociation;
- (void)_makeDataConnectionAvailable:(BOOL)arg1;
- (id)_telephonyDataSIMStatus;
- (void)addCellularAutoAssociationClientToken:(id)arg1;
- (void)addFastDormancyDisableToken:(id)arg1;
- (void)addWiFiAutoAssociationClientToken:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeCellularAutoAssociationClientToken:(id)arg1;
- (void)removeFastDormancyDisableToken:(id)arg1;
- (void)removeWiFiAutoAssociationClientToken:(id)arg1;
- (void)setDataConnectionActive:(BOOL)arg1;
- (void)showNetworkOptions;
- (void)showSIMUnlock;

@end

