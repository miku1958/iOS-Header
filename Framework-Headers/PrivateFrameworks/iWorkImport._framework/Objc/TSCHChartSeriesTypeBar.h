//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartSeriesType.h>

__attribute__((visibility("hidden")))
@interface TSCHChartSeriesTypeBar : TSCHChartSeriesType
{
}

- (unsigned int)adjustLabelPosition:(unsigned int)arg1 forAxisValue:(double)arg2 intercept:(double)arg3;
- (id)axisTypesForValueLabels;
- (BOOL)chunkedBuildsIncludeInterceptValues;
- (id)elementBuilder;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1;
- (id)g_genericToSpecificPropertyMapBar;
- (id)genericToSpecificPropertyMap;
- (id)init;
- (BOOL)isVertical;
- (id)legalChartLabelPositions;
- (id)supportedValueLabelsAxisCombinations;
- (BOOL)supportsBarGap;
- (BOOL)supportsRoundedCorners;
- (BOOL)supportsSetGap;
- (BOOL)useInBarGapCalculations;
- (id)userInterfaceNameForLabelPosition:(id)arg1;
- (unsigned long long)valueDimensions;

@end

