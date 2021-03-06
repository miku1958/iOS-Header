//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTouristInfo : PBCodable <NSCopying>
{
    double _fetchTimestamp;
    BOOL _isTourist;
    struct {
        unsigned int has_fetchTimestamp:1;
        unsigned int has_isTourist:1;
    } _flags;
}

@property (nonatomic) double fetchTimestamp;
@property (nonatomic) BOOL hasFetchTimestamp;
@property (nonatomic) BOOL hasIsTourist;
@property (nonatomic) BOOL isTourist;

+ (BOOL)isValid:(id)arg1;
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
- (void)writeTo:(id)arg1;

@end

