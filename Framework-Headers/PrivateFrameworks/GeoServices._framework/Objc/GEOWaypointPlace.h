//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOMapRegion, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOWaypointPlace : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_center;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_roadAccessPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_center:1;
        unsigned int read_mapRegion:1;
        unsigned int read_roadAccessPoints:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) GEOLatLng *center;
@property (readonly, nonatomic) BOOL hasCenter;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (strong, nonatomic) GEOMapRegion *mapRegion;
@property (strong, nonatomic) NSMutableArray *roadAccessPoints;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
+ (Class)roadAccessPointType;
- (void).cxx_destruct;
- (void)addRoadAccessPoint:(id)arg1;
- (void)clearRoadAccessPoints;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)roadAccessPointAtIndex:(unsigned long long)arg1;
- (unsigned long long)roadAccessPointsCount;
- (void)writeTo:(id)arg1;

@end

