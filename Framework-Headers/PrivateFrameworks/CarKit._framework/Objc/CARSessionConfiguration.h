//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface CARSessionConfiguration : NSObject
{
    BOOL _vehicleSupportsDestinationSharing;
    BOOL _vehicleSupportsGasoline;
    BOOL _vehicleSupportsDiesel;
    BOOL _vehicleSupportsElectric;
    BOOL _vehicleSupportsCNG;
    BOOL _rightHandDrive;
    BOOL _nightModeSupported;
    BOOL _supportsACBack;
    BOOL _supportsSiriZLL;
    BOOL _supportsSiriZLLButton;
    BOOL _supportsSiriMixable;
    BOOL _supportsElectronicTollCollection;
    BOOL _manufacturerIconVisible;
    BOOL _hasAccessory;
    NSString *_name;
    NSString *_modelName;
    NSString *_manufacturerName;
    NSString *_vehicleName;
    NSString *_vehicleModelName;
    NSString *_vehicleSerialNumber;
    NSString *_vehicleManufacturer;
    NSString *_vehicleFirmwareVersion;
    NSString *_vehicleHardwareVersion;
    NSString *_PPID;
    unsigned long long _transportType;
    NSArray *_screens;
    NSArray *_screenIDs;
    unsigned long long _limitableUserInterfaces;
    NSString *_endpointIdentifier;
    long long _voiceTriggerMode;
    long long _nowPlayingAlbumArtMode;
    long long _userInterfaceStyle;
    NSArray *_vehicleButtons;
    NSString *_deviceIdentifier;
    long long _defaultUserInterfaceStyle;
    NSString *_manufacturerIconLabel;
    NSArray *_manufacturerIcons;
    NSDictionary *_infoResponse;
    NSArray *_altScreenSuggestUIURLs;
    NSArray *_lastOnDisplayUIContextURLs;
    NSArray *_nowOnDisplayUIContextURLs;
    struct NSEdgeInsets _viewAreaInsets;
    struct NSEdgeInsets _dashboardRoundedCorners;
}

