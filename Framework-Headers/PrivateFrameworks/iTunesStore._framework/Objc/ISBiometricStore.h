//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSLock, NSNumber;

@interface ISBiometricStore : NSObject
{
    NSCache *_contextCache;
    NSLock *_lock;
}

@property long long biometricState;
@property (readonly, getter=isBiometricStateEnabled) BOOL biometricStateEnabled;
@property (readonly) NSNumber *lastRegisteredAccountIdentifier;

+ (id)applePayClassicNetworks;
+ (id)countryCode;
+ (id)diskBasedPaymentSheet;
+ (BOOL)isActionSupported:(long long)arg1 withBiometricAuthenticationContext:(id)arg2;
+ (id)keychainLabelForAccountID:(id)arg1 purpose:(long long)arg2;
+ (id)keychainLabelForCertWithAccountID:(id)arg1 purpose:(long long)arg2;
+ (id)keychainLabelForKeyWithAccountID:(id)arg1 purpose:(long long)arg2;
+ (id)sharedInstance;
+ (BOOL)shouldUseApplePayClassic;
+ (BOOL)shouldUseAutoEnrollment;
+ (BOOL)shouldUseExtendedEnrollment;
+ (BOOL)shouldUseUpsellEnrollment;
+ (BOOL)shouldUseX509;
+ (void)tokenUpdateDidFinishWithLogKey:(id)arg1;
+ (BOOL)tokenUpdateShouldStartWithLogKey:(id)arg1;
+ (long long)tokenUpdateState;
- (void).cxx_destruct;
- (void)addContextToCache:(id)arg1 withToken:(id)arg2;
- (long long)biometricAvailabilityForAccountIdentifier:(id)arg1;
- (BOOL)canPerformBiometricOptIn;
- (BOOL)canPerformExtendedBiometricActionsForAccountIdentifier:(id)arg1;
- (void)clearLastRegisteredAccountIdentifier;
- (id)createAttestationDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;
- (id)createX509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;
- (BOOL)deleteKeychainTokensForAccountIdentifier:(id)arg1 error:(id *)arg2;
- (id)fetchContextFromCacheWithToken:(id)arg1 evict:(BOOL)arg2;
- (unsigned long long)identityMapCount;
- (id)init;
- (BOOL)isIdentityMapValidForAccountIdentifier:(id)arg1;
- (unsigned long long)keyCountForAccountIdentifier:(id)arg1;
- (id)publicKeyDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;
- (void)registerAccountIdentifier:(id)arg1;
- (void)saveIdentityMapForAccountIdentifier:(id)arg1;
- (id)signData:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)x509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 regenerateCerts:(BOOL)arg3 error:(id *)arg4;

@end

