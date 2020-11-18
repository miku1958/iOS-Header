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
    GEORouteTrafficDetail *_routeTrafficDetail;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    int _licensePlateRestrictionImpact;
    unsigned int _time;
    int _transportType;
    struct {
        unsigned int has_distance:1;
        unsigned int has_historicTravelTime:1;
        unsigned int has_licensePlateRestrictionImpact:1;
        unsigned int has_time:1;
        unsigned int has_transportType:1;
    } _flags;
}

@property (nonatomic) unsigned int distance;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) BOOL hasHistoricTravelTime;
@property (nonatomic) BOOL hasLicensePlateRestrictionImpact;
@property (readonly, nonatomic) BOOL hasRouteTrafficDetail;
@property (nonatomic) BOOL hasTime;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic) int licensePlateRestrictionImpact;
@property (strong, nonatomic) GEORouteTrafficDetail *routeTrafficDetail;
@property (nonatomic) unsigned int time;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsLicensePlateRestrictionImpact:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)licensePlateRestrictionImpactAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
