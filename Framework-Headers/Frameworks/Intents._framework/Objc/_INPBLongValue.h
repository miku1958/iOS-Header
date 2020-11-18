//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBValueMetadata;

@interface _INPBLongValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    long long _value;
    _INPBValueMetadata *_valueMetadata;
    CDStruct_01ef6375 _has;
}

@property (nonatomic) BOOL hasValue;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) long long value; // @synthesize value=_value;
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

