//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCHChartFeature.h>

@interface TSCHChartFeatureScatter : TSCHChartFeature
{
}

- (id)defaultDataFileName;
- (id)genericToSpecificPropertyMap;
- (unsigned long long)gridOffsetToSeriesForScatterFormat:(int)arg1;
- (void)p_initializeAxisIDs;
- (Class)presetImagerClass;
- (int)representativeGridValueAxisType;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (BOOL)supportsCategoryLabelsInChartRangeEditor;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsSharedAndSeparateX;
- (BOOL)supportsSymbolOverhang;
- (BOOL)supportsValueLabelSpacing;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)arg1 scale:(long long)arg2;

@end

