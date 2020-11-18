//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCurrencyAmountValue-Protocol.h>

@class NSString, _INPBDecimalNumberValue, _INPBValueMetadata;

@interface _INPBCurrencyAmountValue : PBCodable <_INPBCurrencyAmountValue, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBDecimalNumberValue *_amount;
    NSString *_currencyCode;
    _INPBValueMetadata *_valueMetadata;
}

@property (strong, nonatomic) _INPBDecimalNumberValue *amount; // @synthesize amount=_amount;
@property (copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAmount;
@property (readonly, nonatomic) BOOL hasCurrencyCode;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

