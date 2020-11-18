//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdditionalEnabledMarkets, GEOAutomobileOptions, GEOClientCapabilities, GEOCommonOptions, GEOLocation, GEOTFTrafficSnapshot, GEOTransitOptions, GEOWalkingOptions, GEOWaypoint, GEOWaypointTyped, NSData, NSMutableArray;

@interface GEOETARequest : PBRequest <NSCopying>
{
    struct GEOSessionID _sessionID;
    struct GEOTimepoint _timepoint;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOAutomobileOptions *_automobileOptions;
    GEOClientCapabilities *_clientCapabilities;
    GEOCommonOptions *_commonOptions;
    NSMutableArray *_destinationWaypointTypeds;
    NSMutableArray *_destinations;
    NSMutableArray *_deviceHistoricalLocations;
    GEOLocation *_lastKnownRoadLocation;
    GEOWaypoint *_origin;
    GEOWaypointTyped *_originWaypointTyped;
    NSData *_originalRouteID;
    NSData *_originalRouteZilchPoints;
    NSMutableArray *_serviceTags;
    NSData *_sessionState;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    GEOTransitOptions *_transitOptions;
    int _transportType;
    unsigned int _walkingLimitMeters;
    GEOWalkingOptions *_walkingOptions;
    BOOL _allowPartialResults;
    BOOL _includeDistance;
    BOOL _includeHistoricTravelTime;
    BOOL _isFromAPI;
    BOOL _needServerLatency;
    BOOL _useLiveTrafficAsFallback;
    struct {
        unsigned int sessionID:1;
        unsigned int timepoint:1;
        unsigned int transportType:1;
        unsigned int walkingLimitMeters:1;
        unsigned int allowPartialResults:1;
        unsigned int includeDistance:1;
        unsigned int includeHistoricTravelTime:1;
        unsigned int isFromAPI:1;
        unsigned int needServerLatency:1;
        unsigned int useLiveTrafficAsFallback:1;
    } _has;
}

@property (strong, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets; // @synthesize additionalEnabledMarkets=_additionalEnabledMarkets;
@property (nonatomic) BOOL allowPartialResults; // @synthesize allowPartialResults=_allowPartialResults;
@property (strong, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property (strong, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property (strong, nonatomic) GEOCommonOptions *commonOptions; // @synthesize commonOptions=_commonOptions;
@property (strong, nonatomic) NSMutableArray *destinationWaypointTypeds; // @synthesize destinationWaypointTypeds=_destinationWaypointTypeds;
@property (strong, nonatomic) NSMutableArray *destinations; // @synthesize destinations=_destinations;
@property (strong, nonatomic) NSMutableArray *deviceHistoricalLocations; // @synthesize deviceHistoricalLocations=_deviceHistoricalLocations;
@property (readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property (nonatomic) BOOL hasAllowPartialResults;
@property (readonly, nonatomic) BOOL hasAutomobileOptions;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (readonly, nonatomic) BOOL hasCommonOptions;
@property (nonatomic) BOOL hasIncludeDistance;
@property (nonatomic) BOOL hasIncludeHistoricTravelTime;
@property (nonatomic) BOOL hasIsFromAPI;
@property (readonly, nonatomic) BOOL hasLastKnownRoadLocation;
@property (nonatomic) BOOL hasNeedServerLatency;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (readonly, nonatomic) BOOL hasOriginWaypointTyped;
@property (readonly, nonatomic) BOOL hasOriginalRouteID;
@property (readonly, nonatomic) BOOL hasOriginalRouteZilchPoints;
@property (nonatomic) BOOL hasSessionID;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (nonatomic) BOOL hasTimepoint;
@property (readonly, nonatomic) BOOL hasTrafficSnapshot;
@property (readonly, nonatomic) BOOL hasTransitOptions;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL hasUseLiveTrafficAsFallback;
@property (nonatomic) BOOL hasWalkingLimitMeters;
@property (readonly, nonatomic) BOOL hasWalkingOptions;
@property (nonatomic) BOOL includeDistance; // @synthesize includeDistance=_includeDistance;
@property (nonatomic) BOOL includeHistoricTravelTime; // @synthesize includeHistoricTravelTime=_includeHistoricTravelTime;
@property (nonatomic) BOOL isFromAPI; // @synthesize isFromAPI=_isFromAPI;
@property (strong, nonatomic) GEOLocation *lastKnownRoadLocation; // @synthesize lastKnownRoadLocation=_lastKnownRoadLocation;
@property (nonatomic) BOOL needServerLatency;
@property (strong, nonatomic) GEOWaypoint *origin; // @synthesize origin=_origin;
@property (strong, nonatomic) GEOWaypointTyped *originWaypointTyped; // @synthesize originWaypointTyped=_originWaypointTyped;
@property (strong, nonatomic) NSData *originalRouteID; // @synthesize originalRouteID=_originalRouteID;
@property (strong, nonatomic) NSData *originalRouteZilchPoints; // @synthesize originalRouteZilchPoints=_originalRouteZilchPoints;
@property (strong, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property (nonatomic) struct GEOSessionID sessionID; // @synthesize sessionID=_sessionID;
@property (strong, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property (nonatomic) struct GEOTimepoint timepoint; // @synthesize timepoint=_timepoint;
@property (strong, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property (strong, nonatomic) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;
@property (nonatomic) int transportType; // @synthesize transportType=_transportType;
@property (nonatomic) BOOL useLiveTrafficAsFallback;
@property (nonatomic) unsigned int walkingLimitMeters; // @synthesize walkingLimitMeters=_walkingLimitMeters;
@property (strong, nonatomic) GEOWalkingOptions *walkingOptions; // @synthesize walkingOptions=_walkingOptions;

+ (Class)destinationType;
+ (Class)destinationWaypointTypedType;
+ (Class)deviceHistoricalLocationType;
+ (Class)serviceTagType;
- (int)StringAsTransportType:(id)arg1;
- (void)addDestination:(id)arg1;
- (void)addDestinationWaypointTyped:(id)arg1;
- (void)addDeviceHistoricalLocation:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (void)clearDestinationWaypointTypeds;
- (void)clearDestinations;
- (void)clearDeviceHistoricalLocations;
- (void)clearServiceTags;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationAtIndex:(unsigned long long)arg1;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationWaypointTypedsCount;
- (unsigned long long)destinationsCount;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)deviceHistoricalLocationsCount;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithQuickETARequest:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (id)transportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

