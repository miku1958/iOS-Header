//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNTextureSource.h>

__attribute__((visibility("hidden")))
@interface SCNTextureOffscreenRenderingSource : SCNTextureSource
{
    BOOL _usesIOSurface;
    struct CGSize _framebufferSize;
    struct __C3DFramebuffer *_framebuffer;
}

- (struct __C3DTexture *)__prepareFramebufferWithSize:(struct CGSize)arg1 withEngineContext:(struct __C3DEngineContext *)arg2 textureSampler:(struct __C3DTextureSampler *)arg3 needsStencil:(BOOL)arg4;
- (void)_bindFramebuffer:(struct __C3DEngineContext *)arg1;
- (void)_buildMipmaps:(struct __C3DEngineContext *)arg1;
- (void)_createFramebufferWithEngineContext:(struct __C3DEngineContext *)arg1 size:(struct CGSize)arg2;
- (void)_unbindFramebuffer:(struct __C3DEngineContext *)arg1;
- (void)cleanup:(struct __C3DRendererContext *)arg1;

@end
