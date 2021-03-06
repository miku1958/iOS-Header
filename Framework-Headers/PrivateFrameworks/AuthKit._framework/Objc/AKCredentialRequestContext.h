//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSCopying-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class AKAuthorizationRequest, AKAuthorizationUpgradeContext, AKPasswordRequest, NSArray, NSData, NSNumber, NSString, NSUUID, NSValue;

@interface AKCredentialRequestContext : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _passcodeProtected;
    BOOL _shouldForceUI;
    BOOL _shouldSkipBiometrics;
    BOOL _shouldSkipAuthorizationUI;
    BOOL _shouldForcePrivateEmail;
    BOOL _requirePassword;
    BOOL _isWebLogin;
    BOOL _isFirstPartyLogin;
    BOOL _isRapportLogin;
    BOOL _isEligibleForUpgradeFromPassword;
    NSString *_informativeText;
    NSString *_iconName;
    NSData *_iconData;
    NSNumber *_iconScale;
    NSValue *_iconSize;
    NSString *_proxiedClientAppName;
    NSString *_proxiedClientBundleID;
    NSString *_proxiedClientAppID;
    NSString *_proxiedClientTeamID;
    NSArray *_proxiedAssociatedDomains;
    NSString *_callerBundleID;
    NSString *_proxiedDeviceName;
    NSString *_proxiedDeviceClass;
    NSString *_proxiedClientServiceID;
    AKAuthorizationUpgradeContext *_upgradeContext;
    NSUUID *_requestIdentifier;
    AKAuthorizationRequest *_authorizationRequest;
    AKPasswordRequest *_passwordRequest;
}

@property (strong, nonatomic) NSString *_callerBundleID; // @synthesize _callerBundleID;
@property (copy, nonatomic) NSData *_iconData; // @synthesize _iconData;
@property (copy, nonatomic) NSString *_iconName; // @synthesize _iconName;
@property (copy, nonatomic) NSNumber *_iconScale; // @synthesize _iconScale;
@property (copy, nonatomic) NSValue *_iconSize; // @synthesize _iconSize;
@property (copy, nonatomic) NSString *_informativeText; // @synthesize _informativeText;
@property (readonly, nonatomic) BOOL _isEligibleForUpgradeFromPassword; // @synthesize _isEligibleForUpgradeFromPassword;
@property (nonatomic) BOOL _isFirstPartyLogin; // @synthesize _isFirstPartyLogin;
@property (nonatomic) BOOL _isRapportLogin; // @synthesize _isRapportLogin;
@property (nonatomic) BOOL _isWebLogin; // @synthesize _isWebLogin;
@property (strong, nonatomic) NSArray *_proxiedAssociatedDomains; // @synthesize _proxiedAssociatedDomains;
@property (strong, nonatomic) NSString *_proxiedClientAppID; // @synthesize _proxiedClientAppID;
@property (strong, nonatomic) NSString *_proxiedClientAppName; // @synthesize _proxiedClientAppName;
@property (strong, nonatomic) NSString *_proxiedClientBundleID; // @synthesize _proxiedClientBundleID;
@property (strong, nonatomic) NSString *_proxiedClientServiceID; // @synthesize _proxiedClientServiceID;
@property (strong, nonatomic) NSString *_proxiedClientTeamID; // @synthesize _proxiedClientTeamID;
@property (strong, nonatomic) NSString *_proxiedDeviceClass; // @synthesize _proxiedDeviceClass;
@property (strong, nonatomic) NSString *_proxiedDeviceName; // @synthesize _proxiedDeviceName;
@property (nonatomic) BOOL _requirePassword; // @synthesize _requirePassword;
@property (nonatomic) BOOL _shouldForcePrivateEmail; // @synthesize _shouldForcePrivateEmail;
@property (nonatomic) BOOL _shouldForceUI; // @synthesize _shouldForceUI;
@property (nonatomic) BOOL _shouldSkipAuthorizationUI; // @synthesize _shouldSkipAuthorizationUI;
@property (nonatomic) BOOL _shouldSkipBiometrics; // @synthesize _shouldSkipBiometrics;
@property (readonly, nonatomic) AKAuthorizationUpgradeContext *_upgradeContext; // @synthesize _upgradeContext;
@property (strong, nonatomic) AKAuthorizationRequest *authorizationRequest; // @synthesize authorizationRequest=_authorizationRequest;
@property (strong, nonatomic) NSArray *credentialRequests;
@property (strong, nonatomic) AKPasswordRequest *passwordRequest; // @synthesize passwordRequest=_passwordRequest;
@property (readonly, copy, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpgradeContext:(id)arg1;

@end

