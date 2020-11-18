//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoCompanionMigratedResponse : PBCodable <NSCopying>
{
    NSData *_errorData;
    NSData *_paymentWebServiceContextData;
    NSData *_peerPaymentAccountData;
    NSData *_peerPaymentWebServiceContextData;
    BOOL _pending;
    BOOL _success;
    CDStruct_5ee4970e _has;
}

@property (strong, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (readonly, nonatomic) BOOL hasPaymentWebServiceContextData;
@property (readonly, nonatomic) BOOL hasPeerPaymentAccountData;
@property (readonly, nonatomic) BOOL hasPeerPaymentWebServiceContextData;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL hasSuccess;
@property (strong, nonatomic) NSData *paymentWebServiceContextData; // @synthesize paymentWebServiceContextData=_paymentWebServiceContextData;
@property (strong, nonatomic) NSData *peerPaymentAccountData; // @synthesize peerPaymentAccountData=_peerPaymentAccountData;
@property (strong, nonatomic) NSData *peerPaymentWebServiceContextData; // @synthesize peerPaymentWebServiceContextData=_peerPaymentWebServiceContextData;
@property (nonatomic) BOOL pending; // @synthesize pending=_pending;
@property (nonatomic) BOOL success; // @synthesize success=_success;

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

