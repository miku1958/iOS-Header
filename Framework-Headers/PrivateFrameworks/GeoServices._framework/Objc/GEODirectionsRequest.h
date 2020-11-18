//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOCommonOptions, GEODirectionsRequestFeedback, GEOLocation, GEOMapRegion, GEOOriginalRoute, GEOPDABClientDatasetMetadata, GEORouteAttributes, GEOTFTrafficSnapshot, NSData, NSMutableArray, NSString;

@interface GEODirectionsRequest : PBRequest <NSCopying>
{
    struct GEOSessionID _sessionID;
    double _requestTime;
    double _sessionRelativeTimestamp;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOClientCapabilities *_clientCapabilities;
    GEOCommonOptions *_commonOptions;
    GEOMapRegion *_currentMapRegion;
    GEOLocation *_currentUserLocation;
    int _departureTime;
    NSMutableArray *_deviceHistoricalLocations;
    GEODirectionsRequestFeedback *_feedback;
    GEOLocation *_lastKnownRoadLocation;
    NSString *_loggedAbExperiment;
    unsigned int _mainTransportTypeMaxRouteCount;
    NSData *_nonRecommendedRoutesCache;
    int _nonRecommendedRoutesOption;
    NSData *_originalDirectionsResponseID;
    GEOOriginalRoute *_originalRoute;
    NSData *_originalRouteID;
    int _originalRoutePurpose;
    NSData *_originalRouteZilchPoints;
    int _requestMode;
    GEORouteAttributes *_routeAttributes;
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
        unsigned int requestTime:1;
        unsigned int sessionRelativeTimestamp:1;
        unsigned int departureTime:1;
        unsigned int mainTransportTypeMaxRouteCount:1;
        unsigned int nonRecommendedRoutesOption:1;
        unsigned int originalRoutePurpose:1;
        unsigned int requestMode:1;
        unsigned int sequenceNumber:1;
        unsigned int timeSinceLastRerouteRequest:1;
        unsigned int getRouteForZilchPoints:1;
        unsigned int isFromAPI:1;
        unsigned int needLatency:1;
        unsigned int useLiveTrafficAsFallback:1;
    } _has;
}

