//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEODirectionsRequest, GEODirectionsResponse, GEOMapItemStorage, GEOTransitDecoderData, GEOTransitSuggestedRoute, NSData, NSMutableArray, NSString;

@interface GEOCompanionRouteDetails : PBCodable <NSCopying>
{
    CDStruct_82f37d05 _coordinates;
    CDStruct_9f2792e4 _trafficColorOffsets;
    CDStruct_9f2792e4 _trafficColors;
    GEOTransitDecoderData *_decoderData;
    GEOMapItemStorage *_destination;
    NSString *_destinationName;
    unsigned int _distance;
    unsigned int _historicalDuration;
    NSString *_name;
    GEOMapItemStorage *_origin;
    unsigned int _originalDuration;
    NSData *_originalRouteID;
    GEOTransitSuggestedRoute *_originalSuggestedRoute;
    GEODirectionsRequest *_request;
    GEODirectionsResponse *_response;
    NSMutableArray *_routeDescriptions;
    NSData *_routeID;
    NSMutableArray *_steps;
    NSString *_trafficDescription;
    int _transportType;
    BOOL _canNavigate;
    BOOL _showTransitSchedules;
    struct {
        unsigned int distance:1;
        unsigned int historicalDuration:1;
        unsigned int originalDuration:1;
        unsigned int transportType:1;
        unsigned int canNavigate:1;
        unsigned int showTransitSchedules:1;
    } _has;
}

@property (nonatomic) BOOL canNavigate; // @synthesize canNavigate=_canNavigate;
@property (readonly, nonatomic) double *coordinates;
@property (readonly, nonatomic) unsigned long long coordinatesCount;
@property (strong, nonatomic) GEOTransitDecoderData *decoderData; // @synthesize decoderData=_decoderData;
@property (strong, nonatomic) GEOMapItemStorage *destination; // @synthesize destination=_destination;
@property (strong, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property (nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property (nonatomic) BOOL hasCanNavigate;
@property (readonly, nonatomic) BOOL hasDecoderData;
@property (readonly, nonatomic) BOOL hasDestination;
@property (readonly, nonatomic) BOOL hasDestinationName;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) BOOL hasHistoricalDuration;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (nonatomic) BOOL hasOriginalDuration;
@property (readonly, nonatomic) BOOL hasOriginalRouteID;
@property (readonly, nonatomic) BOOL hasOriginalSuggestedRoute;
@property (readonly, nonatomic) BOOL hasRequest;
@property (readonly, nonatomic) BOOL hasResponse;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (nonatomic) BOOL hasShowTransitSchedules;
@property (readonly, nonatomic) BOOL hasTrafficDescription;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) unsigned int historicalDuration; // @synthesize historicalDuration=_historicalDuration;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) GEOMapItemStorage *origin; // @synthesize origin=_origin;
@property (nonatomic) unsigned int originalDuration; // @synthesize originalDuration=_originalDuration;
@property (strong, nonatomic) NSData *originalRouteID; // @synthesize originalRouteID=_originalRouteID;
@property (strong, nonatomic) GEOTransitSuggestedRoute *originalSuggestedRoute; // @synthesize originalSuggestedRoute=_originalSuggestedRoute;
@property (strong, nonatomic) GEODirectionsRequest *request; // @synthesize request=_request;
@property (strong, nonatomic) GEODirectionsResponse *response; // @synthesize response=_response;
@property (strong, nonatomic) NSMutableArray *routeDescriptions; // @synthesize routeDescriptions=_routeDescriptions;
@property (strong, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property (nonatomic) BOOL showTransitSchedules; // @synthesize showTransitSchedules=_showTransitSchedules;
@property (strong, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
@property (readonly, nonatomic) unsigned int *trafficColorOffsets;
@property (readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
@property (readonly, nonatomic) unsigned int *trafficColors;
@property (readonly, nonatomic) unsigned long long trafficColorsCount;
@property (strong, nonatomic) NSString *trafficDescription; // @synthesize trafficDescription=_trafficDescription;
@property (nonatomic) int transportType; // @synthesize transportType=_transportType;

+ (Class)routeDescriptionsType;
+ (Class)stepType;
+ (id)syntheticRouteDetailsWithOrigin:(id)arg1 destination:(id)arg2 transportType:(int)arg3 destinationName:(id)arg4;
- (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (void)addCoordinates:(double)arg1;
- (void)addRouteDescriptions:(id)arg1;
- (void)addStep:(id)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (void)clearCoordinates;
- (void)clearRouteDescriptions;
- (void)clearSteps;
- (void)clearTrafficColorOffsets;
- (void)clearTrafficColors;
- (double)coordinatesAtIndex:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithRoute:(id)arg1 destinationName:(id)arg2 stringFormatter:(id)arg3;
- (id)initWithRoute:(id)arg1 fallbackDestinationName:(id)arg2 stringFormatter:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSyntheticRoute;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)routeDescriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)routeDescriptionsCount;
- (void)setCoordinates:(double *)arg1 count:(unsigned long long)arg2;
- (void)setTrafficColorOffsets:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setTrafficColors:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (id)stepAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepIndexWithID:(unsigned long long)arg1;
- (id)stepWithID:(unsigned long long)arg1;
- (unsigned long long)stepsCount;
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (id)transportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
