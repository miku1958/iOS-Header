//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKDApplicationMetadata : NSObject
{
    BOOL _isCKSystemService;
    BOOL _canMasquerade;
    BOOL _canSetEnvironment;
    BOOL _allowCustomAccounts;
    BOOL _canAccessProtectionData;
    BOOL _canAccessZoneProtectionData;
    BOOL _canSetDeviceIdentifier;
    BOOL _hasAccessDuringBuddy;
    BOOL _hasLightweightPCS;
    BOOL _hasTCCAuthorization;
    BOOL _allowsPowerNapScheduling;
    BOOL _isOOPUI;
    BOOL _allowsParticipantPII;
    BOOL _displaysSystemAcceptPrompt;
    BOOL _canUseNonLegacyShareURL;
    BOOL _allowUnverifiedAccount;
    NSString *_apsEnvironmentString;
    long long _contextType;
    NSString *_entitlementSpecifiedPCSServiceName;
    NSString *_applicationIdentifier;
    NSString *_clientPrefix;
    NSString *_pushBundleID;
    NSString *_associatedApplicationBundleID;
    NSString *_applicationContainerPath;
}

@property (nonatomic) BOOL allowCustomAccounts; // @synthesize allowCustomAccounts=_allowCustomAccounts;
@property (nonatomic) BOOL allowUnverifiedAccount; // @synthesize allowUnverifiedAccount=_allowUnverifiedAccount;
@property (nonatomic) BOOL allowsParticipantPII; // @synthesize allowsParticipantPII=_allowsParticipantPII;
@property (nonatomic) BOOL allowsPowerNapScheduling; // @synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling;
@property (strong, nonatomic) NSString *applicationContainerPath; // @synthesize applicationContainerPath=_applicationContainerPath;
@property (strong, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property (strong, nonatomic) NSString *apsEnvironmentString; // @synthesize apsEnvironmentString=_apsEnvironmentString;
@property (strong, nonatomic) NSString *associatedApplicationBundleID; // @synthesize associatedApplicationBundleID=_associatedApplicationBundleID;
@property (nonatomic) BOOL canAccessProtectionData; // @synthesize canAccessProtectionData=_canAccessProtectionData;
@property (nonatomic) BOOL canAccessZoneProtectionData; // @synthesize canAccessZoneProtectionData=_canAccessZoneProtectionData;
@property (nonatomic) BOOL canMasquerade; // @synthesize canMasquerade=_canMasquerade;
@property (nonatomic) BOOL canSetDeviceIdentifier; // @synthesize canSetDeviceIdentifier=_canSetDeviceIdentifier;
@property (nonatomic) BOOL canSetEnvironment; // @synthesize canSetEnvironment=_canSetEnvironment;
@property (nonatomic) BOOL canUseNonLegacyShareURL; // @synthesize canUseNonLegacyShareURL=_canUseNonLegacyShareURL;
@property (strong, nonatomic) NSString *clientPrefix; // @synthesize clientPrefix=_clientPrefix;
@property (nonatomic) long long contextType; // @synthesize contextType=_contextType;
@property (nonatomic) BOOL displaysSystemAcceptPrompt; // @synthesize displaysSystemAcceptPrompt=_displaysSystemAcceptPrompt;
@property (strong, nonatomic) NSString *entitlementSpecifiedPCSServiceName; // @synthesize entitlementSpecifiedPCSServiceName=_entitlementSpecifiedPCSServiceName;
@property (nonatomic) BOOL hasAccessDuringBuddy; // @synthesize hasAccessDuringBuddy=_hasAccessDuringBuddy;
@property (nonatomic) BOOL hasLightweightPCS; // @synthesize hasLightweightPCS=_hasLightweightPCS;
@property (nonatomic) BOOL hasTCCAuthorization; // @synthesize hasTCCAuthorization=_hasTCCAuthorization;
@property (nonatomic) BOOL isCKSystemService; // @synthesize isCKSystemService=_isCKSystemService;
@property (nonatomic) BOOL isOOPUI; // @synthesize isOOPUI=_isOOPUI;
@property (strong, nonatomic) NSString *pushBundleID; // @synthesize pushBundleID=_pushBundleID;

- (void).cxx_destruct;
- (id)init;

@end

