//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@class HKQuantity;

@interface _HKWorkoutTotalFlightsClimbedFilter : _HKFilter
{
    HKQuantity *_totalFlightsClimbed;
    unsigned long long _operatorType;
}

@property (readonly, nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
@property (readonly, nonatomic) HKQuantity *totalFlightsClimbed; // @synthesize totalFlightsClimbed=_totalFlightsClimbed;

+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithTotalFlightsClimbed:(id)arg1 operatorType:(unsigned long long)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