@property (strong, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata; // @synthesize abClientMetadata=_abClientMetadata;
@property (strong, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets; // @synthesize additionalEnabledMarkets=_additionalEnabledMarkets;
@property (strong, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property (strong, nonatomic) GEOCommonOptions *commonOptions; // @synthesize commonOptions=_commonOptions;
@property (strong, nonatomic) GEOMapRegion *currentMapRegion; // @synthesize currentMapRegion=_currentMapRegion;
@property (strong, nonatomic) GEOLocation *currentUserLocation; // @synthesize currentUserLocation=_currentUserLocation;
@property (nonatomic) int departureTime; // @synthesize departureTime=_departureTime;
@property (strong, nonatomic) NSMutableArray *deviceHistoricalLocations; // @synthesize deviceHistoricalLocations=_deviceHistoricalLocations;
@property (strong, nonatomic) GEODirectionsRequestFeedback *feedback; // @synthesize feedback=_feedback;
@property (nonatomic) BOOL getRouteForZilchPoints; // @synthesize getRouteForZilchPoints=_getRouteForZilchPoints;
@property (readonly, nonatomic) BOOL hasAbClientMetadata;
@property (readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (readonly, nonatomic) BOOL hasCommonOptions;
@property (readonly, nonatomic) BOOL hasCurrentMapRegion;
@property (readonly, nonatomic) BOOL hasCurrentUserLocation;
@property (nonatomic) BOOL hasDepartureTime;
@property (readonly, nonatomic) BOOL hasFeedback;
@property (nonatomic) BOOL hasGetRouteForZilchPoints;
@property (nonatomic) BOOL hasIsFromAPI;
@property (readonly, nonatomic) BOOL hasLastKnownRoadLocation;
@property (readonly, nonatomic) BOOL hasLoggedAbExperiment;
@property (nonatomic) BOOL hasMainTransportTypeMaxRouteCount;
@property (nonatomic) BOOL hasNeedLatency;
@property (readonly, nonatomic) BOOL hasNonRecommendedRoutesCache;
@property (nonatomic) BOOL hasNonRecommendedRoutesOption;
@property (readonly, nonatomic) BOOL hasOriginalDirectionsResponseID;
@property (readonly, nonatomic) BOOL hasOriginalRoute;
@property (readonly, nonatomic) BOOL hasOriginalRouteID;
@property (nonatomic) BOOL hasOriginalRoutePurpose;
@property (readonly, nonatomic) BOOL hasOriginalRouteZilchPoints;
@property (nonatomic) BOOL hasRequestMode;
@property (nonatomic) BOOL hasRequestTime;
@property (readonly, nonatomic) BOOL hasRouteAttributes;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) BOOL hasSessionRelativeTimestamp;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (nonatomic) BOOL hasTimeSinceLastRerouteRequest;
@property (readonly, nonatomic) BOOL hasTrafficSnapshot;
@property (nonatomic) BOOL hasUseLiveTrafficAsFallback;
@property (nonatomic) BOOL isFromAPI; // @synthesize isFromAPI=_isFromAPI;
@property (strong, nonatomic) GEOLocation *lastKnownRoadLocation; // @synthesize lastKnownRoadLocation=_lastKnownRoadLocation;
@property (strong, nonatomic) NSString *loggedAbExperiment; // @synthesize loggedAbExperiment=_loggedAbExperiment;
@property (nonatomic) unsigned int mainTransportTypeMaxRouteCount; // @synthesize mainTransportTypeMaxRouteCount=_mainTransportTypeMaxRouteCount;
@property (nonatomic) BOOL needLatency;
@property (strong, nonatomic) NSData *nonRecommendedRoutesCache; // @synthesize nonRecommendedRoutesCache=_nonRecommendedRoutesCache;
@property (nonatomic) int nonRecommendedRoutesOption; // @synthesize nonRecommendedRoutesOption=_nonRecommendedRoutesOption;
@property (strong, nonatomic) NSData *originalDirectionsResponseID; // @synthesize originalDirectionsResponseID=_originalDirectionsResponseID;
@property (strong, nonatomic) GEOOriginalRoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property (strong, nonatomic) NSData *originalRouteID; // @synthesize originalRouteID=_originalRouteID;
@property (nonatomic) int originalRoutePurpose; // @synthesize originalRoutePurpose=_originalRoutePurpose;
@property (strong, nonatomic) NSData *originalRouteZilchPoints; // @synthesize originalRouteZilchPoints=_originalRouteZilchPoints;
@property (nonatomic) int requestMode;
@property (nonatomic) double requestTime;
@property (strong, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property (nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property (strong, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property (nonatomic) struct GEOSessionID sessionID; // @synthesize sessionID=_sessionID;
@property (nonatomic) double sessionRelativeTimestamp; // @synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp;
@property (strong, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property (nonatomic) unsigned int timeSinceLastRerouteRequest; // @synthesize timeSinceLastRerouteRequest=_timeSinceLastRerouteRequest;
@property (strong, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property (nonatomic) BOOL useLiveTrafficAsFallback;
@property (strong, nonatomic) NSMutableArray *waypointTypeds; // @synthesize waypointTypeds=_waypointTypeds;

+ (Class)deviceHistoricalLocationType;
+ (Class)serviceTagType;
+ (Class)waypointTypedType;
- (void).cxx_destruct;
- (int)StringAsNonRecommendedRoutesOption:(id)arg1;
- (int)StringAsOriginalRoutePurpose:(id)arg1;
- (int)StringAsRequestMode:(id)arg1;
- (void)addDeviceHistoricalLocation:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (void)addWaypointTyped:(id)arg1;
- (void)clearDeviceHistoricalLocations;
- (void)clearServiceTags;
- (void)clearWaypointTypeds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)deviceHistoricalLocationsCount;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFeedback:(id)arg1;
- (id)initWithQuickETARequest:(id)arg1 withFeedback:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nonRecommendedRoutesOptionAsString:(int)arg1;
- (id)originalRoutePurposeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestModeAsString:(int)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (id)waypointTypedAtIndex:(unsigned long long)arg1;
- (unsigned long long)waypointTypedsCount;
- (void)writeTo:(id)arg1;

@end

