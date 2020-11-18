//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLComputePipelineDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor
{
    struct MTLComputePipelineDescriptorPrivate *_private;
}

- (const struct MTLComputePipelineDescriptorPrivate *)_descriptorPrivate;
- (id)computeFunction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)label;
- (id)newSerializedComputeData;
- (void)reset;
- (void)setComputeFunction:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setStageInputDescriptor:(id)arg1;
- (void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)arg1;
- (id)stageInputDescriptor;
- (BOOL)threadGroupSizeIsMultipleOfThreadExecutionWidth;
- (void)validateWithDevice:(id)arg1;

@end

