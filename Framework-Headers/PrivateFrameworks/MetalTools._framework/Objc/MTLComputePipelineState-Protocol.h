//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/NSObject-Protocol.h>

@class MTLIntersectionFunctionTableDescriptor, MTLVisibleFunctionTableDescriptor, NSArray, NSString;
@protocol MTLComputePipelineState, MTLDevice, MTLFunction, MTLFunctionHandle, MTLIntersectionFunctionTable, MTLVisibleFunctionTable;

@protocol MTLComputePipelineState <NSObject>

@property (readonly) id<MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) unsigned long long staticThreadgroupMemoryLength;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) unsigned long long threadExecutionWidth;

- (id<MTLFunctionHandle>)functionHandleWithFunction:(id<MTLFunction>)arg1;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;
- (id<MTLComputePipelineState>)newComputePipelineStateWithAdditionalBinaryFunctions:(NSArray *)arg1 error:(id *)arg2;
- (id<MTLIntersectionFunctionTable>)newIntersectionFunctionTableWithDescriptor:(MTLIntersectionFunctionTableDescriptor *)arg1;
- (id<MTLVisibleFunctionTable>)newVisibleFunctionTableWithDescriptor:(MTLVisibleFunctionTableDescriptor *)arg1;
@end

