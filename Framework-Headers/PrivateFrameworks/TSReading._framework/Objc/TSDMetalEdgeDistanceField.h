//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TSDMetalContext;
@protocol MTLTexture;

@interface TSDMetalEdgeDistanceField : NSObject
{
    TSDMetalContext *_metalContext;
    struct CGSize _textureSize;
    struct CGSize _resultTextureSize;
    struct CGSize _squareSize;
    struct UIEdgeInsets _edgeInsets;
    double _downsampleScale;
    id<MTLTexture> _inputTexture;
    NSArray *_exteriorTextures;
    NSArray *_interiorTextures;
    id<MTLTexture> _combineTexture;
    id<MTLTexture> _combineByteTexture;
    id<MTLTexture> _resultTexture;
}

+ (void)didEndWithDevice:(id)arg1;
+ (id)distanceFieldTextureWithTexture:(id)arg1 textureSize:(struct CGSize)arg2 maxDistance:(long long)arg3 edgeInsets:(struct UIEdgeInsets)arg4 downsampleScale:(double)arg5 floatTexture:(BOOL)arg6 makeCPUReadable:(BOOL)arg7 metalContext:(id)arg8 capabilities:(id)arg9;
+ (void)willBeginWithDevice:(id)arg1;
- (void).cxx_destruct;
- (id)initWithTexture:(id)arg1 textureSize:(struct CGSize)arg2 edgeInsets:(struct UIEdgeInsets)arg3 downsampleScale:(double)arg4 metalContext:(id)arg5 capabilities:(id)arg6;
- (id)p_combinedTexturesWithIndex:(unsigned long long)arg1 floatTexture:(BOOL)arg2 commandBuffer:(id)arg3;
- (void)p_dispatchThreadgroupsWithEncoder:(id)arg1 pipelineState:(id)arg2 texture:(id)arg3;
- (unsigned long long)p_floodTextures:(id)arg1 currentIndex:(unsigned long long)arg2 maxDistance:(long long)arg3 commandBuffer:(id)arg4;
- (id)p_gradientTextureWithCommandBuffer:(id)arg1;
- (void)p_seedWithCommandBuffer:(id)arg1 fromTexture:(id)arg2 toTexture:(id)arg3 invertSeed:(BOOL)arg4;
- (void)p_setupTextures;
- (void)p_writeWithCommandBuffer:(id)arg1 intoSquareTexture:(id)arg2;

@end

