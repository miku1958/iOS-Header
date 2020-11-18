//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH2DChartType.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartType : TSCH2DChartType
{
}

+ (tvec3_17f03ce0)adjustedScaleForInfoChartScale:(const tvec3_17f03ce0 *)arg1 chartType:(id)arg2 barShape:(int)arg3;
+ (id)allAnimationFilters;
- (tvec3_17f03ce0)adjustedScaleForInfoChartScale:(const tvec3_17f03ce0 *)arg1 barShape:(int)arg2;
- (id)animationDeliveryStylesForFilter:(id)arg1;
- (id)animationFilters;
- (id)animationFiltersWithDefaultFilters:(id)arg1;
- (BOOL)approximatesTitleAccommodationUsingLegendSize;
- (id)categoryLabelPositioner;
- (int)chartBodyBoundsDefinition;
- (Class)chartLayoutClass;
- (Class)chartLayoutItemClass;
- (id)columnShapeUIName;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (unsigned long long)depthRatioDimension;
- (BOOL)isHomogeneous;
- (int)labelOrientation;
- (Class)layoutClass;
- (BOOL)layoutFrameShouldEncloseInfoGeometry;
- (double)maxDepthRatio;
- (double)minDepthRatio;
- (struct CGSize)minimumChartBodySize;
- (struct CGSize)minimumChartBodySizeForTransformingGeometry;
- (BOOL)needsRefinementForInwardLayout;
- (unsigned long long)presentationDimension;
- (Class)presetImagerClass;
- (id)renderers;
- (Class)repClass;
- (Class)sageGeometeryHelperClass;
- (double)sageMaxDepthRatio;
- (id)sceneWithChartInfo:(id)arg1 layoutSettings:(CDStruct_b1c75024)arg2;
- (double)spiceMaxDepthRatio;
- (Class)stageClass;
- (BOOL)supportsAxisLabelsOrientation;
- (BOOL)supportsAxisLine;
- (BOOL)supportsBackgroundFill;
- (BOOL)supportsBevels;
- (BOOL)supportsBorderFrame;
- (BOOL)supportsBubbleOptions;
- (BOOL)supportsCalloutLines;
- (BOOL)supportsCategoryAxisMinorTickmarks;
- (BOOL)supportsColumnShape;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsErrorBars;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsIncrementalResize;
- (BOOL)supportsInterSetDepthGap;
- (BOOL)supportsMinorGridlines;
- (BOOL)supportsReferenceLines;
- (BOOL)supportsSeriesFill;
- (BOOL)supportsSeriesShadow;
- (BOOL)supportsSeriesStroke;
- (BOOL)supportsShadowOffset;
- (BOOL)supportsTickmarks;
- (BOOL)supportsTrendLines;
- (BOOL)supportsValueAxisLabelsPosition;
- (id)valueLabelPositioner;

@end

