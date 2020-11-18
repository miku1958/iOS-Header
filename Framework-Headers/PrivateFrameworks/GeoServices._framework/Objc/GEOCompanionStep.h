//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOCompanionCompatibility-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOCompanionCyclingStep, GEOCompanionDriveStep, GEOCompanionFerryStep, GEOCompanionGenericStep, GEOCompanionWalkStep, GEOStopWaypoint, NSData, NSMutableArray, NSString, PBDataReader;

@interface GEOCompanionStep : PBCodable <GEOCompanionCompatibility, NSCopying>
{
    PBDataReader *_reader;
    GEOCompanionCyclingStep *_cyclingStep;
    GEOCompanionDriveStep *_driveStep;
    GEOCompanionFerryStep *_ferryStep;
    GEOCompanionGenericStep *_genericStep;
    NSMutableArray *_guidanceEvents;
    NSMutableArray *_instructionWithAlternatives;
    NSString *_listInstruction;
    NSMutableArray *_roadDescriptions;
    NSString *_roadName;
    GEOStopWaypoint *_stopWaypoint;
    NSData *_updateID;
    GEOCompanionWalkStep *_walkStep;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    float _distanceMeters;
    unsigned int _distance;
    unsigned int _endCoordinateIndex;
    unsigned int _maneuverStartCoordinateIndex;
    unsigned int _startCoordinateIndex;
    unsigned int _stepID;
    unsigned int _time;
    struct {
        unsigned int has_distanceMeters:1;
        unsigned int has_distance:1;
        unsigned int has_endCoordinateIndex:1;
        unsigned int has_maneuverStartCoordinateIndex:1;
        unsigned int has_startCoordinateIndex:1;
        unsigned int has_stepID:1;
        unsigned int has_time:1;
        unsigned int read_cyclingStep:1;
        unsigned int read_driveStep:1;
        unsigned int read_ferryStep:1;
        unsigned int read_genericStep:1;
        unsigned int read_guidanceEvents:1;
        unsigned int read_instructionWithAlternatives:1;
        unsigned int read_listInstruction:1;
        unsigned int read_roadDescriptions:1;
        unsigned int read_roadName:1;
        unsigned int read_stopWaypoint:1;
        unsigned int read_updateID:1;
        unsigned int read_walkStep:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) GEOCompanionCyclingStep *cyclingStep;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int distance;
@property (nonatomic) float distanceMeters;
@property (strong, nonatomic) GEOCompanionDriveStep *driveStep;
@property (nonatomic) unsigned int endCoordinateIndex;
@property (strong, nonatomic) GEOCompanionFerryStep *ferryStep;
@property (strong, nonatomic) GEOCompanionGenericStep *genericStep;
@property (strong, nonatomic) NSMutableArray *guidanceEvents;
@property (readonly, nonatomic) BOOL hasCyclingStep;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) BOOL hasDistanceMeters;
@property (readonly, nonatomic) BOOL hasDriveStep;
@property (nonatomic) BOOL hasEndCoordinateIndex;
@property (readonly, nonatomic) BOOL hasFerryStep;
@property (readonly, nonatomic) BOOL hasGenericStep;
@property (readonly, nonatomic) BOOL hasListInstruction;
@property (nonatomic) BOOL hasManeuverStartCoordinateIndex;
@property (readonly, nonatomic) BOOL hasRoadName;
@property (nonatomic) BOOL hasStartCoordinateIndex;
@property (nonatomic) BOOL hasStepID;
@property (readonly, nonatomic) BOOL hasStopWaypoint;
@property (nonatomic) BOOL hasTime;
@property (readonly, nonatomic) BOOL hasUpdateID;
@property (readonly, nonatomic) BOOL hasWalkStep;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *instructionWithAlternatives;
@property (strong, nonatomic) NSString *listInstruction;
@property (nonatomic) unsigned int maneuverStartCoordinateIndex;
@property (strong, nonatomic) NSMutableArray *roadDescriptions;
@property (strong, nonatomic) NSString *roadName;
@property (nonatomic) unsigned int startCoordinateIndex;
@property (nonatomic) unsigned int stepID;
@property (strong, nonatomic) GEOStopWaypoint *stopWaypoint;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int time;
@property (strong, nonatomic) NSData *updateID;
@property (strong, nonatomic) GEOCompanionWalkStep *walkStep;

+ (Class)guidanceEventType;
+ (Class)instructionWithAlternativesType;
+ (BOOL)isValid:(id)arg1;
+ (Class)roadDescriptionsType;
- (void).cxx_destruct;
- (void)addGuidanceEvent:(id)arg1;
- (void)addInstructionWithAlternatives:(id)arg1;
- (void)addRoadDescriptions:(id)arg1;
- (void)clearGuidanceEvents;
- (void)clearInstructionWithAlternatives;
- (void)clearRoadDescriptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)geoStep;
- (id)guidanceEventAtIndex:(unsigned long long)arg1;
- (unsigned long long)guidanceEventsCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithStep:(id)arg1 route:(id)arg2 stringFormatter:(id)arg3;
- (id)instanceCompatibleWithProtocolVersion:(unsigned long long)arg1;
- (id)instructionWithAlternativesAtIndex:(unsigned long long)arg1;
- (unsigned long long)instructionWithAlternativesCount;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)maneuverStep;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)roadDescriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)roadDescriptionsCount;
- (void)writeTo:(id)arg1;

@end
