//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNTextureSource : NSObject
{
    id _mtlTextureCache;
}

- (id)MTLTextureCache;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (void)dealloc;
- (double)nextFrameTime;
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 nextFrameTime:(double *)arg2;
- (void)setMTLTextureCache:(id)arg1;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;

@end

