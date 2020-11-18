//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSSet, NSString;

@interface PKAddPaymentPassRequestConfiguration : NSObject <NSSecureCoding>
{
    BOOL _requiresFelicaSecureElement;
    NSString *_encryptionScheme;
    long long _style;
    NSString *_cardholderName;
    NSString *_primaryAccountSuffix;
    NSArray *_cardDetails;
    NSString *_localizedDescription;
    NSString *_primaryAccountIdentifier;
    NSString *_paymentNetwork;
    NSSet *_productIdentifiers;
}

@property (copy, nonatomic) NSArray *cardDetails; // @synthesize cardDetails=_cardDetails;
@property (copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property (readonly, copy, nonatomic) NSString *encryptionScheme; // @synthesize encryptionScheme=_encryptionScheme;
@property (copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property (copy, nonatomic) NSString *paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
@property (copy, nonatomic) NSString *primaryAccountIdentifier; // @synthesize primaryAccountIdentifier=_primaryAccountIdentifier;
@property (copy, nonatomic) NSString *primaryAccountSuffix; // @synthesize primaryAccountSuffix=_primaryAccountSuffix;
@property (copy, nonatomic) NSSet *productIdentifiers; // @synthesize productIdentifiers=_productIdentifiers;
@property (nonatomic) BOOL requiresFelicaSecureElement; // @synthesize requiresFelicaSecureElement=_requiresFelicaSecureElement;
@property (nonatomic) long long style; // @synthesize style=_style;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_effectiveDetails;
- (id)_filterWebServices:(id)arg1 primaryAccountIdentifierRequired:(BOOL)arg2;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncryptionScheme:(id)arg1;

@end
