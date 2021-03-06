//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString, NSURL;
@protocol AKURLBagDictionaryProvider;

@interface AKURLBag : NSObject
{
    NSString *_altDSID;
    id<AKURLBagDictionaryProvider> _bagProvider;
}

@property (readonly, nonatomic) NSString *APSEnvironment;
@property (readonly, nonatomic) unsigned long long IDMSEnvironment;
@property (readonly, nonatomic) NSURL *absintheCertURL;
@property (readonly, nonatomic) NSURL *absintheSessionURL;
@property (readonly, nonatomic) NSURL *acsURL;
@property (copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property (readonly, nonatomic) NSSet *appleIDAuthorizationURLs;
@property (readonly, nonatomic) NSURL *appleIDAuthorizeHTMLResponseURL;
@property (readonly, nonatomic) NSSet *appleOwnedDomains;
@property (strong, nonatomic) id<AKURLBagDictionaryProvider> bagProvider; // @synthesize bagProvider=_bagProvider;
@property (readonly, nonatomic) NSURL *basicAuthURL;
@property (readonly, nonatomic) NSURL *changePasswordURL;
@property (readonly, nonatomic) NSURL *checkInURL;
@property (readonly, nonatomic) NSURL *circleURL;
@property (readonly, nonatomic) NSURL *configurationInfoURL;
@property (readonly, nonatomic) NSString *continuationHeaderPrefix;
@property (readonly, nonatomic) NSURL *createAppleIDURL;
@property (readonly, nonatomic) NSURL *createChildAccountURL;
@property (readonly, nonatomic) NSURL *deleteAuthorizedAppURL;
@property (readonly, nonatomic) NSURL *deviceListURL;
@property (readonly, nonatomic) NSURL *endProvisioningURL;
@property (readonly, nonatomic) NSURL *escapeHatchURL;
@property (readonly, nonatomic) NSURL *fetchAppInfoURL;
@property (readonly, nonatomic) NSURL *fetchAuthenticationModeURL;
@property (readonly, nonatomic) NSURL *fetchConfigDataURL;
@property (readonly, nonatomic) NSURL *fetchFollowUps;
@property (readonly, nonatomic) NSURL *fetchPrimaryBundleIDURL;
@property (readonly, nonatomic) NSURL *fetchUserInfoURL;
@property (readonly, nonatomic) NSURL *iForgotContinuationURL;
@property (readonly, nonatomic) NSURL *iForgotURL;
@property (readonly, nonatomic, getter=IsInlineFlowSupportedConfig) BOOL inlineFlowSupportedConfig;
@property (readonly, nonatomic) unsigned long long lastKnownIDMSEnvironment;
@property (readonly, nonatomic) NSURL *notificationAckURL;
@property (readonly, nonatomic, getter=isPhoneNumberSupportedConfig) BOOL phoneNumberSupportedConfig;
@property (readonly, nonatomic) NSURL *renewRecoveryTokenURL;
@property (readonly, nonatomic) NSURL *repairURL;
@property (readonly, nonatomic) NSArray *securityUpgradeServiceNames;
@property (readonly, nonatomic) NSURL *startProvisioningURL;
@property (readonly, nonatomic) NSURL *storeModernRecoveryURL;
@property (readonly, nonatomic) NSURL *syncAnisetteURL;
@property (readonly, nonatomic) NSURL *tokenUpgradeURL;
@property (readonly, nonatomic) NSURL *trustedDevicesSummaryURL;
@property (readonly, nonatomic) NSURL *trustedDevicesURL;
@property (readonly, nonatomic) NSURL *upgradeEligibilityCheckURL;
@property (readonly, nonatomic) NSURL *upgradeUIURL;
@property (readonly, nonatomic) NSURL *userVerificationURL;
@property (readonly, nonatomic) NSURL *validateCodeURL;
@property (readonly, nonatomic) NSURL *validateVettingTokenURL;

+ (unsigned long long)IDMSEnvironmentFromBag:(id)arg1;
+ (unsigned long long)_IDMSEnvironmentFromString:(id)arg1;
+ (id)_currentBags;
+ (id)_requestEnvironmentsWithBag:(id)arg1;
+ (id)bagForAltDSID:(id)arg1;
+ (id)keyForEscapeHatchURL;
+ (BOOL)looksLikeiForgotURLKey:(id)arg1;
+ (id)sharedBag;
- (void).cxx_destruct;
- (id)_configurationsFromCache:(BOOL)arg1 withError:(id *)arg2;
- (void)_fetchURLBagWithCompletion:(CDUnknownBlockType)arg1;
- (id)_requestEnvironmentsWithError:(id *)arg1;
- (id)_requestNewURLBagIfNecessaryWithError:(id *)arg1;
- (id)_urlAtKey:(id)arg1;
- (id)_urlBagFromCache:(BOOL)arg1 withError:(id *)arg2;
- (id)configurationAtKey:(id)arg1;
- (id)configurationAtKey:(id)arg1 fromCache:(BOOL)arg2;
- (void)forceUpdateBagWithUrlSwitchData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAltDSID:(id)arg1;
- (void)requestNewURLBagIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)requestNewURLBagIfNecessaryWithError:(id *)arg1;
- (id)urlAtKey:(id)arg1;

@end

