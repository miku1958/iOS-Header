//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface FTDeviceSupport : NSObject
{
    NSString *_number;
    BOOL _blockPost;
    BOOL _supportsFrontCamera;
    BOOL _supportsBackCamera;
    BOOL _supportsiMessage;
    BOOL _supportsSMS;
    BOOL _supportsMMS;
    BOOL _mmsConfigured;
    BOOL _supportsApplePay;
    BOOL _supportsHandoff;
    BOOL _supportsTethering;
    BOOL _supportsFT;
    BOOL _supportsFTA;
    BOOL _supportsWiFi;
    BOOL _supportsWLAN;
    BOOL _supportsNonWiFiFaceTime;
    BOOL _supportsCellularData;
    BOOL _shouldUseSIMState;
    BOOL _commCenterDead;
    BOOL _simBecameNotReady;
    BOOL _simInserted;
    BOOL _wantsForcedCelluarQueries;
    int _carrierBundleSupported;
    int _iMessageAllowedToken;
    BOOL _faceTimeBlocked;
    BOOL _iMessageBlocked;
    BOOL _accountModificationRestricted;
    BOOL _supportsRegistrationControl;
    long long _performanceClass;
}

@property (readonly, nonatomic) NSDictionary *CTNetworkInformation;
@property (readonly, nonatomic) BOOL SIMInserted;
@property (readonly, nonatomic) BOOL accountModificationRestricted;
@property (readonly, nonatomic) BOOL callingAvailable;
@property (readonly, nonatomic) BOOL callingBlocked;
@property (readonly, nonatomic) BOOL callingSupported;
@property (readonly, nonatomic) BOOL commCenterDead;
@property (readonly, nonatomic) BOOL conferencingAllowed;
@property (readonly, nonatomic) BOOL conferencingBlocked;
@property (readonly, nonatomic) BOOL conferencingEnabled;
@property (readonly, nonatomic) NSString *deviceColor;
@property (readonly, nonatomic) NSString *deviceIDPrefix;
@property (readonly, nonatomic) NSString *deviceInformationString;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *deviceRegionInfo;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) NSString *deviceTypeIDPrefix;
@property (readonly, nonatomic) NSString *enclosureColor;
@property (readonly, nonatomic) BOOL faceTimeAvailable;
@property (readonly, nonatomic) BOOL faceTimeBlocked;
@property (readonly, nonatomic) BOOL faceTimeSupported;
@property (readonly, nonatomic) BOOL iMessageAvailable;
@property (readonly, nonatomic) BOOL iMessageBlocked;
@property (readonly, nonatomic) BOOL iMessageSupported;
@property (readonly, nonatomic) BOOL identityServicesSupported;
@property (readonly, nonatomic) BOOL isC2KEquipment;
@property (readonly, nonatomic) BOOL isInMultiUserMode;
@property (readonly, nonatomic) BOOL isTelephonyDevice;
@property (readonly, nonatomic) BOOL madridAvailable;
@property (readonly, nonatomic) BOOL madridBlocked;
@property (readonly, nonatomic) BOOL madridSupported;
@property (readonly, nonatomic) BOOL mmsConfigured; // @synthesize mmsConfigured=_mmsConfigured;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) BOOL nonWifiCallingAvailable;
@property (readonly, nonatomic) BOOL nonWifiFaceTimeAvailable;
@property (readonly, nonatomic) long long performanceClass;
@property (readonly, nonatomic) NSString *productBuildVersion;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) BOOL registrationSupported;
@property (readonly, nonatomic) BOOL supportsAppleIDIdentification;
@property (readonly, nonatomic) BOOL supportsApplePay; // @synthesize supportsApplePay=_supportsApplePay;
@property (readonly, nonatomic) BOOL supportsBackFacingCamera; // @synthesize supportsBackFacingCamera=_supportsBackCamera;
@property (readonly, nonatomic) BOOL supportsCellularData; // @synthesize supportsCellularData=_supportsCellularData;
@property (readonly, nonatomic) BOOL supportsFrontFacingCamera; // @synthesize supportsFrontFacingCamera=_supportsFrontCamera;
@property (readonly, nonatomic) BOOL supportsHandoff; // @synthesize supportsHandoff=_supportsHandoff;
@property (readonly, nonatomic) BOOL supportsMMS; // @synthesize supportsMMS=_supportsMMS;
@property (readonly, nonatomic) BOOL supportsNonWiFiCalling;
@property (readonly, nonatomic) BOOL supportsNonWiFiFaceTime; // @synthesize supportsNonWiFiFaceTime=_supportsNonWiFiFaceTime;
@property (readonly, nonatomic) BOOL supportsRegistrationControl; // @synthesize supportsRegistrationControl=_supportsRegistrationControl;
@property (readonly, nonatomic) BOOL supportsSMS; // @synthesize supportsSMS=_supportsSMS;
@property (readonly, nonatomic) BOOL supportsSMSIdentification;
@property (readonly, nonatomic) BOOL supportsSimultaneousVoiceAndDataRightNow;
@property (readonly, nonatomic) BOOL supportsTethering; // @synthesize supportsTethering=_supportsTethering;
@property (readonly, nonatomic) BOOL supportsWLAN; // @synthesize supportsWLAN=_supportsWLAN;
@property (readonly, nonatomic) BOOL supportsWiFi; // @synthesize supportsWiFi=_supportsWiFi;
@property (readonly, nonatomic) NSString *telephoneNumber;
@property (readonly, nonatomic) NSDictionary *telephonyCapabilities;
@property (readonly, nonatomic) NSString *userAgentString;
@property (readonly, nonatomic) BOOL wantsBreakBeforeMake;
@property (readonly, nonatomic) BOOL wantsForcedCelluarQueries; // @synthesize wantsForcedCelluarQueries=_wantsForcedCelluarQueries;

+ (id)sharedInstance;
- (void)_carrierChanged;
- (id)_forceWWANQueriesCarrierBundleValue;
- (void)_handlePhoneNumberRegistrationStateChanged:(id)arg1;
- (void)_handleTechnologyChange:(id)arg1;
- (void)_lockdownStateChanged:(id)arg1;
- (void)_operatorChanged;
- (void)_registerForCapabilityNotifications;
- (void)_registerForCarrierNotifications;
- (void)_registerForCommCenterReadyNotifications;
- (void)_registerForCoreTelephonyNotifications;
- (void)_registerForInternalCoreTelephonyNotifications;
- (void)_registerForLockdownNotifications;
- (void)_registerForManagedConfigurationNotifications;
- (void)_simStatusChanged:(id)arg1;
- (void)_unregisterForCarrierNotifications;
- (void)_unregisterForCommCenterReadyNotifications;
- (void)_unregisterForCoreTelephonyNotifications;
- (void)_unregisterForManagedConfigurationNotifications;
- (void)_updateCapabilities;
- (void)_updateManagedConfigurationSettings;
- (BOOL)_wantsForcedCellularQueries;
- (void)_watchNotifyTokens;
- (void)carrierSettingsChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)nonWifiAvailableForBundleId:(id)arg1;
- (BOOL)wifiAllowedForBundleId:(id)arg1;

@end

