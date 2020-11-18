//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppConduit/ACXSyncedApp-Protocol.h>
#import <AppConduit/NSCopying-Protocol.h>
#import <AppConduit/NSSecureCoding-Protocol.h>

@class MIStoreMetadata, NSArray, NSDictionary, NSString, NSUUID;

@interface ACXRemoteApplication : NSObject <ACXSyncedApp, NSSecureCoding, NSCopying>
{
    BOOL _isDeletable;
    BOOL _isBetaApp;
    BOOL _isProfileValidated;
    BOOL _hasClockfaces;
    BOOL _isLocallyAvailable;
    NSString *_bundleIdentifier;
    NSString *_applicationName;
    unsigned long long _applicationType;
    unsigned long long _applicationMode;
    NSString *_bundleVersion;
    NSString *_bundleShortVersion;
    NSString *_minimumOSVersion;
    NSDictionary *_requiredCapabilities;
    NSString *_watchKitVersion;
    NSString *_companionAppBundleID;
    NSString *_watchKitAppExecutableHash;
    NSString *_watchKitAppExtensionBundleID;
    NSString *_teamID;
    NSString *_complicationPrincipalClass;
    NSArray *_supportedComplicationFamilies;
    NSArray *_intentsRestrictedWhileLocked;
    NSArray *_intentsSupported;
    NSArray *_userActivityTypes;
    NSUUID *_databaseUUID;
    unsigned long long _sequenceNumber;
    NSDictionary *_localizedInfoPlistStrings;
    MIStoreMetadata *_storeMetadata;
    NSArray *_counterpartIdentifiers;
}

@property (nonatomic) unsigned long long applicationMode; // @synthesize applicationMode=_applicationMode;
@property (copy, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property (nonatomic) unsigned long long applicationType; // @synthesize applicationType=_applicationType;
@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (copy, nonatomic) NSString *bundleShortVersion; // @synthesize bundleShortVersion=_bundleShortVersion;
@property (copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property (copy, nonatomic) NSString *companionAppBundleID; // @synthesize companionAppBundleID=_companionAppBundleID;
@property (copy, nonatomic) NSString *complicationPrincipalClass; // @synthesize complicationPrincipalClass=_complicationPrincipalClass;
@property (copy, nonatomic) NSArray *counterpartIdentifiers; // @synthesize counterpartIdentifiers=_counterpartIdentifiers;
@property (strong, nonatomic) NSUUID *databaseUUID; // @synthesize databaseUUID=_databaseUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasClockfaces; // @synthesize hasClockfaces=_hasClockfaces;
@property (readonly, nonatomic) BOOL hasComplication;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *intentsRestrictedWhileLocked; // @synthesize intentsRestrictedWhileLocked=_intentsRestrictedWhileLocked;
@property (copy, nonatomic) NSArray *intentsSupported; // @synthesize intentsSupported=_intentsSupported;
@property (nonatomic) BOOL isBetaApp; // @synthesize isBetaApp=_isBetaApp;
@property (nonatomic) BOOL isDeletable; // @synthesize isDeletable=_isDeletable;
@property (nonatomic) BOOL isLocallyAvailable; // @synthesize isLocallyAvailable=_isLocallyAvailable;
@property (nonatomic) BOOL isProfileValidated; // @synthesize isProfileValidated=_isProfileValidated;
@property (readonly, nonatomic) BOOL isSystemApp;
@property (copy, nonatomic) NSDictionary *localizedInfoPlistStrings; // @synthesize localizedInfoPlistStrings=_localizedInfoPlistStrings;
@property (copy, nonatomic) NSString *minimumOSVersion; // @synthesize minimumOSVersion=_minimumOSVersion;
@property (copy, nonatomic) NSDictionary *requiredCapabilities; // @synthesize requiredCapabilities=_requiredCapabilities;
@property (nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property (copy, nonatomic) MIStoreMetadata *storeMetadata; // @synthesize storeMetadata=_storeMetadata;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supportedComplicationFamilies; // @synthesize supportedComplicationFamilies=_supportedComplicationFamilies;
@property (copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property (copy, nonatomic) NSArray *userActivityTypes; // @synthesize userActivityTypes=_userActivityTypes;
@property (copy, nonatomic) NSString *watchKitAppExecutableHash; // @synthesize watchKitAppExecutableHash=_watchKitAppExecutableHash;
@property (copy, nonatomic) NSString *watchKitAppExtensionBundleID; // @synthesize watchKitAppExtensionBundleID=_watchKitAppExtensionBundleID;
@property (copy, nonatomic) NSString *watchKitVersion; // @synthesize watchKitVersion=_watchKitVersion;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithApplicationProxy:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (id)initWithBundleID:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedDictionary:(id)arg1;
- (BOOL)isCompatibleWithCPUType:(int)arg1 subtype:(int)arg2;
- (BOOL)isCompatibleWithOSVersion:(id)arg1;
- (BOOL)isRuntimeCompatibleWithOSVersion:(id)arg1;
- (BOOL)isTheSameAppAs:(id)arg1;
- (id)localizedInfoPlistStringsForKeys:(id)arg1 fetchingFirstMatchingLocalizationInList:(id)arg2;
- (id)serialize;
- (id)serializeAsRemoteApplication;

@end
