//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class NSArray, TSCHChartType;

__attribute__((visibility("hidden")))
@interface TSCHChartFeature : NSObject <TSCHUnretainedParent>
{
    TSCHChartType *mChartType;
    NSArray *mValueAxisIDs;
    NSArray *mCategoryAxisIDs;
}

@property (readonly, strong, nonatomic) NSArray *categoryAxisIDs; // @synthesize categoryAxisIDs=mCategoryAxisIDs;
@property (readonly, strong, nonatomic) NSArray *valueAxisIDs; // @synthesize valueAxisIDs=mValueAxisIDs;

- (id)categoryLabelPositioner;
- (void)clearParent;
- (id)columnShapeUIName;
- (void)dealloc;
- (id)defaultDataFileName;
- (float)defaultLabelExplosionPercentage;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (BOOL)drawValueLabelsForZero;
- (BOOL)editableFormatForValueStrings;
- (id)filteredStyleOwnersFromStyleOwners:(id)arg1;
- (id)genericToSpecificPropertyMap;
- (unsigned long long)gridOffsetToSeriesForScatterFormat:(int)arg1;
- (BOOL)hasExplodableSeriesElements;
- (BOOL)hasFixedFrameRatio;
- (id)initWithChartType:(id)arg1;
- (id)initialSceneWithChartInfo:(id)arg1 layoutSettings:(CDStruct_b1c75024)arg2;
- (BOOL)isHorizontal;
- (int)labelOrientation;
- (unsigned long long)maxCellsToCheckForGridValueType;
- (double)maxDepthRatio;
- (double)maxInnerRadiusPercentage;
- (double)minInnerRadiusPercentage;
- (void)p_initializeAxisIDs;
- (Class)p_selectAxisClassForScale:(int)arg1 linearClass:(Class)arg2 logClass:(Class)arg3 percentClass:(Class)arg4;
- (Class)presetImagerClass;
- (BOOL)rendersBackgroundAxis;
- (BOOL)rendersUsingRadialGeometry;
- (int)representativeGridValueAxisType;
- (BOOL)requiresStagesBuildingInReverse;
- (BOOL)requiresYAxisOrdinal;
- (BOOL)reverseSingleColumnLegendOrder;
- (double)sageMaxDepthRatio;
- (double)spiceMaxDepthRatio;
- (int)stackingSignRule;
- (Class)stageClass;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (BOOL)suppliesFinalTextures;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (BOOL)supportsBackgroundFill;
- (BOOL)supportsBorderFrame;
- (BOOL)supportsBubbleOptions;
- (BOOL)supportsCalloutLines;
- (BOOL)supportsCategoryAxisMinorTickmarks;
- (BOOL)supportsCategoryAxisSeriesNames;
- (BOOL)supportsCategoryLabelsInChartRangeEditor;
- (BOOL)supportsColumnShape;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsEditing;
- (BOOL)supportsEditingForAxisID:(id)arg1;
- (BOOL)supportsElementChunking;
- (BOOL)supportsElementSeriesNames;
- (BOOL)supportsErrorBars;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsIndividualShadowRendering;
- (BOOL)supportsInterSetDepthGap;
- (BOOL)supportsLabelExplosion;
- (BOOL)supportsMultipleSeriesTypes;
- (BOOL)supportsMultipleValuesPerSeries;
- (BOOL)supportsPercentNumberFormatting;
- (BOOL)supportsPlaceTitleAtCenter;
- (BOOL)supportsReferenceLines;
- (BOOL)supportsSeriesLabels;
- (BOOL)supportsSharedAndSeparateX;
- (BOOL)supportsShowLabelsInFrontOption;
- (BOOL)supportsStartAngleRotation;
- (BOOL)supportsSymbolOverhang;
- (BOOL)supportsTrendLines;
- (BOOL)supportsValueLabels;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (id)userInterfaceNameForPlaceTitleAtCenter:(BOOL)arg1;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (id)valueLabelPositioner;

@end

