//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSDGLFrameBuffer, TSDGLState;
@protocol TSDGLDataBuffer;

__attribute__((visibility("hidden")))
@interface TSDGLEdgeDistanceField : NSObject
{
    unsigned int _inputTexture;
    struct CGSize _textureSize;
    struct CGSize _resultTextureSize;
    struct CGSize _squareSize;
    struct UIEdgeInsets _edgeInsets;
    double _downsampleScale;
    TSDGLFrameBuffer *_exteriorFramebuffer;
    TSDGLFrameBuffer *_interiorFramebuffer;
    id<TSDGLDataBuffer> _origDataBuffer;
    id<TSDGLDataBuffer> _rectDataBuffer;
    id<TSDGLDataBuffer> _squareDataBuffer;
    TSDGLState *_GLState;
    int _oldViewport[4];
}

+ (void)didEndUsingShaders;
+ (id)distanceFieldTextureWithTexture:(unsigned int)arg1 textureSize:(struct CGSize)arg2 maxDistance:(long long)arg3 edgeInsets:(struct UIEdgeInsets)arg4 downsampleScale:(double)arg5 floatTexture:(BOOL)arg6 GLState:(id)arg7;
+ (void)willBeginUsingShaders;
- (void)dealloc;
- (id)initWithTexture:(unsigned int)arg1 textureSize:(struct CGSize)arg2 edgeInsets:(struct UIEdgeInsets)arg3 downsampleScale:(double)arg4 GLState:(id)arg5;
- (unsigned int)p_combinedTextureWithCurrentGLFramebuffer:(int)arg1 floatTexture:(BOOL)arg2;
- (void)p_floodTextureInFramebuffer:(id)arg1 maxDistance:(long long)arg2;
- (unsigned int)p_gradientTextureFromCombinedTexture:(unsigned int)arg1 withCurrentGLFramebuffer:(int)arg2;
- (void)p_seedTextureFromTexture:(unsigned int)arg1 invertSeed:(BOOL)arg2;
- (void)p_setupBuffers;
- (void)p_setupShaders;
- (void)p_writeIntoSquareTexture;
- (void)teardown;

@end

