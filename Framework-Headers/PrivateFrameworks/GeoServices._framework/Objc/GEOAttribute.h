//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOAttribute : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _key;
    unsigned int _value;
    CDStruct_a4cc0a70 _flags;
}

@property (nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) int key;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int value;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsKey:(id)arg1;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)keyAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

