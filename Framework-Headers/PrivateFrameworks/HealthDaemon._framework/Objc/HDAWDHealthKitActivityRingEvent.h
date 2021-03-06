//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDAWDHealthKitActivityRingEvent : PBCodable <NSCopying>
{
    unsigned long long _eventTimestamp;
    unsigned long long _timestamp;
    unsigned int _activeSeconds;
    unsigned int _age;
    unsigned int _biologicalSex;
    unsigned int _briskMinutes;
    unsigned int _energyBurned;
    unsigned int _energyBurnedGoal;
    unsigned int _height;
    unsigned int _weight;
    struct {
        unsigned int eventTimestamp:1;
        unsigned int timestamp:1;
        unsigned int activeSeconds:1;
        unsigned int age:1;
        unsigned int biologicalSex:1;
        unsigned int briskMinutes:1;
        unsigned int energyBurned:1;
        unsigned int energyBurnedGoal:1;
        unsigned int height:1;
        unsigned int weight:1;
    } _has;
}

@property (nonatomic) unsigned int activeSeconds; // @synthesize activeSeconds=_activeSeconds;
@property (nonatomic) unsigned int age; // @synthesize age=_age;
@property (nonatomic) unsigned int biologicalSex; // @synthesize biologicalSex=_biologicalSex;
@property (nonatomic) unsigned int briskMinutes; // @synthesize briskMinutes=_briskMinutes;
@property (nonatomic) unsigned int energyBurned; // @synthesize energyBurned=_energyBurned;
@property (nonatomic) unsigned int energyBurnedGoal; // @synthesize energyBurnedGoal=_energyBurnedGoal;
@property (nonatomic) unsigned long long eventTimestamp; // @synthesize eventTimestamp=_eventTimestamp;
@property (nonatomic) BOOL hasActiveSeconds;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) BOOL hasBiologicalSex;
@property (nonatomic) BOOL hasBriskMinutes;
@property (nonatomic) BOOL hasEnergyBurned;
@property (nonatomic) BOOL hasEnergyBurnedGoal;
@property (nonatomic) BOOL hasEventTimestamp;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWeight;
@property (nonatomic) unsigned int height; // @synthesize height=_height;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) unsigned int weight; // @synthesize weight=_weight;

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

