//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLPipelineBufferDescriptorArray.h>

@class MTLPipelineBufferDescriptorInternal;

__attribute__((visibility("hidden")))
@interface MTLPipelineBufferDescriptorArrayInternal : MTLPipelineBufferDescriptorArray
{
    MTLPipelineBufferDescriptorInternal *_descriptors[31];
}

- (id)_descriptorAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;

@end
