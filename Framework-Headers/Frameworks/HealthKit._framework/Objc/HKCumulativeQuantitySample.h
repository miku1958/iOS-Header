//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuantitySample.h>

@class HKQuantity;

@interface HKCumulativeQuantitySample : HKQuantitySample
{
}

@property (copy, nonatomic, setter=_setSumQuantity:) HKQuantity *sumQuantity;

+ (BOOL)_isConcreteObjectClass;
+ (BOOL)supportsSecureCoding;
- (id)sum;

@end
