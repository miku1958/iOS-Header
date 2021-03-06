//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuantitySample.h>

@class HKQuantity, NSDateInterval;

@interface HKDiscreteQuantitySample : HKQuantitySample
{
    HKQuantity *_minimumQuantity;
    HKQuantity *_maximumQuantity;
    HKQuantity *_mostRecentQuantity;
    NSDateInterval *_mostRecentQuantityDateInterval;
    BOOL __hasMinimumQuantity;
    BOOL __hasMaximumQuantity;
    BOOL __hasMostRecentQuantity;
    BOOL __hasMostRecentQuantityDateInterval;
}

@property (nonatomic) BOOL _hasMaximumQuantity; // @synthesize _hasMaximumQuantity=__hasMaximumQuantity;
@property (nonatomic) BOOL _hasMinimumQuantity; // @synthesize _hasMinimumQuantity=__hasMinimumQuantity;
@property (nonatomic) BOOL _hasMostRecentQuantity; // @synthesize _hasMostRecentQuantity=__hasMostRecentQuantity;
@property (nonatomic) BOOL _hasMostRecentQuantityDateInterval; // @synthesize _hasMostRecentQuantityDateInterval=__hasMostRecentQuantityDateInterval;
@property (copy, nonatomic, setter=_setAverageQuantity:) HKQuantity *averageQuantity;
@property (copy, nonatomic, setter=_setMaximumQuantity:) HKQuantity *maximumQuantity; // @synthesize maximumQuantity=_maximumQuantity;
@property (copy, nonatomic, setter=_setMinimumQuantity:) HKQuantity *minimumQuantity; // @synthesize minimumQuantity=_minimumQuantity;
@property (copy, nonatomic, setter=_setMostRecentQuantity:) HKQuantity *mostRecentQuantity; // @synthesize mostRecentQuantity=_mostRecentQuantity;
@property (copy, nonatomic, setter=_setMostRecentQuantityDateInterval:) NSDateInterval *mostRecentQuantityDateInterval; // @synthesize mostRecentQuantityDateInterval=_mostRecentQuantityDateInterval;

+ (BOOL)_isConcreteObjectClass;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

