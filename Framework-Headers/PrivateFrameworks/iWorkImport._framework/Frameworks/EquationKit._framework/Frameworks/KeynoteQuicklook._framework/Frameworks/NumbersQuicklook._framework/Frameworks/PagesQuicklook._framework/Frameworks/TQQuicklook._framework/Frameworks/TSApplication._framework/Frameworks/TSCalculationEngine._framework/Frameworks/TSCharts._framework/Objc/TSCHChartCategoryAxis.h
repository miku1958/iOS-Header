//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCHChartAxis.h>

@interface TSCHChartCategoryAxis : TSCHChartAxis
{
}

+ (id)axisForInfo:(id)arg1;
+ (unsigned char)styleOwnerPathType;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (id)defaultProperties;
- (id)g_genericToSpecificPropertyMap;
- (unsigned long long)indexForSelectionPathLabelIndex:(unsigned long long)arg1;
- (BOOL)isCategory;
- (BOOL)isRangeContinuous;
- (pair_952e027e)labelEnumeratorPair;
- (id)p_getGenericToCategoryPropertyMap;
- (id)p_getGenericToCategoryPropertyMapForMultiData;
- (id)p_getGenericToCategoryPropertyMapForNonMultiData;
- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1;
- (int)specificPropertyForGeneric:(int)arg1;

@end

