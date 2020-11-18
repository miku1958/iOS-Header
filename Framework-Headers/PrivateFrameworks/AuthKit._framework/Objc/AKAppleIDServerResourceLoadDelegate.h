//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@class AKAnisetteData, AKDevice, NSArray, NSNumber, NSString;

@interface AKAppleIDServerResourceLoadDelegate : NSObject <NSSecureCoding>
{
    NSString *_altDSID;
    BOOL _shouldSendEphemeralAuthHeader;
    BOOL _shouldSendICSCIntentHeader;
    BOOL _shouldSendLocalUserHasAppleIDLoginHeader;
    BOOL _shouldSendPhoneNumber;
    BOOL _shouldSendAbsintheHeader;
    NSString *_serviceToken;
    NSString *_phoneNumberCertificate;
    long long _serviceType;
    NSArray *_loggedInServices;
    NSString *_passwordResetToken;
    NSString *_continuationToken;
    NSString *_heartbeatToken;
    NSString *_identityToken;
    AKDevice *_proxiedDevice;
    NSString *_proxyAppName;
    NSString *_clientAppName;
    NSNumber *_hasEmptyPasswordOverride;
    NSString *_securityUpgradeContext;
    AKAnisetteData *_proxiedDeviceAnisetteData;
}

@property (copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property (copy, nonatomic) NSString *clientAppName; // @synthesize clientAppName=_clientAppName;
@property (copy, nonatomic) NSString *continuationToken; // @synthesize continuationToken=_continuationToken;
@property (strong, nonatomic) NSNumber *hasEmptyPasswordOverride; // @synthesize hasEmptyPasswordOverride=_hasEmptyPasswordOverride;
@property (copy, nonatomic) NSString *heartbeatToken; // @synthesize heartbeatToken=_heartbeatToken;
@property (copy, nonatomic) NSString *identityToken; // @synthesize identityToken=_identityToken;
@property (copy, nonatomic) NSArray *loggedInServices; // @synthesize loggedInServices=_loggedInServices;
@property (copy, nonatomic) NSString *passwordResetToken; // @synthesize passwordResetToken=_passwordResetToken;
@property (copy, nonatomic) NSString *phoneNumberCertificate; // @synthesize phoneNumberCertificate=_phoneNumberCertificate;
@property (strong, nonatomic) AKDevice *proxiedDevice; // @synthesize proxiedDevice=_proxiedDevice;
@property (strong, nonatomic) AKAnisetteData *proxiedDeviceAnisetteData; // @synthesize proxiedDeviceAnisetteData=_proxiedDeviceAnisetteData;
@property (copy, nonatomic) NSString *proxyAppName; // @synthesize proxyAppName=_proxyAppName;
@property (copy, nonatomic) NSString *securityUpgradeContext; // @synthesize securityUpgradeContext=_securityUpgradeContext;
@property (copy, nonatomic) NSString *serviceToken; // @synthesize serviceToken=_serviceToken;
@property (nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property (nonatomic) BOOL shouldSendAbsintheHeader; // @synthesize shouldSendAbsintheHeader=_shouldSendAbsintheHeader;
@property (nonatomic) BOOL shouldSendEphemeralAuthHeader; // @synthesize shouldSendEphemeralAuthHeader=_shouldSendEphemeralAuthHeader;
@property (nonatomic) BOOL shouldSendICSCIntentHeader; // @synthesize shouldSendICSCIntentHeader=_shouldSendICSCIntentHeader;
@property (nonatomic) BOOL shouldSendLocalUserHasAppleIDLoginHeader; // @synthesize shouldSendLocalUserHasAppleIDLoginHeader=_shouldSendLocalUserHasAppleIDLoginHeader;
@property (nonatomic) BOOL shouldSendPhoneNumber; // @synthesize shouldSendPhoneNumber=_shouldSendPhoneNumber;

+ (id)sharedController;
+ (unsigned long long)signalFromServerResponse:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_signWithFeatureOptInHeaders:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAltDSID:(id)arg1 identityToken:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAuthenticationRequired:(id)arg1;
- (BOOL)isResponseActionable:(id)arg1;
- (BOOL)isResponseFinal:(id)arg1;
- (BOOL)isResponseFinalForHSA2ServerFlow:(id)arg1;
- (void)signRequest:(id)arg1;
- (void)signRequestWithCommonHeaders:(id)arg1;

@end

