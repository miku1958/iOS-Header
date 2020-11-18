//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSCH3DChartElementSceneObject, TSCH3DChartModelEnumerator, TSCH3DSceneRenderPipeline;

@protocol TSCH3DChartElementSceneObjectElementDelegate
- (void)didProcessElements:(TSCH3DChartModelEnumerator *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2 pipeline:(TSCH3DSceneRenderPipeline *)arg3;
- (void)didTransformElement:(const struct RenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;
- (struct ElementRenderPass)renderPassForElement:(const struct RenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;
- (BOOL)willProcessElement:(const struct RenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;
- (BOOL)willProcessElements:(TSCH3DChartModelEnumerator *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2 pipeline:(TSCH3DSceneRenderPipeline *)arg3;
- (BOOL)willRenderElement:(const struct RenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;
- (BOOL)willSubmitElement:(const struct RenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;
- (BOOL)willUpdateElementEffectsStatesForElement:(const struct RenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;
@end
