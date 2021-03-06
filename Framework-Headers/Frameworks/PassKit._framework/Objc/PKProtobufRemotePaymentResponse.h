//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString, PKProtobufPayment;

@interface PKProtobufRemotePaymentResponse : PBCodable <NSCopying>
{
    PKProtobufPayment *_payment;
    NSString *_remotePaymentRequestIdentifier;
}

@property (readonly, nonatomic) BOOL hasPayment;
@property (readonly, nonatomic) BOOL hasRemotePaymentRequestIdentifier;
@property (strong, nonatomic) PKProtobufPayment *payment; // @synthesize payment=_payment;
@property (strong, nonatomic) NSString *remotePaymentRequestIdentifier; // @synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier;

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

