//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/NSObject-Protocol.h>

@class MTLCompileOptions, MTLComputePipelineDescriptor, MTLDepthStencilDescriptor, MTLHeapDescriptor, MTLIndirectCommandBufferDescriptor, MTLRenderPipelineDescriptor, MTLSamplerDescriptor, MTLSharedEventHandle, MTLTextureDescriptor, MTLTileRenderPipelineDescriptor, NSArray, NSBundle, NSObject, NSString, NSURL;
@protocol MTLArgumentEncoder, MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLDepthStencilState, MTLEvent, MTLFence, MTLFunction, MTLHeap, MTLIndirectCommandBuffer, MTLLibrary, MTLRenderPipelineState, MTLSamplerState, MTLSharedEvent, MTLTexture, OS_dispatch_data;

@protocol MTLDevice <NSObject>

@property (readonly) unsigned long long argumentBuffersSupport;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly, getter=isDepth24Stencil8PixelFormatSupported) BOOL depth24Stencil8PixelFormatSupported;
@property (readonly, getter=isHeadless) BOOL headless;
@property (readonly, getter=isLowPower) BOOL lowPower;
@property (readonly) unsigned long long maxArgumentBufferSamplerCount;
@property (readonly) unsigned long long maxBufferLength;
@property (readonly) unsigned long long maxThreadgroupMemoryLength;
@property (readonly) CDStruct_14f26992 maxThreadsPerThreadgroup;
@property (readonly) NSString *name;
@property (readonly, getter=areProgrammableSamplePositionsSupported) BOOL programmableSamplePositionsSupported;
@property (readonly, getter=areRasterOrderGroupsSupported) BOOL rasterOrderGroupsSupported;
@property (readonly) unsigned long long readWriteTextureSupport;
@property (readonly) unsigned long long recommendedMaxWorkingSetSize;
@property (readonly) unsigned long long registryID;
@property (readonly, getter=isRemovable) BOOL removable;

- (void)getDefaultSamplePositions:(CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;
- (CDStruct_4bcfbbae)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (CDStruct_4bcfbbae)heapTextureSizeAndAlignWithDescriptor:(MTLTextureDescriptor *)arg1;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minimumTextureBufferAlignmentForPixelFormat:(unsigned long long)arg1;
- (id<MTLArgumentEncoder>)newArgumentEncoderWithArguments:(NSArray *)arg1;
- (id<MTLBuffer>)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id<MTLBuffer>)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(void (^)(void *, unsigned long long))arg4;
- (id<MTLBuffer>)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id<MTLCommandQueue>)newCommandQueue;
- (id<MTLCommandQueue>)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (void)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id<MTLComputePipelineState>, MTLComputePipelineReflection *, NSError *))arg3;
- (id<MTLComputePipelineState>)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newComputePipelineStateWithFunction:(id<MTLFunction>)arg1 completionHandler:(void (^)(id<MTLComputePipelineState>, NSError *))arg2;
- (id<MTLComputePipelineState>)newComputePipelineStateWithFunction:(id<MTLFunction>)arg1 error:(id *)arg2;
- (void)newComputePipelineStateWithFunction:(id<MTLFunction>)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id<MTLComputePipelineState>, MTLComputePipelineReflection *, NSError *))arg3;
- (id<MTLComputePipelineState>)newComputePipelineStateWithFunction:(id<MTLFunction>)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id<MTLLibrary>)newDefaultLibrary;
- (id<MTLLibrary>)newDefaultLibraryWithBundle:(NSBundle *)arg1 error:(id *)arg2;
- (id<MTLDepthStencilState>)newDepthStencilStateWithDescriptor:(MTLDepthStencilDescriptor *)arg1;
- (id<MTLEvent>)newEvent;
- (id<MTLFence>)newFence;
- (id<MTLHeap>)newHeapWithDescriptor:(MTLHeapDescriptor *)arg1;
- (id<MTLIndirectCommandBuffer>)newIndirectCommandBufferWithDescriptor:(MTLIndirectCommandBufferDescriptor *)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id<MTLLibrary>)newLibraryWithData:(NSObject<OS_dispatch_data> *)arg1 error:(id *)arg2;
- (id<MTLLibrary>)newLibraryWithFile:(NSString *)arg1 error:(id *)arg2;
- (void)newLibraryWithSource:(NSString *)arg1 options:(MTLCompileOptions *)arg2 completionHandler:(void (^)(id<MTLLibrary>, NSError *))arg3;
- (id<MTLLibrary>)newLibraryWithSource:(NSString *)arg1 options:(MTLCompileOptions *)arg2 error:(id *)arg3;
- (id<MTLLibrary>)newLibraryWithURL:(NSURL *)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 completionHandler:(void (^)(id<MTLRenderPipelineState>, NSError *))arg2;
- (id<MTLRenderPipelineState>)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id<MTLRenderPipelineState>, MTLRenderPipelineReflection *, NSError *))arg3;
- (id<MTLRenderPipelineState>)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id<MTLRenderPipelineState>, MTLRenderPipelineReflection *, NSError *))arg3;
- (id<MTLRenderPipelineState>)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id<MTLSamplerState>)newSamplerStateWithDescriptor:(MTLSamplerDescriptor *)arg1;
- (id<MTLSharedEvent>)newSharedEvent;
- (id<MTLSharedEvent>)newSharedEventWithHandle:(MTLSharedEventHandle *)arg1;
- (id<MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1;
- (BOOL)supportsFeatureSet:(unsigned long long)arg1;
- (BOOL)supportsTextureSampleCount:(unsigned long long)arg1;
@end

