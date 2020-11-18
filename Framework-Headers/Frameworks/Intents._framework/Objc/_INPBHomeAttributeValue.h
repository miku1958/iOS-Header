//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBHomeAttributeValue-Protocol.h>

@class NSString, _INPBHomeAttributeRange;

@interface _INPBHomeAttributeValue : PBCodable <_INPBHomeAttributeValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int booleanValue:1;
        unsigned int doubleValue:1;
        unsigned int integerValue:1;
        unsigned int limitValue:1;
        unsigned int unit:1;
        unsigned int valueType:1;
    } _has;
    BOOL _booleanValue;
    int _limitValue;
    int _unit;
    int _valueType;
    double _doubleValue;
    long long _integerValue;
    _INPBHomeAttributeRange *_rangeValue;
    NSString *_stringValue;
}

@property (nonatomic) BOOL booleanValue; // @synthesize booleanValue=_booleanValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property (nonatomic) BOOL hasBooleanValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasIntegerValue;
@property (nonatomic) BOOL hasLimitValue;
@property (readonly, nonatomic) BOOL hasRangeValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) BOOL hasUnit;
@property (nonatomic) BOOL hasValueType;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long integerValue; // @synthesize integerValue=_integerValue;
@property (nonatomic) int limitValue; // @synthesize limitValue=_limitValue;
@property (strong, nonatomic) _INPBHomeAttributeRange *rangeValue; // @synthesize rangeValue=_rangeValue;
@property (copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property (readonly) Class superclass;
@property (nonatomic) int unit; // @synthesize unit=_unit;
@property (nonatomic) int valueType; // @synthesize valueType=_valueType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsLimitValue:(id)arg1;
- (int)StringAsUnit:(id)arg1;
- (int)StringAsValueType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)limitValueAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)unitAsString:(int)arg1;
- (id)valueTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
