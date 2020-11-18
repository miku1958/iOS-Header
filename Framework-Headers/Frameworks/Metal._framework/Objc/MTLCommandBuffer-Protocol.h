//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/NSObject-Protocol.h>

@class MTLRenderPassDescriptor, NSError, NSString;
@protocol MTLBlitCommandEncoder, MTLCommandQueue, MTLComputeCommandEncoder, MTLDevice, MTLDrawable, MTLParallelRenderCommandEncoder, MTLRenderCommandEncoder;

@protocol MTLCommandBuffer <NSObject>

@property (readonly) id<MTLCommandQueue> commandQueue;
@property (readonly) id<MTLDevice> device;
@property (readonly) NSError *error;
@property (copy) NSString *label;
@property (readonly) BOOL retainedReferences;
@property (readonly) unsigned long long status;

- (void)addCompletedHandler:(void (^)(id<MTLCommandBuffer>))arg1;
- (void)addScheduledHandler:(void (^)(id<MTLCommandBuffer>))arg1;
- (id<MTLBlitCommandEncoder>)blitCommandEncoder;
- (void)commit;
- (id<MTLComputeCommandEncoder>)computeCommandEncoder;
- (void)enqueue;
- (id<MTLParallelRenderCommandEncoder>)parallelRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (void)presentDrawable:(id<MTLDrawable>)arg1;
- (void)presentDrawable:(id<MTLDrawable>)arg1 atTime:(double)arg2;
- (id<MTLRenderCommandEncoder>)renderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;
@end
