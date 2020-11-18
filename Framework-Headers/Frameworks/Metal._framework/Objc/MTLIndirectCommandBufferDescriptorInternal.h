//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLIndirectCommandBufferDescriptor.h>

@interface MTLIndirectCommandBufferDescriptorInternal : MTLIndirectCommandBufferDescriptor
{
    unsigned long long _commandTypes;
    BOOL _inheritPipelineState;
    BOOL _inheritBuffers;
    unsigned long long _maxVertexBufferBindCount;
    unsigned long long _maxFragmentBufferBindCount;
    unsigned long long _maxKernelBufferBindCount;
}

- (unsigned long long)commandTypes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)inheritBuffers;
- (id)init;
- (unsigned long long)maxFragmentBufferBindCount;
- (unsigned long long)maxVertexBufferBindCount;
- (void)setCommandTypes:(unsigned long long)arg1;
- (void)setInheritBuffers:(BOOL)arg1;
- (void)setMaxFragmentBufferBindCount:(unsigned long long)arg1;
- (void)setMaxVertexBufferBindCount:(unsigned long long)arg1;

@end

