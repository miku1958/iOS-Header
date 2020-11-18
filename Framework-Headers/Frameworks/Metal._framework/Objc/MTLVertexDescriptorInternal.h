//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLVertexDescriptor.h>

@class MTLVertexAttributeDescriptorArrayInternal, MTLVertexBufferLayoutDescriptorArrayInternal;

__attribute__((visibility("hidden")))
@interface MTLVertexDescriptorInternal : MTLVertexDescriptor
{
    MTLVertexBufferLayoutDescriptorArrayInternal *_vertexBufferArray;
    MTLVertexAttributeDescriptorArrayInternal *_attributeArray;
}

+ (id)vertexDescriptor;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)layouts;
- (id)newSerializedDescriptor;
- (void)reset;
- (BOOL)validateWithVertexFunction:(id)arg1 error:(id *)arg2;

@end

