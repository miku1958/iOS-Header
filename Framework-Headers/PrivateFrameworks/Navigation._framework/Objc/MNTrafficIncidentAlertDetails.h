//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Navigation/NSCopying-Protocol.h>

@class GEOETARoute, GEORoute, MNRouteCoordinate, NSData, NSMutableArray;

@interface MNTrafficIncidentAlertDetails : PBCodable <NSCopying>
{
    double _alertTimestamp;
    double _distanceToIncident;
    double _etaTimestamp;
    NSData *_alertID;
    unsigned int _alertType;
    GEORoute *_alternateRoute;
    MNRouteCoordinate *_endValidCoordinateRange;
    NSData *_etaResponseID;
    GEOETARoute *_etaRoute;
    MNRouteCoordinate *_incidentCoordinate;
    GEORoute *_originalRoute;
    NSMutableArray *_originalRouteIncidentsDatas;
    MNRouteCoordinate *_startValidCoordinateRange;
    BOOL _isAutomaticReroute;
    struct {
        unsigned int alertTimestamp:1;
        unsigned int distanceToIncident:1;
        unsigned int etaTimestamp:1;
        unsigned int alertType:1;
        unsigned int isAutomaticReroute:1;
    } _has;
}

@property (strong, nonatomic) NSData *alertID; // @synthesize alertID=_alertID;
@property (nonatomic) double alertTimestamp; // @synthesize alertTimestamp=_alertTimestamp;
@property (nonatomic) unsigned int alertType; // @synthesize alertType=_alertType;
@property (strong, nonatomic) GEORoute *alternateRoute; // @synthesize alternateRoute=_alternateRoute;
@property (nonatomic) double distanceToIncident; // @synthesize distanceToIncident=_distanceToIncident;
@property (strong, nonatomic) MNRouteCoordinate *endValidCoordinateRange; // @synthesize endValidCoordinateRange=_endValidCoordinateRange;
@property (strong, nonatomic) NSData *etaResponseID; // @synthesize etaResponseID=_etaResponseID;
@property (strong, nonatomic) GEOETARoute *etaRoute; // @synthesize etaRoute=_etaRoute;
@property (nonatomic) double etaTimestamp; // @synthesize etaTimestamp=_etaTimestamp;
@property (readonly, nonatomic) BOOL hasAlertID;
@property (nonatomic) BOOL hasAlertTimestamp;
@property (nonatomic) BOOL hasAlertType;
@property (readonly, nonatomic) BOOL hasAlternateRoute;
@property (nonatomic) BOOL hasDistanceToIncident;
@property (readonly, nonatomic) BOOL hasEndValidCoordinateRange;
@property (readonly, nonatomic) BOOL hasEtaResponseID;
@property (readonly, nonatomic) BOOL hasEtaRoute;
@property (nonatomic) BOOL hasEtaTimestamp;
@property (readonly, nonatomic) BOOL hasIncidentCoordinate;
@property (nonatomic) BOOL hasIsAutomaticReroute;
@property (readonly, nonatomic) BOOL hasOriginalRoute;
@property (readonly, nonatomic) BOOL hasStartValidCoordinateRange;
@property (strong, nonatomic) MNRouteCoordinate *incidentCoordinate; // @synthesize incidentCoordinate=_incidentCoordinate;
@property (nonatomic) BOOL isAutomaticReroute; // @synthesize isAutomaticReroute=_isAutomaticReroute;
@property (strong, nonatomic) GEORoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property (strong, nonatomic) NSMutableArray *originalRouteIncidentsDatas; // @synthesize originalRouteIncidentsDatas=_originalRouteIncidentsDatas;
@property (strong, nonatomic) MNRouteCoordinate *startValidCoordinateRange; // @synthesize startValidCoordinateRange=_startValidCoordinateRange;

+ (id)detailsForTrafficIncidentAlert:(id)arg1;
+ (Class)originalRouteIncidentsDataType;
- (void).cxx_destruct;
- (void)addOriginalRouteIncidentsData:(id)arg1;
- (void)clearOriginalRouteIncidentsDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originalRouteIncidentsDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)originalRouteIncidentsDatasCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
