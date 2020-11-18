//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOMapMatchRequest : PBRequest <NSCopying>
{
    double _searchThreshold;
    NSMutableArray *_locations;
    NSMutableArray *_waypoints;
    struct {
        unsigned int searchThreshold:1;
    } _has;
}

@property (nonatomic) BOOL hasSearchThreshold;
@property (strong, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property (nonatomic) double searchThreshold; // @synthesize searchThreshold=_searchThreshold;
@property (strong, nonatomic) NSMutableArray *waypoints; // @synthesize waypoints=_waypoints;

- (void)addLocation:(id)arg1;
- (void)addWaypoint:(id)arg1;
- (void)clearLocations;
- (void)clearWaypoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)locationAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)waypointAtIndex:(unsigned long long)arg1;
- (unsigned long long)waypointsCount;
- (void)writeTo:(id)arg1;

@end

