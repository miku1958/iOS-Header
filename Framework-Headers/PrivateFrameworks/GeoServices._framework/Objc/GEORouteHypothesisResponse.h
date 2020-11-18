//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEODirectionsResponse, GEOETAResponse;

@interface GEORouteHypothesisResponse : PBCodable <NSCopying>
{
    double _updatedTimeStamp;
    GEODirectionsResponse *_directionsResponse;
    GEOETAResponse *_etaResponse;
    struct {
        unsigned int updatedTimeStamp:1;
    } _has;
}

@property (strong, nonatomic) GEODirectionsResponse *directionsResponse; // @synthesize directionsResponse=_directionsResponse;
@property (strong, nonatomic) GEOETAResponse *etaResponse; // @synthesize etaResponse=_etaResponse;
@property (readonly, nonatomic) BOOL hasDirectionsResponse;
@property (readonly, nonatomic) BOOL hasEtaResponse;
@property (nonatomic) BOOL hasUpdatedTimeStamp;
@property (nonatomic) double updatedTimeStamp; // @synthesize updatedTimeStamp=_updatedTimeStamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

