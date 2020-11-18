//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSCopying-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSData, NSLocale, NSLock, NSString;

@interface AKDevice : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isMonitoringUnlockEvents;
    NSLock *_monitoringLock;
    NSString *_serverFriendlyDescription;
    NSString *_uniqueDeviceIdentifier;
    NSString *_color;
    NSString *_enclosureColor;
    NSLocale *_locale;
}

@property (copy) NSString *color; // @synthesize color=_color;
@property (copy) NSString *enclosureColor; // @synthesize enclosureColor=_enclosureColor;
@property BOOL hasBeenUnlockedSinceLastCheckIn;
@property (readonly) NSString *integratedCircuitCardIdentifier;
@property (readonly) NSString *internationalMobileEquipmentIdentity;
@property (readonly) BOOL isInternalBuild;
@property (readonly) BOOL isProtectedWithPasscode;
@property (copy) NSLocale *locale; // @synthesize locale=_locale;
@property (readonly) NSString *mobileEquipmentIdentifier;
@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *serialNumber;
@property (readonly) NSData *serializedData;
@property (copy) NSString *serverFriendlyDescription; // @synthesize serverFriendlyDescription=_serverFriendlyDescription;
@property (copy) NSString *uniqueDeviceIdentifier; // @synthesize uniqueDeviceIdentifier=_uniqueDeviceIdentifier;
@property (readonly) NSString *userChosenName;

+ (id)_buildNumber;
+ (id)_generateServerFriendlyDescription;
+ (id)_hardwareModel;
+ (id)_lookUpCurrentColor;
+ (id)_lookUpCurrentEnclosureColor;
+ (id)_lookUpCurrentUniqueDeviceID;
+ (id)_osName;
+ (id)_osVersion;
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
