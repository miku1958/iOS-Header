//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class CNContact, NSString, PKDisbursementVoucher, PKPaymentPass, PKRemotePaymentInstrument, PKSecureElementPass;

@interface PKPaymentMethod : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _usePeerPaymentBalance;
    NSString *_displayName;
    NSString *_network;
    unsigned long long _type;
    PKSecureElementPass *_secureElementPass;
    CNContact *_billingAddress;
    PKRemotePaymentInstrument *_remoteInstrument;
    NSString *_peerPaymentQuoteIdentifier;
    PKDisbursementVoucher *_disbursementVoucher;
    NSString *_bindToken;
}

@property (copy, nonatomic) CNContact *billingAddress; // @synthesize billingAddress=_billingAddress;
@property (copy, nonatomic) NSString *bindToken; // @synthesize bindToken=_bindToken;
@property (strong, nonatomic) PKDisbursementVoucher *disbursementVoucher; // @synthesize disbursementVoucher=_disbursementVoucher;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (copy, nonatomic) NSString *network; // @synthesize network=_network;
@property (copy, nonatomic) PKPaymentPass *paymentPass;
@property (copy, nonatomic) NSString *peerPaymentQuoteIdentifier; // @synthesize peerPaymentQuoteIdentifier=_peerPaymentQuoteIdentifier;
@property (strong, nonatomic) PKRemotePaymentInstrument *remoteInstrument; // @synthesize remoteInstrument=_remoteInstrument;
@property (copy, nonatomic) PKSecureElementPass *secureElementPass; // @synthesize secureElementPass=_secureElementPass;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;
@property (nonatomic) BOOL usePeerPaymentBalance; // @synthesize usePeerPaymentBalance=_usePeerPaymentBalance;

+ (id)paymentMethodWithProtobuf:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (long long)version;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBindToken:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisbursementVoucher:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 obfuscateNetworks:(BOOL)arg2;
- (id)initWithPaymentPass:(id)arg1 paymentApplication:(id)arg2 obfuscateNetworks:(BOOL)arg3;
- (id)initWithPeerPaymentQuote:(id)arg1;
- (id)initWithRemotePaymentInstrument:(id)arg1;
- (id)initWithRemotePaymentInstrument:(id)arg1 paymentApplication:(id)arg2;
- (id)protobuf;

@end

