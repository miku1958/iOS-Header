//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VFX/NSObject-Protocol.h>

@class MTLBlitPassDescriptor, MTLComputePassDescriptor, MTLRenderPassDescriptor, MTLResourceStatePassDescriptor, NSError, NSString;
@protocol MTLAccelerationStructureCommandEncoder, MTLBlitCommandEncoder, MTLCommandQueue, MTLComputeCommandEncoder, MTLDevice, MTLDrawable, MTLEvent, MTLLogContainer, MTLParallelRenderCommandEncoder, MTLRenderCommandEncoder, MTLResourceStateCommandEncoder;

@protocol MTLCommandBuffer <NSObject>

@property (nonatomic, readonly) double GPUEndTime;
@property (nonatomic, readonly) double GPUStartTime;
@property (nonatomic, readonly) id<MTLCommandQueue> commandQueue;
@property (nonatomic, readonly) id<MTLDevice> device;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long errorOptions;
@property (nonatomic, readonly) double kernelEndTime;
@property (nonatomic, readonly) double kernelStartTime;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) id<MTLLogContainer> logs;
@property (nonatomic, readonly) BOOL retainedReferences;
@property (nonatomic, readonly) unsigned long long status;

- (id<MTLAccelerationStructureCommandEncoder>)accelerationStructureCommandEncoder;
- (void)addCompletedHandler:(void (^)(id<MTLCommandBuffer>))arg1;
- (void)addScheduledHandler:(void (^)(id<MTLCommandBuffer>))arg1;
- (id<MTLBlitCommandEncoder>)blitCommandEncoder;
- (id<MTLBlitCommandEncoder>)blitCommandEncoderWithDescriptor:(MTLBlitPassDescriptor *)arg1;
- (void)commit;
- (id<MTLComputeCommandEncoder>)computeCommandEncoder;
- (id<MTLComputeCommandEncoder>)computeCommandEncoderWithDescriptor:(MTLComputePassDescriptor *)arg1;
- (id<MTLComputeCommandEncoder>)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (void)encodeSignalEvent:(id<MTLEvent>)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id<MTLEvent>)arg1 value:(unsigned long long)arg2;
- (void)enqueue;
- (id<MTLParallelRenderCommandEncoder>)parallelRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (void)popDebugGroup;
- (void)presentDrawable:(id<MTLDrawable>)arg1;
- (void)presentDrawable:(id<MTLDrawable>)arg1 atTime:(double)arg2;
- (void)pushDebugGroup:(NSString *)arg1;
- (id<MTLRenderCommandEncoder>)renderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (id<MTLResourceStateCommandEncoder>)resourceStateCommandEncoder;
- (id<MTLResourceStateCommandEncoder>)resourceStateCommandEncoderWithDescriptor:(MTLResourceStatePassDescriptor *)arg1;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;
@end
