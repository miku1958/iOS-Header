//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBBillPayeeValue, _INPBCurrencyAmountValue, _INPBDateTime, _INPBValueMetadata;

@interface _INPBBillDetailsValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBCurrencyAmountValue *_amountDue;
    _INPBBillPayeeValue *_billPayee;
    int _billType;
    _INPBDateTime *_dueDate;
    _INPBCurrencyAmountValue *_lateFee;
    _INPBCurrencyAmountValue *_minimumDue;
    _INPBDateTime *_paymentDate;
    int _status;
    _INPBValueMetadata *_valueMetadata;
    CDStruct_c8e9def3 _has;
}

@property (strong, nonatomic) _INPBCurrencyAmountValue *amountDue; // @synthesize amountDue=_amountDue;
@property (strong, nonatomic) _INPBBillPayeeValue *billPayee; // @synthesize billPayee=_billPayee;
@property (nonatomic) int billType; // @synthesize billType=_billType;
@property (strong, nonatomic) _INPBDateTime *dueDate; // @synthesize dueDate=_dueDate;
@property (readonly, nonatomic) BOOL hasAmountDue;
@property (readonly, nonatomic) BOOL hasBillPayee;
@property (nonatomic) BOOL hasBillType;
@property (readonly, nonatomic) BOOL hasDueDate;
@property (readonly, nonatomic) BOOL hasLateFee;
@property (readonly, nonatomic) BOOL hasMinimumDue;
@property (readonly, nonatomic) BOOL hasPaymentDate;
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (strong, nonatomic) _INPBCurrencyAmountValue *lateFee; // @synthesize lateFee=_lateFee;
@property (strong, nonatomic) _INPBCurrencyAmountValue *minimumDue; // @synthesize minimumDue=_minimumDue;
@property (strong, nonatomic) _INPBDateTime *paymentDate; // @synthesize paymentDate=_paymentDate;
@property (nonatomic) int status; // @synthesize status=_status;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;

+ (id)options;
- (void).cxx_destruct;
- (int)StringAsBillType:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)billTypeAsString:(int)arg1;
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

