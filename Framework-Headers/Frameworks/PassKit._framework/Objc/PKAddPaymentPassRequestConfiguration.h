//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKAddPaymentPassRequestConfiguration : NSObject <NSSecureCoding>
{
    NSString *_encryptionScheme;
    NSString *_cardholderName;
    NSString *_primaryAccountSuffix;
    NSString *_localizedDescription;
    NSString *_primaryAccountIdentifier;
    NSString *_paymentNetwork;
}

@property (copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property (readonly, copy, nonatomic) NSString *encryptionScheme; // @synthesize encryptionScheme=_encryptionScheme;
@property (copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property (copy, nonatomic) NSString *paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
@property (copy, nonatomic) NSString *primaryAccountIdentifier; // @synthesize primaryAccountIdentifier=_primaryAccountIdentifier;
@property (copy, nonatomic) NSString *primaryAccountSuffix; // @synthesize primaryAccountSuffix=_primaryAccountSuffix;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncryptionScheme:(id)arg1;

@end
