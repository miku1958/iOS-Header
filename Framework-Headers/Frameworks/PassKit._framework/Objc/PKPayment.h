//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSMutableDictionary, NSString, PKContact, PKPaymentToken, PKShippingMethod;

@interface PKPayment : NSObject <NSSecureCoding>
{
    PKPaymentToken *_token;
    PKContact *_billingContact;
    PKContact *_shippingContact;
    PKShippingMethod *_shippingMethod;
    NSData *_credential;
    NSMutableDictionary *_authKitAuthenticationResults;
    long long _biometricAuthorizationAttempts;
    NSString *_installmentAuthorizationToken;
}

@property (strong, nonatomic) NSMutableDictionary *authKitAuthenticationResults; // @synthesize authKitAuthenticationResults=_authKitAuthenticationResults;
@property (readonly, nonatomic) const void *billingAddress;
@property (strong, nonatomic) PKContact *billingContact; // @synthesize billingContact=_billingContact;
@property (nonatomic) long long biometricAuthorizationAttempts; // @synthesize biometricAuthorizationAttempts=_biometricAuthorizationAttempts;
@property (strong, nonatomic) NSData *credential; // @synthesize credential=_credential;
@property (copy, nonatomic) NSString *installmentAuthorizationToken; // @synthesize installmentAuthorizationToken=_installmentAuthorizationToken;
@property (readonly, nonatomic) const void *shippingAddress;
@property (strong, nonatomic) PKContact *shippingContact; // @synthesize shippingContact=_shippingContact;
@property (strong, nonatomic) PKShippingMethod *shippingMethod; // @synthesize shippingMethod=_shippingMethod;
@property (strong, nonatomic) PKPaymentToken *token; // @synthesize token=_token;

+ (id)paymentWithProtobuf:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (long long)version;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1;
- (id)protobuf;

@end

