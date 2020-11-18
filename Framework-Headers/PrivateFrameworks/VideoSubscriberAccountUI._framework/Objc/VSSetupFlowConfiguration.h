//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, VSAppDescription, VSIdentityProvider;

__attribute__((visibility("hidden")))
@interface VSSetupFlowConfiguration : NSObject
{
    BOOL _shouldSkipSetupEntirely;
    BOOL _shouldOfferAuthenticationFlow;
    BOOL _shouldOfferSoleAuthenticationFlow;
    BOOL _shouldOfferSTBAuthenticationFlow;
    BOOL _canShowSupportedAppsButton;
    VSIdentityProvider *_identityProvider;
    NSString *_providerAccountUsername;
    VSAppDescription *_msoAppDescription;
    NSArray *_bundlesIDsToConsent;
    NSDictionary *_vouchersByBundleID;
}

@property (copy, nonatomic) NSArray *bundlesIDsToConsent; // @synthesize bundlesIDsToConsent=_bundlesIDsToConsent;
@property (nonatomic) BOOL canShowSupportedAppsButton; // @synthesize canShowSupportedAppsButton=_canShowSupportedAppsButton;
@property (strong, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
@property (strong, nonatomic) VSAppDescription *msoAppDescription; // @synthesize msoAppDescription=_msoAppDescription;
@property (copy, nonatomic) NSString *providerAccountUsername; // @synthesize providerAccountUsername=_providerAccountUsername;
@property (nonatomic) BOOL shouldOfferAuthenticationFlow; // @synthesize shouldOfferAuthenticationFlow=_shouldOfferAuthenticationFlow;
@property (nonatomic) BOOL shouldOfferSTBAuthenticationFlow; // @synthesize shouldOfferSTBAuthenticationFlow=_shouldOfferSTBAuthenticationFlow;
@property (nonatomic) BOOL shouldOfferSoleAuthenticationFlow; // @synthesize shouldOfferSoleAuthenticationFlow=_shouldOfferSoleAuthenticationFlow;
@property (nonatomic) BOOL shouldSkipSetupEntirely; // @synthesize shouldSkipSetupEntirely=_shouldSkipSetupEntirely;
@property (copy, nonatomic) NSDictionary *vouchersByBundleID; // @synthesize vouchersByBundleID=_vouchersByBundleID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

