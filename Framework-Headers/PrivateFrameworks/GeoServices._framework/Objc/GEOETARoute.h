//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTrafficBannerText, NSData, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOETARoute : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _incidentEndOffsetsInETARoutes;
    CDStruct_9f2792e4 _trafficColorOffsets;
    CDStruct_9f2792e4 _trafficColors;
    NSMutableArray *_enrouteNotices;
    NSMutableArray *_incidentsOffReRoutes;
    NSMutableArray *_incidentsOnETARoutes;
    NSMutableArray *_incidentsOnReRoutes;
    NSMutableArray *_invalidSectionZilchPoints;
    NSMutableArray *_reroutedRoutes;
    NSData *_routeID;
    NSMutableArray *_steps;
    GEOTrafficBannerText *_trafficBannerText;
    NSData *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _historicTravelTime;
    unsigned int _staticTravelTime;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeBestEstimate;
    unsigned int _travelTimeConservativeEstimate;
    BOOL _routeNoLongerValid;
    struct {
        unsigned int has_historicTravelTime:1;
        unsigned int has_staticTravelTime:1;
        unsigned int has_travelTimeAggressiveEstimate:1;
        unsigned int has_travelTimeBestEstimate:1;
        unsigned int has_travelTimeConservativeEstimate:1;
        unsigned int has_routeNoLongerValid:1;
        unsigned int read_unknownFields:1;
        unsigned int read_incidentEndOffsetsInETARoutes:1;
        unsigned int read_trafficColorOffsets:1;
        unsigned int read_trafficColors:1;
        unsigned int read_enrouteNotices:1;
        unsigned int read_incidentsOffReRoutes:1;
        unsigned int read_incidentsOnETARoutes:1;
        unsigned int read_incidentsOnReRoutes:1;
        unsigned int read_invalidSectionZilchPoints:1;
        unsigned int read_reroutedRoutes:1;
        unsigned int read_routeID:1;
        unsigned int read_steps:1;
        unsigned int read_trafficBannerText:1;
        unsigned int read_zilchPoints:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_incidentEndOffsetsInETARoutes:1;
        unsigned int wrote_trafficColorOffsets:1;
        unsigned int wrote_trafficColors:1;
        unsigned int wrote_enrouteNotices:1;
        unsigned int wrote_incidentsOffReRoutes:1;
        unsigned int wrote_incidentsOnETARoutes:1;
        unsigned int wrote_incidentsOnReRoutes:1;
        unsigned int wrote_invalidSectionZilchPoints:1;
        unsigned int wrote_reroutedRoutes:1;
        unsigned int wrote_routeID:1;
        unsigned int wrote_steps:1;
        unsigned int wrote_trafficBannerText:1;
        unsigned int wrote_zilchPoints:1;
        unsigned int wrote_historicTravelTime:1;
        unsigned int wrote_staticTravelTime:1;
        unsigned int wrote_travelTimeAggressiveEstimate:1;
        unsigned int wrote_travelTimeBestEstimate:1;
        unsigned int wrote_travelTimeConservativeEstimate:1;
        unsigned int wrote_routeNoLongerValid:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *enrouteNotices;
@property (readonly, nonatomic) double expectedTime;
@property (nonatomic) BOOL hasHistoricTravelTime;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (nonatomic) BOOL hasRouteNoLongerValid;
@property (nonatomic) BOOL hasStaticTravelTime;
@property (readonly, nonatomic) BOOL hasTrafficBannerText;
@property (nonatomic) BOOL hasTravelTimeAggressiveEstimate;
@property (nonatomic) BOOL hasTravelTimeBestEstimate;
@property (nonatomic) BOOL hasTravelTimeConservativeEstimate;
@property (readonly, nonatomic) BOOL hasZilchPoints;
@property (nonatomic) unsigned int historicTravelTime;
@property (readonly, nonatomic) unsigned int *incidentEndOffsetsInETARoutes;
@property (readonly, nonatomic) unsigned long long incidentEndOffsetsInETARoutesCount;
@property (strong, nonatomic) NSMutableArray *incidentsOffReRoutes;
@property (strong, nonatomic) NSMutableArray *incidentsOnETARoutes;
@property (strong, nonatomic) NSMutableArray *incidentsOnReRoutes;
@property (strong, nonatomic) NSMutableArray *invalidSectionZilchPoints;
@property (strong, nonatomic) NSMutableArray *reroutedRoutes;
@property (strong, nonatomic) NSData *routeID;
@property (nonatomic) BOOL routeNoLongerValid;
@property (nonatomic) unsigned int staticTravelTime;
@property (strong, nonatomic) NSMutableArray *steps;
@property (strong, nonatomic) GEOTrafficBannerText *trafficBannerText;
@property (readonly, nonatomic) unsigned int *trafficColorOffsets;
@property (readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
@property (readonly, nonatomic) unsigned int *trafficColors;
@property (readonly, nonatomic) unsigned long long trafficColorsCount;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeBestEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) NSData *zilchPoints;

+ (Class)enrouteNoticeType;
+ (Class)incidentsOffReRoutesType;
+ (Class)incidentsOnETARouteType;
+ (Class)incidentsOnReRoutesType;
+ (Class)invalidSectionZilchPointsType;
+ (BOOL)isValid:(id)arg1;
+ (Class)reroutedRouteType;
+ (Class)stepType;
- (void).cxx_destruct;
- (void)_addDebugArguments:(id)arg1;
- (void)_addNoFlagsEnrouteNotice:(id)arg1;
- (void)_addNoFlagsIncidentEndOffsetsInETARoute:(unsigned int)arg1;
- (void)_addNoFlagsIncidentsOffReRoutes:(id)arg1;
- (void)_addNoFlagsIncidentsOnETARoute:(id)arg1;
- (void)_addNoFlagsIncidentsOnReRoutes:(id)arg1;
- (void)_addNoFlagsInvalidSectionZilchPoints:(id)arg1;
- (void)_addNoFlagsReroutedRoute:(id)arg1;
- (void)_addNoFlagsStep:(id)arg1;
- (void)_addNoFlagsTrafficColor:(unsigned int)arg1;
- (void)_addNoFlagsTrafficColorOffset:(unsigned int)arg1;
- (void)_readEnrouteNotices;
- (void)_readIncidentEndOffsetsInETARoutes;
- (void)_readIncidentsOffReRoutes;
- (void)_readIncidentsOnETARoutes;
- (void)_readIncidentsOnReRoutes;
- (void)_readInvalidSectionZilchPoints;
- (void)_readReroutedRoutes;
- (void)_readRouteID;
- (void)_readSteps;
- (void)_readTrafficBannerText;
- (void)_readTrafficColorOffsets;
- (void)_readTrafficColors;
- (void)_readZilchPoints;
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
- (void)clearUnknownFields:(BOOL)arg1;
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
- (id)init;
- (id)initWithData:(id)arg1;
- (id)invalidSectionZilchPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)invalidSectionZilchPointsCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
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
