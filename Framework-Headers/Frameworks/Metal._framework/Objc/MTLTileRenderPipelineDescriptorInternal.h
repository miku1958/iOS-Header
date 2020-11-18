//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLTileRenderPipelineDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor
{
    struct MTLTileRenderPipelineDescriptorPrivate _private;
}

- (const struct MTLTileRenderPipelineDescriptorPrivate *)_descriptorPrivate;
- (id)colorAttachments;
- (unsigned long long)colorSampleCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)label;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (unsigned long long)rasterSampleCount;
- (void)reset;
- (unsigned long long)sampleCount;
- (void)setColorSampleCount:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;
- (void)setRasterSampleCount:(unsigned long long)arg1;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setThreadgroupSizeMatchesTileSize:(BOOL)arg1;
- (void)setTileFunction:(id)arg1;
- (BOOL)threadgroupSizeMatchesTileSize;
- (id)tileBuffers;
- (id)tileFunction;
- (void)validateWithDevice:(id)arg1;

@end

