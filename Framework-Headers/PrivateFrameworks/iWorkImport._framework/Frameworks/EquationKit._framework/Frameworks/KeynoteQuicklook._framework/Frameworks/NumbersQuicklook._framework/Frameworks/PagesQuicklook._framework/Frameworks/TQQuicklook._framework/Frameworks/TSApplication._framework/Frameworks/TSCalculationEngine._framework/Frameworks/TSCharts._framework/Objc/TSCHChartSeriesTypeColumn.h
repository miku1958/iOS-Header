//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCHChartSeriesTypeBar.h>

@interface TSCHChartSeriesTypeColumn : TSCHChartSeriesTypeBar
{
}

- (unsigned int)adjustLabelPosition:(unsigned int)arg1 forAxisValue:(double)arg2 intercept:(double)arg3;
- (id)axisTypesForValueLabels;
- (BOOL)chunkedBuildsIncludeInterceptValues;
- (id)elementBuilder;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1;
- (id)g_genericToSpecificPropertyMapColumn;
- (id)genericToSpecificPropertyMap;
- (id)init;
- (BOOL)isVertical;
- (id)legalChartLabelPositions;
- (id)supportedValueLabelsAxisCombinations;
- (BOOL)supportsBarGap;
- (BOOL)supportsDownsampling;
- (BOOL)supportsRoundedCorners;
- (BOOL)supportsSetGap;
- (BOOL)useInBarGapCalculations;
- (id)userInterfaceName;
- (id)userInterfaceNameForLabelPosition:(id)arg1;
- (unsigned long long)valueDimensions;

@end

