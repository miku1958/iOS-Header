//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSCH3DChartElementSceneObject, TSCH3DSceneRenderPipeline;

@protocol TSCH3DChartElementSceneObjectMainDelegate
- (void)didEndProcessingSceneObject:(TSCH3DChartElementSceneObject *)arg1;
- (BOOL)renderPassDelayDisallowedForSceneObject:(TSCH3DChartElementSceneObject *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;
- (struct ElementRenderPass)renderPassForSceneObject:(TSCH3DChartElementSceneObject *)arg1;
- (BOOL)willBeginProcessingSceneObject:(TSCH3DChartElementSceneObject *)arg1;
@end
