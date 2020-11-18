//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartFeatureCategory.h>

__attribute__((visibility("hidden")))
@interface TSCHChartFeatureTwoAxis : TSCHChartFeatureCategory
{
}

- (id)defaultDataFileName;
- (id)genericToSpecificPropertyMap;
- (void)p_initializeAxisIDs;
- (Class)presetImagerClass;
- (int)representativeGridValueAxisType;
- (BOOL)requiresYAxisOrdinal;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsEditing;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsIndividualShadowRendering;
- (BOOL)supportsMultipleSeriesTypes;
- (BOOL)supportsReferenceLines;
- (BOOL)supportsSymbolOverhang;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;

@end

