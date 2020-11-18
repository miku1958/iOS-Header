//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartFeatureScatter.h>

__attribute__((visibility("hidden")))
@interface TSCHChartFeatureBubble : TSCHChartFeatureScatter
{
}

- (id)defaultDataFileName;
- (id)filteredStyleOwnersFromStyleOwners:(id)arg1;
- (id)genericToSpecificPropertyMap;
- (unsigned long long)gridOffsetToSeriesForScatterFormat:(int)arg1;
- (void)p_initializeAxisIDs;
- (Class)presetImagerClass;
- (int)representativeGridValueAxisType;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (BOOL)supportsBubbleOptions;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsEditingForAxisID:(id)arg1;
- (BOOL)supportsSharedAndSeparateX;
- (BOOL)supportsShowLabelsInFrontOption;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;

@end

