//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/NSSecureCoding-Protocol.h>

@class HKQuantity, NSDictionary, NSString;

@interface FIUIWorkoutActivityType : NSObject <NSSecureCoding>
{
    BOOL _isIndoor;
    unsigned long long _identifier;
    unsigned long long _auxiliaryTypeIdentifier;
    NSDictionary *_metadata;
}

@property (readonly, nonatomic) unsigned long long auxiliaryTypeIdentifier; // @synthesize auxiliaryTypeIdentifier=_auxiliaryTypeIdentifier;
@property (readonly, nonatomic) unsigned long long effectiveTypeIdentifier;
@property (readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) BOOL isCategorizedOtherWorkout;
@property (readonly, nonatomic) BOOL isIndoor;
@property (readonly, nonatomic) HKQuantity *lapLength;
@property (readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (readonly, nonatomic) long long swimmingLocationType;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2;
+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 metadata:(id)arg3;
+ (id)activityTypeWithWorkout:(id)arg1;
+ (unsigned long long)mapWheelchairUserActivityType:(unsigned long long)arg1 isWheelchairUser:(BOOL)arg2;
+ (id)possibleActivityTypesForIdentifier:(unsigned long long)arg1 locationType:(long long)arg2 swimmingLocationType:(long long)arg3 wheelchairUser:(BOOL)arg4;
+ (id)supportedActivityTypesWithIsWheelchairUser:(BOOL)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)wheelchairActivityTypes;
- (void).cxx_destruct;
- (id)activityTypeByAddingLapLength:(double)arg1;
- (id)activityTypePlistKey;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasLocationTypePool;
- (unsigned long long)hash;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 metadata:(id)arg3;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 metadata:(id)arg3 auxiliaryTypeIdentifier:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedName;
- (id)localizedNameComponents;

@end

