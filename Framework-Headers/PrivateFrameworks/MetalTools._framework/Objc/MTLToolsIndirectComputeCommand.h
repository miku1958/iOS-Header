//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLIndirectComputeCommandSPI-Protocol.h>

@class NSString;

@interface MTLToolsIndirectComputeCommand : MTLToolsObject <MTLIndirectComputeCommandSPI>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)clearBarrier;
- (void)concurrentDispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)concurrentDispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (id)dispatchThreadgroupsArguments;
- (id)dispatchThreadsArguments;
- (unsigned long long)getCommandType;
- (id)getImageBlockSize;
- (void *)getKernelBufferAtIndex:(unsigned long long)arg1;
- (unsigned long long)getOptimizedStatus;
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (CDStruct_1e3be3a8)getStageInRegion;
- (unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1;
- (BOOL)hasBarrier;
- (void)reset;
- (void)setBarrier;
- (void)setComputePipelineState:(id)arg1;
- (void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setStageInRegion:(CDStruct_1e3be3a8)arg1;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;

@end

