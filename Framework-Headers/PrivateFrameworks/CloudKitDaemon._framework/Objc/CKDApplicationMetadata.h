//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
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
    NSString *_apsEnvironmentString;
    long long _isApplication;
    NSString *_entitlementSpecifiedPCSServiceName;
    NSString *_applicationIdentifier;
    NSString *_clientPrefix;
}

@property (nonatomic) BOOL allowCustomAccounts; // @synthesize allowCustomAccounts=_allowCustomAccounts;
@property (nonatomic) BOOL allowsParticipantPII; // @synthesize allowsParticipantPII=_allowsParticipantPII;
@property (nonatomic) BOOL allowsPowerNapScheduling; // @synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling;
@property (strong, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property (strong, nonatomic) NSString *apsEnvironmentString; // @synthesize apsEnvironmentString=_apsEnvironmentString;
@property (nonatomic) BOOL canAccessProtectionData; // @synthesize canAccessProtectionData=_canAccessProtectionData;
@property (nonatomic) BOOL canAccessZoneProtectionData; // @synthesize canAccessZoneProtectionData=_canAccessZoneProtectionData;
@property (nonatomic) BOOL canMasquerade; // @synthesize canMasquerade=_canMasquerade;
@property (nonatomic) BOOL canSetDeviceIdentifier; // @synthesize canSetDeviceIdentifier=_canSetDeviceIdentifier;
@property (nonatomic) BOOL canSetEnvironment; // @synthesize canSetEnvironment=_canSetEnvironment;
@property (strong, nonatomic) NSString *clientPrefix; // @synthesize clientPrefix=_clientPrefix;
@property (nonatomic) BOOL displaysSystemAcceptPrompt; // @synthesize displaysSystemAcceptPrompt=_displaysSystemAcceptPrompt;
@property (strong, nonatomic) NSString *entitlementSpecifiedPCSServiceName; // @synthesize entitlementSpecifiedPCSServiceName=_entitlementSpecifiedPCSServiceName;
@property (nonatomic) BOOL hasAccessDuringBuddy; // @synthesize hasAccessDuringBuddy=_hasAccessDuringBuddy;
@property (nonatomic) BOOL hasLightweightPCS; // @synthesize hasLightweightPCS=_hasLightweightPCS;
@property (nonatomic) BOOL hasTCCAuthorization; // @synthesize hasTCCAuthorization=_hasTCCAuthorization;
@property (nonatomic) long long isApplication; // @synthesize isApplication=_isApplication;
@property (nonatomic) BOOL isCKSystemService; // @synthesize isCKSystemService=_isCKSystemService;
@property (nonatomic) BOOL isOOPUI; // @synthesize isOOPUI=_isOOPUI;

- (void).cxx_destruct;
- (id)init;

@end

