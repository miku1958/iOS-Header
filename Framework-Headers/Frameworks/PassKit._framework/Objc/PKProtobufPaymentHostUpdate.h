//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSString, PKProtobufPaymentMethod, PKProtobufShippingMethod;

@interface PKProtobufPaymentHostUpdate : PBCodable <NSCopying>
{
    PKProtobufPaymentMethod *_paymentMethod;
    NSString *_remotePaymentRequestIdentifier;
    NSData *_shippingContact;
    PKProtobufShippingMethod *_shippingMethod;
}

@property (readonly, nonatomic) BOOL hasPaymentMethod;
@property (readonly, nonatomic) BOOL hasRemotePaymentRequestIdentifier;
@property (readonly, nonatomic) BOOL hasShippingContact;
@property (readonly, nonatomic) BOOL hasShippingMethod;
@property (strong, nonatomic) PKProtobufPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property (strong, nonatomic) NSString *remotePaymentRequestIdentifier; // @synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier;
@property (strong, nonatomic) NSData *shippingContact; // @synthesize shippingContact=_shippingContact;
@property (strong, nonatomic) PKProtobufShippingMethod *shippingMethod; // @synthesize shippingMethod=_shippingMethod;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

