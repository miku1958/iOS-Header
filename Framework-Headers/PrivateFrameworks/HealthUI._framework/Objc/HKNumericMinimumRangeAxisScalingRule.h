//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKAbstractMinimumRangeScalingRule.h>

@class NSNumber;

@interface HKNumericMinimumRangeAxisScalingRule : HKAbstractMinimumRangeScalingRule
{
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}

+ (id)ruleWithDefaultYAxisRange:(double)arg1 axisRangeOverrides:(id)arg2;
+ (id)ruleWithDefaultYAxisRange:(double)arg1 minimumValue:(id)arg2 maximumValue:(id)arg3 axisRangeOverrides:(id)arg4;
- (void).cxx_destruct;

@end
