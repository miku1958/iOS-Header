//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLRenderPipelineColorAttachmentDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLRenderPipelineColorAttachmentDescriptorInternal : MTLRenderPipelineColorAttachmentDescriptor
{
    struct MTLRenderPipelineAttachmentDescriptorPrivate _private;
}

- (const struct MTLRenderPipelineAttachmentDescriptorPrivate *)_descriptorPrivate;
- (unsigned long long)alphaBlendOperation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)destinationAlphaBlendFactor;
- (unsigned long long)destinationRGBBlendFactor;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isBlendingEnabled;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)pixelFormat;
- (unsigned long long)rgbBlendOperation;
- (void)setAlphaBlendOperation:(unsigned long long)arg1;
- (void)setBlendingEnabled:(BOOL)arg1;
- (void)setDestinationAlphaBlendFactor:(unsigned long long)arg1;
- (void)setDestinationRGBBlendFactor:(unsigned long long)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setRgbBlendOperation:(unsigned long long)arg1;
- (void)setSourceAlphaBlendFactor:(unsigned long long)arg1;
- (void)setSourceRGBBlendFactor:(unsigned long long)arg1;
- (void)setWriteMask:(unsigned long long)arg1;
- (unsigned long long)sourceAlphaBlendFactor;
- (unsigned long long)sourceRGBBlendFactor;
- (unsigned long long)writeMask;

@end

