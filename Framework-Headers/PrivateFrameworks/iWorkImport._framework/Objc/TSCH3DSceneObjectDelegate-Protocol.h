//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSCH3DSceneObject, TSCH3DSceneRenderPipeline, TSCH3DShaderEffects;

@protocol TSCH3DSceneObjectDelegate
- (void)didGenerateShaderEffects:(TSCH3DShaderEffects *)arg1 sceneObject:(TSCH3DSceneObject *)arg2 pipeline:(TSCH3DSceneRenderPipeline *)arg3;
- (void)didSubmitSceneObject:(TSCH3DSceneObject *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;
- (BOOL)willSubmitSceneObject:(TSCH3DSceneObject *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;
@end

