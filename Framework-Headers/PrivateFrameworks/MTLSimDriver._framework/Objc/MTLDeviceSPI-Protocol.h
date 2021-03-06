//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimDriver/MTLDevice-Protocol.h>

@class MTLBinaryArchiveDescriptor, MTLCommandQueueDescriptor, MTLComputePipelineDescriptor, MTLFunctionDescriptor, MTLGPUBVHBuilder, MTLIndirectCommandBufferDescriptor, MTLIntersectionFunctionTableDescriptor, MTLRasterizationRateMapDescriptor, MTLRenderPipelineDescriptor, MTLStructType, MTLTargetDeviceArchitecture, MTLTextureDescriptor, MTLTileRenderPipelineDescriptor, MTLVisibleFunctionTableDescriptor, NSArray, NSData, NSMutableDictionary, NSObject, NSString, NSURL, _MTLIndirectArgumentBufferLayout;
@protocol MTLArgumentEncoder, MTLBinaryArchive, MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLDeserializationContext, MTLDevice, MTLDeviceSPI, MTLDynamicLibrary, MTLFunction, MTLIndirectArgumentEncoder, MTLIndirectComputeCommandEncoder, MTLIndirectRenderCommandEncoder, MTLIntersectionFunctionTable, MTLLibrary, MTLPipelineLibrarySPI, MTLRasterizationRateMap, MTLRenderPipelineState, MTLResourceGroupSPI, MTLSharedEvent, MTLTexture, MTLTextureLayout, MTLVisibleFunctionTable, OS_dispatch_data;

@protocol MTLDeviceSPI <MTLDevice>

