//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/NSCopying-Protocol.h>
#import <ActivityAchievements/NSSecureCoding-Protocol.h>

@class HKUnit, NSArray, NSDate, NSDateComponents, NSSet, NSString;

@interface ACHTemplate : NSObject <NSCopying, NSSecureCoding>
{
    CDStruct_1bc457c2 _packedVisibilityStart;
    CDStruct_1bc457c2 _packedVisibilityEnd;
    CDStruct_1bc457c2 _packedAvailabilityStart;
    CDStruct_1bc457c2 _packedAvailabilityEnd;
    unsigned char _minimumEngineVersion;
    unsigned char _creatorDevice;
    unsigned char _earnLimit;
    unsigned char _duplicateRemovalStrategy;
    unsigned char _earnDateStrategy;
    BOOL _displaysEarnedInstanceCount;
    BOOL _availableOnPairedDevice;
    unsigned long long _key;
    NSString *_uniqueName;
    unsigned long long _version;
    NSDate *_createdDate;
    NSString *_sourceName;
    NSString *_predicate;
    NSString *_gracePredicate;
    NSString *_valueExpression;
    NSString *_graceValueExpression;
    NSString *_progressExpression;
    NSString *_graceProgressExpression;
    NSString *_goalExpression;
    NSString *_graceGoalExpression;
    unsigned long long _triggers;
    NSString *_visibilityPredicate;
    NSString *_graceVisibilityPredicate;
    NSString *_availabilityPredicate;
    NSArray *_availableCountryCodes;
    NSString *_alertabilityPredicate;
    NSSet *_alertDates;
    unsigned long long _duplicateRemovalCalendarUnit;
    HKUnit *_canonicalUnit;
    unsigned long long _displayOrder;
    NSArray *_availableSuffixes;
    unsigned long long _mobileAssetVersion;
}

@property (strong, nonatomic) NSSet *alertDates; // @synthesize alertDates=_alertDates;
@property (strong, nonatomic) NSString *alertabilityPredicate; // @synthesize alertabilityPredicate=_alertabilityPredicate;
@property (strong, nonatomic) NSDateComponents *availabilityEnd;
@property (strong, nonatomic) NSString *availabilityPredicate; // @synthesize availabilityPredicate=_availabilityPredicate;
@property (strong, nonatomic) NSDateComponents *availabilityStart;
@property (strong, nonatomic) NSArray *availableCountryCodes; // @synthesize availableCountryCodes=_availableCountryCodes;
@property (nonatomic) BOOL availableOnPairedDevice; // @synthesize availableOnPairedDevice=_availableOnPairedDevice;
@property (strong, nonatomic) NSArray *availableSuffixes; // @synthesize availableSuffixes=_availableSuffixes;
@property (strong, nonatomic) HKUnit *canonicalUnit; // @synthesize canonicalUnit=_canonicalUnit;
@property (strong, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property (nonatomic) unsigned char creatorDevice; // @synthesize creatorDevice=_creatorDevice;
@property (nonatomic) unsigned long long displayOrder; // @synthesize displayOrder=_displayOrder;
@property (nonatomic) BOOL displaysEarnedInstanceCount; // @synthesize displaysEarnedInstanceCount=_displaysEarnedInstanceCount;
@property (nonatomic) unsigned long long duplicateRemovalCalendarUnit; // @synthesize duplicateRemovalCalendarUnit=_duplicateRemovalCalendarUnit;
@property (nonatomic) unsigned char duplicateRemovalStrategy; // @synthesize duplicateRemovalStrategy=_duplicateRemovalStrategy;
@property (nonatomic) unsigned char earnDateStrategy; // @synthesize earnDateStrategy=_earnDateStrategy;
@property (nonatomic) unsigned char earnLimit; // @synthesize earnLimit=_earnLimit;
@property (strong, nonatomic) NSString *goalExpression; // @synthesize goalExpression=_goalExpression;
@property (strong, nonatomic) NSString *graceGoalExpression; // @synthesize graceGoalExpression=_graceGoalExpression;
@property (strong, nonatomic) NSString *gracePredicate; // @synthesize gracePredicate=_gracePredicate;
@property (strong, nonatomic) NSString *graceProgressExpression; // @synthesize graceProgressExpression=_graceProgressExpression;
@property (strong, nonatomic) NSString *graceValueExpression; // @synthesize graceValueExpression=_graceValueExpression;
@property (strong, nonatomic) NSString *graceVisibilityPredicate; // @synthesize graceVisibilityPredicate=_graceVisibilityPredicate;
@property (nonatomic) unsigned long long key; // @synthesize key=_key;
@property (nonatomic) unsigned char minimumEngineVersion; // @synthesize minimumEngineVersion=_minimumEngineVersion;
@property (nonatomic) unsigned long long mobileAssetVersion; // @synthesize mobileAssetVersion=_mobileAssetVersion;
@property (strong, nonatomic) NSString *predicate; // @synthesize predicate=_predicate;
@property (strong, nonatomic) NSString *progressExpression; // @synthesize progressExpression=_progressExpression;
@property (strong, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property (nonatomic) unsigned long long triggers; // @synthesize triggers=_triggers;
@property (strong, nonatomic) NSString *uniqueName; // @synthesize uniqueName=_uniqueName;
@property (strong, nonatomic) NSString *valueExpression; // @synthesize valueExpression=_valueExpression;
@property (nonatomic) unsigned long long version; // @synthesize version=_version;
@property (strong, nonatomic) NSDateComponents *visibilityEnd;
@property (strong, nonatomic) NSString *visibilityPredicate; // @synthesize visibilityPredicate=_visibilityPredicate;
@property (strong, nonatomic) NSDateComponents *visibilityStart;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_displayStringForAlertDates:(id)arg1;
- (id)_displayStringForStringValues:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCodable:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

