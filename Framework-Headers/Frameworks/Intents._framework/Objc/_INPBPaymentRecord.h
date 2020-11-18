//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBContact, _INPBCurrencyAmount, _INPBPaymentMethodValue, _INPBString;

@interface _INPBPaymentRecord : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBCurrencyAmount *_currencyAmount;
    _INPBCurrencyAmount *_feeAmount;
    _INPBString *_note;
    _INPBContact *_payee;
    _INPBContact *_payer;
    _INPBPaymentMethodValue *_paymentMethod;
    int _status;
    CDStruct_47fe53f2 _has;
}

@property (strong, nonatomic) _INPBCurrencyAmount *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
@property (strong, nonatomic) _INPBCurrencyAmount *feeAmount; // @synthesize feeAmount=_feeAmount;
@property (readonly, nonatomic) BOOL hasCurrencyAmount;
@property (readonly, nonatomic) BOOL hasFeeAmount;
@property (readonly, nonatomic) BOOL hasNote;
@property (readonly, nonatomic) BOOL hasPayee;
@property (readonly, nonatomic) BOOL hasPayer;
@property (readonly, nonatomic) BOOL hasPaymentMethod;
@property (nonatomic) BOOL hasStatus;
@property (strong, nonatomic) _INPBString *note; // @synthesize note=_note;
@property (strong, nonatomic) _INPBContact *payee; // @synthesize payee=_payee;
@property (strong, nonatomic) _INPBContact *payer; // @synthesize payer=_payer;
@property (strong, nonatomic) _INPBPaymentMethodValue *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property (nonatomic) int status; // @synthesize status=_status;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)options;
- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

