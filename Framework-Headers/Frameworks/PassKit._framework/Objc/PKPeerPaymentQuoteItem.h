//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDecimalNumber, NSString;

@interface PKPeerPaymentQuoteItem : NSObject <NSSecureCoding>
{
    unsigned long long _type;
    NSDecimalNumber *_exchangeRate;
    NSDecimalNumber *_sendAmount;
    NSString *_sendAmountCurrency;
    NSDecimalNumber *_receiveAmount;
    NSString *_receiveAmountCurrency;
    NSDecimalNumber *_totalAmount;
    NSString *_totalAmountCurrency;
    NSDecimalNumber *_fees;
    NSString *_feesCurrency;
    NSString *_dpanIdentifier;
    NSString *_countryCode;
    NSArray *_supportedNetworks;
    NSString *_merchantIdentifier;
    unsigned long long _merchantCapabilities;
    NSData *_nonce;
}

@property (readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (readonly, copy, nonatomic) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
@property (readonly, copy, nonatomic) NSDecimalNumber *exchangeRate; // @synthesize exchangeRate=_exchangeRate;
@property (readonly, copy, nonatomic) NSDecimalNumber *fees; // @synthesize fees=_fees;
@property (readonly, copy, nonatomic) NSString *feesCurrency; // @synthesize feesCurrency=_feesCurrency;
@property (readonly, nonatomic) unsigned long long merchantCapabilities; // @synthesize merchantCapabilities=_merchantCapabilities;
@property (readonly, copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
@property (readonly, copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property (readonly, copy, nonatomic) NSDecimalNumber *receiveAmount; // @synthesize receiveAmount=_receiveAmount;
@property (readonly, copy, nonatomic) NSString *receiveAmountCurrency; // @synthesize receiveAmountCurrency=_receiveAmountCurrency;
@property (readonly, copy, nonatomic) NSDecimalNumber *sendAmount; // @synthesize sendAmount=_sendAmount;
@property (readonly, copy, nonatomic) NSString *sendAmountCurrency; // @synthesize sendAmountCurrency=_sendAmountCurrency;
@property (readonly, copy, nonatomic) NSArray *supportedNetworks; // @synthesize supportedNetworks=_supportedNetworks;
@property (readonly, copy, nonatomic) NSDecimalNumber *totalAmount; // @synthesize totalAmount=_totalAmount;
@property (readonly, copy, nonatomic) NSString *totalAmountCurrency; // @synthesize totalAmountCurrency=_totalAmountCurrency;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

+ (id)quoteItemWithDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

