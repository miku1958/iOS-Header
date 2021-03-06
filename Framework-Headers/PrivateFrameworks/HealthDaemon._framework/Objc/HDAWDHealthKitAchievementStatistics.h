//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDAWDHealthKitAchievementStatistics : PBCodable <NSCopying>
{
    long long _consecutiveBriskMinuteGoalsMet;
    long long _consecutiveCompleteDays;
    long long _consecutiveStandingHoursGoalsMet;
    long long _currentCalorieGoalConsecutiveCompleteDays;
    struct {
        unsigned int consecutiveBriskMinuteGoalsMet:1;
        unsigned int consecutiveCompleteDays:1;
        unsigned int consecutiveStandingHoursGoalsMet:1;
        unsigned int currentCalorieGoalConsecutiveCompleteDays:1;
    } _has;
}

@property (nonatomic) long long consecutiveBriskMinuteGoalsMet; // @synthesize consecutiveBriskMinuteGoalsMet=_consecutiveBriskMinuteGoalsMet;
@property (nonatomic) long long consecutiveCompleteDays; // @synthesize consecutiveCompleteDays=_consecutiveCompleteDays;
@property (nonatomic) long long consecutiveStandingHoursGoalsMet; // @synthesize consecutiveStandingHoursGoalsMet=_consecutiveStandingHoursGoalsMet;
@property (nonatomic) long long currentCalorieGoalConsecutiveCompleteDays; // @synthesize currentCalorieGoalConsecutiveCompleteDays=_currentCalorieGoalConsecutiveCompleteDays;
@property (nonatomic) BOOL hasConsecutiveBriskMinuteGoalsMet;
@property (nonatomic) BOOL hasConsecutiveCompleteDays;
@property (nonatomic) BOOL hasConsecutiveStandingHoursGoalsMet;
@property (nonatomic) BOOL hasCurrentCalorieGoalConsecutiveCompleteDays;

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

