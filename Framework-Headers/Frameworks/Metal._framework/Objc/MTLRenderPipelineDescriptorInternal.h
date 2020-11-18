//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLRenderPipelineDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLRenderPipelineDescriptorInternal : MTLRenderPipelineDescriptor
{
    struct MTLRenderPipelineDescriptorPrivate _private;
}

@property (nonatomic) unsigned long long postVertexDumpBufferIndex;

- (const struct MTLRenderPipelineDescriptorPrivate *)_descriptorPrivate;
- (unsigned long long)alphaTestFunction;
- (void)attachVertexDescriptor:(id)arg1;
- (unsigned char)clipDistanceEnableMask;
- (id)colorAttachments;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)depthAttachmentPixelFormat;
- (id)description;
- (id)fastBlendDescriptorAtIndex:(unsigned long long)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)fragmentBuffers;
- (unsigned int)fragmentDepthCompareClampMask;
- (id)fragmentFunction;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isAlphaTestEnabled;
- (BOOL)isAlphaToCoverageEnabled;
- (BOOL)isAlphaToOneEnabled;
- (BOOL)isDepthStencilWriteDisabled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLogicOperationEnabled;
- (BOOL)isPointSmoothEnabled;
- (BOOL)isRasterizationEnabled;
- (BOOL)isTessellationFactorScaleEnabled;
- (BOOL)isVertexEnabled;
- (id)label;
- (unsigned long long)logicOperation;
- (unsigned long long)maxTessellationFactor;
- (id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)openGLModeEnabled;
- (id)pipelineLibrary;
- (unsigned long long)rasterSampleCount;
- (void)reset;
- (unsigned long long)sampleCount;
- (float)sampleCoverage;
- (BOOL)sampleCoverageInvert;
- (unsigned long long)sampleMask;
- (id)serializeFragmentData;
- (void)setAlphaTestEnabled:(BOOL)arg1;
- (void)setAlphaTestFunction:(unsigned long long)arg1;
- (void)setAlphaToCoverageEnabled:(BOOL)arg1;
- (void)setAlphaToOneEnabled:(BOOL)arg1;
- (void)setClipDistanceEnableMask:(unsigned char)arg1;
- (void)setDepthAttachmentPixelFormat:(unsigned long long)arg1;
- (void)setDepthStencilWriteDisabled:(BOOL)arg1;
- (void)setFragmentDepthCompareClampMask:(unsigned int)arg1;
- (void)setFragmentFunction:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLogicOperation:(unsigned long long)arg1;
- (void)setLogicOperationEnabled:(BOOL)arg1;
- (void)setMaxTessellationFactor:(unsigned long long)arg1;
- (void)setOpenGLModeEnabled:(BOOL)arg1;
- (void)setPipelineLibrary:(id)arg1;
- (void)setPointSmoothEnabled:(BOOL)arg1;
- (void)setRasterSampleCount:(unsigned long long)arg1;
- (void)setRasterizationEnabled:(BOOL)arg1;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setSampleCoverage:(float)arg1;
- (void)setSampleCoverageInvert:(BOOL)arg1;
- (void)setSampleMask:(unsigned long long)arg1;
- (void)setStencilAttachmentPixelFormat:(unsigned long long)arg1;
- (void)setTessellationControlPointIndexType:(unsigned long long)arg1;
- (void)setTessellationFactorFormat:(unsigned long long)arg1;
- (void)setTessellationFactorScaleEnabled:(BOOL)arg1;
- (void)setTessellationFactorStepFunction:(unsigned long long)arg1;
- (void)setTessellationOutputWindingOrder:(unsigned long long)arg1;
- (void)setTessellationPartitionMode:(unsigned long long)arg1;
- (void)setVertexDepthCompareClampMask:(unsigned int)arg1;
- (void)setVertexDescriptor:(id)arg1;
- (void)setVertexEnabled:(BOOL)arg1;
- (void)setVertexFunction:(id)arg1;
- (unsigned long long)stencilAttachmentPixelFormat;
- (unsigned long long)tessellationControlPointIndexType;
- (unsigned long long)tessellationFactorFormat;
- (unsigned long long)tessellationFactorStepFunction;
- (unsigned long long)tessellationOutputWindingOrder;
- (unsigned long long)tessellationPartitionMode;
- (void)validateWithDevice:(id)arg1;
- (id)vertexBuffers;
- (unsigned int)vertexDepthCompareClampMask;
- (id)vertexDescriptor;
- (id)vertexFunction;

@end
