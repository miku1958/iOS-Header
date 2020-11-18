//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLCompiler, MTLIOMemoryInfo, NSString;
@protocol MTLDeviceSPI, OS_dispatch_queue;

@interface _MTLDevice : NSObject
{
    CDStruct_37c53b2f _limits;
    MTLCompiler *_compiler;
    NSObject<OS_dispatch_queue> *_serialQueue;
    MTLIOMemoryInfo *_memoryInfo;
    unsigned long long _globalTraceObjectID;
    int _commandQueueCount;
    struct MTLLibraryBuilder *_libraryBuilder;
    struct MTLPipelineLibraryBuilder *_pipelineLibraryBuilder;
    struct MTLPipelineCollection *_pipelineDescriptors;
    NSString *_pipelineDescriptorsOutputFile;
    NSString *_librariesOutputDirectory;
    id<MTLDeviceSPI> _deviceWrapper;
}

@property (readonly) unsigned long long argumentBuffersSupport;
@property (readonly) MTLCompiler *compiler; // @synthesize compiler=_compiler;
@property (readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes;
@property (readonly) unsigned long long deviceLinearTextureAlignmentBytes;
@property (readonly) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property (readonly) struct IndirectArgumentBufferCapabilities indirectArgumentBufferCapabilities; // @dynamic indirectArgumentBufferCapabilities;
@property (readonly) unsigned long long indirectArgumentBuffersSupport;
@property (readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property (readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property (readonly) const CDStruct_37c53b2f *limits;
@property (readonly) unsigned long long linearTextureAlignmentBytes;
@property (readonly) unsigned long long linearTextureArrayAlignmentBytes;
@property (readonly) unsigned long long linearTextureArrayAlignmentSlice;
@property (readonly) unsigned long long maxArgumentBufferSamplerCount;
@property (readonly) unsigned long long maxBufferLength; // @dynamic maxBufferLength;
@property (readonly) unsigned long long maxColorAttachments;
@property (readonly) unsigned long long maxComputeBuffers;
@property (readonly) unsigned long long maxComputeInlineDataSize;
@property (readonly) unsigned long long maxComputeLocalMemorySizes;
@property (readonly) unsigned long long maxComputeSamplers;
@property (readonly) unsigned long long maxComputeTextures;
@property (readonly) unsigned long long maxComputeThreadgroupMemory;
@property (readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes;
@property (readonly) unsigned long long maxCustomSamplePositions;
@property (readonly) unsigned long long maxFragmentBuffers;
@property (readonly) unsigned long long maxFragmentInlineDataSize;
@property (readonly) unsigned long long maxFragmentSamplers;
@property (readonly) unsigned long long maxFragmentTextures;
@property (readonly) unsigned long long maxFramebufferStorageBits;
@property (readonly) unsigned long long maxFunctionConstantIndices;
@property (readonly) unsigned long long maxIndirectBuffers;
@property (readonly) unsigned long long maxIndirectSamplers;
@property (readonly) unsigned long long maxIndirectSamplersPerDevice;
@property (readonly) unsigned long long maxIndirectTextures;
@property (readonly) unsigned long long maxInterpolants;
@property (readonly) unsigned long long maxInterpolatedComponents;
@property (readonly) float maxLineWidth;
@property (readonly) float maxPointSize;
@property (readonly) unsigned long long maxTessellationFactor;
@property (readonly) unsigned long long maxTextureBufferWidth;
@property (readonly) unsigned long long maxTextureDepth3D;
@property (readonly) unsigned long long maxTextureDimensionCube;
@property (readonly) unsigned long long maxTextureHeight2D;
@property (readonly) unsigned long long maxTextureHeight3D;
@property (readonly) unsigned long long maxTextureLayers;
@property (readonly) unsigned long long maxTextureWidth1D;
@property (readonly) unsigned long long maxTextureWidth2D;
@property (readonly) unsigned long long maxTextureWidth3D;
@property (readonly) unsigned long long maxTileBuffers;
@property (readonly) unsigned long long maxTileInlineDataSize;
@property (readonly) unsigned long long maxTileSamplers;
@property (readonly) unsigned long long maxTileTextures;
@property (readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property (readonly) unsigned long long maxVertexAttributes;
@property (readonly) unsigned long long maxVertexBuffers;
@property (readonly) unsigned long long maxVertexInlineDataSize;
@property (readonly) unsigned long long maxVertexSamplers;
@property (readonly) unsigned long long maxVertexTextures;
@property (readonly) unsigned long long maxViewportCount;
@property (readonly) unsigned long long maxVisibilityQueryOffset;
@property (readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property (readonly) unsigned long long minConstantBufferAlignmentBytes;
@property (readonly) unsigned long long minTilePixels;
@property (readonly) NSString *name;
@property (readonly, getter=areRasterOrderGroupsSupported) BOOL rasterOrderGroupsSupported;
@property (readonly) unsigned long long readWriteTextureSupport;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;

+ (BOOL)featureProfile:(unsigned long long)arg1 supportsFeatureSet:(unsigned long long)arg2;
+ (BOOL)useNewPrimitiveRestartBehavior;
- (void)_decrementCommandQueueCount;
- (id)_deviceWrapper;
- (void)_incrementCommandQueueCount;
- (void)_purgeDevice;
- (void)_setDeviceWrapper:(id)arg1;
- (void)compilerPropagatesThreadPriority:(BOOL)arg1;
- (void *)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 keySize:(unsigned long long *)arg2;
- (void *)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 keySize:(unsigned long long *)arg3;
- (struct NSObject *)computeVariantWithCompilerOutput:(id)arg1;
- (struct NSObject *)computeVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2;
- (void)dealloc;
- (id)description;
- (BOOL)deviceOrFeatureProfileSupportsFeatureSet:(unsigned long long)arg1;
- (BOOL)deviceSupportsFeatureSet:(unsigned long long)arg1;
- (void)dumpPipelineDescriptorsIfRequested;
- (id)endCollectingPipelineDescriptors;
- (id)familyName;
- (id)formattedDescription:(unsigned long long)arg1;
- (void *)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 fragmentKeySize:(unsigned long long *)arg2 previousStateVariant:(id)arg3;
- (void *)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 previousStateVariant:(id)arg3 fragmentKeySize:(unsigned long long *)arg4;
- (id)fragmentVariantWithCompilerOutput:(id)arg1;
- (id)fragmentVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2;
- (void)freeComputeFunctionKey:(void *)arg1 keySize:(unsigned long long)arg2;
- (void)freeFragmentFunctionKey:(void *)arg1 fragmentKeySize:(unsigned long long)arg2;
- (void)freeVertexFunctionKey:(void *)arg1 vertexKeySize:(unsigned long long)arg2;
- (void)getConstantSamplersBitmasks:(unsigned long long **)arg1 uniqueIdentifiers:(unsigned long long **)arg2 constantSamplerCount:(unsigned long long *)arg3 forComputeVariant:(struct NSObject *)arg4;
- (void)getConstantSamplersBitmasks:(unsigned long long **)arg1 uniqueIdentifiers:(unsigned long long **)arg2 constantSamplerCount:(unsigned long long *)arg3 forVertexVariant:(id)arg4 fragmentVariant:(id)arg5;
- (void)getDefaultSamplePositions:(CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;
- (void *)getShaderCacheKeys;
- (id)init;
- (void)initLimits;
- (BOOL)isQuadDataSharingSupported;
- (CDStruct_c0454aff)libraryCacheStats;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (id)newArgumentEncoderWithArguments:(id)arg1;
- (id)newArgumentEncoderWithArguments:(id)arg1 structType:(id *)arg2;
- (id)newArgumentEncoderWithLayout:(id)arg1;
- (id)newCommandQueue;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id *)arg2;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id)newComputePipelineWithDescriptor:(id)arg1 variant:(struct NSObject *)arg2;
- (id)newDefaultLibrary;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id *)arg2;
- (id)newEvent;
- (id)newFunctionWithGLIR:(void *)arg1 functionType:(unsigned long long)arg2;
- (id)newFunctionWithGLIR:(void *)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;
- (id)newIndirectArgumentEncoderWithArguments:(id)arg1;
- (id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id)newLibraryWithData:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id *)arg2;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)newLibraryWithURL:(id)arg1 error:(id *)arg2;
- (id)newPipelineLibraryWithFilePath:(id)arg1 error:(id *)arg2;
- (id)newRenderPipelineWithDescriptor:(id)arg1 vertexVariant:(id)arg2 fragmentVariant:(id)arg3;
- (id)newSharedEvent;
- (id)newSharedEventWithHandle:(id)arg1;
- (id)newSharedEventWithMachPort:(unsigned int)arg1;
- (CDStruct_c0454aff)pipelineCacheStats;
- (CDStruct_596dc0d1)pipelineFlagsWithComputeVariant:(struct NSObject *)arg1;
- (CDStruct_7ce1aa5b)pipelineFlagsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2;
- (id)pipelinePerformanceStatisticsWithComputeVariant:(struct NSObject *)arg1;
- (id)pipelinePerformanceStatisticsWithComputeVariant:(struct NSObject *)arg1 compileTimeOutput:(id)arg2;
- (id)pipelinePerformanceStatisticsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2;
- (id)pipelinePerformanceStatisticsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2 vertexCompileTimeOutput:(id)arg3 fragmentCompileTimeOutput:(id)arg4;
- (id)productName;
- (void)registerCompiler:(id)arg1;
- (void)registerComputePipelineDescriptor:(id)arg1;
- (void)registerRenderPipelineDescriptor:(id)arg1;
- (void)registerTileRenderPipelineDescriptor:(id)arg1;
- (void)releaseCacheEntry:(struct MTLLibraryContainer *)arg1;
- (void)startCollectingPipelineDescriptors;
- (BOOL)supportsFeatureSet:(unsigned long long)arg1;
- (BOOL)supportsTextureSampleCount:(unsigned long long)arg1;
- (void)unloadShaderCaches;
- (id)vendorName;
- (void *)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 nextStageVariant:(id)arg3 vertexKeySize:(unsigned long long *)arg4;
- (void *)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 vertexKeySize:(unsigned long long *)arg2 nextStageVariant:(id)arg3;
- (id)vertexVariantWithCompilerOutput:(id)arg1;
- (id)vertexVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2;

@end

