//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCReachability, NSHashTable, NSString;

@interface FCNetworkReachability : NSObject
{
    BOOL _isNetworkReachable;
    BOOL _isNetworkReachableViaWiFi;
    BOOL _isNetworkReachableViaCellular;
    BOOL _isCloudKitAccessAllowed;
    BOOL _accessRestrictedBecauseOfAppVersion;
    BOOL _accessRestrictedBecauseOfOSVersion;
    BOOL _accessRestrictedBecauseOfCountry;
    BOOL _accessRestrictedBecauseOfDeviceAbandoned;
    long long _offlineReason;
    NSHashTable *_observers;
    long long _currentRadioAccessTechnology;
    NSString *_currentCellularCarrierName;
    FCReachability *_internetReachability;
}

@property (nonatomic) BOOL accessRestrictedBecauseOfAppVersion; // @synthesize accessRestrictedBecauseOfAppVersion=_accessRestrictedBecauseOfAppVersion;
@property (nonatomic) BOOL accessRestrictedBecauseOfCountry; // @synthesize accessRestrictedBecauseOfCountry=_accessRestrictedBecauseOfCountry;
@property (nonatomic) BOOL accessRestrictedBecauseOfDeviceAbandoned; // @synthesize accessRestrictedBecauseOfDeviceAbandoned=_accessRestrictedBecauseOfDeviceAbandoned;
@property (nonatomic) BOOL accessRestrictedBecauseOfOSVersion; // @synthesize accessRestrictedBecauseOfOSVersion=_accessRestrictedBecauseOfOSVersion;
@property (readonly, nonatomic) NSString *cellularCarrierName;
@property (readonly, nonatomic) long long cellularRadioAccessTechnology;
@property (strong, nonatomic) NSString *currentCellularCarrierName; // @synthesize currentCellularCarrierName=_currentCellularCarrierName;
@property (nonatomic) long long currentRadioAccessTechnology; // @synthesize currentRadioAccessTechnology=_currentRadioAccessTechnology;
@property (strong, nonatomic) FCReachability *internetReachability; // @synthesize internetReachability=_internetReachability;
@property (nonatomic) BOOL isCloudKitAccessAllowed; // @synthesize isCloudKitAccessAllowed=_isCloudKitAccessAllowed;
@property (readonly, nonatomic) BOOL isCloudKitReachable;
@property (readonly, nonatomic) BOOL isNetworkOnlyReachableViaCellular;
@property (nonatomic) BOOL isNetworkReachable; // @synthesize isNetworkReachable=_isNetworkReachable;
@property (nonatomic) BOOL isNetworkReachableViaCellular; // @synthesize isNetworkReachableViaCellular=_isNetworkReachableViaCellular;
@property (nonatomic) BOOL isNetworkReachableViaWiFi; // @synthesize isNetworkReachableViaWiFi=_isNetworkReachableViaWiFi;
@property (strong, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (nonatomic) long long offlineReason; // @synthesize offlineReason=_offlineReason;

+ (id)sharedNetworkReachability;
- (void).cxx_destruct;
- (long long)_cellularRadioAccessTechnologyFromString:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)_updateReachability;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;

@end

