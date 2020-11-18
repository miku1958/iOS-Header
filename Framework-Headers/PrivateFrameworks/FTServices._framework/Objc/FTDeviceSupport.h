//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FTServices/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>
#import <FTServices/CoreTelephonyClientPNRDelegate-Protocol.h>
#import <FTServices/CoreTelephonyClientSubscriberDelegate-Protocol.h>

@class CoreTelephonyClient, FTSelectedPNRSubscription, NSDictionary, NSString;

@interface FTDeviceSupport : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientPNRDelegate>
{
    NSString *_number;
    BOOL _blockPost;
    BOOL _supportsFrontCamera;
    BOOL _supportsBackCamera;
    BOOL _supportsiMessage;
    BOOL _supportsSMS;
    BOOL _supportsMMS;
    BOOL _mmsConfigured;
    long long _supportsApplePayState;
    BOOL _supportsHandoff;
    BOOL _supportsTethering;
    BOOL _supportsFT;
    BOOL _supportsFTA;
    BOOL _supportsFTMW;
    BOOL _supportsWiFi;
    BOOL _supportsWLAN;
    BOOL _supportsNonWiFiFaceTime;
    BOOL _supportsCellularData;
    BOOL _simBecameNotReady;
    long long _simInserted;
    BOOL _wantsForcedCellularQueries;
    long long _isPNRSupportedCachedValue;
    BOOL _faceTimeBlocked;
    BOOL _iMessageBlocked;
    BOOL _accountModificationRestricted;
    BOOL _isGreenTea;
    long long _performanceClass;
    CoreTelephonyClient *_coreTelephonyClient;
    FTSelectedPNRSubscription *_selectedPNRSubscription;
    BOOL _commCenterDead;
}

@property (readonly, nonatomic) NSDictionary *CTNetworkInformation;
@property (readonly, nonatomic) BOOL SIMInserted;
@property (readonly, nonatomic) BOOL accountModificationRestricted;
@property (readonly, nonatomic) BOOL callingAvailable;
@property (readonly, nonatomic) BOOL callingBlocked;
@property (readonly, nonatomic) BOOL callingSupported;
@property (readonly, nonatomic) BOOL commCenterDead; // @synthesize commCenterDead=_commCenterDead;
@property (readonly, nonatomic) BOOL conferencingAllowed;
@property (readonly, nonatomic) BOOL conferencingBlocked;
@property (readonly, nonatomic) BOOL conferencingEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
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
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL iMessageAvailable;
@property (readonly, nonatomic) BOOL iMessageBlocked;
@property (readonly, nonatomic) BOOL iMessageSupported;
@property (readonly, nonatomic) BOOL identityServicesSupported;
@property (readonly, nonatomic) BOOL isC2KEquipment;
@property (readonly, nonatomic) BOOL isGreenTea; // @synthesize isGreenTea=_isGreenTea;
@property (readonly, nonatomic) BOOL isInMultiUserMode;
@property (readonly, nonatomic) BOOL isTelephonyDevice;
@property (readonly, nonatomic) BOOL lowRAMDevice;
@property (readonly, nonatomic) BOOL madridAvailable;
@property (readonly, nonatomic) BOOL madridBlocked;
@property (readonly, nonatomic) BOOL madridSupported;
@property (readonly, nonatomic) BOOL mmsConfigured; // @synthesize mmsConfigured=_mmsConfigured;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) BOOL multiwayAvailable;
@property (readonly, nonatomic) BOOL multiwayBlocked;
@property (readonly, nonatomic) BOOL multiwaySupported;
@property (readonly, nonatomic) BOOL nonWifiCallingAvailable;
@property (readonly, nonatomic) BOOL nonWifiFaceTimeAvailable;
@property (readonly, nonatomic) long long performanceClass;
@property (readonly, nonatomic) NSString *productBuildVersion;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *productOSVersion;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) BOOL registrationSupported;
@property (readonly, nonatomic) BOOL slowCPUDevice;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAppleIDIdentification;
@property (readonly, nonatomic) BOOL supportsApplePay;
@property (readonly, nonatomic) BOOL supportsBackFacingCamera; // @synthesize supportsBackFacingCamera=_supportsBackCamera;
@property (readonly, nonatomic) BOOL supportsCellularData; // @synthesize supportsCellularData=_supportsCellularData;
@property (readonly, nonatomic) BOOL supportsFrontFacingCamera; // @synthesize supportsFrontFacingCamera=_supportsFrontCamera;
@property (readonly, nonatomic) BOOL supportsFunCam;
@property (readonly, nonatomic) BOOL supportsHandoff; // @synthesize supportsHandoff=_supportsHandoff;
@property (readonly, nonatomic) BOOL supportsMMS; // @synthesize supportsMMS=_supportsMMS;
@property (readonly, nonatomic) BOOL supportsNonWiFiCalling;
@property (readonly, nonatomic) BOOL supportsNonWiFiFaceTime; // @synthesize supportsNonWiFiFaceTime=_supportsNonWiFiFaceTime;
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
@property (readonly, nonatomic) BOOL wantsForcedCellularQueries; // @synthesize wantsForcedCellularQueries=_wantsForcedCellularQueries;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_enoughPowerToSupportEffects;
- (id)_forceWWANQueriesCarrierBundleValue;
- (void)_handleCarrierSettingsChanged;
- (void)_handlePotentialPhoneNumberRegistrationStateChanged;
- (void)_handleSIMStatusChangedToStatus:(id)arg1;
- (void)_initializeSIMInsertedCachedValue;
- (void)_invalidateValuesCachedForSelectedPhoneNumberRegistration;
- (BOOL)_legacy_supportsSMSIdentification;
- (void)_lockdownStateChanged:(id)arg1;
- (void)_registerForCapabilityNotifications;
- (void)_registerForCarrierNotifications;
- (void)_registerForCommCenterReadyNotifications;
- (void)_registerForInternalCoreTelephonyNotifications;
- (void)_registerForLockdownNotifications;
- (void)_registerForManagedConfigurationNotifications;
- (void)_registerForServiceStatusNotifications;
- (id)_serviceStatus;
- (void)_unregisterForCommCenterReadyNotifications;
- (void)_unregisterForManagedConfigurationNotifications;
- (void)_unregisterForServiceStatusNotifications;
- (void)_updateCTNetworkDictionary:(id)arg1 key:(id)arg2 withTelephonyNetworkValue:(id)arg3 telephonyError:(id)arg4;
- (void)_updateCapabilities;
- (void)_updateManagedConfigurationSettings;
- (BOOL)_wantsForcedCellularQueries;
- (void)carrierBundleChange:(id)arg1;
- (int)cpuFamily;
- (void)dealloc;
- (BOOL)inProcess_isCallingSupported;
- (id)init;
- (BOOL)isInDualPhoneIdentityMode;
- (long long)memorySize;
- (BOOL)nonBluetoothAvailableForBundleId:(id)arg1;
- (BOOL)nonWifiAvailableForBundleId:(id)arg1;
- (void)noteSelectedPhoneNumberRegistrationSubscriptionDidChange;
- (void)operatorBundleChange:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (void)pnrReadyStateNotification:(id)arg1 regState:(BOOL)arg2;
- (id)registrationState;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (BOOL)wifiAllowedForBundleId:(id)arg1;

@end

