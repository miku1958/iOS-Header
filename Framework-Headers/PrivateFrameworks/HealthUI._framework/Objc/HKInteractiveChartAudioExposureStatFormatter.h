//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKInteractiveChartGenericStatFormatter.h>

@interface HKInteractiveChartAudioExposureStatFormatter : HKInteractiveChartGenericStatFormatter
{
}

- (id)_attributedCurrentAudioExposureClassificationForChartData:(id)arg1;
- (id)_formatDuration:(double)arg1;
- (id)_formatQuantityAudioData:(id)arg1;
- (id)_formattedCurrentValueForChartData:(id)arg1;
- (id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(BOOL)arg3;
- (id)_majorAttributes;
- (id)_minorAttributes;
- (long long)_numberOfDaysVisibleInRange:(id)arg1;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;

@end

