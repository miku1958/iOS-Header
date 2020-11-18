//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCH3DChartAllSceneObjectDelegate-Protocol.h>
#import <iWorkImport/TSCH3DSceneDelegate-Protocol.h>
#import <iWorkImport/TSCH3DSceneObjectDelegator-Protocol.h>

@class NSString, TSCH3DActiveLabelsTypeBounds, TSCH3DGetBoundsPipeline, TSCH3DLabelsRendererTransforms, TSUMutablePointerSet, TSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface TSCH3DChartBoundsLayoutSceneDelegate : NSObject <TSCH3DSceneObjectDelegator, TSCH3DSceneDelegate, TSCH3DChartAllSceneObjectDelegate>
{
    TSCH3DGetBoundsPipeline *mPipeline;
    TSCH3DLabelsRendererTransforms *mTransforms;
    TSUNoCopyDictionary *mSceneObjectLabelsBounds;
    TSCH3DActiveLabelsTypeBounds *mActiveBounds;
    BOOL mLabelsHaveCache;
    BOOL mLabelsDidOverride;
    TSUMutablePointerSet *mDebugCachedSceneObjects;
}

@property (strong, nonatomic) TSCH3DActiveLabelsTypeBounds *activeBounds; // @synthesize activeBounds=mActiveBounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sceneDelegate;
- (void)dealloc;
- (void)didEndProcessingSceneObject:(id)arg1;
- (void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2_3b141483 *)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4;
- (void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didRunForScene:(id)arg1 pipeline:(id)arg2;
- (void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didTransformElement:(id)arg1 sceneObject:(id)arg2;
- (id)init;
- (id)interestedClasses;
- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg1 boundsIndex:(long long)arg2;
- (void)labelsResourcesSessionWillBeginForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)labelsResourcesSessionWillEndForSceneObject:(id)arg1 pipeline:(id)arg2;
- (id)makeDelegateWithScene:(id)arg1;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (void)p_addAllActiveLabelsBounds;
- (void)p_extendProjectedBoundsForCachedLabelBounds:(id)arg1 offset:(const tvec3_17f03ce0 *)arg2;
- (BOOL)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2;
- (struct ElementRenderPass)renderPassForElement:(id)arg1 sceneObject:(id)arg2;
- (struct ElementRenderPass)renderPassForSceneObject:(id)arg1;
- (void)setOffset:(const tvec3_17f03ce0 *)arg1 labelType:(int)arg2 boundsIndex:(long long)arg3 forSceneObject:(id)arg4;
- (void)updateExternalLabelAttribute:(id)arg1 sceneObject:(id)arg2 labelRenderInfo:(id)arg3;
- (BOOL)willBeginProcessingSceneObject:(id)arg1;
- (BOOL)willProcessElement:(id)arg1 sceneObject:(id)arg2;
- (BOOL)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (BOOL)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (BOOL)willRenderElement:(id)arg1 sceneObject:(id)arg2;
- (void)willRunForScene:(id)arg1 pipeline:(id)arg2;
- (BOOL)willSubmitElement:(id)arg1 sceneObject:(id)arg2;
- (BOOL)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(id)arg2;
- (BOOL)willSubmitLabelType:(int)arg1 boundsIndex:(long long)arg2 alignment:(unsigned long long)arg3 elementIndex:(unsigned long long)arg4 forSceneObject:(id)arg5;
- (BOOL)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (BOOL)willUpdateElementEffectsStatesForElement:(id)arg1 sceneObject:(id)arg2;

@end

