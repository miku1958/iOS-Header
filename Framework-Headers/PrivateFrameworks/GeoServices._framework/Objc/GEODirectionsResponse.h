//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAlert, GEOETAServiceResponseSummary, GEOPBTransitRoutingIncidentMessage, GEORouteDisplayHints, GEOStyleAttributes, GEOTransitDecoderData, NSData, NSMutableArray, NSString;

@interface GEODirectionsResponse : PBCodable <NSCopying>
{
    CDStruct_95bda58d _supportedTransportTypes;
    struct GEOTimepoint _timepointUsed;
    unsigned long long _debugLatencyMs;
    struct GEOProblemDetail *_problemDetails;
    unsigned long long _problemDetailsCount;
    unsigned long long _problemDetailsSpace;
    GEOTransitDecoderData *_decoderData;
    NSData *_directionsResponseID;
    GEORouteDisplayHints *_displayHints;
    GEOETAServiceResponseSummary *_etaServiceSummary;
    GEOAlert *_failureAlert;
    NSData *_graphV3;
    NSMutableArray *_incidentsOffRoutes;
    NSMutableArray *_incidentsOnRoutes;
    int _instructionSignFillColor;
    int _liveRouteSavingsSeconds;
    int _localDistanceUnits;
    NSMutableArray *_placeSearchResponses;
    NSMutableArray *_routes;
    unsigned int _selectedRouteIndex;
    NSMutableArray *_serviceGaps;
    NSData *_sessionState;
    int _status;
    GEOStyleAttributes *_styleAttributes;
    NSMutableArray *_suggestedRoutes;
    NSString *_transitDataVersion;
    GEOPBTransitRoutingIncidentMessage *_transitIncidentMessage;
    BOOL _isNavigable;
    BOOL _routeDeviatesFromOriginal;
    struct {
        unsigned int timepointUsed:1;
        unsigned int debugLatencyMs:1;
        unsigned int instructionSignFillColor:1;
        unsigned int liveRouteSavingsSeconds:1;
        unsigned int localDistanceUnits:1;
        unsigned int selectedRouteIndex:1;
        unsigned int isNavigable:1;
        unsigned int routeDeviatesFromOriginal:1;
    } _has;
}

