//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTrafficBannerText, NSData, NSMutableArray;

@interface GEOETARoute : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _incidentEndOffsetsInETARoutes;
    CDStruct_9f2792e4 _trafficColorOffsets;
    CDStruct_9f2792e4 _trafficColors;
    NSMutableArray *_enrouteNotices;
    unsigned int _historicTravelTime;
    NSMutableArray *_incidentsOffReRoutes;
    NSMutableArray *_incidentsOnETARoutes;
    NSMutableArray *_incidentsOnReRoutes;
    NSMutableArray *_invalidSectionZilchPoints;
    NSMutableArray *_reroutedRoutes;
    NSData *_routeID;
    unsigned int _staticTravelTime;
    NSMutableArray *_steps;
    GEOTrafficBannerText *_trafficBannerText;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeBestEstimate;
    unsigned int _travelTimeConservativeEstimate;
    NSData *_zilchPoints;
    BOOL _isOfflineResponse;
    BOOL _routeNoLongerValid;
    struct {
        unsigned int historicTravelTime:1;
        unsigned int staticTravelTime:1;
        unsigned int travelTimeAggressiveEstimate:1;
        unsigned int travelTimeBestEstimate:1;
        unsigned int travelTimeConservativeEstimate:1;
        unsigned int isOfflineResponse:1;
        unsigned int routeNoLongerValid:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *enrouteNotices; // @synthesize enrouteNotices=_enrouteNotices;
@property (readonly, nonatomic) double expectedTime;
@property (nonatomic) BOOL hasHistoricTravelTime;
@property (nonatomic) BOOL hasIsOfflineResponse;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (nonatomic) BOOL hasRouteNoLongerValid;
@property (nonatomic) BOOL hasStaticTravelTime;
@property (readonly, nonatomic) BOOL hasTrafficBannerText;
@property (nonatomic) BOOL hasTravelTimeAggressiveEstimate;
@property (nonatomic) BOOL hasTravelTimeBestEstimate;
@property (nonatomic) BOOL hasTravelTimeConservativeEstimate;
@property (readonly, nonatomic) BOOL hasZilchPoints;
@property (nonatomic) unsigned int historicTravelTime; // @synthesize historicTravelTime=_historicTravelTime;
@property (readonly, nonatomic) unsigned int *incidentEndOffsetsInETARoutes;
@property (readonly, nonatomic) unsigned long long incidentEndOffsetsInETARoutesCount;
@property (strong, nonatomic) NSMutableArray *incidentsOffReRoutes; // @synthesize incidentsOffReRoutes=_incidentsOffReRoutes;
@property (strong, nonatomic) NSMutableArray *incidentsOnETARoutes; // @synthesize incidentsOnETARoutes=_incidentsOnETARoutes;
@property (strong, nonatomic) NSMutableArray *incidentsOnReRoutes; // @synthesize incidentsOnReRoutes=_incidentsOnReRoutes;
@property (strong, nonatomic) NSMutableArray *invalidSectionZilchPoints; // @synthesize invalidSectionZilchPoints=_invalidSectionZilchPoints;
@property (nonatomic) BOOL isOfflineResponse;
@property (strong, nonatomic) NSMutableArray *reroutedRoutes; // @synthesize reroutedRoutes=_reroutedRoutes;
@property (strong, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property (nonatomic) BOOL routeNoLongerValid; // @synthesize routeNoLongerValid=_routeNoLongerValid;
@property (nonatomic) unsigned int staticTravelTime; // @synthesize staticTravelTime=_staticTravelTime;
@property (strong, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
@property (strong, nonatomic) GEOTrafficBannerText *trafficBannerText; // @synthesize trafficBannerText=_trafficBannerText;
@property (readonly, nonatomic) unsigned int *trafficColorOffsets;
@property (readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
@property (readonly, nonatomic) unsigned int *trafficColors;
@property (readonly, nonatomic) unsigned long long trafficColorsCount;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate; // @synthesize travelTimeAggressiveEstimate=_travelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeBestEstimate; // @synthesize travelTimeBestEstimate=_travelTimeBestEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate; // @synthesize travelTimeConservativeEstimate=_travelTimeConservativeEstimate;
@property (strong, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;

+ (Class)enrouteNoticeType;
+ (Class)incidentsOffReRoutesType;
+ (Class)incidentsOnETARouteType;
+ (Class)incidentsOnReRoutesType;
+ (Class)invalidSectionZilchPointsType;
+ (Class)reroutedRouteType;
+ (Class)stepType;
- (void).cxx_destruct;
- (void)_addDebugArguments:(id)arg1;
- (void)addEnrouteNotice:(id)arg1;
- (void)addIncidentEndOffsetsInETARoute:(unsigned int)arg1;
- (void)addIncidentsOffReRoutes:(id)arg1;
- (void)addIncidentsOnETARoute:(id)arg1;
- (void)addIncidentsOnReRoutes:(id)arg1;
- (void)addInvalidSectionZilchPoints:(id)arg1;
- (void)addReroutedRoute:(id)arg1;
- (void)addStep:(id)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (id)bannerDescription;
- (id)bannerSpoken;
- (id)bannerTitle;
- (void)clearEnrouteNotices;
- (void)clearIncidentEndOffsetsInETARoutes;
- (void)clearIncidentsOffReRoutes;
- (void)clearIncidentsOnETARoutes;
- (void)clearIncidentsOnReRoutes;
- (void)clearInvalidSectionZilchPoints;
- (void)clearReroutedRoutes;
- (void)clearSteps;
- (void)clearTrafficColorOffsets;
- (void)clearTrafficColors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)enrouteNoticeAtIndex:(unsigned long long)arg1;
- (unsigned long long)enrouteNoticesCount;
- (unsigned long long)hash;
- (unsigned int)incidentEndOffsetsInETARouteAtIndex:(unsigned long long)arg1;
- (id)incidentsOffReRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOffReRoutesCount;
- (id)incidentsOnETARouteAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOnETARoutesCount;
- (id)incidentsOnReRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOnReRoutesCount;
- (id)invalidSectionZilchPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)invalidSectionZilchPointsCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (double)remainingTimeAlongRoute:(unsigned int)arg1 currentStepRemainingDistance:(double)arg2;
- (id)reroutedRouteAtIndex:(unsigned long long)arg1;
- (unsigned long long)reroutedRoutesCount;
- (void)setDebugBannerTitle:(id)arg1 bannerDescription:(id)arg2 bannerSpoken:(id)arg3;
- (void)setIncidentEndOffsetsInETARoutes:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setTrafficColorOffsets:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setTrafficColors:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (id)stepAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepIndexOfStepWithID:(unsigned int)arg1;
- (unsigned long long)stepsCount;
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end

