//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSData, NSString, PKPaymentCredential;

@interface PKPaymentEligibilityRequest : PKPaymentWebServiceRequest
{
    PKPaymentCredential *_paymentCredential;
    NSString *_productIdentifier;
    long long _cardholderNameInputMethod;
    long long _primaryAccountNumberInputMethod;
    long long _expirationInputMethod;
    NSString *_issuerIdentifier;
    NSString *_hostApplicationIdentifier;
    NSString *_hostApplicationVersion;
    NSData *_FPInfo;
    NSString *_encryptionVersion;
    NSString *_cardholderName;
    NSString *_primaryAccountNumber;
    NSString *_expiration;
    NSData *_encryptedCardData;
    NSData *_publicKeyHash;
    NSData *_ephemeralPublicKey;
    NSData *_wrappedKey;
    NSString *_nonce;
    long long _source;
    NSString *_referrerIdentifier;
    NSString *_passOwnershipToken;
}

@property (copy, nonatomic) NSData *FPInfo; // @synthesize FPInfo=_FPInfo;
@property (copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property (nonatomic) long long cardholderNameInputMethod; // @synthesize cardholderNameInputMethod=_cardholderNameInputMethod;
@property (copy, nonatomic) NSData *encryptedCardData; // @synthesize encryptedCardData=_encryptedCardData;
@property (copy, nonatomic) NSString *encryptionVersion; // @synthesize encryptionVersion=_encryptionVersion;
@property (copy, nonatomic) NSData *ephemeralPublicKey; // @synthesize ephemeralPublicKey=_ephemeralPublicKey;
@property (copy, nonatomic) NSString *expiration; // @synthesize expiration=_expiration;
@property (nonatomic) long long expirationInputMethod; // @synthesize expirationInputMethod=_expirationInputMethod;
@property (copy, nonatomic) NSString *hostApplicationIdentifier; // @synthesize hostApplicationIdentifier=_hostApplicationIdentifier;
@property (copy, nonatomic) NSString *hostApplicationVersion; // @synthesize hostApplicationVersion=_hostApplicationVersion;
@property (copy, nonatomic) NSString *issuerIdentifier; // @synthesize issuerIdentifier=_issuerIdentifier;
@property (copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property (copy, nonatomic) NSString *passOwnershipToken; // @synthesize passOwnershipToken=_passOwnershipToken;
@property (strong, nonatomic) PKPaymentCredential *paymentCredential; // @synthesize paymentCredential=_paymentCredential;
@property (copy, nonatomic) NSString *primaryAccountNumber; // @synthesize primaryAccountNumber=_primaryAccountNumber;
@property (nonatomic) long long primaryAccountNumberInputMethod; // @synthesize primaryAccountNumberInputMethod=_primaryAccountNumberInputMethod;
@property (copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property (copy, nonatomic) NSData *publicKeyHash; // @synthesize publicKeyHash=_publicKeyHash;
@property (copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property (readonly, nonatomic) long long source; // @synthesize source=_source;
@property (copy, nonatomic) NSData *wrappedKey; // @synthesize wrappedKey=_wrappedKey;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned long long)_requestHTTPMethod;
- (void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 certChain:(id)arg4 devSigned:(BOOL)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentCredential:(id)arg1;
- (id)initWithSource:(long long)arg1;
- (BOOL)requiresNonce;

@end

