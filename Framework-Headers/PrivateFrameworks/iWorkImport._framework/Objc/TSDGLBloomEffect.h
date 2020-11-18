//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader;

__attribute__((visibility("hidden")))
@interface TSDGLBloomEffect : NSObject
{
    struct CGSize _effectSize;
    struct CGSize _blurBufferSize;
    TSDGLFrameBuffer *_colorFramebuffer;
    TSDGLFrameBuffer *_blurFramebuffer;
    TSDGLDataBuffer *_dataBuffer;
    TSDGLDataBuffer *_blurTransferDataBuffer;
    TSDGLDataBuffer *_blurDataBuffer;
    TSDGLShader *_blurHorizontalShader;
    TSDGLShader *_blurVerticalShader;
    TSDGLShader *_bloomShader;
    TSDGLShader *_fboTransferShader;
    int _oldViewportRect[4];
    BOOL _oldViewportRectInitialized;
}

- (void)bindFramebuffer;
- (void)dealloc;
- (void)drawBloomEffectWithMVPMatrix:(struct CATransform3D)arg1 bloomAmount:(double)arg2 currentGLFramebuffer:(int)arg3 GLState:(id)arg4;
- (id)initWithEffectSize:(struct CGSize)arg1 blurScale:(double)arg2;
- (void)p_blurColorBufferWithPreviousFramebuffer:(int)arg1 GLState:(id)arg2;
- (void)p_setupBuffers;
- (void)p_setupShaders;
- (void)teardown;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;

@end

