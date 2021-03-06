//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNTextureOffscreenRenderingSource.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface SCNTextureCoreAnimationSource : SCNTextureOffscreenRenderingSource
{
    CALayer *_layer;
    double _lastUpdate;
    double _nextUpdateDate;
}

@property (strong, nonatomic) CALayer *layer; // @synthesize layer=_layer;

- (double)__renderLayer:(id)arg1 withCARenderer:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 viewport:(double)arg4 atTime:(BOOL)arg5 forceUpdate:(BOOL *)arg6 didUpdate: /* Error: Ran out of types for this method. */;
- (double)__renderLayerUsingMetal:(id)arg1 withCARenderer:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 viewport:(double)arg4 atTime:(BOOL)arg5 forceUpdate:(BOOL *)arg6 didUpdate: /* Error: Ran out of types for this method. */;
- (double)__updateTextureWithLayer:(id)arg1 texture:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 sampler:(struct __C3DTextureSampler *)arg4;
- (void)_resizeLayer:(id)arg1 toSize:(struct CGSize)arg2 updateLayer:(BOOL)arg3 updateTransform:(BOOL)arg4 caRenderer:(id)arg5;
- (struct __C3DTexture *)_textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (float)clearValue;
- (void)dealloc;
- (double)layerContentsScaleFactor;
- (struct CGSize)layerSizeInPixels;
- (id)layerToFocusForRenderedLayer:(id)arg1;
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (BOOL)prefersGL3;
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (BOOL)requiresMainThreadUpdates;
- (BOOL)supportsMetal;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;

@end

