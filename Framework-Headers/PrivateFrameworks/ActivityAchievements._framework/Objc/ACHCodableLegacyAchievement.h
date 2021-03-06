//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivityAchievements/NSCopying-Protocol.h>

@class NSData, NSString;

@interface ACHCodableLegacyAchievement : PBCodable <NSCopying>
{
    long long _achievementType;
    double _completedDate;
    double _doubleValue;
    long long _intValue;
    long long _workoutActivityType;
    NSString *_definitionIdentifier;
    NSData *_uuid;
    BOOL _alerted;
    struct {
        unsigned int achievementType:1;
        unsigned int completedDate:1;
        unsigned int doubleValue:1;
        unsigned int intValue:1;
        unsigned int workoutActivityType:1;
        unsigned int alerted:1;
    } _has;
}

@property (nonatomic) long long achievementType; // @synthesize achievementType=_achievementType;
@property (nonatomic) BOOL alerted; // @synthesize alerted=_alerted;
@property (nonatomic) double completedDate; // @synthesize completedDate=_completedDate;
@property (strong, nonatomic) NSString *definitionIdentifier; // @synthesize definitionIdentifier=_definitionIdentifier;
@property (nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property (nonatomic) BOOL hasAchievementType;
@property (nonatomic) BOOL hasAlerted;
@property (nonatomic) BOOL hasCompletedDate;
@property (readonly, nonatomic) BOOL hasDefinitionIdentifier;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasIntValue;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) BOOL hasWorkoutActivityType;
@property (nonatomic) long long intValue; // @synthesize intValue=_intValue;
@property (strong, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
@property (nonatomic) long long workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;

- (void).cxx_destruct;
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

