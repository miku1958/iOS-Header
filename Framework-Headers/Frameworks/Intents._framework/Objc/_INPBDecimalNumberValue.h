//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBValueMetadata;

@interface _INPBDecimalNumberValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _mantissa;
    int _exponent;
    _INPBValueMetadata *_valueMetadata;
    BOOL _isNegative;
    struct {
        unsigned int mantissa:1;
        unsigned int exponent:1;
        unsigned int isNegative:1;
    } _has;
}

@property (nonatomic) int exponent; // @synthesize exponent=_exponent;
@property (nonatomic) BOOL hasExponent;
@property (nonatomic) BOOL hasIsNegative;
@property (nonatomic) BOOL hasMantissa;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (nonatomic) BOOL isNegative; // @synthesize isNegative=_isNegative;
@property (nonatomic) unsigned long long mantissa; // @synthesize mantissa=_mantissa;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;

+ (id)options;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
