//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader, TSDGLState;
@protocol TSDAnimationRandomGenerator;

__attribute__((visibility("hidden")))
@interface TSDGLMotionBlurEffect : NSObject
{
    struct CGSize _framebufferSize;
    struct CGSize _slideSize;
    TSDGLFrameBuffer *_combinedFramebuffer;
    TSDGLShader *_velocityVisualizerShader;
    TSDGLShader *_velocityCollectionShader;
    TSDGLFrameBuffer *_velocityFramebuffer;
    TSDGLShader *_defaultTextureShader;
    TSDGLFrameBuffer *_colorFramebuffer;
    TSDGLDataBuffer *_colorFBODataBuffer;
    TSDGLDataBuffer *_velocityFBODataBuffer;
    TSDGLDataBuffer *_velocitySquashedFBODataBuffer;
    TSDGLDataBuffer *_FBODataBuffer;
    TSDGLShader *_velocityTileMaxVerticalShader;
    TSDGLShader *_velocityTileMaxHorizontalShader;
    TSDGLShader *_velocityNeighborMaxHorizontalShader;
    TSDGLShader *_velocityNeighborMaxVerticalShader;
    int _originalViewport[4];
    id<TSDAnimationRandomGenerator> _randomGenerator;
    BOOL _isSingleObject;
    double _motionBlurStrength;
    long long _debugDrawMode;
    double _framebufferScale;
    TSDGLState *_GLState;
}

@property (strong, nonatomic) TSDGLState *GLState; // @synthesize GLState=_GLState;
@property (nonatomic) long long debugDrawMode; // @synthesize debugDrawMode=_debugDrawMode;
@property (nonatomic) double framebufferScale; // @synthesize framebufferScale=_framebufferScale;
@property (nonatomic) BOOL isSingleObject; // @synthesize isSingleObject=_isSingleObject;
@property (nonatomic) double motionBlurStrength; // @synthesize motionBlurStrength=_motionBlurStrength;

- (void)bindColorAndVelocityFramebuffer;
- (void)bindColorFramebuffer;
- (void)bindVelocityFramebuffer;
- (void)dealloc;
- (id)description;
- (void)drawResultWithCurrentGLFramebuffer:(int)arg1;
- (id)initWithFramebufferSize:(struct CGSize)arg1 slideSize:(struct CGSize)arg2 randomGenerator:(id)arg3;
- (void)p_blitIntoColorFramebufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_blitIntoVelocityFramebufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_dilateVelocityBufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_setupShaders;
- (void)p_setupVelocityFramebufferIfNecessary;
- (struct CGSize)p_squashedVelocityFramebufferSize;
- (void)p_updateMaxVelocityInShadersWithScale:(double)arg1 isColorFBO:(BOOL)arg2;
- (struct CGSize)p_velocityFramebufferSize;
- (struct CGSize)p_velocityFramebufferTextureScale;
- (void)setupMotionBlurEffectIfNecessary;
- (void)teardown;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)updateVelocityScaleInShader:(id)arg1;
- (struct CGSize)velocityScaleForColorFBO:(BOOL)arg1;

@end

