//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKit/NSObject-Protocol.h>

@class AKAccountRecoveryContext, AKAppleIDAuthenticationContext, AKCircleRequestContext, AKDeviceListRequestContext, AKFollowUpTearDownContext, NSArray, NSDictionary, NSHTTPURLResponse, NSNumber, NSString;
@protocol NSSecureCoding;

@protocol AKAppleIDAuthenticationDaemonProtocol <NSObject>
- (void)accountNamesForAltDSID:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)activeLoginCode:(void (^)(NSString *, NSError *))arg1;
- (void)authenticateWithContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)checkInWithAuthenticationServerForAppleID:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)checkSecurityUpgradeEligibilityForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)configurationInfoWithIdentifiers:(NSArray *)arg1 forAltDSID:(NSString *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)fetchAuthModeWithContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)fetchDeviceListWithContext:(AKDeviceListRequestContext *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchURLBagWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)fetchUserInformationForAltDSID:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)generateLoginCodeWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)getServerUILoadDelegateForAltDSID:(NSString *)arg1 completion:(void (^)(AKAppleIDServerResourceLoadDelegate *, NSError *))arg2;
- (void)getServerUILoadDelegateWithContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(AKAppleIDServerResourceLoadDelegate *, NSError *))arg2;
- (void)isDevicePasscodeProtected:(void (^)(BOOL, NSError *))arg1;
- (void)performCircleRequestWithContext:(AKCircleRequestContext *)arg1 completion:(void (^)(AKCircleRequestPayload *, NSError *))arg2;
- (void)persistMasterKeyVerifier:(NSDictionary *)arg1 withContext:(AKAppleIDAuthenticationContext *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)renewRecoveryTokenWithContext:(AKAccountRecoveryContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)reportSignOutForAllAppleIDsWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)reportSignOutForAppleID:(NSString *)arg1 service:(long long)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)setAppleIDWithAltDSID:(NSString *)arg1 inUse:(BOOL)arg2 forService:(long long)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)setAppleIDWithDSID:(NSNumber *)arg1 inUse:(BOOL)arg2 forService:(long long)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)setConfigurationInfo:(id<NSSecureCoding>)arg1 forIdentifier:(NSString *)arg2 forAltDSID:(NSString *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)synchronizeFollowUpItemsForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)teardownFollowUpWithContext:(AKFollowUpTearDownContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)updateStateWithExternalAuthenticationResponse:(NSHTTPURLResponse *)arg1 forAppleID:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)updateStateWithExternalAuthenticationResponse:(NSHTTPURLResponse *)arg1 forContext:(AKAppleIDAuthenticationContext *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(NSString *)arg2 withCompletion:(void (^)(BOOL, NSError *))arg3;
- (void)validateVettingToken:(NSString *)arg1 forAltDSID:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)verifyMasterKey:(NSString *)arg1 withContext:(AKAccountRecoveryContext *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
@end

