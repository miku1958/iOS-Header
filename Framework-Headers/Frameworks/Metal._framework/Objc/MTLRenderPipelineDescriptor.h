//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLPipelineBufferDescriptorArray, MTLRenderPipelineColorAttachmentDescriptorArray, MTLVertexDescriptor, NSString;
@protocol MTLFunction;

@interface MTLRenderPipelineDescriptor : NSObject <NSCopying>
{
    unsigned long long _inputPrimitiveTopology;
}

@property (nonatomic, getter=isAlphaToCoverageEnabled) BOOL alphaToCoverageEnabled; // @dynamic alphaToCoverageEnabled;
@property (nonatomic, getter=isAlphaToOneEnabled) BOOL alphaToOneEnabled; // @dynamic alphaToOneEnabled;
@property (readonly) MTLRenderPipelineColorAttachmentDescriptorArray *colorAttachments; // @dynamic colorAttachments;
@property (nonatomic) unsigned long long depthAttachmentPixelFormat; // @dynamic depthAttachmentPixelFormat;
@property (readonly) MTLPipelineBufferDescriptorArray *fragmentBuffers; // @dynamic fragmentBuffers;
@property (strong, nonatomic) id<MTLFunction> fragmentFunction; // @dynamic fragmentFunction;
@property (nonatomic) unsigned long long inputPrimitiveTopology; // @synthesize inputPrimitiveTopology=_inputPrimitiveTopology;
@property (copy, nonatomic) NSString *label; // @dynamic label;
@property (nonatomic) unsigned long long maxTessellationFactor; // @dynamic maxTessellationFactor;
@property (nonatomic) unsigned long long rasterSampleCount; // @dynamic rasterSampleCount;
@property (nonatomic, getter=isRasterizationEnabled) BOOL rasterizationEnabled; // @dynamic rasterizationEnabled;
@property (nonatomic) unsigned long long sampleCount; // @dynamic sampleCount;
@property (nonatomic) unsigned long long stencilAttachmentPixelFormat; // @dynamic stencilAttachmentPixelFormat;
@property (nonatomic) unsigned long long tessellationControlPointIndexType; // @dynamic tessellationControlPointIndexType;
@property (nonatomic) unsigned long long tessellationFactorFormat; // @dynamic tessellationFactorFormat;
@property (nonatomic, getter=isTessellationFactorScaleEnabled) BOOL tessellationFactorScaleEnabled; // @dynamic tessellationFactorScaleEnabled;
@property (nonatomic) unsigned long long tessellationFactorStepFunction; // @dynamic tessellationFactorStepFunction;
@property (nonatomic) unsigned long long tessellationOutputWindingOrder; // @dynamic tessellationOutputWindingOrder;
@property (nonatomic) unsigned long long tessellationPartitionMode; // @dynamic tessellationPartitionMode;
@property (readonly) MTLPipelineBufferDescriptorArray *vertexBuffers; // @dynamic vertexBuffers;
@property (copy, nonatomic) MTLVertexDescriptor *vertexDescriptor; // @dynamic vertexDescriptor;
@property (strong, nonatomic) id<MTLFunction> vertexFunction; // @dynamic vertexFunction;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;

@end

