//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLAttributeDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLAttributeDescriptorInternal : MTLAttributeDescriptor
{
    unsigned long long _vertexFormat;
    unsigned long long _offset;
    unsigned long long _bufferIndex;
}

- (unsigned long long)bufferIndex;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)format;
- (unsigned long long)offset;
- (void)setBufferIndex:(unsigned long long)arg1;
- (void)setFormat:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;

@end

