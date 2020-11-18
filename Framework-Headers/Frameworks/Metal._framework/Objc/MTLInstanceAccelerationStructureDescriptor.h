//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLAccelerationStructureDescriptor.h>

@class NSArray;
@protocol MTLBuffer;

@interface MTLInstanceAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor
{
    id<MTLBuffer> _instanceDescriptorBuffer;
    unsigned long long _instanceDescriptorBufferOffset;
    unsigned long long _instanceDescriptorStride;
    unsigned long long _instanceCount;
    NSArray *_instancedAccelerationStructures;
}

@property (nonatomic) unsigned long long instanceCount; // @synthesize instanceCount=_instanceCount;
@property (strong, nonatomic) id<MTLBuffer> instanceDescriptorBuffer; // @synthesize instanceDescriptorBuffer=_instanceDescriptorBuffer;
@property (nonatomic) unsigned long long instanceDescriptorBufferOffset; // @synthesize instanceDescriptorBufferOffset=_instanceDescriptorBufferOffset;
@property (nonatomic) unsigned long long instanceDescriptorStride; // @synthesize instanceDescriptorStride=_instanceDescriptorStride;
@property (strong, nonatomic) NSArray *instancedAccelerationStructures; // @synthesize instancedAccelerationStructures=_instancedAccelerationStructures;

+ (id)descriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end
