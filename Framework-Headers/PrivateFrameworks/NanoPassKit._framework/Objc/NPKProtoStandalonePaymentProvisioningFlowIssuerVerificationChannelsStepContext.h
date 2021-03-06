//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandalonePaymentPass, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationChannelsStepContext : PBCodable <NSCopying>
{
    NPKProtoStandalonePaymentPass *_paymentPass;
    NSMutableArray *_verificationChannels;
}

@property (readonly, nonatomic) BOOL hasPaymentPass;
@property (strong, nonatomic) NPKProtoStandalonePaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property (strong, nonatomic) NSMutableArray *verificationChannels; // @synthesize verificationChannels=_verificationChannels;

+ (Class)verificationChannelsType;
- (void).cxx_destruct;
- (void)addVerificationChannels:(id)arg1;
- (void)clearVerificationChannels;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)verificationChannelsAtIndex:(unsigned long long)arg1;
- (unsigned long long)verificationChannelsCount;
- (void)writeTo:(id)arg1;

@end

