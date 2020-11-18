//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice, OS_dispatch_queue;

@interface VCPSideCarMetal : NSObject
{
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _transitionDetection;
    struct CF<__CVMetalTextureCache *> _textureCacheLuma;
    struct CF<__CVMetalTextureCache *> _textureCacheChroma;
    struct CF<__CVMetalTextureCache *> _textureCacheRGBALuma;
    struct CF<__CVMetalTextureCache *> _textureCacheRGBAChroma;
    NSDictionary *_readAttributes;
    NSDictionary *_writeAttributes;
    struct MetalBufferPool _packetPool;
    struct MetalBufferPool _blockDist;
    NSObject<OS_dispatch_queue> *_submissionQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    unsigned int _planeOffset[4];
    unsigned int _planeBytesPerRow[4];
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cachedTexture:(struct __CVBuffer *)arg1 forPlane:(int)arg2 withAttributes:(id)arg3;
- (int)copyFromFrame:(struct __CVBuffer *)arg1 toTile:(struct __CVBuffer *)arg2 origin:(CDStruct_14f26992)arg3 size:(CDStruct_14f26992)arg4 withFence:(future_da72c1f3 *)arg5;
- (future_82df37ac)createEncodePacket:(struct __CVBuffer *)arg1 forRegion:(CDStruct_4c83c94d)arg2 instance:(unsigned int)arg3 sequenceNumber:(unsigned int)arg4 frameIndex:(unsigned int)arg5 pts:(CDStruct_1b6d18a9)arg6 duration:(CDStruct_1b6d18a9)arg7 frameProperties:(struct __CFDictionary *)arg8;
- (id)init;
- (id)rgbaUintTextureForChroma:(struct __CVBuffer *)arg1 withAttributes:(id)arg2;
- (id)rgbaUintTextureForLuma:(struct __CVBuffer *)arg1 withAttributes:(id)arg2;
- (id)rgbaUnormTextureForLuma:(struct __CVBuffer *)arg1 withAttributes:(id)arg2;
- (int)selectGPUForFrame:(struct __CVBuffer *)arg1;
- (void)setPacketLayout:(id)arg1;
- (future_d02553ad)temporalTransitionScore:(struct __CVBuffer *)arg1 previousFrame:(struct __CVBuffer *)arg2 forRegion:(CDStruct_4c83c94d)arg3;

@end
