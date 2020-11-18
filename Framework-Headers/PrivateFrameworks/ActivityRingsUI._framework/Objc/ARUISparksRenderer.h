//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUICelebrationsRendering-Protocol.h>

@class ARUIAngularSparksComputeState, ARUIAngularSparksRenderState, ARUIKineticSparksComputeState, ARUIKineticSparksParticleRenderState, NSString;
@protocol ARUIBlurRendering, ARUICompositeRendering, MTLBuffer, MTLDevice, MTLLibrary, MTLTexture;

__attribute__((visibility("hidden")))
@interface ARUISparksRenderer : NSObject <ARUICelebrationsRendering>
{
    id<MTLDevice> _device;
    id<MTLLibrary> _library;
    BOOL _prewarmed;
    id<MTLBuffer> _quadVertexBuffer;
    id<MTLBuffer> _quadIndexBuffer;
    unsigned long long _quadIndexCount;
    id<MTLTexture> _particleTexture;
    ARUIAngularSparksComputeState *_angularSparksComputeState;
    ARUIKineticSparksComputeState *_kineticSparksComputeState;
    ARUIAngularSparksRenderState *_angularSparksRenderState;
    ARUIKineticSparksParticleRenderState *_kineticSparksRenderState;
    id<ARUICompositeRendering> _compositeRenderer;
    id<ARUIBlurRendering> _blurRenderer;
}

@property (weak, nonatomic) id<ARUIBlurRendering> blurRenderer; // @synthesize blurRenderer=_blurRenderer;
@property (weak, nonatomic) id<ARUICompositeRendering> compositeRenderer; // @synthesize compositeRenderer=_compositeRenderer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_computeWithCommandEncoder:(id)arg1 ring:(id)arg2 sparksCelebration:(id)arg3;
- (long long)_largeBlurRadiusForSize:(float)arg1;
- (id)_particlesTextureWithCommandBuffer:(id)arg1 sparksMap:(id)arg2 uniformType:(unsigned long long)arg3 size: /* Error: Ran out of types for this method. */;
- (void)_renderWithCommandEncoder:(id)arg1 ring:(id)arg2 sparksCelebration:(id)arg3 uniformsType:(unsigned long long)arg4;
- (long long)_smallBlurRadiusForSize:(float)arg1;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (void)prewarm;
- (id)sparksTextureWithCommandBuffer:(id)arg1 sparksMap:(id)arg2 size: /* Error: Ran out of types for this method. */;

@end
