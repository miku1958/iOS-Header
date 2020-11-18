//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDAWDHealthKitAchievement : PBCodable <NSCopying>
{
    long long _completedDate;
    long long _value;
    int _achievementType;
    NSString *_definitionIdentifier;
    int _workoutActivityType;
    struct {
        unsigned int completedDate:1;
        unsigned int value:1;
        unsigned int achievementType:1;
        unsigned int workoutActivityType:1;
    } _has;
}

@property (nonatomic) int achievementType; // @synthesize achievementType=_achievementType;
@property (nonatomic) long long completedDate; // @synthesize completedDate=_completedDate;
@property (strong, nonatomic) NSString *definitionIdentifier; // @synthesize definitionIdentifier=_definitionIdentifier;
@property (nonatomic) BOOL hasAchievementType;
@property (nonatomic) BOOL hasCompletedDate;
@property (readonly, nonatomic) BOOL hasDefinitionIdentifier;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) BOOL hasWorkoutActivityType;
@property (nonatomic) long long value; // @synthesize value=_value;
@property (nonatomic) int workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;

- (void).cxx_destruct;
- (int)StringAsAchievementType:(id)arg1;
- (int)StringAsWorkoutActivityType:(id)arg1;
- (id)achievementTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)workoutActivityTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
