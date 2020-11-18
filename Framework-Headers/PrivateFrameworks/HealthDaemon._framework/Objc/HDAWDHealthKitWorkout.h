//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDAWDHealthKitWorkout : PBCodable <NSCopying>
{
    long long _durationMs;
    long long _endDate;
    long long _startDate;
    unsigned long long _timestamp;
    long long _totalDistance;
    long long _totalEnergyBurned;
    long long _totalSteps;
    int _activityType;
    struct {
        unsigned int durationMs:1;
        unsigned int endDate:1;
        unsigned int startDate:1;
        unsigned int timestamp:1;
        unsigned int totalDistance:1;
        unsigned int totalEnergyBurned:1;
        unsigned int totalSteps:1;
        unsigned int activityType:1;
    } _has;
}

@property (nonatomic) int activityType; // @synthesize activityType=_activityType;
@property (nonatomic) long long durationMs; // @synthesize durationMs=_durationMs;
@property (nonatomic) long long endDate; // @synthesize endDate=_endDate;
@property (nonatomic) BOOL hasActivityType;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTotalDistance;
@property (nonatomic) BOOL hasTotalEnergyBurned;
@property (nonatomic) BOOL hasTotalSteps;
@property (nonatomic) long long startDate; // @synthesize startDate=_startDate;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) long long totalDistance; // @synthesize totalDistance=_totalDistance;
@property (nonatomic) long long totalEnergyBurned; // @synthesize totalEnergyBurned=_totalEnergyBurned;
@property (nonatomic) long long totalSteps; // @synthesize totalSteps=_totalSteps;

- (int)StringAsActivityType:(id)arg1;
- (id)activityTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