@property (readonly, getter=isAnisoSampleFixSupported) BOOL AnisoSampleFixSupported;
@property (readonly, getter=isBCTextureCompressionSupported) BOOL BCTextureCompressionSupported;
@property (readonly, getter=isBinaryFunctionPointersSupported) BOOL BinaryFunctionPointersSupported;
@property (readonly, getter=isClampToHalfBorderSupported) BOOL ClampToHalfBorderSupported;
@property (readonly, getter=isCustomBorderColorSupported) BOOL CustomBorderColorSupported;
@property (readonly, getter=isFixedLinePointFillDepthGradientSupported) BOOL FixedLinePointFillDepthGradientSupported;
@property (readonly) MTLGPUBVHBuilder *GPUBVHBuilder;
@property (readonly, getter=isRGB10A2GammaSupported) BOOL RGB10A2GammaSupported;
@property (readonly, getter=isRTZRoundingSupported) BOOL RTZRoundingSupported;
@property (nonatomic) unsigned long long commandBufferErrorOptions;
@property (readonly) unsigned long long dedicatedMemorySize;
@property (readonly) long long defaultTextureWriteRoundingMode;
@property (readonly) unsigned long long deviceCreationFlags;
@property (readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes;
@property (readonly) unsigned long long deviceLinearTextureAlignmentBytes;
@property (readonly) unsigned long long doubleFPConfig;
@property (readonly) unsigned long long featureProfile;
@property (readonly, getter=isFloat32FilteringSupported) BOOL float32FilteringSupported;
@property (getter=areGPUAssertionsEnabled, setter=setGPUAssertionsEnabled:) BOOL gpuAssertionsEnabled;
@property (readonly) unsigned long long halfFPConfig;
@property (readonly) struct IndirectArgumentBufferCapabilities indirectArgumentBufferCapabilities;
@property (readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property (readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property (readonly, getter=isLargeMRTSupported) BOOL largeMRTSupported;
@property (readonly) const CDStruct_4a42450c *limits;
@property (readonly) unsigned long long linearTextureAlignmentBytes;
@property (readonly) unsigned long long linearTextureArrayAlignmentBytes;
@property (readonly) unsigned long long linearTextureArrayAlignmentSlice;
@property (readonly) unsigned long long maxColorAttachments;
@property (readonly) unsigned long long maxComputeAttributes;
@property (readonly) unsigned long long maxComputeBuffers;
@property (readonly) unsigned long long maxComputeInlineDataSize;
@property (readonly) unsigned long long maxComputeLocalMemorySizes;
@property (readonly) unsigned long long maxComputeSamplers;
@property (readonly) unsigned long long maxComputeTextures;
@property (readonly) unsigned long long maxComputeThreadgroupMemory;
@property (readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes;
@property (readonly) unsigned long long maxConstantBufferArguments;
@property (readonly) unsigned long long maxCustomSamplePositions;
@property (readonly) unsigned long long maxFenceInstances;
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
@property (readonly) unsigned long long maxRasterizationRateLayerCount;
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
@property (readonly) unsigned long long maxVertexAmplificationCount;
@property (readonly) unsigned long long maxVertexAmplificationFactor;
@property (readonly) unsigned long long maxVertexAttributes;
@property (readonly) unsigned long long maxVertexBuffers;
@property (readonly) unsigned long long maxVertexInlineDataSize;
@property (readonly) unsigned long long maxVertexSamplers;
@property (readonly) unsigned long long maxVertexTextures;
@property (readonly) unsigned long long maxViewportCount;
@property (readonly) unsigned long long maxVisibilityQueryOffset;
@property (nonatomic) BOOL metalAssertionsEnabled;
@property (readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property (readonly) unsigned long long minConstantBufferAlignmentBytes;
@property (readonly) unsigned long long minTilePixels;
@property (readonly, getter=isMsaa32bSupported) BOOL msaa32bSupported;
@property (readonly, getter=isPlacementHeapSupported) BOOL placementHeapSupported;
@property (readonly, getter=isQuadDataSharingSupported) BOOL quadDataSharingSupported;
@property (readonly) BOOL requiresRaytracingEmulation;
@property BOOL shaderDebugInfoCaching;
@property (readonly) unsigned long long sharedMemorySize;
@property (readonly) unsigned long long singleFPConfig;
@property (readonly) unsigned long long sparseTexturesSupport;
@property (readonly) BOOL supportPriorityBand;
@property (readonly, nonatomic) BOOL supports2DLinearTexArraySPI;
@property (readonly, nonatomic) BOOL supports32BitFloatFiltering;
@property (readonly, nonatomic) BOOL supports32BitMSAA;
@property (readonly, nonatomic) BOOL supports32bpcMSAATextures;
@property (readonly, nonatomic) BOOL supports3DASTCTextures;
@property (readonly, nonatomic) BOOL supports3DBCTextures;
@property (readonly, nonatomic) BOOL supportsASTCHDRTextureCompression;
@property (readonly, nonatomic) BOOL supportsASTCTextureCompression;
@property (readonly, nonatomic) BOOL supportsAlphaYUVFormats;
@property (readonly, nonatomic) BOOL supportsAnisoSampleFix;
@property (readonly, nonatomic) BOOL supportsArgumentBuffersTier2;
@property (readonly, nonatomic) BOOL supportsArrayOfSamplers;
@property (readonly, nonatomic) BOOL supportsArrayOfTextures;
@property (readonly, nonatomic) BOOL supportsBCTextureCompression;
@property (readonly, nonatomic) BOOL supportsBaseVertexInstanceDrawing;
@property (readonly, nonatomic) BOOL supportsBinaryArchives;
@property (readonly, nonatomic) BOOL supportsBinaryFunctionPointers;
@property (readonly, nonatomic) BOOL supportsBinaryLibraries;
@property (readonly, nonatomic) BOOL supportsBlackOrWhiteSamplerBorderColors;
@property (readonly, nonatomic) BOOL supportsBufferBoundsChecking;
@property (readonly, nonatomic) BOOL supportsBufferPrefetchStatistics;
@property (readonly, nonatomic) BOOL supportsBufferWithIOSurface;
@property (readonly, nonatomic) BOOL supportsBufferlessClientStorageTexture;
@property (readonly, nonatomic) BOOL supportsCMPIndirectCommandBuffers;
@property (readonly, nonatomic) BOOL supportsCombinedMSAAStoreAndResolveAction;
@property (readonly, nonatomic) BOOL supportsCompressedTextureViewSPI;
@property (readonly, nonatomic) BOOL supportsComputeCompressedTextureWrite;
@property (readonly, nonatomic) BOOL supportsComputeMemoryBarrier;
@property (readonly, nonatomic) BOOL supportsConcurrentComputeDispatch;
@property (readonly, nonatomic) BOOL supportsCountingOcclusionQuery;
@property (readonly, nonatomic) BOOL supportsCustomBorderColor;
@property (readonly, nonatomic) BOOL supportsDepthClipMode;
@property (readonly, nonatomic) BOOL supportsDepthClipModeClampExtended;
@property (readonly, nonatomic) BOOL supportsDevicePartitioning;
@property (readonly, nonatomic) BOOL supportsDynamicControlPointCount;
@property (readonly, nonatomic) BOOL supportsDynamicLibraries;
@property (readonly, nonatomic) BOOL supportsExtendedXR10Formats;
@property (readonly, nonatomic) BOOL supportsExtendedYUVFormats;
@property (readonly, nonatomic) BOOL supportsFP32TessFactors;
@property (readonly, nonatomic) BOOL supportsFastMathInfNaNPropagation;
@property (readonly, nonatomic) BOOL supportsFixedLinePointFillDepthGradient;
@property (readonly, nonatomic) BOOL supportsFloat16BCubicFiltering;
@property (readonly, nonatomic) BOOL supportsFloat16InfNanFiltering;
@property (readonly, nonatomic) BOOL supportsForceSeamsOnCubemaps;
@property (readonly, nonatomic) BOOL supportsForkJoin;
@property (readonly, nonatomic) BOOL supportsFragmentBufferWrites;
@property (readonly, nonatomic) BOOL supportsFragmentOnlyEncoders;
@property (readonly, nonatomic) BOOL supportsFunctionPointers;
@property (readonly, nonatomic) BOOL supportsGFXIndirectCommandBuffers;
@property (readonly, nonatomic) BOOL supportsGPUStatistics;
@property (readonly, nonatomic) BOOL supportsIABHashForTools;
@property (readonly, nonatomic) BOOL supportsImageBlockSampleCoverageControl;
@property (readonly, nonatomic) BOOL supportsImageBlocks;
@property (readonly, nonatomic) BOOL supportsIndirectDrawAndDispatch;
@property (readonly, nonatomic) BOOL supportsIndirectStageInRegion;
@property (readonly, nonatomic) BOOL supportsIndirectTessellation;
@property (readonly, nonatomic) BOOL supportsIndirectTextures;
@property (readonly, nonatomic) BOOL supportsIndirectWritableTextures;
@property (readonly, nonatomic) BOOL supportsInt64;
@property (readonly, nonatomic) BOOL supportsInterchangeTiled;
@property (readonly, nonatomic) BOOL supportsInvariantVertexPosition;
@property (readonly, nonatomic) BOOL supportsLargeFramebufferConfigs;
@property (readonly, nonatomic) BOOL supportsLayeredRendering;
@property (readonly, nonatomic) BOOL supportsLimitedYUVFormats;
@property (readonly, nonatomic) BOOL supportsLinearTexture2DArray;
@property (readonly, nonatomic) BOOL supportsLinearTextureFromSharedBuffer;
@property (readonly, nonatomic) BOOL supportsMSAADepthResolve;
@property (readonly, nonatomic) BOOL supportsMSAADepthResolveFilter;
@property (readonly, nonatomic) BOOL supportsMSAAStencilResolve;
@property (readonly, nonatomic) BOOL supportsMSAAStencilResolveFilter;
@property (readonly, nonatomic) BOOL supportsMemoryOrderAtomics;
@property (readonly, nonatomic) BOOL supportsMemorylessRenderTargets;
@property (readonly, nonatomic) BOOL supportsMipLevelsSmallerThanBlockSize;
@property (readonly, nonatomic) BOOL supportsMirrorClampToEdgeSamplerMode;
@property (readonly, nonatomic) BOOL supportsMutableTier1ArgumentBuffers;
@property (readonly, nonatomic) BOOL supportsNativeHardwareFP16;
@property (readonly, nonatomic) BOOL supportsNonPrivateDepthStencilTextures;
@property (readonly, nonatomic) BOOL supportsNonPrivateMSAATextures;
@property (readonly, nonatomic) BOOL supportsNonSquareTileShaders;
@property (readonly, nonatomic) BOOL supportsNonUniformThreadgroupSize;
@property (readonly, nonatomic) BOOL supportsNonZeroTextureWriteLOD;
@property (readonly, nonatomic) BOOL supportsNorm16BCubicFiltering;
@property (readonly, nonatomic) BOOL supportsOpenCLTextureWriteSwizzles;
@property (readonly, nonatomic) BOOL supportsPacked32TextureBufferWrites;
@property (readonly, nonatomic) BOOL supportsPipelineLibraries;
@property (readonly, nonatomic) BOOL supportsPlacementHeaps;
@property (readonly, nonatomic) BOOL supportsPostDepthCoverage;
@property (readonly, nonatomic) BOOL supportsPrimitiveRestartOverride;
@property (readonly, nonatomic) BOOL supportsProgrammableBlending;
@property (readonly, nonatomic) BOOL supportsProgrammableSamplePositions;
@property (readonly, nonatomic) BOOL supportsPublicXR10Formats;
@property (readonly, nonatomic) BOOL supportsPullModelInterpolation;
@property (readonly, nonatomic) BOOL supportsQuadGroup;
@property (readonly, nonatomic) BOOL supportsQuadReduction;
@property (readonly, nonatomic) BOOL supportsQuadShufflesAndBroadcast;
@property (readonly, nonatomic) BOOL supportsRGBA10A2Gamma;
@property (readonly, nonatomic) BOOL supportsRTZRounding;
@property (readonly, nonatomic) BOOL supportsRasterOrderGroups;
@property (readonly, nonatomic) BOOL supportsRasterOrderGroupsColorAttachment;
@property (readonly, nonatomic) BOOL supportsReadWriteBufferArguments;
@property (readonly, nonatomic) BOOL supportsReadWriteTextureArguments;
@property (readonly, nonatomic) BOOL supportsReadWriteTextureArgumentsTier2;
@property (readonly, nonatomic) BOOL supportsReadWriteTextureCubeArguments;
@property (readonly, nonatomic) BOOL supportsRelaxedTextureViewRequirements;
@property (readonly, nonatomic) BOOL supportsRenderMemoryBarrier;
@property (readonly, nonatomic) BOOL supportsRenderPassWithoutRenderTarget;
@property (readonly, nonatomic) BOOL supportsRenderTargetTextureRotation;
@property (readonly, nonatomic) BOOL supportsRenderTextureWrites;
@property (readonly, nonatomic) BOOL supportsRenderToLinearTextures;
@property (readonly, nonatomic) BOOL supportsSIMDGroup;
@property (readonly, nonatomic) BOOL supportsSIMDGroupMatrix;
@property (readonly, nonatomic) BOOL supportsSIMDReduction;
@property (readonly, nonatomic) BOOL supportsSIMDShufflesAndBroadcast;
@property (readonly, nonatomic) BOOL supportsSRGBwrites;
@property (readonly, nonatomic) BOOL supportsSamplerAddressModeClampToHalfBorder;
@property (readonly, nonatomic) BOOL supportsSamplerCompareFunction;
@property (readonly, nonatomic) BOOL supportsSeparateDepthStencil;
@property (readonly, nonatomic) BOOL supportsSeparateVisibilityAndShadingRate;
@property (readonly, nonatomic) BOOL supportsShaderBarycentricCoordinates;
@property (readonly, nonatomic) BOOL supportsShaderLODAverage;
@property (readonly, nonatomic) BOOL supportsShaderMinLODClamp;
@property (readonly, nonatomic) BOOL supportsSharedStorageHeapResources;
@property (readonly, nonatomic) BOOL supportsSharedStorageTextures;
@property (readonly, nonatomic) BOOL supportsSharedTextureHandles;
@property (readonly, nonatomic) BOOL supportsSparseHeaps;
@property (readonly, nonatomic) BOOL supportsSparseTextures;
@property (readonly, nonatomic) BOOL supportsStatefulDynamicLibraries;
@property (readonly, nonatomic) BOOL supportsStencilFeedback;
@property (readonly, nonatomic) BOOL supportsTessellation;
@property (readonly, nonatomic) BOOL supportsTexture2DMultisampleArray;
@property (readonly, nonatomic) BOOL supportsTextureCubeArray;
@property (readonly, nonatomic) BOOL supportsTextureOutOfBoundsReads;
@property (readonly, nonatomic) BOOL supportsTextureSwizzle;
@property (readonly, nonatomic) BOOL supportsTileShaders;
@property (readonly, nonatomic) BOOL supportsUnalignedVertexFetch;
@property (readonly, nonatomic) BOOL supportsVariableRateRasterization;
@property (readonly, nonatomic) BOOL supportsVertexAmplification;
@property (readonly, nonatomic) BOOL supportsViewportAndScissorArray;
@property (readonly, nonatomic) BOOL supportsWritableArrayOfTextures;
@property (readonly, nonatomic) BOOL supportsYCBCRFormats;
@property (readonly, nonatomic) BOOL supportsYCBCRFormats12;
@property (readonly, nonatomic) BOOL supportsYCBCRFormatsPQ;
@property (readonly, nonatomic) BOOL supportsYCBCRFormatsXR;
@property (readonly, nonatomic) BOOL supportsYCBCRPackedFormats12;
@property (readonly, nonatomic) BOOL supportsYCBCRPackedFormatsPQ;
@property (readonly, nonatomic) BOOL supportsYCBCRPackedFormatsXR;
@property (readonly) MTLTargetDeviceArchitecture *targetDeviceArchitecture;
@property (readonly) const struct MTLTargetDeviceArch *targetDeviceInfo;

+ (void)registerDevices;
- (id<MTLDevice>)_deviceWrapper;
- (void)_setDeviceWrapper:(id<MTLDeviceSPI>)arg1;
- (void)allowLibrariesFromOtherPlatforms;
- (void)compilerPropagatesThreadPriority:(BOOL)arg1;
- (BOOL)copyShaderCacheToPath:(NSString *)arg1;
- (BOOL)deviceOrFeatureProfileSupportsFeatureSet:(unsigned long long)arg1;
- (BOOL)deviceSupportsFeatureSet:(unsigned long long)arg1;
- (NSString *)familyName;
- (CDStruct_c0454aff)libraryCacheStats;
- (NSArray *)loadDynamicLibrariesForComputeDescriptor:(MTLComputePipelineDescriptor *)arg1 error:(id *)arg2;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (id<MTLArgumentEncoder>)newArgumentEncoderWithLayout:(_MTLIndirectArgumentBufferLayout *)arg1;
- (id<MTLBinaryArchive>)newBinaryArchiveWithDescriptor:(MTLBinaryArchiveDescriptor *)arg1 error:(id *)arg2;
- (id<MTLBinaryArchive>)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(NSURL *)arg2 error:(id *)arg3;
- (id<MTLBuffer>)newBufferWithIOSurface:(struct __IOSurface *)arg1;
- (id<MTLCommandQueue>)newCommandQueueWithDescriptor:(MTLCommandQueueDescriptor *)arg1;
- (id<MTLDynamicLibrary>)newDynamicLibrary:(id<MTLLibrary>)arg1 computeDescriptor:(MTLComputePipelineDescriptor *)arg2 error:(id *)arg3;
- (id<MTLDynamicLibrary>)newDynamicLibrary:(id<MTLLibrary>)arg1 error:(id *)arg2;
- (id<MTLDynamicLibrary>)newDynamicLibraryFromURL:(NSURL *)arg1 error:(id *)arg2;
- (id<MTLDynamicLibrary>)newDynamicLibraryWithURL:(NSURL *)arg1 error:(id *)arg2;
- (id<MTLDynamicLibrary>)newDynamicLibraryWithURL:(NSURL *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_MTLIndirectArgumentBufferLayout *)newIndirectArgumentBufferLayoutWithStructType:(MTLStructType *)arg1;
- (id<MTLBuffer>)newIndirectCommandBufferWithDescriptor:(MTLIndirectCommandBufferDescriptor *)arg1 maxCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id<MTLIndirectComputeCommandEncoder>)newIndirectComputeCommandEncoderWithBuffer:(id<MTLBuffer>)arg1;
- (id<MTLIndirectRenderCommandEncoder>)newIndirectRenderCommandEncoderWithBuffer:(id<MTLBuffer>)arg1;
- (id<MTLIntersectionFunctionTable>)newIntersectionFunctionTableWithDescriptor:(MTLIntersectionFunctionTableDescriptor *)arg1;
- (id<MTLRasterizationRateMap>)newRasterizationRateMapWithDescriptor:(MTLRasterizationRateMapDescriptor *)arg1;
- (id<MTLSharedEvent>)newSharedEventWithMachPort:(unsigned int)arg1;
- (id<MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;
- (id<MTLVisibleFunctionTable>)newVisibleFunctionTableWithDescriptor:(MTLVisibleFunctionTableDescriptor *)arg1;
- (CDStruct_c0454aff)pipelineCacheStats;
- (NSString *)productName;
- (NSString *)reportLeaks;
- (BOOL)setResourcesPurgeableState:(id *)arg1 newState:(unsigned long long)arg2 oldState:(unsigned long long *)arg3 count:(int)arg4;
- (BOOL)supportsRasterizationRateMapWithLayerCount:(unsigned long long)arg1;
- (BOOL)supportsSampleCount:(unsigned long long)arg1;
- (BOOL)supportsTextureWriteRoundingMode:(long long)arg1;
- (void)unloadShaderCaches;
- (BOOL)validateDynamicLibrary:(id<MTLLibrary>)arg1 state:(BOOL)arg2 error:(id *)arg3;
- (BOOL)validateDynamicLibraryURL:(NSURL *)arg1 error:(id *)arg2;
- (NSString *)vendorName;

@optional
- (void)compileVisibleFunction:(id<MTLFunction>)arg1 withDescriptor:(MTLFunctionDescriptor *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)compileVisibleFunction:(id<MTLFunction>)arg1 withDescriptor:(MTLFunctionDescriptor *)arg2 error:(id *)arg3;
- (void)deserializeCompileTimeStats:(NSObject<OS_dispatch_data> *)arg1 addToDictionary:(NSMutableDictionary *)arg2;
- (NSData *)endCollectingPipelineDescriptors;
- (void *)getShaderCacheKeys;
- (NSObject<OS_dispatch_data> *)indirectArgumentBufferDecodingData;
- (BOOL)mapShaderSampleBufferWithBuffer:(CDStruct_32a7f38a *)arg1 capacity:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (id<MTLBuffer>)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4;
- (id<MTLBuffer>)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4 deallocator:(void (^)(void *, unsigned long long))arg5;
- (id<MTLBuffer>)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 gpuAddress:(unsigned long long)arg3;
- (MTLComputePipelineDescriptor *)newComputePipelineDescriptorWithSerializedData:(NSObject<OS_dispatch_data> *)arg1 deserializationContext:(id<MTLDeserializationContext>)arg2;
- (void)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 completionHandler:(void (^)(id<MTLComputePipelineState>, NSError *))arg2;
- (id<MTLComputePipelineState>)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 error:(id *)arg2;
- (id<MTLComputePipelineState>)newComputePipelineStateWithImageFilterFunctionsSPI:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id<MTLFunction>)newFunctionWithGLIR:(void *)arg1 functionType:(unsigned long long)arg2;
- (id<MTLFunction>)newFunctionWithGLIR:(void *)arg1 inputsDescription:(NSObject<OS_dispatch_data> *)arg2 functionType:(unsigned long long)arg3;
- (id<MTLIndirectArgumentEncoder>)newIndirectArgumentEncoderWithArguments:(NSArray *)arg1;
- (id<MTLIndirectArgumentEncoder>)newIndirectArgumentEncoderWithLayout:(_MTLIndirectArgumentBufferLayout *)arg1;
- (id<MTLLibrary>)newLibraryWithCIFilters:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id<MTLLibrary>)newLibraryWithCIFiltersForComputePipeline:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id<MTLLibrary>)newLibraryWithDAG:(NSString *)arg1 functions:(NSArray *)arg2 error:(id *)arg3;
- (id<MTLLibrary>)newLibraryWithImageFilterFunctionsSPI:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id<MTLPipelineLibrarySPI>)newPipelineLibraryWithFilePath:(NSString *)arg1 error:(id *)arg2;
- (MTLRenderPipelineDescriptor *)newRenderPipelineDescriptorWithSerializedData:(NSObject<OS_dispatch_data> *)arg1 deserializationContext:(id<MTLDeserializationContext>)arg2;
- (void)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 completionHandler:(void (^)(id<MTLRenderPipelineState>, NSError *))arg2;
- (id<MTLRenderPipelineState>)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 error:(id *)arg2;
- (id<MTLResourceGroupSPI>)newResourceGroupFromResources:(const id *)arg1 count:(unsigned long long)arg2;
- (id<MTLTextureLayout>)newTextureLayoutWithDescriptor:(MTLTextureDescriptor *)arg1 isHeapOrBufferBacked:(BOOL)arg2;
- (id<MTLTexture>)newTextureWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 descriptor:(MTLTextureDescriptor *)arg3 deallocator:(void (^)(void *, unsigned long long))arg4;
- (BOOL)reserveGPUAddressRange:(struct _NSRange)arg1;
- (void)reserveResourceIndicesForResourceType:(unsigned long long)arg1 indices:(unsigned long long *)arg2 indexCount:(unsigned long long)arg3;
- (unsigned long long)resourcePatchingTypeForResourceType:(unsigned long long)arg1;
- (NSObject<OS_dispatch_data> *)serializeComputePipelineDescriptor:(MTLComputePipelineDescriptor *)arg1;
- (NSObject<OS_dispatch_data> *)serializeRenderPipelineDescriptor:(MTLRenderPipelineDescriptor *)arg1;
- (NSObject<OS_dispatch_data> *)serializeStructType:(MTLStructType *)arg1;
- (NSObject<OS_dispatch_data> *)serializeStructType:(MTLStructType *)arg1 version:(unsigned int)arg2;
- (void)setIndirectArgumentBufferDecodingData:(NSObject<OS_dispatch_data> *)arg1;
- (void)setupMPSFunctionTable:(struct MPSFunctionTable *)arg1;
- (void)startCollectingPipelineDescriptors;
- (void)startCollectingPipelineDescriptorsUsingPrefixForNames:(NSString *)arg1;
- (BOOL)supportsPrimitiveType:(unsigned long long)arg1;
- (CDStruct_da2e99ad)tileSizeWithSparsePageSize:(unsigned long long)arg1 textureType:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 sampleCount:(unsigned long long)arg4;
- (void)unmapShaderSampleBuffer;
@end

