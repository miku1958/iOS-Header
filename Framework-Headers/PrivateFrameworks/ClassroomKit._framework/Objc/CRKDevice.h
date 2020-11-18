//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSCopying-Protocol.h>
#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface CRKDevice : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _supervised;
    BOOL _ephemeralMultiUser;
    BOOL _orientationLocked;
    BOOL _appLocked;
    BOOL _passcodeEnabled;
    BOOL _requestingUnenroll;
    float _batteryLevel;
    float _volume;
    float _displayBackingScaleFactor;
    float _displayWidth;
    float _displayHeight;
    NSString *_identifier;
    NSString *_serialNumber;
    unsigned long long _platform;
    NSString *_model;
    NSString *_name;
    NSString *_systemName;
    NSString *_systemVersion;
    NSString *_buildVersion;
    unsigned long long _chargingState;
    unsigned long long _lockState;
    unsigned long long _screenState;
    unsigned long long _availableBytes;
    unsigned long long _deviceOrientation;
    unsigned long long _interfaceOrientation;
    NSDate *_internetDateAndTime;
    double _uptimeAtInternetDateAndTimeFetch;
    NSString *_primaryOpenApplication;
    NSString *_secondaryOpenApplication;
    NSString *_pipOpenApplication;
    NSArray *_allOpenApplications;
    NSArray *_installedApplications;
    NSString *_stagedAdHocIdentityCertificateFingerprint;
    NSArray *_trustedAnchorCertificateFingerprints;
    NSString *_userIdentifier;
    NSString *_userDisplayName;
    NSString *_userGivenName;
    NSString *_userPhoneticGivenName;
    NSString *_userFamilyName;
    NSString *_userPhoneticFamilyName;
    NSString *_userImageURL;
    unsigned long long _loginState;
    NSString *_studentImageIdentifier;
    NSString *_instructorImageIdentifier;
    NSDictionary *_activeAirPlayRoute;
    NSArray *_availableAirPlayRoutes;
    NSString *_managementLockPasscode;
}

@property (copy, nonatomic) NSDictionary *activeAirPlayRoute; // @synthesize activeAirPlayRoute=_activeAirPlayRoute;
@property (copy, nonatomic) NSArray *allOpenApplications; // @synthesize allOpenApplications=_allOpenApplications;
@property (nonatomic, getter=isAppLocked) BOOL appLocked; // @synthesize appLocked=_appLocked;
@property (copy, nonatomic) NSArray *availableAirPlayRoutes; // @synthesize availableAirPlayRoutes=_availableAirPlayRoutes;
@property (nonatomic) unsigned long long availableBytes; // @synthesize availableBytes=_availableBytes;
@property (nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property (copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property (nonatomic) unsigned long long chargingState; // @synthesize chargingState=_chargingState;
@property (nonatomic) unsigned long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property (nonatomic) float displayBackingScaleFactor; // @synthesize displayBackingScaleFactor=_displayBackingScaleFactor;
@property (nonatomic) float displayHeight; // @synthesize displayHeight=_displayHeight;
@property (nonatomic) float displayWidth; // @synthesize displayWidth=_displayWidth;
@property (nonatomic, getter=isEphemeralMultiUser) BOOL ephemeralMultiUser; // @synthesize ephemeralMultiUser=_ephemeralMultiUser;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSArray *installedApplications; // @synthesize installedApplications=_installedApplications;
@property (copy, nonatomic) NSString *instructorImageIdentifier; // @synthesize instructorImageIdentifier=_instructorImageIdentifier;
@property (nonatomic) unsigned long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property (strong, nonatomic) NSDate *internetDateAndTime; // @synthesize internetDateAndTime=_internetDateAndTime;
@property (nonatomic) unsigned long long lockState; // @synthesize lockState=_lockState;
@property (nonatomic) unsigned long long loginState; // @synthesize loginState=_loginState;
@property (copy, nonatomic) NSString *managementLockPasscode; // @synthesize managementLockPasscode=_managementLockPasscode;
@property (copy, nonatomic) NSString *model; // @synthesize model=_model;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic, getter=isOrientationLocked) BOOL orientationLocked; // @synthesize orientationLocked=_orientationLocked;
@property (nonatomic, getter=isPasscodeEnabled) BOOL passcodeEnabled; // @synthesize passcodeEnabled=_passcodeEnabled;
@property (copy, nonatomic) NSString *pipOpenApplication; // @synthesize pipOpenApplication=_pipOpenApplication;
@property (nonatomic) unsigned long long platform; // @synthesize platform=_platform;
@property (copy, nonatomic) NSString *primaryOpenApplication; // @synthesize primaryOpenApplication=_primaryOpenApplication;
@property (nonatomic, getter=isRequestingUnenroll) BOOL requestingUnenroll; // @synthesize requestingUnenroll=_requestingUnenroll;
@property (nonatomic) unsigned long long screenState; // @synthesize screenState=_screenState;
@property (copy, nonatomic) NSString *secondaryOpenApplication; // @synthesize secondaryOpenApplication=_secondaryOpenApplication;
@property (copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property (copy, nonatomic) NSString *stagedAdHocIdentityCertificateFingerprint; // @synthesize stagedAdHocIdentityCertificateFingerprint=_stagedAdHocIdentityCertificateFingerprint;
@property (copy, nonatomic) NSString *studentImageIdentifier; // @synthesize studentImageIdentifier=_studentImageIdentifier;
@property (nonatomic, getter=isSupervised) BOOL supervised; // @synthesize supervised=_supervised;
@property (copy, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property (copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property (copy, nonatomic) NSArray *trustedAnchorCertificateFingerprints; // @synthesize trustedAnchorCertificateFingerprints=_trustedAnchorCertificateFingerprints;
@property (nonatomic) double uptimeAtInternetDateAndTimeFetch; // @synthesize uptimeAtInternetDateAndTimeFetch=_uptimeAtInternetDateAndTimeFetch;
@property (copy, nonatomic) NSString *userDisplayName; // @synthesize userDisplayName=_userDisplayName;
@property (copy, nonatomic) NSString *userFamilyName; // @synthesize userFamilyName=_userFamilyName;
@property (copy, nonatomic) NSString *userGivenName; // @synthesize userGivenName=_userGivenName;
@property (copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property (copy, nonatomic) NSString *userImageURL; // @synthesize userImageURL=_userImageURL;
@property (copy, nonatomic) NSString *userPhoneticFamilyName; // @synthesize userPhoneticFamilyName=_userPhoneticFamilyName;
@property (copy, nonatomic) NSString *userPhoneticGivenName; // @synthesize userPhoneticGivenName=_userPhoneticGivenName;
@property (nonatomic) float volume; // @synthesize volume=_volume;

+ (id)CRKKeyForDMFKey:(id)arg1;
+ (id)allPropertyKeys;
+ (id)bootDate;
+ (id)keyTranslations;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isApplicationInstalled:(id)arg1;
- (BOOL)isApplicationOpen:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDevice:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end

