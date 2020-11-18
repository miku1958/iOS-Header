//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSCH3DContext, TSCH3DFramebuffer, TSCH3DSceneRenderPipeline, TSCH3DSession;

@protocol TSCH3DShadowsRenderer
- (float)blurSlackForQuality:(float)arg1;
- (void)invalidate;
- (void)protectShadowForQuality:(float)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2 renderBlock:(void (^)(TSCH3DFramebuffer *))arg3;
- (TSCH3DFramebuffer *)shadowsFBOForContext:(TSCH3DContext *)arg1;
- (void)unprotectShadowInSession:(TSCH3DSession *)arg1;
@end
