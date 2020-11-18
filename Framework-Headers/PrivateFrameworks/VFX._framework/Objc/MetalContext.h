//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FramebufferDescriptor, NSLock, NSMutableArray, NSMutableDictionary;
@protocol MTLDepthStencilState, MTLTexture;

__attribute__((visibility("hidden")))
@interface MetalContext : NSObject
{
    id<MTLDepthStencilState> _depthStencilState;
    FramebufferDescriptor *_framebufferDescriptor;
    NSMutableDictionary *_renderPipelineStateCache;
    id<MTLTexture> _fontTexture;
    NSMutableArray *_bufferCache;
    NSLock *_bufferCacheLock;
    double _lastBufferCachePurge;
}

@property (strong, nonatomic) NSMutableArray *bufferCache; // @synthesize bufferCache=_bufferCache;
@property (strong, nonatomic) NSLock *bufferCacheLock; // @synthesize bufferCacheLock=_bufferCacheLock;
@property (strong, nonatomic) id<MTLDepthStencilState> depthStencilState; // @synthesize depthStencilState=_depthStencilState;
@property (strong, nonatomic) id<MTLTexture> fontTexture; // @synthesize fontTexture=_fontTexture;
@property (strong, nonatomic) FramebufferDescriptor *framebufferDescriptor; // @synthesize framebufferDescriptor=_framebufferDescriptor;
@property (nonatomic) double lastBufferCachePurge; // @synthesize lastBufferCachePurge=_lastBufferCachePurge;
@property (strong, nonatomic) NSMutableDictionary *renderPipelineStateCache; // @synthesize renderPipelineStateCache=_renderPipelineStateCache;

- (void).cxx_destruct;
- (id)_renderPipelineStateForFramebufferDescriptor:(id)arg1 device:(id)arg2;
- (id)dequeueReusableBufferOfLength:(unsigned long long)arg1 device:(id)arg2;
- (void)emptyRenderPipelineStateCache;
- (void)enqueueReusableBuffer:(id)arg1;
- (id)init;
- (void)makeDeviceObjectsWithDevice:(id)arg1;
- (void)makeFontTextureWithDevice:(id)arg1;
- (void)renderDrawData:(struct ImDrawData *)arg1 commandBuffer:(id)arg2 commandEncoder:(id)arg3;
- (id)renderPipelineStateForFrameAndDevice:(id)arg1;
- (void)setupRenderState:(struct ImDrawData *)arg1 commandBuffer:(id)arg2 commandEncoder:(id)arg3 renderPipelineState:(id)arg4 vertexBuffer:(id)arg5 vertexBufferOffset:(unsigned long long)arg6;

@end
