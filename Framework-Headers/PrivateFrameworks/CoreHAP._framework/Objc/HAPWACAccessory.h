//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class CUWiFiDevice, HMFUnfairLock, NSData, NSDictionary, NSNumber, NSString, NSUUID;

@interface HAPWACAccessory : HMFObject
{
    BOOL _supportsLegacyWAC;
    BOOL _supportsWAC2;
    BOOL _supportsTokenAuth;
    BOOL _supportsCertAuth;
    BOOL _isHomeKitAccessory;
    BOOL _isAirPlayAccessory;
    BOOL _supportsAirPlay;
    BOOL _requiresOwnershipToken;
    BOOL _homeKitPaired;
    BOOL _pairSetupWAC;
    NSString *_name;
    NSString *_model;
    NSString *_manufacturer;
    NSNumber *_wacCategory;
    NSNumber *_rssi;
    NSData *_bssid;
    NSString *_ssid;
    NSUUID *_identifier;
    NSString *_deviceId;
    NSData *_setupHash;
    NSDictionary *_rawScanResult;
    unsigned long long _supportedWiFiBands;
    unsigned long long _authFeatures;
    unsigned long long _version;
    double _discoveryTime;
    CUWiFiDevice *_cuWiFiDevice;
    HMFUnfairLock *_lock;
}

@property (readonly, nonatomic) unsigned long long authFeatures; // @synthesize authFeatures=_authFeatures;
@property (readonly, nonatomic) NSData *bssid; // @synthesize bssid=_bssid;
@property (readonly, nonatomic) CUWiFiDevice *cuWiFiDevice; // @synthesize cuWiFiDevice=_cuWiFiDevice;
@property (readonly, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property (nonatomic) double discoveryTime; // @synthesize discoveryTime=_discoveryTime;
@property (readonly, nonatomic) BOOL homeKitPaired; // @synthesize homeKitPaired=_homeKitPaired;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) BOOL isAirPlayAccessory; // @synthesize isAirPlayAccessory=_isAirPlayAccessory;
@property (readonly, nonatomic) BOOL isHomeKitAccessory; // @synthesize isHomeKitAccessory=_isHomeKitAccessory;
@property (readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property (readonly, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property (readonly, nonatomic) NSString *model; // @synthesize model=_model;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) BOOL pairSetupWAC; // @synthesize pairSetupWAC=_pairSetupWAC;
@property (readonly, nonatomic) NSDictionary *rawScanResult; // @synthesize rawScanResult=_rawScanResult;
@property (readonly, nonatomic) BOOL requiresOwnershipToken; // @synthesize requiresOwnershipToken=_requiresOwnershipToken;
@property (readonly, nonatomic) NSNumber *rssi; // @synthesize rssi=_rssi;
@property (readonly, nonatomic) NSData *setupHash; // @synthesize setupHash=_setupHash;
@property (readonly, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property (readonly, nonatomic) unsigned long long supportedWiFiBands; // @synthesize supportedWiFiBands=_supportedWiFiBands;
@property (readonly, nonatomic) BOOL supportsAirPlay; // @synthesize supportsAirPlay=_supportsAirPlay;
@property (readonly, nonatomic) BOOL supportsCertAuth; // @synthesize supportsCertAuth=_supportsCertAuth;
@property (readonly, nonatomic) BOOL supportsLegacyWAC; // @synthesize supportsLegacyWAC=_supportsLegacyWAC;
@property (readonly, nonatomic) BOOL supportsTokenAuth; // @synthesize supportsTokenAuth=_supportsTokenAuth;
@property (readonly, nonatomic) BOOL supportsWAC2; // @synthesize supportsWAC2=_supportsWAC2;
@property (readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property (readonly, nonatomic) NSNumber *wacCategory; // @synthesize wacCategory=_wacCategory;

- (void).cxx_destruct;
- (void)__setupSupportedFlags:(unsigned int)arg1;
- (id)description;
- (id)initWithName:(id)arg1 identifier:(id)arg2 category:(id)arg3 ssid:(id)arg4 deviceId:(id)arg5 flags:(unsigned int)arg6;
- (id)initWithWiFiDevice:(id)arg1;
- (void)updateWithHAPWACAccessory:(id)arg1;

@end
