//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEODirectionsRequestFeedback, GEOLocation, GEOMapRegion, GEOOriginalRoute, GEORouteAttributes, GEORouteSummaryAttributes, GEOTFTrafficSnapshot, NSData, NSMutableArray;

@interface GEODirectionsRequest : PBRequest <NSCopying>
{
    CDStruct_612aec5b _sessionID;
    unsigned long long _maxDecoderVersion;
    unsigned long long _maxGraphVersion;
    unsigned long long _sharedLibraryVersion;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOClientCapabilities *_clientCapabilities;
    GEOMapRegion *_currentMapRegion;
    GEOLocation *_currentUserLocation;
    int _departureTime;
    GEODirectionsRequestFeedback *_feedback;
    unsigned int _mainTransportTypeMaxRouteCount;
    NSData *_originalDirectionsResponseID;
    GEOOriginalRoute *_originalRoute;
    NSData *_originalRouteID;
    NSData *_originalRouteZilchPoints;
    GEORouteAttributes *_routeAttributes;
    GEORouteSummaryAttributes *_routeSummaryAttributes;
    unsigned int _sequenceNumber;
    NSMutableArray *_serviceTags;
    NSData *_sessionState;
    unsigned int _timeSinceLastRerouteRequest;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    NSMutableArray *_waypointTypeds;
    BOOL _getRouteForZilchPoints;
    BOOL _isFromAPI;
    BOOL _needLatency;
    BOOL _useLiveTrafficAsFallback;
    struct {
        unsigned int sessionID:1;
        unsigned int maxDecoderVersion:1;
        unsigned int maxGraphVersion:1;
        unsigned int sharedLibraryVersion:1;
        unsigned int departureTime:1;
        unsigned int mainTransportTypeMaxRouteCount:1;
        unsigned int sequenceNumber:1;
        unsigned int timeSinceLastRerouteRequest:1;
        unsigned int getRouteForZilchPoints:1;
        unsigned int isFromAPI:1;
        unsigned int needLatency:1;
        unsigned int useLiveTrafficAsFallback:1;
    } _has;
}

@property (strong, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets; // @synthesize additionalEnabledMarkets=_additionalEnabledMarkets;
@property (strong, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property (strong, nonatomic) GEOMapRegion *currentMapRegion; // @synthesize currentMapRegion=_currentMapRegion;
@property (strong, nonatomic) GEOLocation *currentUserLocation; // @synthesize currentUserLocation=_currentUserLocation;
@property (nonatomic) int departureTime; // @synthesize departureTime=_departureTime;
@property (strong, nonatomic) GEODirectionsRequestFeedback *feedback; // @synthesize feedback=_feedback;
@property (nonatomic) BOOL getRouteForZilchPoints; // @synthesize getRouteForZilchPoints=_getRouteForZilchPoints;
@property (readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (readonly, nonatomic) BOOL hasCurrentMapRegion;
@property (readonly, nonatomic) BOOL hasCurrentUserLocation;
@property (nonatomic) BOOL hasDepartureTime;
@property (readonly, nonatomic) BOOL hasFeedback;
@property (nonatomic) BOOL hasGetRouteForZilchPoints;
@property (nonatomic) BOOL hasIsFromAPI;
@property (nonatomic) BOOL hasMainTransportTypeMaxRouteCount;
@property (nonatomic) BOOL hasMaxDecoderVersion;
@property (nonatomic) BOOL hasMaxGraphVersion;
@property (nonatomic) BOOL hasNeedLatency;
@property (readonly, nonatomic) BOOL hasOriginalDirectionsResponseID;
@property (readonly, nonatomic) BOOL hasOriginalRoute;
@property (readonly, nonatomic) BOOL hasOriginalRouteID;
@property (readonly, nonatomic) BOOL hasOriginalRouteZilchPoints;
@property (readonly, nonatomic) BOOL hasRouteAttributes;
@property (readonly, nonatomic) BOOL hasRouteSummaryAttributes;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL hasSessionID;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (nonatomic) BOOL hasSharedLibraryVersion;
@property (nonatomic) BOOL hasTimeSinceLastRerouteRequest;
@property (readonly, nonatomic) BOOL hasTrafficSnapshot;
@property (nonatomic) BOOL hasUseLiveTrafficAsFallback;
@property (nonatomic) BOOL isFromAPI; // @synthesize isFromAPI=_isFromAPI;
@property (nonatomic) unsigned int mainTransportTypeMaxRouteCount; // @synthesize mainTransportTypeMaxRouteCount=_mainTransportTypeMaxRouteCount;
@property (nonatomic) unsigned long long maxDecoderVersion; // @synthesize maxDecoderVersion=_maxDecoderVersion;
@property (nonatomic) unsigned long long maxGraphVersion; // @synthesize maxGraphVersion=_maxGraphVersion;
@property (nonatomic) BOOL needLatency;
@property (strong, nonatomic) NSData *originalDirectionsResponseID; // @synthesize originalDirectionsResponseID=_originalDirectionsResponseID;
@property (strong, nonatomic) GEOOriginalRoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property (strong, nonatomic) NSData *originalRouteID; // @synthesize originalRouteID=_originalRouteID;
@property (strong, nonatomic) NSData *originalRouteZilchPoints; // @synthesize originalRouteZilchPoints=_originalRouteZilchPoints;
@property (strong, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property (strong, nonatomic) GEORouteSummaryAttributes *routeSummaryAttributes; // @synthesize routeSummaryAttributes=_routeSummaryAttributes;
@property (nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property (strong, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property (nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
@property (strong, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property (nonatomic) unsigned long long sharedLibraryVersion; // @synthesize sharedLibraryVersion=_sharedLibraryVersion;
@property (nonatomic) unsigned int timeSinceLastRerouteRequest; // @synthesize timeSinceLastRerouteRequest=_timeSinceLastRerouteRequest;
@property (strong, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property (nonatomic) BOOL useLiveTrafficAsFallback;
@property (strong, nonatomic) NSMutableArray *waypointTypeds; // @synthesize waypointTypeds=_waypointTypeds;

- (void)addServiceTag:(id)arg1;
- (void)addWaypointTyped:(id)arg1;
- (void)clearServiceTags;
- (void)clearWaypointTypeds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (id)waypointTypedAtIndex:(unsigned long long)arg1;
- (unsigned long long)waypointTypedsCount;
- (void)writeTo:(id)arg1;

@end

