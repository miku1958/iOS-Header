//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandalonePaymentCredential, NPKProtoStandalonePaymentPass, NSString;

@interface NPKProtoStandalonePaymentRemoteCredential : PBCodable <NSCopying>
{
    NSString *_identifier;
    NSString *_passURL;
    NPKProtoStandalonePaymentCredential *_paymentCredential;
    NPKProtoStandalonePaymentPass *_paymentPass;
    NSString *_productIdentifier;
    unsigned int _rank;
    NSString *_statusDescription;
    NSString *_summaryMetadataDescription;
    struct {
        unsigned int rank:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasPassURL;
@property (readonly, nonatomic) BOOL hasPaymentPass;
@property (readonly, nonatomic) BOOL hasProductIdentifier;
@property (nonatomic) BOOL hasRank;
@property (readonly, nonatomic) BOOL hasStatusDescription;
@property (readonly, nonatomic) BOOL hasSummaryMetadataDescription;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSString *passURL; // @synthesize passURL=_passURL;
@property (strong, nonatomic) NPKProtoStandalonePaymentCredential *paymentCredential; // @synthesize paymentCredential=_paymentCredential;
@property (strong, nonatomic) NPKProtoStandalonePaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property (strong, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property (nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property (strong, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
@property (strong, nonatomic) NSString *summaryMetadataDescription; // @synthesize summaryMetadataDescription=_summaryMetadataDescription;

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
