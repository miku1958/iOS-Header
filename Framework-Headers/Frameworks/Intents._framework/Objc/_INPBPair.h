//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPair-Protocol.h>

@class NSArray, NSString;

@interface _INPBPair : PBCodable <_INPBPair, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int repeated:1;
    } _has;
    BOOL _repeated;
    NSString *_key;
    NSArray *_pairCurrencyAmountValues;
    NSArray *_pairCustomObjects;
    NSArray *_pairDataStrings;
    NSArray *_pairDataValues;
    NSArray *_pairDistanceValues;
    NSArray *_pairDoubleValues;
    NSArray *_pairImageValues;
    NSArray *_pairIntegerValues;
    NSArray *_pairLocationValues;
    NSArray *_pairPaymentMethodValues;
    NSArray *_pairPersonValues;
    NSArray *_pairStringValues;
    NSArray *_pairTemperatureValues;
    NSArray *_pairUrlValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasRepeated;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *key; // @synthesize key=_key;
@property (copy, nonatomic) NSArray *pairCurrencyAmountValues; // @synthesize pairCurrencyAmountValues=_pairCurrencyAmountValues;
@property (readonly, nonatomic) unsigned long long pairCurrencyAmountValuesCount;
@property (copy, nonatomic) NSArray *pairCustomObjects; // @synthesize pairCustomObjects=_pairCustomObjects;
@property (readonly, nonatomic) unsigned long long pairCustomObjectsCount;
@property (copy, nonatomic) NSArray *pairDataStrings; // @synthesize pairDataStrings=_pairDataStrings;
@property (readonly, nonatomic) unsigned long long pairDataStringsCount;
@property (copy, nonatomic) NSArray *pairDataValues; // @synthesize pairDataValues=_pairDataValues;
@property (readonly, nonatomic) unsigned long long pairDataValuesCount;
@property (copy, nonatomic) NSArray *pairDistanceValues; // @synthesize pairDistanceValues=_pairDistanceValues;
@property (readonly, nonatomic) unsigned long long pairDistanceValuesCount;
@property (copy, nonatomic) NSArray *pairDoubleValues; // @synthesize pairDoubleValues=_pairDoubleValues;
@property (readonly, nonatomic) unsigned long long pairDoubleValuesCount;
@property (copy, nonatomic) NSArray *pairImageValues; // @synthesize pairImageValues=_pairImageValues;
@property (readonly, nonatomic) unsigned long long pairImageValuesCount;
@property (copy, nonatomic) NSArray *pairIntegerValues; // @synthesize pairIntegerValues=_pairIntegerValues;
@property (readonly, nonatomic) unsigned long long pairIntegerValuesCount;
@property (copy, nonatomic) NSArray *pairLocationValues; // @synthesize pairLocationValues=_pairLocationValues;
@property (readonly, nonatomic) unsigned long long pairLocationValuesCount;
@property (copy, nonatomic) NSArray *pairPaymentMethodValues; // @synthesize pairPaymentMethodValues=_pairPaymentMethodValues;
@property (readonly, nonatomic) unsigned long long pairPaymentMethodValuesCount;
@property (copy, nonatomic) NSArray *pairPersonValues; // @synthesize pairPersonValues=_pairPersonValues;
@property (readonly, nonatomic) unsigned long long pairPersonValuesCount;
@property (copy, nonatomic) NSArray *pairStringValues; // @synthesize pairStringValues=_pairStringValues;
@property (readonly, nonatomic) unsigned long long pairStringValuesCount;
@property (copy, nonatomic) NSArray *pairTemperatureValues; // @synthesize pairTemperatureValues=_pairTemperatureValues;
@property (readonly, nonatomic) unsigned long long pairTemperatureValuesCount;
@property (copy, nonatomic) NSArray *pairUrlValues; // @synthesize pairUrlValues=_pairUrlValues;
@property (readonly, nonatomic) unsigned long long pairUrlValuesCount;
@property (nonatomic) BOOL repeated; // @synthesize repeated=_repeated;
@property (readonly) Class superclass;

+ (Class)pairCurrencyAmountValueType;
+ (Class)pairCustomObjectType;
+ (Class)pairDataStringType;
+ (Class)pairDataValueType;
+ (Class)pairDistanceValueType;
+ (Class)pairDoubleValueType;
+ (Class)pairImageValueType;
+ (Class)pairIntegerValueType;
+ (Class)pairLocationValueType;
+ (Class)pairPaymentMethodValueType;
+ (Class)pairPersonValueType;
+ (Class)pairStringValueType;
+ (Class)pairTemperatureValueType;
+ (Class)pairUrlValueType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addPairCurrencyAmountValue:(id)arg1;
- (void)addPairCustomObject:(id)arg1;
- (void)addPairDataString:(id)arg1;
- (void)addPairDataValue:(id)arg1;
- (void)addPairDistanceValue:(id)arg1;
- (void)addPairDoubleValue:(id)arg1;
- (void)addPairImageValue:(id)arg1;
- (void)addPairIntegerValue:(id)arg1;
- (void)addPairLocationValue:(id)arg1;
- (void)addPairPaymentMethodValue:(id)arg1;
- (void)addPairPersonValue:(id)arg1;
- (void)addPairStringValue:(id)arg1;
- (void)addPairTemperatureValue:(id)arg1;
- (void)addPairUrlValue:(id)arg1;
- (void)clearPairCurrencyAmountValues;
- (void)clearPairCustomObjects;
- (void)clearPairDataStrings;
- (void)clearPairDataValues;
- (void)clearPairDistanceValues;
- (void)clearPairDoubleValues;
- (void)clearPairImageValues;
- (void)clearPairIntegerValues;
- (void)clearPairLocationValues;
- (void)clearPairPaymentMethodValues;
- (void)clearPairPersonValues;
- (void)clearPairStringValues;
- (void)clearPairTemperatureValues;
- (void)clearPairUrlValues;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)pairCurrencyAmountValueAtIndex:(unsigned long long)arg1;
- (id)pairCustomObjectAtIndex:(unsigned long long)arg1;
- (id)pairDataStringAtIndex:(unsigned long long)arg1;
- (id)pairDataValueAtIndex:(unsigned long long)arg1;
- (id)pairDistanceValueAtIndex:(unsigned long long)arg1;
- (id)pairDoubleValueAtIndex:(unsigned long long)arg1;
- (id)pairImageValueAtIndex:(unsigned long long)arg1;
- (id)pairIntegerValueAtIndex:(unsigned long long)arg1;
- (id)pairLocationValueAtIndex:(unsigned long long)arg1;
- (id)pairPaymentMethodValueAtIndex:(unsigned long long)arg1;
- (id)pairPersonValueAtIndex:(unsigned long long)arg1;
- (id)pairStringValueAtIndex:(unsigned long long)arg1;
- (id)pairTemperatureValueAtIndex:(unsigned long long)arg1;
- (id)pairUrlValueAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

