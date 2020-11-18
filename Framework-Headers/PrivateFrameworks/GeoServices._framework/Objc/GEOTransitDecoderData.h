//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOTransitDecoderData : PBCodable <NSCopying>
{
    NSMutableArray *_accessPoints;
    NSMutableArray *_artworks;
    NSMutableArray *_brands;
    NSMutableArray *_halls;
    NSMutableArray *_lines;
    NSMutableArray *_stations;
    NSMutableArray *_steps;
    NSMutableArray *_stops;
    NSMutableArray *_systems;
    NSMutableArray *_transitIncidentMessages;
    NSMutableArray *_transitIncidents;
    NSMutableArray *_walkings;
    NSMutableArray *_zilchPoints;
}

@property (strong, nonatomic) NSMutableArray *accessPoints; // @synthesize accessPoints=_accessPoints;
@property (strong, nonatomic) NSMutableArray *artworks; // @synthesize artworks=_artworks;
@property (strong, nonatomic) NSMutableArray *brands; // @synthesize brands=_brands;
@property (strong, nonatomic) NSMutableArray *halls; // @synthesize halls=_halls;
@property (strong, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
@property (strong, nonatomic) NSMutableArray *stations; // @synthesize stations=_stations;
@property (strong, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
@property (strong, nonatomic) NSMutableArray *stops; // @synthesize stops=_stops;
@property (strong, nonatomic) NSMutableArray *systems; // @synthesize systems=_systems;
@property (strong, nonatomic) NSMutableArray *transitIncidentMessages; // @synthesize transitIncidentMessages=_transitIncidentMessages;
@property (strong, nonatomic) NSMutableArray *transitIncidents; // @synthesize transitIncidents=_transitIncidents;
@property (strong, nonatomic) NSMutableArray *walkings; // @synthesize walkings=_walkings;
@property (strong, nonatomic) NSMutableArray *zilchPoints; // @synthesize zilchPoints=_zilchPoints;

- (id)accessPointAtIndex:(unsigned long long)arg1;
- (unsigned long long)accessPointsCount;
- (void)addAccessPoint:(id)arg1;
- (void)addArtwork:(id)arg1;
- (void)addBrand:(id)arg1;
- (void)addHall:(id)arg1;
- (void)addLine:(id)arg1;
- (void)addStation:(id)arg1;
- (void)addStep:(id)arg1;
- (void)addStop:(id)arg1;
- (void)addSystem:(id)arg1;
- (void)addTransitIncident:(id)arg1;
- (void)addTransitIncidentMessage:(id)arg1;
- (void)addWalking:(id)arg1;
- (void)addZilchPoints:(id)arg1;
- (id)artworkAtIndex:(unsigned long long)arg1;
- (id)artworkFromIndices:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)artworksCount;
- (id)brandAtIndex:(unsigned long long)arg1;
- (unsigned long long)brandsCount;
- (void)clearAccessPoints;
- (void)clearArtworks;
- (void)clearBrands;
- (void)clearHalls;
- (void)clearLines;
- (void)clearStations;
- (void)clearSteps;
- (void)clearStops;
- (void)clearSystems;
- (void)clearTransitIncidentMessages;
- (void)clearTransitIncidents;
- (void)clearWalkings;
- (void)clearZilchPoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)hallAtIndex:(unsigned long long)arg1;
- (unsigned long long)hallsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)lineAtIndex:(unsigned long long)arg1;
- (unsigned long long)linesCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)stationAtIndex:(unsigned long long)arg1;
- (unsigned long long)stationsCount;
- (id)stepAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepsCount;
- (id)stopAtIndex:(unsigned long long)arg1;
- (unsigned long long)stopsCount;
- (id)systemAtIndex:(unsigned long long)arg1;
- (unsigned long long)systemsCount;
- (id)transitIncidentAtIndex:(unsigned long long)arg1;
- (id)transitIncidentMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)transitIncidentMessagesCount;
- (unsigned long long)transitIncidentsCount;
- (id)walkingAtIndex:(unsigned long long)arg1;
- (unsigned long long)walkingsCount;
- (void)writeTo:(id)arg1;
- (id)zilchPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)zilchPointsCount;

@end

