//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAlertNonRecommendedRouteText, GEOLaunchAndGoCardText, GEORouteInformation, NSData, NSMutableArray, NSString;

@interface GEORoute : PBCodable <NSCopying>
{
    CDStruct_95bda58d _advisorys;
    CDStruct_9f2792e4 _incidentEndOffsetsInRoutes;
    CDStruct_9f2792e4 _incidentIndices;
    CDStruct_9f2792e4 _trafficColorOffsets;
    CDStruct_9f2792e4 _trafficColors;
    NSMutableArray *_advisoryNotices;
    GEOAlertNonRecommendedRouteText *_alertNonRecommendedRouteText;
    NSData *_arrivalRouteID;
    unsigned int _arrivalStepID;
    NSData *_basicPoints;
    NSData *_departureRouteID;
    unsigned int _departureStepID;
    unsigned int _distance;
    int _drivingSide;
    NSMutableArray *_endingRouteInstructions;
    NSMutableArray *_enrouteNotices;
    unsigned int _expectedTime;
    NSMutableArray *_guidanceEvents;
    unsigned int _historicTravelTime;
    GEOLaunchAndGoCardText *_launchAndGoCardText;
    NSString *_name;
    NSString *_phoneticName;
    NSMutableArray *_routeDescriptions;
    NSData *_routeID;
    NSMutableArray *_routeNames;
    GEORouteInformation *_routePlanningDescription;
    int _routeType;
    NSMutableArray *_startingRouteInstructions;
    unsigned int _staticTravelTime;
    NSMutableArray *_steps;
    NSString *_trafficDescription;
    NSString *_trafficDescriptionLong;
    int _transportType;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeConservativeEstimate;
    NSData *_unpackedLatLngVertices;
    NSData *_zilchPoints;
    BOOL _avoidsHighways;
    BOOL _avoidsTolls;
    BOOL _avoidsTraffic;
    BOOL _isOfflineResponse;
    struct {
        unsigned int arrivalStepID:1;
        unsigned int departureStepID:1;
        unsigned int distance:1;
        unsigned int drivingSide:1;
        unsigned int expectedTime:1;
        unsigned int historicTravelTime:1;
        unsigned int routeType:1;
        unsigned int staticTravelTime:1;
        unsigned int transportType:1;
        unsigned int travelTimeAggressiveEstimate:1;
        unsigned int travelTimeConservativeEstimate:1;
        unsigned int avoidsHighways:1;
        unsigned int avoidsTolls:1;
        unsigned int avoidsTraffic:1;
        unsigned int isOfflineResponse:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *advisoryNotices; // @synthesize advisoryNotices=_advisoryNotices;
@property (readonly, nonatomic) int *advisorys;
@property (readonly, nonatomic) unsigned long long advisorysCount;
@property (strong, nonatomic) GEOAlertNonRecommendedRouteText *alertNonRecommendedRouteText; // @synthesize alertNonRecommendedRouteText=_alertNonRecommendedRouteText;
@property (strong, nonatomic) NSData *arrivalRouteID; // @synthesize arrivalRouteID=_arrivalRouteID;
@property (nonatomic) unsigned int arrivalStepID; // @synthesize arrivalStepID=_arrivalStepID;
@property (nonatomic) BOOL avoidsHighways; // @synthesize avoidsHighways=_avoidsHighways;
@property (nonatomic) BOOL avoidsTolls; // @synthesize avoidsTolls=_avoidsTolls;
@property (nonatomic) BOOL avoidsTraffic; // @synthesize avoidsTraffic=_avoidsTraffic;
@property (strong, nonatomic) NSData *basicPoints; // @synthesize basicPoints=_basicPoints;
@property (strong, nonatomic) NSData *departureRouteID; // @synthesize departureRouteID=_departureRouteID;
@property (nonatomic) unsigned int departureStepID; // @synthesize departureStepID=_departureStepID;
@property (nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property (nonatomic) int drivingSide; // @synthesize drivingSide=_drivingSide;
@property (strong, nonatomic) NSMutableArray *endingRouteInstructions; // @synthesize endingRouteInstructions=_endingRouteInstructions;
@property (strong, nonatomic) NSMutableArray *enrouteNotices; // @synthesize enrouteNotices=_enrouteNotices;
@property (nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
@property (strong, nonatomic) NSMutableArray *guidanceEvents; // @synthesize guidanceEvents=_guidanceEvents;
@property (readonly, nonatomic) BOOL hasAlertNonRecommendedRouteText;
@property (readonly, nonatomic) BOOL hasArrivalRouteID;
@property (nonatomic) BOOL hasArrivalStepID;
@property (nonatomic) BOOL hasAvoidsHighways;
@property (nonatomic) BOOL hasAvoidsTolls;
@property (nonatomic) BOOL hasAvoidsTraffic;
@property (readonly, nonatomic) BOOL hasBasicPoints;
@property (readonly, nonatomic) BOOL hasDepartureRouteID;
@property (nonatomic) BOOL hasDepartureStepID;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) BOOL hasDrivingSide;
@property (nonatomic) BOOL hasExpectedTime;
@property (nonatomic) BOOL hasHistoricTravelTime;
@property (nonatomic) BOOL hasIsOfflineResponse;
@property (readonly, nonatomic) BOOL hasLaunchAndGoCardText;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasPhoneticName;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (readonly, nonatomic) BOOL hasRoutePlanningDescription;
@property (nonatomic) BOOL hasRouteType;
@property (nonatomic) BOOL hasStaticTravelTime;
@property (readonly, nonatomic) BOOL hasTrafficDescription;
@property (readonly, nonatomic) BOOL hasTrafficDescriptionLong;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL hasTravelTimeAggressiveEstimate;
@property (nonatomic) BOOL hasTravelTimeConservativeEstimate;
@property (readonly, nonatomic) BOOL hasUnpackedLatLngVertices;
@property (readonly, nonatomic) BOOL hasZilchPoints;
@property (nonatomic) unsigned int historicTravelTime; // @synthesize historicTravelTime=_historicTravelTime;
@property (readonly, nonatomic) unsigned int *incidentEndOffsetsInRoutes;
@property (readonly, nonatomic) unsigned long long incidentEndOffsetsInRoutesCount;
@property (readonly, nonatomic) unsigned int *incidentIndices;
@property (readonly, nonatomic) unsigned long long incidentIndicesCount;
@property (nonatomic) BOOL isOfflineResponse;
@property (strong, nonatomic) GEOLaunchAndGoCardText *launchAndGoCardText; // @synthesize launchAndGoCardText=_launchAndGoCardText;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property (readonly) unsigned int pointCount;
@property (strong, nonatomic) NSMutableArray *routeDescriptions; // @synthesize routeDescriptions=_routeDescriptions;
@property (strong, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property (strong, nonatomic) NSMutableArray *routeNames; // @synthesize routeNames=_routeNames;
@property (strong, nonatomic) GEORouteInformation *routePlanningDescription; // @synthesize routePlanningDescription=_routePlanningDescription;
@property (nonatomic) int routeType; // @synthesize routeType=_routeType;
@property (strong, nonatomic) NSMutableArray *startingRouteInstructions; // @synthesize startingRouteInstructions=_startingRouteInstructions;
@property (nonatomic) unsigned int staticTravelTime; // @synthesize staticTravelTime=_staticTravelTime;
@property (strong, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
@property (readonly, nonatomic) unsigned int *trafficColorOffsets;
@property (readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
@property (readonly, nonatomic) unsigned int *trafficColors;
@property (readonly, nonatomic) unsigned long long trafficColorsCount;
@property (strong, nonatomic) NSString *trafficDescription; // @synthesize trafficDescription=_trafficDescription;
@property (strong, nonatomic) NSString *trafficDescriptionLong; // @synthesize trafficDescriptionLong=_trafficDescriptionLong;
@property (nonatomic) int transportType; // @synthesize transportType=_transportType;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate; // @synthesize travelTimeAggressiveEstimate=_travelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate; // @synthesize travelTimeConservativeEstimate=_travelTimeConservativeEstimate;
@property (strong, nonatomic) NSData *unpackedLatLngVertices; // @synthesize unpackedLatLngVertices=_unpackedLatLngVertices;
@property (strong, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;

+ (Class)advisoryNoticeType;
+ (Class)endingRouteInstructionType;
+ (Class)enrouteNoticeType;
+ (Class)guidanceEventType;
+ (Class)routeDescriptionType;
+ (Class)routeNameType;
+ (Class)startingRouteInstructionType;
+ (Class)stepType;
- (void).cxx_destruct;
- (int)StringAsAdvisorys:(id)arg1;
- (int)StringAsDrivingSide:(id)arg1;
- (int)StringAsRouteType:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (void)addAdvisory:(int)arg1;
- (void)addAdvisoryNotice:(id)arg1;
- (void)addEndingRouteInstruction:(id)arg1;
- (void)addEnrouteNotice:(id)arg1;
- (void)addGuidanceEvent:(id)arg1;
- (void)addIncidentEndOffsetsInRoute:(unsigned int)arg1;
- (void)addIncidentIndices:(unsigned int)arg1;
- (void)addRouteDescription:(id)arg1;
- (void)addRouteName:(id)arg1;
- (void)addStartingRouteInstruction:(id)arg1;
- (void)addStep:(id)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (int)advisoryAtIndex:(unsigned long long)arg1;
- (id)advisoryNoticeAtIndex:(unsigned long long)arg1;
- (unsigned long long)advisoryNoticesCount;
- (id)advisorysAsString:(int)arg1;
- (void)clearAdvisoryNotices;
- (void)clearAdvisorys;
- (void)clearEndingRouteInstructions;
- (void)clearEnrouteNotices;
- (void)clearGuidanceEvents;
- (void)clearIncidentEndOffsetsInRoutes;
- (void)clearIncidentIndices;
- (void)clearRouteDescriptions;
- (void)clearRouteNames;
- (void)clearStartingRouteInstructions;
- (void)clearSteps;
- (void)clearTrafficColorOffsets;
- (void)clearTrafficColors;
- (void *)controlPoints;
- (id)convertToFullRoute:(id)arg1 includeDepartureRoutes:(BOOL)arg2 uniquePointRange:(struct _NSRange *)arg3;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)distanceFromStepIndex:(unsigned long long)arg1 toStepIndex:(unsigned long long)arg2;
- (id)drivingSideAsString:(int)arg1;
- (id)endingRouteInstructionAtIndex:(unsigned long long)arg1;
- (unsigned long long)endingRouteInstructionsCount;
- (id)enrouteNoticeAtIndex:(unsigned long long)arg1;
- (unsigned long long)enrouteNoticesCount;
- (id)guidanceEventAtIndex:(unsigned long long)arg1;
- (unsigned long long)guidanceEventsCount;
- (unsigned long long)hash;
- (unsigned int)incidentEndOffsetsInRouteAtIndex:(unsigned long long)arg1;
- (unsigned int)incidentIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForStepID:(unsigned long long)arg1;
- (BOOL)isContingentRoute;
- (BOOL)isContingentRouteFor:(id)arg1 afterPoint:(unsigned int)arg2 mainRoutes:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMainOrAlternateRoute;
- (void)mergeFrom:(id)arg1;
- (id)newETARoute;
- (id)newETARouteFromStepIndex:(unsigned long long)arg1 stepPercentRemaining:(double)arg2;
- (CDStruct_c3b9c2ee)pointAt:(unsigned int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)routeDescriptionAtIndex:(unsigned long long)arg1;
- (unsigned long long)routeDescriptionsCount;
- (id)routeNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)routeNamesCount;
- (id)routeTypeAsString:(int)arg1;
- (void)setAdvisorys:(int *)arg1 count:(unsigned long long)arg2;
- (void)setIncidentEndOffsetsInRoutes:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setIncidentIndices:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setTrafficColorOffsets:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setTrafficColors:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (id)simplifiedDescription;
- (id)startingRouteInstructionAtIndex:(unsigned long long)arg1;
- (unsigned long long)startingRouteInstructionsCount;
- (id)stepAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepIndexForPointIndex:(unsigned int)arg1;
- (unsigned long long)stepsCount;
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (id)transportTypeAsString:(int)arg1;
- (int)transportTypeForStep:(id)arg1;
- (BOOL)unpackBasicPoints;
- (BOOL)unpackLatLngVertices;
- (BOOL)unpackZilchPoints;
- (void)writeTo:(id)arg1;

@end