@property (readonly, copy, nonatomic) NSString *PPID; // @synthesize PPID=_PPID;
@property (readonly, nonatomic) NSArray *altScreenSuggestUIURLs; // @synthesize altScreenSuggestUIURLs=_altScreenSuggestUIURLs;
@property (nonatomic) struct NSEdgeInsets dashboardRoundedCorners; // @synthesize dashboardRoundedCorners=_dashboardRoundedCorners;
@property (nonatomic) long long defaultUserInterfaceStyle; // @synthesize defaultUserInterfaceStyle=_defaultUserInterfaceStyle;
@property (readonly, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property (readonly, copy, nonatomic) NSString *endpointIdentifier; // @synthesize endpointIdentifier=_endpointIdentifier;
@property (nonatomic) BOOL hasAccessory; // @synthesize hasAccessory=_hasAccessory;
@property (copy, nonatomic) NSDictionary *infoResponse; // @synthesize infoResponse=_infoResponse;
@property (readonly, nonatomic) NSArray *lastOnDisplayUIContextURLs; // @synthesize lastOnDisplayUIContextURLs=_lastOnDisplayUIContextURLs;
@property (readonly, nonatomic) unsigned long long limitableUserInterfaces; // @synthesize limitableUserInterfaces=_limitableUserInterfaces;
@property (copy, nonatomic) NSString *manufacturerIconLabel; // @synthesize manufacturerIconLabel=_manufacturerIconLabel;
@property (nonatomic) BOOL manufacturerIconVisible; // @synthesize manufacturerIconVisible=_manufacturerIconVisible;
@property (copy, nonatomic) NSArray *manufacturerIcons; // @synthesize manufacturerIcons=_manufacturerIcons;
@property (readonly, copy, nonatomic) NSString *manufacturerName; // @synthesize manufacturerName=_manufacturerName;
@property (readonly, copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) BOOL nightModeSupported; // @synthesize nightModeSupported=_nightModeSupported;
@property (readonly, nonatomic) NSArray *nowOnDisplayUIContextURLs; // @synthesize nowOnDisplayUIContextURLs=_nowOnDisplayUIContextURLs;
@property (readonly, nonatomic) long long nowPlayingAlbumArtMode; // @synthesize nowPlayingAlbumArtMode=_nowPlayingAlbumArtMode;
@property (readonly, nonatomic) BOOL rightHandDrive; // @synthesize rightHandDrive=_rightHandDrive;
@property (readonly, copy, nonatomic) NSArray *screenIDs; // @synthesize screenIDs=_screenIDs;
@property (readonly, copy, nonatomic) NSArray *screens; // @synthesize screens=_screens;
@property (readonly, nonatomic) BOOL supportsACBack; // @synthesize supportsACBack=_supportsACBack;
@property (nonatomic) BOOL supportsElectronicTollCollection; // @synthesize supportsElectronicTollCollection=_supportsElectronicTollCollection;
@property (readonly, nonatomic) BOOL supportsSiriMixable; // @synthesize supportsSiriMixable=_supportsSiriMixable;
@property (readonly, nonatomic) BOOL supportsSiriZLL; // @synthesize supportsSiriZLL=_supportsSiriZLL;
@property (readonly, nonatomic) BOOL supportsSiriZLLButton; // @synthesize supportsSiriZLLButton=_supportsSiriZLLButton;
@property (readonly, nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property (readonly, nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property (readonly, nonatomic) NSArray *vehicleButtons; // @synthesize vehicleButtons=_vehicleButtons;
@property (readonly, copy, nonatomic) NSString *vehicleFirmwareVersion; // @synthesize vehicleFirmwareVersion=_vehicleFirmwareVersion;
@property (readonly, copy, nonatomic) NSString *vehicleHardwareVersion; // @synthesize vehicleHardwareVersion=_vehicleHardwareVersion;
@property (readonly, copy, nonatomic) NSString *vehicleManufacturer; // @synthesize vehicleManufacturer=_vehicleManufacturer;
@property (readonly, copy, nonatomic) NSString *vehicleModelName; // @synthesize vehicleModelName=_vehicleModelName;
@property (readonly, copy, nonatomic) NSString *vehicleName; // @synthesize vehicleName=_vehicleName;
@property (readonly, copy, nonatomic) NSString *vehicleSerialNumber; // @synthesize vehicleSerialNumber=_vehicleSerialNumber;
@property (readonly, nonatomic) BOOL vehicleSupportsCNG; // @synthesize vehicleSupportsCNG=_vehicleSupportsCNG;
@property (readonly, nonatomic) BOOL vehicleSupportsDestinationSharing; // @synthesize vehicleSupportsDestinationSharing=_vehicleSupportsDestinationSharing;
@property (readonly, nonatomic) BOOL vehicleSupportsDiesel; // @synthesize vehicleSupportsDiesel=_vehicleSupportsDiesel;
@property (readonly, nonatomic) BOOL vehicleSupportsElectric; // @synthesize vehicleSupportsElectric=_vehicleSupportsElectric;
@property (readonly, nonatomic) BOOL vehicleSupportsGasoline; // @synthesize vehicleSupportsGasoline=_vehicleSupportsGasoline;
@property (readonly, nonatomic) struct NSEdgeInsets viewAreaInsets; // @synthesize viewAreaInsets=_viewAreaInsets;
@property (readonly, nonatomic) long long voiceTriggerMode; // @synthesize voiceTriggerMode=_voiceTriggerMode;

+ (long long)_defaultInterfaceStyleFromAppearanceDefault:(id)arg1;
+ (id)_descriptionForTransportType:(unsigned long long)arg1;
+ (unsigned long long)_limitableUserInterfacesFromLimitedUIValues:(id)arg1;
+ (id)descriptionForCapability:(long long)arg1;
+ (id)descriptionForEdgeInsets:(struct NSEdgeInsets)arg1;
+ (id)descriptionForUserInterfaceStyle:(long long)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionForLimitableUserInterfaces;
- (id)descriptionForTransportType;
- (id)descriptionForVoiceTriggerMode;
- (id)initForCarPlayShell:(BOOL)arg1 propertySupplier:(CDUnknownBlockType)arg2;
- (id)primaryDisplayPhysicalSize;
- (id)screenInfoForScreenID:(id)arg1;
- (void)updateCarCapabilities;
- (id)valueForUndefinedKey:(id)arg1;

@end

