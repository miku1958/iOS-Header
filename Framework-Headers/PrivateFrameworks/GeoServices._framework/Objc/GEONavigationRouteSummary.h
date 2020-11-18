//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOComposedWaypoint, NSString;

@interface GEONavigationRouteSummary : PBCodable <NSCopying>
{
    double _travelTime;
    GEOComposedWaypoint *_destination;
    NSString *_destinationName;
    GEOComposedWaypoint *_origin;
    int _transportType;
    struct {
        unsigned int travelTime:1;
        unsigned int transportType:1;
    } _has;
}

@property (strong, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property (strong, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property (readonly, nonatomic) BOOL hasDestination;
@property (readonly, nonatomic) BOOL hasDestinationName;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL hasTravelTime;
@property (strong, nonatomic) GEOComposedWaypoint *origin; // @synthesize origin=_origin;
@property (nonatomic) int transportType; // @synthesize transportType=_transportType;
@property (nonatomic) double travelTime; // @synthesize travelTime=_travelTime;

- (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithRoute:(id)arg1 destinationName:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setRoute:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

