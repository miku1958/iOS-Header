//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Navigation/NSCopying-Protocol.h>

@class GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, GEOLocation, GEORoute, GEORouteAttributes, NSString;

@interface MNRoutePlanningDetails : PBCodable <NSCopying>
{
    GEOComposedWaypoint *_destination;
    GEOLocation *_lastLocation;
    int _navigationType;
    GEOComposedWaypoint *_origin;
    GEODirectionsRequest *_request;
    NSString *_requestingAppIdentifier;
    GEODirectionsResponse *_response;
    GEORoute *_route;
    GEORouteAttributes *_routeAttributes;
    unsigned int _routeIndex;
    NSString *_traceFileName;
    int _transportType;
    BOOL _copyTracesToCrashReporterDirectory;
    BOOL _fullGuidance;
    BOOL _guidancePromptsEnabled;
    BOOL _isForReconnecting;
    BOOL _isTraceRecording;
    BOOL _shouldPrepare;
    struct {
        unsigned int navigationType:1;
        unsigned int routeIndex:1;
        unsigned int transportType:1;
        unsigned int copyTracesToCrashReporterDirectory:1;
        unsigned int fullGuidance:1;
        unsigned int guidancePromptsEnabled:1;
        unsigned int isForReconnecting:1;
        unsigned int isTraceRecording:1;
        unsigned int shouldPrepare:1;
    } _has;
}

@property (nonatomic) BOOL copyTracesToCrashReporterDirectory; // @synthesize copyTracesToCrashReporterDirectory=_copyTracesToCrashReporterDirectory;
@property (strong, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property (nonatomic) BOOL fullGuidance; // @synthesize fullGuidance=_fullGuidance;
@property (nonatomic) BOOL guidancePromptsEnabled; // @synthesize guidancePromptsEnabled=_guidancePromptsEnabled;
@property (nonatomic) BOOL hasCopyTracesToCrashReporterDirectory;
@property (readonly, nonatomic) BOOL hasDestination;
@property (nonatomic) BOOL hasFullGuidance;
@property (nonatomic) BOOL hasGuidancePromptsEnabled;
@property (nonatomic) BOOL hasIsForReconnecting;
@property (nonatomic) BOOL hasIsTraceRecording;
@property (readonly, nonatomic) BOOL hasLastLocation;
@property (nonatomic) BOOL hasNavigationType;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (readonly, nonatomic) BOOL hasRequest;
@property (readonly, nonatomic) BOOL hasRequestingAppIdentifier;
@property (readonly, nonatomic) BOOL hasResponse;
@property (readonly, nonatomic) BOOL hasRoute;
@property (readonly, nonatomic) BOOL hasRouteAttributes;
@property (nonatomic) BOOL hasRouteIndex;
@property (nonatomic) BOOL hasShouldPrepare;
@property (readonly, nonatomic) BOOL hasTraceFileName;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL isForReconnecting; // @synthesize isForReconnecting=_isForReconnecting;
@property (nonatomic) BOOL isTraceRecording; // @synthesize isTraceRecording=_isTraceRecording;
@property (strong, nonatomic) GEOLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property (nonatomic) int navigationType; // @synthesize navigationType=_navigationType;
@property (strong, nonatomic) GEOComposedWaypoint *origin; // @synthesize origin=_origin;
@property (strong, nonatomic) GEODirectionsRequest *request; // @synthesize request=_request;
@property (strong, nonatomic) NSString *requestingAppIdentifier; // @synthesize requestingAppIdentifier=_requestingAppIdentifier;
@property (strong, nonatomic) GEODirectionsResponse *response; // @synthesize response=_response;
@property (strong, nonatomic) GEORoute *route; // @synthesize route=_route;
@property (strong, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property (nonatomic) unsigned int routeIndex; // @synthesize routeIndex=_routeIndex;
@property (nonatomic) BOOL shouldPrepare; // @synthesize shouldPrepare=_shouldPrepare;
@property (strong, nonatomic) NSString *traceFileName; // @synthesize traceFileName=_traceFileName;
@property (nonatomic) int transportType; // @synthesize transportType=_transportType;

- (void).cxx_destruct;
- (int)StringAsNavigationType:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)navigationTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
