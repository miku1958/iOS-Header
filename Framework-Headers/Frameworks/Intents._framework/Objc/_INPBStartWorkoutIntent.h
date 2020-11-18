//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBStartWorkoutIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBDouble, _INPBIntentMetadata;

@interface _INPBStartWorkoutIntent : PBCodable <_INPBStartWorkoutIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int isOpenEnded:1;
        unsigned int workoutGoalUnitType:1;
        unsigned int workoutLocationType:1;
    } _has;
    BOOL _isOpenEnded;
    int _workoutGoalUnitType;
    int _workoutLocationType;
    _INPBDouble *_goalValue;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDataString *_workoutName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _INPBDouble *goalValue; // @synthesize goalValue=_goalValue;
@property (readonly, nonatomic) BOOL hasGoalValue;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasIsOpenEnded;
@property (nonatomic) BOOL hasWorkoutGoalUnitType;
@property (nonatomic) BOOL hasWorkoutLocationType;
@property (readonly, nonatomic) BOOL hasWorkoutName;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (nonatomic) BOOL isOpenEnded; // @synthesize isOpenEnded=_isOpenEnded;
@property (readonly) Class superclass;
@property (nonatomic) int workoutGoalUnitType; // @synthesize workoutGoalUnitType=_workoutGoalUnitType;
@property (nonatomic) int workoutLocationType; // @synthesize workoutLocationType=_workoutLocationType;
@property (strong, nonatomic) _INPBDataString *workoutName; // @synthesize workoutName=_workoutName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsWorkoutGoalUnitType:(id)arg1;
- (int)StringAsWorkoutLocationType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)workoutGoalUnitTypeAsString:(int)arg1;
- (id)workoutLocationTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
