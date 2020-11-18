//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DChartElementSceneObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartAbstractBarSceneObject : TSCH3DChartElementSceneObject
{
}

+ (Class)propertiesClass;
+ (void)setLowDetailedGeometriesForScene:(id)arg1;
- (tvec3_17f03ce0)adjustedScaleForInfoChartScale:(const tvec3_17f03ce0 *)arg1 scene:(id)arg2;
- (float)chartMinZForScene:(id)arg1;
- (float)depthForScene:(id)arg1;
- (tvec2_84d5962d)p_valueLabelPaddingForLabelPosition:(unsigned int)arg1;
- (void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2 enumerator:(id)arg3 properties:(id)arg4;
- (void)renderSeriesLabelsSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)renderSeriesLabelsSceneObject:(id)arg1 pipeline:(id)arg2 enumerator:(id)arg3 properties:(id)arg4;
- (BOOL)shouldRenderEachValue;
- (void)sortElements:(vector_d7c2985b *)arg1 pipeline:(id)arg2;
- (tvec3_17f03ce0)sortingPositionForElement:(const struct RenderElementInfo *)arg1;
- (void)updateElementEffectsStates:(const struct RenderElementInfo *)arg1 depthToWidthRatio:(float)arg2;
- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState *)arg1 series:(id)arg2 properties:(id)arg3 textureTiling:(id)arg4 areaSize:(tvec3_17f03ce0 *)arg5 element:(tvec2_3b141483 *)arg6;

@end

