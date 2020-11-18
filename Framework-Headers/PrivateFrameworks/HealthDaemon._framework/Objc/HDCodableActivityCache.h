//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableSample, NSMutableArray, NSString;

@interface HDCodableActivityCache : PBCodable <HDDecoding, NSCopying>
{
    double _activeHours;
    double _briskMinutes;
    long long _cacheIndex;
    double _deepBreathingDuration;
    double _energyBurned;
    double _energyBurnedGoal;
    double _energyBurnedGoalDate;
    long long _flightsClimbed;
    long long _pushCount;
    long long _sequence;
    long long _stepCount;
    double _walkingAndRunningDistance;
    long long _wheelchairUse;
    NSMutableArray *_dailyBriskMinutesStatistics;
    NSMutableArray *_dailyEnergyBurnedStatistics;
    HDCodableSample *_sample;
    struct {
        unsigned int activeHours:1;
        unsigned int briskMinutes:1;
        unsigned int cacheIndex:1;
        unsigned int deepBreathingDuration:1;
        unsigned int energyBurned:1;
        unsigned int energyBurnedGoal:1;
        unsigned int energyBurnedGoalDate:1;
        unsigned int flightsClimbed:1;
        unsigned int pushCount:1;
        unsigned int sequence:1;
        unsigned int stepCount:1;
        unsigned int walkingAndRunningDistance:1;
        unsigned int wheelchairUse:1;
    } _has;
}

@property (nonatomic) double activeHours; // @synthesize activeHours=_activeHours;
@property (nonatomic) double briskMinutes; // @synthesize briskMinutes=_briskMinutes;
@property (nonatomic) long long cacheIndex; // @synthesize cacheIndex=_cacheIndex;
@property (strong, nonatomic) NSMutableArray *dailyBriskMinutesStatistics; // @synthesize dailyBriskMinutesStatistics=_dailyBriskMinutesStatistics;
@property (strong, nonatomic) NSMutableArray *dailyEnergyBurnedStatistics; // @synthesize dailyEnergyBurnedStatistics=_dailyEnergyBurnedStatistics;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double deepBreathingDuration; // @synthesize deepBreathingDuration=_deepBreathingDuration;
@property (readonly, copy) NSString *description;
@property (nonatomic) double energyBurned; // @synthesize energyBurned=_energyBurned;
@property (nonatomic) double energyBurnedGoal; // @synthesize energyBurnedGoal=_energyBurnedGoal;
@property (nonatomic) double energyBurnedGoalDate; // @synthesize energyBurnedGoalDate=_energyBurnedGoalDate;
@property (nonatomic) long long flightsClimbed; // @synthesize flightsClimbed=_flightsClimbed;
@property (nonatomic) BOOL hasActiveHours;
@property (nonatomic) BOOL hasBriskMinutes;
@property (nonatomic) BOOL hasCacheIndex;
@property (nonatomic) BOOL hasDeepBreathingDuration;
@property (nonatomic) BOOL hasEnergyBurned;
@property (nonatomic) BOOL hasEnergyBurnedGoal;
@property (nonatomic) BOOL hasEnergyBurnedGoalDate;
@property (nonatomic) BOOL hasFlightsClimbed;
@property (nonatomic) BOOL hasPushCount;
@property (readonly, nonatomic) BOOL hasSample;
@property (nonatomic) BOOL hasSequence;
@property (nonatomic) BOOL hasStepCount;
@property (nonatomic) BOOL hasWalkingAndRunningDistance;
@property (nonatomic) BOOL hasWheelchairUse;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long pushCount; // @synthesize pushCount=_pushCount;
@property (strong, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
@property (nonatomic) long long sequence; // @synthesize sequence=_sequence;
@property (nonatomic) long long stepCount; // @synthesize stepCount=_stepCount;
@property (readonly) Class superclass;
@property (nonatomic) double walkingAndRunningDistance; // @synthesize walkingAndRunningDistance=_walkingAndRunningDistance;
@property (nonatomic) long long wheelchairUse; // @synthesize wheelchairUse=_wheelchairUse;

+ (Class)dailyBriskMinutesStatisticsType;
+ (Class)dailyEnergyBurnedStatisticsType;
- (void).cxx_destruct;
- (void)addDailyBriskMinutesStatistics:(id)arg1;
- (void)addDailyEnergyBurnedStatistics:(id)arg1;
- (BOOL)applyToObject:(id)arg1;
- (void)clearDailyBriskMinutesStatistics;
- (void)clearDailyEnergyBurnedStatistics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dailyBriskMinutesStatisticsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dailyBriskMinutesStatisticsCount;
- (id)dailyEnergyBurnedStatisticsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dailyEnergyBurnedStatisticsCount;
- (id)decodedEnergyBurnedGoalQuantity;
- (id)decodedEnergyBurnedQuantity;
- (id)decodedWalkingAndRunningDistanceQuantity;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

