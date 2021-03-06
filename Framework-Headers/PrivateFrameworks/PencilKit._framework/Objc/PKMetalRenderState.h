//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol MTLCommandBuffer, MTLCommandQueue, MTLComputeCommandEncoder, MTLRenderCommandEncoder, MTLTexture;

@interface PKMetalRenderState : NSObject
{
    NSMutableArray *_commandBuffers;
    BOOL _liveRendering;
    BOOL _waitUntilCompletedOnCommit;
    BOOL _msaaRendering;
    BOOL _renderOnPaper;
    BOOL _needRenderMask;
    BOOL _isRestartingForSimulator;
    id<MTLCommandQueue> _commandQueue;
    id<MTLCommandBuffer> _commandBuffer;
    id<MTLCommandBuffer> _computeCommandBuffer;
    id<MTLCommandBuffer> _maskCommandBuffer;
    id<MTLRenderCommandEncoder> _renderEncoder;
    id<MTLComputeCommandEncoder> _computeEncoder;
    id<MTLRenderCommandEncoder> _maskRenderEncoder;
    unsigned long long _vertexEncodeCount;
    id<MTLTexture> _destinationTexture;
    unsigned long long _destinationColorAttachmentIndex;
    CDStruct_5f3a0cd7 _scissorRect;
}

@property (readonly, nonatomic) id<MTLCommandBuffer> commandBuffer; // @synthesize commandBuffer=_commandBuffer;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property (readonly, nonatomic) id<MTLCommandBuffer> computeCommandBuffer; // @synthesize computeCommandBuffer=_computeCommandBuffer;
@property (strong, nonatomic) id<MTLComputeCommandEncoder> computeEncoder; // @synthesize computeEncoder=_computeEncoder;
@property (nonatomic) unsigned long long destinationColorAttachmentIndex; // @synthesize destinationColorAttachmentIndex=_destinationColorAttachmentIndex;
@property (strong, nonatomic) id<MTLTexture> destinationTexture; // @synthesize destinationTexture=_destinationTexture;
@property (nonatomic) BOOL isRestartingForSimulator; // @synthesize isRestartingForSimulator=_isRestartingForSimulator;
@property (nonatomic) BOOL liveRendering; // @synthesize liveRendering=_liveRendering;
@property (readonly, nonatomic) id<MTLCommandBuffer> maskCommandBuffer; // @synthesize maskCommandBuffer=_maskCommandBuffer;
@property (strong, nonatomic) id<MTLRenderCommandEncoder> maskRenderEncoder; // @synthesize maskRenderEncoder=_maskRenderEncoder;
@property (nonatomic) BOOL msaaRendering; // @synthesize msaaRendering=_msaaRendering;
@property (nonatomic) BOOL needRenderMask; // @synthesize needRenderMask=_needRenderMask;
@property (strong, nonatomic) id<MTLRenderCommandEncoder> renderEncoder; // @synthesize renderEncoder=_renderEncoder;
@property (nonatomic) BOOL renderOnPaper; // @synthesize renderOnPaper=_renderOnPaper;
@property (nonatomic) CDStruct_5f3a0cd7 scissorRect; // @synthesize scissorRect=_scissorRect;
@property (nonatomic) unsigned long long vertexEncodeCount; // @synthesize vertexEncodeCount=_vertexEncodeCount;
@property (nonatomic) BOOL waitUntilCompletedOnCommit; // @synthesize waitUntilCompletedOnCommit=_waitUntilCompletedOnCommit;

+ (void)renderTargetBarrierForRenderEncoder:(id)arg1;
- (void).cxx_destruct;
- (void)addCommandBuffer:(id)arg1;
- (void)cancel;
- (id)commandBufferCreateIfNecessary;
- (void)commit;
- (void)commitAndPurgeResourceSet:(id)arg1;
- (void)commitMaskCommandBuffer;
- (id)computeCommandBufferCreateIfNecessary;
- (void)dealloc;
- (id)initWithCommandQueue:(id)arg1 liveRendering:(BOOL)arg2;
- (id)maskCommandBufferCreateIfNecessary;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)renderTargetBarrier;

@end

