//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSCopying-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSData, NSLocale, NSLock, NSNumber, NSString;

@interface AKDevice : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isMonitoringUnlockEvents;
    NSLock *_monitoringLock;
    NSString *_serverFriendlyDescription;
    NSString *_uniqueDeviceIdentifier;
    NSString *_color;
    NSString *_enclosureColor;
    NSNumber *_coverGlassColor;
    NSNumber *_housingColor;
    NSNumber *_backingColor;
    NSLocale *_locale;
    NSString *_MLBSerialNumber;
    NSString *_ROMAddress;
    NSString *_modelNumber;
    unsigned long long _linkType;
}

@property (copy) NSString *MLBSerialNumber; // @synthesize MLBSerialNumber=_MLBSerialNumber;
@property (copy) NSString *ROMAddress; // @synthesize ROMAddress=_ROMAddress;
@property (copy) NSNumber *backingColor; // @synthesize backingColor=_backingColor;
@property (copy) NSString *color; // @synthesize color=_color;
@property (copy) NSNumber *coverGlassColor; // @synthesize coverGlassColor=_coverGlassColor;
@property (copy) NSString *enclosureColor; // @synthesize enclosureColor=_enclosureColor;
@property (copy) NSNumber *housingColor; // @synthesize housingColor=_housingColor;
@property (readonly) NSString *integratedCircuitCardIdentifier;
@property (readonly) NSString *internationalMobileEquipmentIdentity;
@property (readonly) BOOL isAppleIDLoginEnabled;
@property (readonly) BOOL isInCircle;
@property (readonly) BOOL isInternalBuild;
@property (readonly) BOOL isMultiUserMode;
@property (readonly) BOOL isProtectedWithPasscode;
@property (readonly) BOOL isUnlocked;
@property (setter=setLinkType:) unsigned long long linkType; // @synthesize linkType=_linkType;
@property (readonly) NSString *localUserUUID;
@property (copy) NSLocale *locale; // @synthesize locale=_locale;
@property (readonly) NSString *mobileEquipmentIdentifier;
@property (copy) NSString *modelNumber; // @synthesize modelNumber=_modelNumber;
@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *serialNumber;
@property (readonly) NSData *serializedData;
@property (copy) NSString *serverFriendlyDescription; // @synthesize serverFriendlyDescription=_serverFriendlyDescription;
@property (copy) NSString *uniqueDeviceIdentifier; // @synthesize uniqueDeviceIdentifier=_uniqueDeviceIdentifier;
@property (readonly) NSString *userChosenName;
@property (readonly) NSString *userFullName;

+ (id)_buildNumber;
+ (id)_generateServerFriendlyDescription;
+ (id)_hardwareModel;
+ (id)_lookUpCurrentBackingColor;
+ (id)_lookUpCurrentColor;
+ (id)_lookUpCurrentCoverGlassColor;
+ (id)_lookUpCurrentEnclosureColor;
+ (id)_lookUpCurrentHousingColor;
+ (id)_lookUpCurrentUniqueDeviceID;
+ (id)_lookupMLBSerialNumber;
+ (id)_lookupModelNumber;
+ (id)_lookupROMAddress;
+ (id)_osName;
+ (id)_osVersion;
+ (id)activeIDSPeerDevice;
+ (id)currentDevice;
+ (id)deviceSpecificLocalizedStringWithKey:(id)arg1;
+ (id)deviceWithSerializedData:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

