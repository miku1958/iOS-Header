//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartSeriesType.h>

__attribute__((visibility("hidden")))
@interface TSCHChartSeriesTypePie : TSCHChartSeriesType
{
}

- (id)axisTypesForValueLabels;
- (id)elementBuilder;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1 forSeries:(id)arg2;
- (BOOL)floatValueForLabelExplosion:(float *)arg1 series:(id)arg2;
- (id)g_genericToSpecificPropertyMapPie;
- (id)genericToSpecificPropertyMap;
- (id)init;
- (id)inspectorLocalizedValueLabelsDisclosureTitle;
- (id)inspectorLocalizedValueLabelsTabName;
- (id)legalChartLabelPositions;
- (int)legendBadgeType;
- (id)seriesFillLabelUIString;
- (id)supportedValueLabelsAxisCombinations;
- (BOOL)supportsCalloutLines;
- (BOOL)supportsValueLabelsSeriesName;
- (id)userInterfaceName;
- (id)userInterfaceNameForLabelPosition:(id)arg1;
- (unsigned long long)valueDimensions;

@end
