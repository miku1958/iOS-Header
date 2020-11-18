//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL, PKPaymentMethod;

@interface PKPaymentToken : NSObject <NSSecureCoding>
{
    PKPaymentMethod *_paymentMethod;
    NSString *_paymentInstrumentName;
    NSString *_paymentNetwork;
    NSString *_transactionIdentifier;
    NSData *_paymentData;
    NSURL *_redeemURL;
}

@property (copy, nonatomic) NSData *paymentData; // @synthesize paymentData=_paymentData;
@property (copy, nonatomic) NSString *paymentInstrumentName; // @synthesize paymentInstrumentName=_paymentInstrumentName;
@property (strong, nonatomic) PKPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property (copy, nonatomic) NSString *paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
@property (strong, nonatomic) NSURL *redeemURL; // @synthesize redeemURL=_redeemURL;
@property (copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;

+ (id)paymentTokenWithProtobuf:(id)arg1;
+ (id)simulatedTokenForNetwork:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (long long)version;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)protobuf;

@end

