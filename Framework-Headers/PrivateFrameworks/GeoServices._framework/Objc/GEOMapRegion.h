//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOMapRegion : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _eastLng;
    double _northLat;
    double _southLat;
    NSMutableArray *_vertexs;
    double _westLng;
    int _mapRegionSourceType;
    struct {
        unsigned int has_eastLng:1;
        unsigned int has_northLat:1;
        unsigned int has_southLat:1;
        unsigned int has_westLng:1;
        unsigned int has_mapRegionSourceType:1;
    } _flags;
}

@property (readonly, nonatomic) double centerLat;
@property (readonly, nonatomic) double centerLng;
@property (nonatomic) double eastLng;
@property (nonatomic) BOOL hasEastLng;
@property (nonatomic) BOOL hasMapRegionSourceType;
@property (nonatomic) BOOL hasNorthLat;
@property (readonly, nonatomic) BOOL hasRectangleVertices;
@property (nonatomic) BOOL hasSouthLat;
@property (nonatomic) BOOL hasWestLng;
@property (nonatomic) int mapRegionSourceType;
@property (nonatomic) double northLat;
@property (nonatomic) double southLat;
@property (readonly, nonatomic) double spanLat;
@property (readonly, nonatomic) double spanLng;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) NSMutableArray *vertexs;
@property (nonatomic) double westLng;

+ (id)_geo_mapRegionForGEOCoordinateRegion:(CDStruct_90e2a262)arg1;
+ (BOOL)isValid:(id)arg1;
+ (Class)vertexType;
- (void).cxx_destruct;
- (int)StringAsMapRegionSourceType:(id)arg1;
- (void)addVertex:(id)arg1;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)clearVertexs;
- (BOOL)containsCoordinate:(CDStruct_c3b9c2ee)arg1;
- (BOOL)containsCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
- (BOOL)containsMapRect:(CDStruct_90e2a262)arg1;
- (BOOL)containsRegion:(id)arg1;
- (id)coordinates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithCoordinateRegion:(CDStruct_90e2a262)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithMapRect:(CDStruct_90e2a262)arg1;
- (id)initWithRadialPlace:(id)arg1;
- (id)intersectionsOnPolyline:(id)arg1;
- (BOOL)intersectsMapRect:(CDStruct_90e2a262)arg1;
- (BOOL)intersectsRegion:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (id)jsonRepresentation;
- (id)mapRegionSourceTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setMapRect:(CDStruct_90e2a262)arg1;
- (id)vertexAtIndex:(unsigned long long)arg1;
- (unsigned long long)vertexsCount;
- (void)writeTo:(id)arg1;

@end

