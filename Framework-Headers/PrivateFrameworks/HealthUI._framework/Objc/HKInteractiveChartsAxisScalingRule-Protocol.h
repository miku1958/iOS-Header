//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeriesAxisScalingRule-Protocol.h>

@class HKQuantityType, HKUnit, HKValueRange;

@protocol HKInteractiveChartsAxisScalingRule <HKGraphSeriesAxisScalingRule>
- (HKValueRange *)portraitYValueRangeForRange:(HKValueRange *)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;

@optional
- (BOOL)isCompatibleWithQuantityType:(HKQuantityType *)arg1;
- (void)setUnit:(HKUnit *)arg1;
@end

