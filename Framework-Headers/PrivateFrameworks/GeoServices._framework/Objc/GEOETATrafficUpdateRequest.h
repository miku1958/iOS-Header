//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOCommonOptions, GEOLocation, GEOPDABClientDatasetMetadata, GEORouteAttributes, GEOTFTrafficSnapshot, NSData, NSMutableArray;

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying>
{
    struct GEOSessionID _sessionID;
    struct GEOTimepoint _clientTimepoint;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOClientCapabilities *_clientCapabilities;
    GEOCommonOptions *_commonOptions;
    GEOLocation *_currentUserLocation;
    NSMutableArray *_destinationWaypointTypeds;
    NSData *_directionsResponseID;
    unsigned int _previouslyRejectedRerouteSavings;
    int _rerouteStatus;
    GEORouteAttributes *_routeAttributes;
    NSMutableArray *_routes;
    NSMutableArray *_serviceTags;
    NSData *_sessionState;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    BOOL _includeBetterRouteSuggestion;
    BOOL _needServerLatency;
    BOOL _useClientTimepointAsNow;
    BOOL _useLiveTrafficAsFallback;
    struct {
        unsigned int sessionID:1;
        unsigned int clientTimepoint:1;
        unsigned int previouslyRejectedRerouteSavings:1;
        unsigned int rerouteStatus:1;
        unsigned int includeBetterRouteSuggestion:1;
        unsigned int needServerLatency:1;
        unsigned int useClientTimepointAsNow:1;
        unsigned int useLiveTrafficAsFallback:1;
    } _has;
}

@property (strong, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata; // @synthesize abClientMetadata=_abClientMetadata;
@property (strong, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets; // @synthesize additionalEnabledMarkets=_additionalEnabledMarkets;
@property (strong, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property (nonatomic) struct GEOTimepoint clientTimepoint;
@property (strong, nonatomic) GEOCommonOptions *commonOptions; // @synthesize commonOptions=_commonOptions;
@property (strong, nonatomic) GEOLocation *currentUserLocation; // @synthesize currentUserLocation=_currentUserLocation;
@property (strong, nonatomic) NSMutableArray *destinationWaypointTypeds; // @synthesize destinationWaypointTypeds=_destinationWaypointTypeds;
@property (strong, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property (readonly, nonatomic) BOOL hasAbClientMetadata;
@property (readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (nonatomic) BOOL hasClientTimepoint;
@property (readonly, nonatomic) BOOL hasCommonOptions;
@property (readonly, nonatomic) BOOL hasCurrentUserLocation;
@property (readonly, nonatomic) BOOL hasDirectionsResponseID;
@property (nonatomic) BOOL hasIncludeBetterRouteSuggestion;
@property (nonatomic) BOOL hasNeedServerLatency;
@property (nonatomic) BOOL hasPreviouslyRejectedRerouteSavings;
@property (nonatomic) BOOL hasRerouteStatus;
@property (readonly, nonatomic) BOOL hasRouteAttributes;
@property (nonatomic) BOOL hasSessionID;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (readonly, nonatomic) BOOL hasTrafficSnapshot;
@property (nonatomic) BOOL hasUseClientTimepointAsNow;
@property (nonatomic) BOOL hasUseLiveTrafficAsFallback;
@property (nonatomic) BOOL includeBetterRouteSuggestion; // @synthesize includeBetterRouteSuggestion=_includeBetterRouteSuggestion;
@property (nonatomic) BOOL needServerLatency;
@property (nonatomic) unsigned int previouslyRejectedRerouteSavings; // @synthesize previouslyRejectedRerouteSavings=_previouslyRejectedRerouteSavings;
@property (nonatomic) int rerouteStatus; // @synthesize rerouteStatus=_rerouteStatus;
@property (strong, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property (strong, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
@property (strong, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property (nonatomic) struct GEOSessionID sessionID; // @synthesize sessionID=_sessionID;
@property (strong, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property (strong, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property (nonatomic) BOOL useClientTimepointAsNow;
@property (nonatomic) BOOL useLiveTrafficAsFallback;

+ (Class)destinationWaypointTypedType;
+ (Class)routeType;
+ (Class)serviceTagType;
- (int)StringAsRerouteStatus:(id)arg1;
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
- (id)rerouteStatusAsString:(int)arg1;
- (Class)responseClass;
- (id)routeAtIndex:(unsigned long long)arg1;
- (unsigned long long)routesCount;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)writeTo:(id)arg1;

@end

