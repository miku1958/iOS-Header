//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSExpression, NSNumber, NSPredicate, NSString;

@interface _HKAchievementDefinition : NSObject <NSSecureCoding>
{
    NSPredicate *_basePredicate;
    NSPredicate *_compiledPredicate;
    NSPredicate *_baseUnearnedVisibilityPredicate;
    NSPredicate *_compiledUnearnedVisibilityPredicate;
    NSPredicate *_baseAlertabilityPredicate;
    NSPredicate *_compiledAlertabilityPredicate;
    NSExpression *_expressionForEarnedValue;
    NSExpression *_expressionForProgressValue;
    NSExpression *_expressionForGoalValue;
    NSNumber *_referenceProgressValue;
    BOOL _earnableOnlyOnce;
    BOOL _isWorkoutAchievement;
    BOOL _isPresentedOnFollowingDay;
    BOOL _equalityRequiresSameValue;
    NSString *_identifier;
    NSString *_achievementTypeString;
    NSString *_title;
    unsigned long long _triggers;
    NSArray *_availableCountryCodes;
    NSDate *_availableStartDateUTC;
    NSDate *_availableEndDateUTC;
    NSDate *_alertDateUTC;
    NSDate *_modifiedDate;
    NSString *_keyPathForEarnedDate;
    NSString *_badgeShapeName;
    long long _displayOrder;
    unsigned long long _deduplicationStrategy;
    unsigned long long _calendarUnitForEqualityCheck;
    NSString *_expressionFormatForEarnedValue;
    NSString *_expressionFormatForProgressValue;
    NSString *_expressionFormatForGoalValue;
}

@property (strong, nonatomic) NSString *achievementTypeString; // @synthesize achievementTypeString=_achievementTypeString;
@property (strong, nonatomic) NSDate *alertDateUTC; // @synthesize alertDateUTC=_alertDateUTC;
@property (readonly, nonatomic) NSPredicate *alertabilityPredicate;
@property (strong, nonatomic) NSArray *availableCountryCodes; // @synthesize availableCountryCodes=_availableCountryCodes;
@property (strong, nonatomic) NSDate *availableEndDateUTC; // @synthesize availableEndDateUTC=_availableEndDateUTC;
@property (strong, nonatomic) NSDate *availableStartDateUTC; // @synthesize availableStartDateUTC=_availableStartDateUTC;
@property (strong, nonatomic) NSString *badgeShapeName; // @synthesize badgeShapeName=_badgeShapeName;
@property (strong, nonatomic) NSPredicate *baseAlertabilityPredicate; // @synthesize baseAlertabilityPredicate=_baseAlertabilityPredicate;
@property (nonatomic) unsigned long long calendarUnitForEqualityCheck; // @synthesize calendarUnitForEqualityCheck=_calendarUnitForEqualityCheck;
@property (nonatomic) unsigned long long deduplicationStrategy; // @synthesize deduplicationStrategy=_deduplicationStrategy;
@property (nonatomic) long long displayOrder; // @synthesize displayOrder=_displayOrder;
@property (nonatomic) BOOL earnableOnlyOnce; // @synthesize earnableOnlyOnce=_earnableOnlyOnce;
@property (nonatomic) BOOL equalityRequiresSameValue; // @synthesize equalityRequiresSameValue=_equalityRequiresSameValue;
@property (strong, nonatomic) NSExpression *expressionForEarnedValue;
@property (strong, nonatomic) NSExpression *expressionForGoalValue;
@property (strong, nonatomic) NSExpression *expressionForProgressValue;
@property (strong, nonatomic) NSString *expressionFormatForEarnedValue; // @synthesize expressionFormatForEarnedValue=_expressionFormatForEarnedValue;
@property (strong, nonatomic) NSString *expressionFormatForGoalValue; // @synthesize expressionFormatForGoalValue=_expressionFormatForGoalValue;
@property (strong, nonatomic) NSString *expressionFormatForProgressValue; // @synthesize expressionFormatForProgressValue=_expressionFormatForProgressValue;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isPresentedOnFollowingDay; // @synthesize isPresentedOnFollowingDay=_isPresentedOnFollowingDay;
@property (nonatomic) BOOL isWorkoutAchievement; // @synthesize isWorkoutAchievement=_isWorkoutAchievement;
@property (strong, nonatomic) NSString *keyPathForEarnedDate; // @synthesize keyPathForEarnedDate=_keyPathForEarnedDate;
@property (strong, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property (strong, nonatomic) NSPredicate *predicate;
@property (strong, nonatomic) NSNumber *referenceProgressValue; // @synthesize referenceProgressValue=_referenceProgressValue;
@property (readonly, nonatomic) BOOL requiresProgressValue;
@property (readonly, nonatomic) BOOL requiresValue;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) unsigned long long triggers; // @synthesize triggers=_triggers;
@property (strong, nonatomic) NSPredicate *unearnedVisibilityPredicate;

+ (id)_compilePredicateFromBasePredicate:(id)arg1 availableCountryCodes:(id)arg2 availableStartDateUTC:(id)arg3 availableEndDateUTC:(id)arg4 earnableOnlyOnce:(BOOL)arg5 workoutAchievement:(BOOL)arg6;
+ (id)definitionWithDictionaryRepresentation:(id)arg1;
+ (id)definitionWithPlistRepresentation:(id)arg1;
+ (id)dynamicDefinitionForAchievementIdentifier:(id)arg1 typeString:(id)arg2 dateInterval:(id)arg3 progressExpression:(id)arg4 goalExpression:(id)arg5 displayOder:(long long)arg6 badgeShapeName:(id)arg7;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (long long)compareDisplayOrderOfDefinition:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)requiresGoalValue;
- (void)setAlertabilityPredicate:(id)arg1;

@end

