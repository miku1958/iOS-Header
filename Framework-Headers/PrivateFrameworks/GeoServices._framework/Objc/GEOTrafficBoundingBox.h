//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOTrafficBoundingBox : PBCodable <NSCopying>
{
    double _east;
    double _north;
    double _south;
    double _west;
    struct {
        unsigned int has_east:1;
        unsigned int has_north:1;
        unsigned int has_south:1;
        unsigned int has_west:1;
    } _flags;
}

@property (nonatomic) double east;
@property (nonatomic) BOOL hasEast;
@property (nonatomic) BOOL hasNorth;
@property (nonatomic) BOOL hasSouth;
@property (nonatomic) BOOL hasWest;
@property (nonatomic) double north;
@property (nonatomic) double south;
@property (nonatomic) double west;

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

