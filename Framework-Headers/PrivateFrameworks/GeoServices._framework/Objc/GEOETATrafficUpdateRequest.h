//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOLocation, GEORouteAttributes, GEORouteSummaryAttributes, GEOTFTrafficSnapshot, NSData, NSMutableArray;

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying>
{
    CDStruct_612aec5b _sessionID;
    CDStruct_4db06779 _clientTimepoint;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOClientCapabilities *_clientCapabilities;
    GEOLocation *_currentUserLocation;
    NSMutableArray *_destinationWaypointTypeds;
    NSData *_directionsResponseID;
    unsigned int _previouslyRejectedRerouteSavings;
    int _rerouteStatus;
    GEORouteAttributes *_routeAttributes;
    GEORouteSummaryAttributes *_routeSummaryAttributes;
    NSMutableArray *_routes;
    NSMutableArray *_serviceTags;
    NSData *_sessionState;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    BOOL _includeBetterRouteSuggestion;
    BOOL _useClientTimepointAsNow;
    BOOL _useLiveTrafficAsFallback;
    struct {
        unsigned int sessionID:1;
        unsigned int clientTimepoint:1;
        unsigned int previouslyRejectedRerouteSavings:1;
        unsigned int rerouteStatus:1;
        unsigned int includeBetterRouteSuggestion:1;
        unsigned int useClientTimepointAsNow:1;
        unsigned int useLiveTrafficAsFallback:1;
    } _has;
}

@property (strong, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets; // @synthesize additionalEnabledMarkets=_additionalEnabledMarkets;
@property (strong, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property (nonatomic) CDStruct_4db06779 clientTimepoint;
@property (strong, nonatomic) GEOLocation *currentUserLocation; // @synthesize currentUserLocation=_currentUserLocation;
@property (strong, nonatomic) NSMutableArray *destinationWaypointTypeds; // @synthesize destinationWaypointTypeds=_destinationWaypointTypeds;
@property (strong, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property (readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (nonatomic) BOOL hasClientTimepoint;
@property (readonly, nonatomic) BOOL hasCurrentUserLocation;
@property (readonly, nonatomic) BOOL hasDirectionsResponseID;
@property (nonatomic) BOOL hasIncludeBetterRouteSuggestion;
@property (nonatomic) BOOL hasPreviouslyRejectedRerouteSavings;
@property (nonatomic) BOOL hasRerouteStatus;
@property (readonly, nonatomic) BOOL hasRouteAttributes;
@property (readonly, nonatomic) BOOL hasRouteSummaryAttributes;
@property (nonatomic) BOOL hasSessionID;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (readonly, nonatomic) BOOL hasTrafficSnapshot;
@property (nonatomic) BOOL hasUseClientTimepointAsNow;
@property (nonatomic) BOOL hasUseLiveTrafficAsFallback;
@property (nonatomic) BOOL includeBetterRouteSuggestion; // @synthesize includeBetterRouteSuggestion=_includeBetterRouteSuggestion;
@property (nonatomic) unsigned int previouslyRejectedRerouteSavings; // @synthesize previouslyRejectedRerouteSavings=_previouslyRejectedRerouteSavings;
@property (nonatomic) int rerouteStatus; // @synthesize rerouteStatus=_rerouteStatus;
@property (strong, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property (strong, nonatomic) GEORouteSummaryAttributes *routeSummaryAttributes; // @synthesize routeSummaryAttributes=_routeSummaryAttributes;
@property (strong, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
@property (strong, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property (nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
@property (strong, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property (strong, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property (nonatomic) BOOL useClientTimepointAsNow;
@property (nonatomic) BOOL useLiveTrafficAsFallback;

- (void)addDestinationWaypointTyped:(id)arg1;
- (void)addRoute:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (void)clearDestinationWaypointTypeds;
- (void)clearRoutes;
- (void)clearServiceTags;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationWaypointTypedsCount;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)routeAtIndex:(unsigned long long)arg1;
- (unsigned long long)routesCount;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)writeTo:(id)arg1;

@end

