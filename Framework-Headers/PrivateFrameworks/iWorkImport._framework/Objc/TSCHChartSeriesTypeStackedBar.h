//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartSeriesTypeBar.h>

__attribute__((visibility("hidden")))
@interface TSCHChartSeriesTypeStackedBar : TSCHChartSeriesTypeBar
{
}

- (unsigned int)adjustLabelPosition:(unsigned int)arg1 forAxisValue:(double)arg2 intercept:(double)arg3;
- (double)beginDataValueForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 valueAxisID:(id)arg3;
- (double)beginValueForSeries:(unsigned long long)arg1 index:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(BOOL)arg4 valueAxis:(id)arg5;
- (id)elementBuilder;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1;
- (id)g_genericToSpecificPropertyMapStackedBar;
- (id)genericToSpecificPropertyMap;
- (id)init;
- (id)legalChartLabelPositions;
- (unsigned long long)numberOfSeriesForCalculatingBarWidth:(id)arg1;
- (unsigned long long)seriesIndexForDrawing:(id)arg1;
- (BOOL)supportsBarGap;
- (id)userInterfaceNameForLabelPosition:(id)arg1;

@end
