//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/NSObject-Protocol.h>

@protocol MTLBuffer, MTLComputePipelineState;

@protocol MTLIndirectComputeCommand <NSObject>
- (void)clearBarrier;
- (void)concurrentDispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)concurrentDispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)reset;
- (void)setBarrier;
- (void)setComputePipelineState:(id<MTLComputePipelineState>)arg1;
- (void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)setKernelBuffer:(id<MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setStageInRegion:(CDStruct_1e3be3a8)arg1;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
@end

