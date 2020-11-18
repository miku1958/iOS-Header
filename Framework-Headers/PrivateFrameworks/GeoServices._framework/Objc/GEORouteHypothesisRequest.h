//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapItemStorage;

@interface GEORouteHypothesisRequest : PBRequest <NSCopying>
{
    double _arrivalDate;
    double _expirationDate;
    GEOMapItemStorage *_destinationLocation;
    int _transportType;
    struct {
        unsigned int arrivalDate:1;
        unsigned int expirationDate:1;
        unsigned int transportType:1;
    } _has;
}

@property (nonatomic) double arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property (strong, nonatomic) GEOMapItemStorage *destinationLocation; // @synthesize destinationLocation=_destinationLocation;
@property (nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property (nonatomic) BOOL hasArrivalDate;
@property (readonly, nonatomic) BOOL hasDestinationLocation;
@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType; // @synthesize transportType=_transportType;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
