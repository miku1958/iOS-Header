//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKAxis.h>

@interface HKNumericAxis : HKAxis
{
    double _lastAxisSpread;
    double _lastStepSize;
    long long _stepStyle;
}

@property (nonatomic) long long stepStyle; // @synthesize stepStyle=_stepStyle;

- (id)_axisLabelForValue:(id)arg1;
- (double)_labelSpacingWithMin:(double)arg1 max:(double)arg2 maxNumLabels:(long long)arg3;
- (id)adjustedRangeForFittedRange:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateTickCoordinatesInChartRange:(struct HKRange)arg1 zoomScale:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;
- (double)labelSpacingFactorForNumberFormatter;
- (id)labelsForChartRange:(struct HKRange)arg1 zoomScale:(double)arg2;
- (id)stringFromNumber:(id)arg1;

@end
