//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOCacheHit : PBCodable <NSCopying>
{
    unsigned int _bytes;
    unsigned int _count;
    int _requestorType;
    int _tileSourceType;
    struct {
        unsigned int has_bytes:1;
        unsigned int has_count:1;
        unsigned int has_requestorType:1;
        unsigned int has_tileSourceType:1;
    } _flags;
}

@property (nonatomic) unsigned int bytes;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasBytes;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasRequestorType;
@property (nonatomic) BOOL hasTileSourceType;
@property (nonatomic) int requestorType;
@property (nonatomic) int tileSourceType;

+ (BOOL)isValid:(id)arg1;
- (int)StringAsRequestorType:(id)arg1;
- (int)StringAsTileSourceType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestorTypeAsString:(int)arg1;
- (id)tileSourceTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

