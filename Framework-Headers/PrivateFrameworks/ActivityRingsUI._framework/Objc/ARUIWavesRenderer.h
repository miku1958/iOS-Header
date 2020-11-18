//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUICelebrationsRendering-Protocol.h>

@class ARUIWavesComputeState, ARUIWavesRenderState, NSString;
@protocol ARUIBlurRendering, ARUICompositeRendering, ARUIRingsRendering, MTLDevice, MTLLibrary;

__attribute__((visibility("hidden")))
@interface ARUIWavesRenderer : NSObject <ARUICelebrationsRendering>
{
    id<MTLDevice> _device;
    id<MTLLibrary> _library;
    BOOL _prewarmed;
    ARUIWavesComputeState *_wavesComputeState;
    ARUIWavesRenderState *_wavesRenderState;
    id<ARUICompositeRendering> _compositeRenderer;
    id<ARUIBlurRendering> _blurRenderer;
    id<ARUIRingsRendering> _ringsRenderer;
}

@property (weak, nonatomic) id<ARUIBlurRendering> blurRenderer; // @synthesize blurRenderer=_blurRenderer;
@property (weak, nonatomic) id<ARUICompositeRendering> compositeRenderer; // @synthesize compositeRenderer=_compositeRenderer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<ARUIRingsRendering> ringsRenderer; // @synthesize ringsRenderer=_ringsRenderer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_computeWithCommandEncoder:(id)arg1 ring:(id)arg2 wavesCelebration:(id)arg3;
- (void)_renderWithCommandEncoder:(id)arg1 ring:(id)arg2 wavesCelebration:(id)arg3;
- (float)_revealPercentFromWavesMap:(id)arg1;
- (id)_wavesTextureWithCommandBuffer:(id)arg1 wavesMap:(id)arg2 size: /* Error: Ran out of types for this method. */;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (void)prewarm;
- (id)wavesTextureWithCommandBuffer:(id)arg1 wavesMap:(id)arg2 size: /* Error: Ran out of types for this method. */;

@end
