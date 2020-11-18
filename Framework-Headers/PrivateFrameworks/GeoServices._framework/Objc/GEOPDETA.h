//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORouteTrafficDetail, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDETA : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    GEORouteTrafficDetail *_routeTrafficDetail;
    unsigned int _time;
    int _transportType;
    struct {
        unsigned int distance:1;
        unsigned int historicTravelTime:1;
        unsigned int time:1;
        unsigned int transportType:1;
    } _has;
}

@property (nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) BOOL hasHistoricTravelTime;
@property (readonly, nonatomic) BOOL hasRouteTrafficDetail;
@property (nonatomic) BOOL hasTime;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) unsigned int historicTravelTime; // @synthesize historicTravelTime=_historicTravelTime;
@property (strong, nonatomic) GEORouteTrafficDetail *routeTrafficDetail; // @synthesize routeTrafficDetail=_routeTrafficDetail;
@property (nonatomic) unsigned int time; // @synthesize time=_time;
@property (nonatomic) int transportType; // @synthesize transportType=_transportType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

