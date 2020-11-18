//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDAWDHealthKitCoachingFeatures : PBCodable <NSCopying>
{
    unsigned int _activeCalories;
    unsigned int _automotive;
    unsigned int _briskMinutes;
    unsigned int _cycling;
    unsigned int _duration;
    unsigned int _heartRate;
    unsigned int _other;
    unsigned int _running;
    unsigned int _unknown;
    unsigned int _walking;
    unsigned int _workout;
    struct {
        unsigned int activeCalories:1;
        unsigned int automotive:1;
        unsigned int briskMinutes:1;
        unsigned int cycling:1;
        unsigned int duration:1;
        unsigned int heartRate:1;
        unsigned int other:1;
        unsigned int running:1;
        unsigned int unknown:1;
        unsigned int walking:1;
        unsigned int workout:1;
    } _has;
}

@property (nonatomic) unsigned int activeCalories; // @synthesize activeCalories=_activeCalories;
@property (nonatomic) unsigned int automotive; // @synthesize automotive=_automotive;
@property (nonatomic) unsigned int briskMinutes; // @synthesize briskMinutes=_briskMinutes;
@property (nonatomic) unsigned int cycling; // @synthesize cycling=_cycling;
@property (nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property (nonatomic) BOOL hasActiveCalories;
@property (nonatomic) BOOL hasAutomotive;
@property (nonatomic) BOOL hasBriskMinutes;
@property (nonatomic) BOOL hasCycling;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasHeartRate;
@property (nonatomic) BOOL hasOther;
@property (nonatomic) BOOL hasRunning;
@property (nonatomic) BOOL hasUnknown;
@property (nonatomic) BOOL hasWalking;
@property (nonatomic) BOOL hasWorkout;
@property (nonatomic) unsigned int heartRate; // @synthesize heartRate=_heartRate;
@property (nonatomic) unsigned int other; // @synthesize other=_other;
@property (nonatomic) unsigned int running; // @synthesize running=_running;
@property (nonatomic) unsigned int unknown; // @synthesize unknown=_unknown;
@property (nonatomic) unsigned int walking; // @synthesize walking=_walking;
@property (nonatomic) unsigned int workout; // @synthesize workout=_workout;

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
