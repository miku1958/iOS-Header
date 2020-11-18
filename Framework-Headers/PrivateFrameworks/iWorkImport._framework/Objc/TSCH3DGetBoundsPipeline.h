//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DSceneRenderPipeline.h>

__attribute__((visibility("hidden")))
@interface TSCH3DGetBoundsPipeline : TSCH3DSceneRenderPipeline
{
}

@property (readonly, nonatomic) const struct ObjectBounds *bounds;

+ (id)pipelineWithScene:(id)arg1;
+ (id)pipelineWithScene:(id)arg1 renderProcessor:(id)arg2;
- (id)boundsProcessor;
- (void)extend2DProjectedBounds:(const box_a3bd9649 *)arg1;
- (void)get3DBounds:(id)arg1;
- (void)getBounds:(id)arg1;
- (void)getProjectedBounds:(id)arg1;
- (id)initWithScene:(id)arg1;
- (id)initWithScene:(id)arg1 renderProcessor:(id)arg2;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1;
- (void)p_replaceSceneOfPipeline:(id)arg1 replacement:(id)arg2 duringBlock:(CDUnknownBlockType)arg3;
- (void)resetBounds;
- (BOOL)run;
- (void)runScene:(id)arg1 selector:(SEL)arg2;
- (void)set2DProjectedRenderingMode:(BOOL)arg1;
- (void)setObjectRenderMode:(int)arg1;
- (BOOL)shouldSkipLabelsIfHidden;
- (BOOL)useIndividualBounds;

@end
