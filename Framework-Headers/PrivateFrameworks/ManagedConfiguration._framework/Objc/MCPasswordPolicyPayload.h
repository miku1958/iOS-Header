//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSNumber;

@interface MCPasswordPolicyPayload : MCPayload
{
    NSNumber *_isSimplePasscodeAllowed;
    NSNumber *_isPasscodeRequired;
    NSNumber *_isAlphanumericPasscodeRequired;
    NSNumber *_isManualFetchingWhenRoaming;
    NSNumber *_minLength;
    NSNumber *_maxFailedAttempts;
    NSNumber *_maxGracePeriodMinutes;
    NSNumber *_maxInactivityMinutes;
    NSNumber *_maxPasscodeAgeDays;
    NSNumber *_passcodeHistoryCount;
    NSNumber *_minComplexCharacters;
}

@property (readonly, strong, nonatomic) NSNumber *isAlphanumericPasscodeRequired; // @synthesize isAlphanumericPasscodeRequired=_isAlphanumericPasscodeRequired;
@property (readonly, strong, nonatomic) NSNumber *isManualFetchingWhenRoaming; // @synthesize isManualFetchingWhenRoaming=_isManualFetchingWhenRoaming;
@property (readonly, strong, nonatomic) NSNumber *isPasscodeRequired; // @synthesize isPasscodeRequired=_isPasscodeRequired;
@property (readonly, strong, nonatomic) NSNumber *isSimplePasscodeAllowed; // @synthesize isSimplePasscodeAllowed=_isSimplePasscodeAllowed;
@property (readonly, strong, nonatomic) NSNumber *maxFailedAttempts; // @synthesize maxFailedAttempts=_maxFailedAttempts;
@property (readonly, strong, nonatomic) NSNumber *maxGracePeriodMinutes; // @synthesize maxGracePeriodMinutes=_maxGracePeriodMinutes;
@property (readonly, strong, nonatomic) NSNumber *maxInactivityMinutes; // @synthesize maxInactivityMinutes=_maxInactivityMinutes;
@property (readonly, strong, nonatomic) NSNumber *maxPasscodeAgeDays; // @synthesize maxPasscodeAgeDays=_maxPasscodeAgeDays;
@property (readonly, strong, nonatomic) NSNumber *minComplexCharacters; // @synthesize minComplexCharacters=_minComplexCharacters;
@property (readonly, strong, nonatomic) NSNumber *minLength; // @synthesize minLength=_minLength;
@property (readonly, strong, nonatomic) NSNumber *passcodeHistoryCount; // @synthesize passcodeHistoryCount=_passcodeHistoryCount;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)payloadDescriptionKeyValueSections;
- (id)restrictions;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)title;

@end
