//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPaymentAmountValue-Protocol.h>

@class NSString, _INPBCurrencyAmountValue;

@interface _INPBPaymentAmountValue : PBCodable <_INPBPaymentAmountValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int amountType:1;
    } _has;
    int _amountType;
    _INPBCurrencyAmountValue *_value;
}

@property (nonatomic) int amountType; // @synthesize amountType=_amountType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAmountType;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) _INPBCurrencyAmountValue *value; // @synthesize value=_value;

- (void).cxx_destruct;
- (int)StringAsAmountType:(id)arg1;
- (id)amountTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

