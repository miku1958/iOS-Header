//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSNumber, NSUUID;

@interface HKAchievement : NSObject <NSSecureCoding>
{
    BOOL _alerted;
    BOOL _viewed;
    NSUUID *_UUID;
    unsigned long long _achievementType;
    NSDate *_completedDate;
    NSNumber *_value;
}

@property (strong, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (nonatomic) unsigned long long achievementType; // @synthesize achievementType=_achievementType;
@property (nonatomic, getter=isAlerted) BOOL alerted; // @synthesize alerted=_alerted;
@property (strong, nonatomic) NSDate *completedDate; // @synthesize completedDate=_completedDate;
@property (strong, nonatomic) NSData *extraData;
@property (strong, nonatomic) NSNumber *value; // @synthesize value=_value;
@property (nonatomic, getter=isViewed) BOOL viewed; // @synthesize viewed=_viewed;

+ (id)_achievementStringFromType:(unsigned long long)arg1;
+ (unsigned long long)_achievementTypeFromString:(id)arg1;
+ (id)_achievementTypeNameMappings;
+ (id)_achievementWithUUID:(id)arg1 type:(unsigned long long)arg2 completedDate:(id)arg3 value:(id)arg4 extraData:(id)arg5 alerted:(BOOL)arg6;
+ (id)_allAchievementTypeNames;
+ (Class)_classForAchievementType:(unsigned long long)arg1;
+ (id)_nextUUID;
+ (BOOL)_requiresValueForAchievementType:(unsigned long long)arg1;
+ (id)achievementWithAchievementType:(unsigned long long)arg1 completedDate:(id)arg2 value:(id)arg3;
+ (id)achievementWithAchievementType:(unsigned long long)arg1 completedDate:(id)arg2 value:(id)arg3 workoutActivityType:(unsigned long long)arg4;
+ (void)setOverridenUUID:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_achievementTypeString;
- (void)_decodeExtraDataWithCoder:(id)arg1;
- (void)_encodeExtraDataWithCoder:(id)arg1;
- (BOOL)_hasExtraData;
- (id)_localizedDescriptionForCompleteNumberOfTimes:(long long)arg1;
- (id)_localizedDescriptionForIncomplete;
- (id)_localizedShareDescriptionWithNumberOfTimesAchieved:(long long)arg1;
- (BOOL)_validateConfiguration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAchievementType:(unsigned long long)arg1 completedDate:(id)arg2 value:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)localizedDescriptionForAlertWithUserName:(id)arg1;
- (id)localizedDescriptionWithNumberOfTimesAchieved:(long long)arg1;
- (id)localizedShareDescriptionWithNumberOfTimesAchieved:(long long)arg1;
- (id)localizedTitle;

@end

