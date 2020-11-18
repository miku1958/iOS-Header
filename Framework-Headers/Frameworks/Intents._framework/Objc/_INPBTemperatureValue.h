//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBValueMetadata;

@interface _INPBTemperatureValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _magnitude;
    int _unit;
    _INPBValueMetadata *_valueMetadata;
    CDStruct_74078a21 _has;
}

@property (nonatomic) BOOL hasMagnitude;
@property (nonatomic) BOOL hasUnit;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (nonatomic) double magnitude; // @synthesize magnitude=_magnitude;
@property (nonatomic) int unit; // @synthesize unit=_unit;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;

+ (id)options;
- (void).cxx_destruct;
- (int)StringAsUnit:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)unitAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
