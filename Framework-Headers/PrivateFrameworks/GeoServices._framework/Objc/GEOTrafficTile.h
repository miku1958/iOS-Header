//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOTrafficTile : PBCodable <NSCopying>
{
    NSMutableArray *_trafficIncidents;
    NSMutableArray *_trafficSegments;
    NSData *_vertices;
}

@property (readonly, nonatomic) BOOL hasVertices;
@property (strong, nonatomic) NSMutableArray *trafficIncidents; // @synthesize trafficIncidents=_trafficIncidents;
@property (strong, nonatomic) NSMutableArray *trafficSegments; // @synthesize trafficSegments=_trafficSegments;
@property (strong, nonatomic) NSData *vertices; // @synthesize vertices=_vertices;

- (void)addTrafficIncident:(id)arg1;
- (void)addTrafficSegment:(id)arg1;
- (void)clearTrafficIncidents;
- (void)clearTrafficSegments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDStruct_912cb5d2 *)createUnpackedVerticesWithGutterSize:(long long)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)trafficIncidentAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficIncidentsCount;
- (id)trafficSegmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficSegmentsCount;
- (void)writeTo:(id)arg1;

@end

