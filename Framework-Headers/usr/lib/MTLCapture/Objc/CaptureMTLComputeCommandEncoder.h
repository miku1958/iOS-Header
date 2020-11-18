//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLCapture/CaptureMTLObject-Protocol.h>
#import <MTLCapture/MTLComputeCommandEncoderSPI-Protocol.h>

@class CaptureMTLCommandBuffer, CaptureMTLDevice, NSMutableSet, NSString;
@protocol MTLComputeCommandEncoder, MTLComputeCommandEncoderSPI, MTLDevice;

@interface CaptureMTLComputeCommandEncoder : NSObject <MTLComputeCommandEncoderSPI, CaptureMTLObject>
{
    id<MTLComputeCommandEncoderSPI> _baseObject;
    CaptureMTLDevice *_captureDevice;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
    NSMutableSet *_retainedObjects;
    CaptureMTLCommandBuffer *_captureCommandBuffer;
}

@property (readonly) id<MTLComputeCommandEncoder> baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long dispatchType;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext *traceContext;
@property (readonly) struct GTTraceStream *traceStream;

- (void).cxx_destruct;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(CDStruct_14f26992)arg3;
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;
- (void)enableNullBufferBinds:(BOOL)arg1;
- (void)endEncoding;
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBaseObject:(id)arg1 captureCommandBuffer:(id)arg2;
- (void)insertDebugSignpost:(id)arg1;
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2;
- (void)memoryBarrierWithScope:(unsigned long long)arg1;
- (id)newKernelDebugInfo;
- (id)originalObject;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(BOOL)arg3;
- (void)setAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setComputePipelineState:(id)arg1;
- (void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setStageInRegion:(CDStruct_4c83c94d)arg1;
- (void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;
- (void)touch;
- (void)updateFence:(id)arg1;
- (void)useHeap:(id)arg1;
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)waitForFence:(id)arg1;

@end