@property (nonatomic) unsigned long long debugLatencyMs;
@property (strong, nonatomic) GEOTransitDecoderData *decoderData; // @synthesize decoderData=_decoderData;
@property (strong, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property (strong, nonatomic) GEORouteDisplayHints *displayHints; // @synthesize displayHints=_displayHints;
@property (strong, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property (strong, nonatomic) GEOAlert *failureAlert; // @synthesize failureAlert=_failureAlert;
@property (strong, nonatomic) NSData *graphV3; // @synthesize graphV3=_graphV3;
@property (nonatomic) BOOL hasDebugLatencyMs;
@property (readonly, nonatomic) BOOL hasDecoderData;
@property (readonly, nonatomic) BOOL hasDirectionsResponseID;
@property (readonly, nonatomic) BOOL hasDisplayHints;
@property (readonly, nonatomic) BOOL hasEtaServiceSummary;
@property (readonly, nonatomic) BOOL hasFailureAlert;
@property (readonly, nonatomic) BOOL hasGraphV3;
@property (nonatomic) BOOL hasInstructionSignFillColor;
@property (nonatomic) BOOL hasIsNavigable;
@property (nonatomic) BOOL hasLiveRouteSavingsSeconds;
@property (nonatomic) BOOL hasLocalDistanceUnits;
@property (nonatomic) BOOL hasRouteDeviatesFromOriginal;
@property (nonatomic) BOOL hasSelectedRouteIndex;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (nonatomic) BOOL hasTimepointUsed;
@property (readonly, nonatomic) BOOL hasTransitDataVersion;
@property (readonly, nonatomic) BOOL hasTransitIncidentMessage;
@property (strong, nonatomic) NSMutableArray *incidentsOffRoutes; // @synthesize incidentsOffRoutes=_incidentsOffRoutes;
@property (strong, nonatomic) NSMutableArray *incidentsOnRoutes; // @synthesize incidentsOnRoutes=_incidentsOnRoutes;
@property (nonatomic) int instructionSignFillColor; // @synthesize instructionSignFillColor=_instructionSignFillColor;
@property (nonatomic) BOOL isNavigable; // @synthesize isNavigable=_isNavigable;
@property (nonatomic) int liveRouteSavingsSeconds; // @synthesize liveRouteSavingsSeconds=_liveRouteSavingsSeconds;
@property (nonatomic) int localDistanceUnits; // @synthesize localDistanceUnits=_localDistanceUnits;
@property (strong, nonatomic) NSMutableArray *placeSearchResponses; // @synthesize placeSearchResponses=_placeSearchResponses;
@property (readonly, nonatomic) struct GEOProblemDetail *problemDetails;
@property (readonly, nonatomic) unsigned long long problemDetailsCount;
@property (nonatomic) BOOL routeDeviatesFromOriginal; // @synthesize routeDeviatesFromOriginal=_routeDeviatesFromOriginal;
@property (strong, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
@property (nonatomic) unsigned int selectedRouteIndex; // @synthesize selectedRouteIndex=_selectedRouteIndex;
@property (strong, nonatomic) NSMutableArray *serviceGaps; // @synthesize serviceGaps=_serviceGaps;
@property (strong, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property (nonatomic) int status; // @synthesize status=_status;
@property (strong, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property (strong, nonatomic) NSMutableArray *suggestedRoutes; // @synthesize suggestedRoutes=_suggestedRoutes;
@property (readonly, nonatomic) int *supportedTransportTypes;
@property (readonly, nonatomic) unsigned long long supportedTransportTypesCount;
@property (nonatomic) struct GEOTimepoint timepointUsed; // @synthesize timepointUsed=_timepointUsed;
@property (strong, nonatomic) NSString *transitDataVersion; // @synthesize transitDataVersion=_transitDataVersion;
@property (strong, nonatomic) GEOPBTransitRoutingIncidentMessage *transitIncidentMessage; // @synthesize transitIncidentMessage=_transitIncidentMessage;

+ (Class)incidentsOffRoutesType;
+ (Class)incidentsOnRoutesType;
+ (Class)placeSearchResponseType;
+ (Class)routeType;
+ (Class)serviceGapType;
+ (Class)suggestedRouteType;
- (int)StringAsInstructionSignFillColor:(id)arg1;
- (int)StringAsLocalDistanceUnits:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (int)StringAsSupportedTransportTypes:(id)arg1;
- (id)_destinationMapItem;
- (void)addIncidentsOffRoutes:(id)arg1;
- (void)addIncidentsOnRoutes:(id)arg1;
- (void)addPlaceSearchResponse:(id)arg1;
- (void)addProblemDetail:(struct GEOProblemDetail)arg1;
- (void)addRoute:(id)arg1;
- (void)addServiceGap:(id)arg1;
- (void)addSuggestedRoute:(id)arg1;
- (void)addSupportedTransportType:(int)arg1;
- (void)clearIncidentsOffRoutes;
- (void)clearIncidentsOnRoutes;
- (void)clearPlaceSearchResponses;
- (void)clearProblemDetails;
- (void)clearRoutes;
- (void)clearServiceGaps;
- (void)clearSuggestedRoutes;
- (void)clearSupportedTransportTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)incidentsOffRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOffRoutesCount;
- (id)incidentsOnRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOnRoutesCount;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)instructionSignFillColorAsString:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localDistanceUnitsAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeSearchResponseAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeSearchResponsesCount;
- (struct GEOProblemDetail)problemDetailAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)routeAtIndex:(unsigned long long)arg1;
- (unsigned long long)routesCount;
- (id)serviceGapAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceGapsCount;
- (void)setProblemDetails:(struct GEOProblemDetail *)arg1 count:(unsigned long long)arg2;
- (void)setSupportedTransportTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)statusAsString:(int)arg1;
- (id)suggestedRouteAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestedRoutesCount;
- (int)supportedTransportTypeAtIndex:(unsigned long long)arg1;
- (id)supportedTransportTypesAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
