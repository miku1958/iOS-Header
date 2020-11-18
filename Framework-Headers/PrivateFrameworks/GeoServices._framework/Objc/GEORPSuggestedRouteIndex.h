//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPSuggestedRouteIndex : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _clusteredRouteRideSelections;
    unsigned int _directionsResponseIndex;
    unsigned int _directionsResponseSuggestedRoutesIndex;
    struct {
        unsigned int directionsResponseIndex:1;
        unsigned int directionsResponseSuggestedRoutesIndex:1;
    } _has;
}

@property (readonly, nonatomic) unsigned int *clusteredRouteRideSelections;
@property (readonly, nonatomic) unsigned long long clusteredRouteRideSelectionsCount;
@property (nonatomic) unsigned int directionsResponseIndex; // @synthesize directionsResponseIndex=_directionsResponseIndex;
@property (nonatomic) unsigned int directionsResponseSuggestedRoutesIndex; // @synthesize directionsResponseSuggestedRoutesIndex=_directionsResponseSuggestedRoutesIndex;
@property (nonatomic) BOOL hasDirectionsResponseIndex;
@property (nonatomic) BOOL hasDirectionsResponseSuggestedRoutesIndex;

- (void)addClusteredRouteRideSelections:(unsigned int)arg1;
- (void)clearClusteredRouteRideSelections;
- (unsigned int)clusteredRouteRideSelectionsAtIndex:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setClusteredRouteRideSelections:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

