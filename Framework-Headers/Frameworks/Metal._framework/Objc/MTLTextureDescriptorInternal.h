//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLTextureDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLTextureDescriptorInternal : MTLTextureDescriptor
{
    struct MTLTextureDescriptorPrivate _private;
}

- (BOOL)allowGPUOptimizedContents;
- (unsigned long long)arrayLength;
- (unsigned long long)compressionMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)cpuCacheMode;
- (unsigned long long)depth;
- (id)description;
- (const struct MTLTextureDescriptorPrivate *)descriptorPrivate;
- (BOOL)forceResourceIndex;
- (id)formattedDescription:(unsigned long long)arg1;
- (BOOL)framebufferOnly;
- (unsigned long long)hash;
- (unsigned long long)hazardTrackingMode;
- (unsigned long long)height;
- (id)init;
- (BOOL)isDrawable;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)mipmapLevelCount;
- (unsigned long long)pixelFormat;
- (unsigned long long)protectionOptions;
- (unsigned long long)resourceIndex;
- (unsigned long long)resourceOptions;
- (unsigned long long)rotation;
- (unsigned long long)sampleCount;
- (void)setAllowGPUOptimizedContents:(BOOL)arg1;
- (void)setArrayLength:(unsigned long long)arg1;
- (void)setCompressionMode:(unsigned long long)arg1;
- (void)setCpuCacheMode:(unsigned long long)arg1;
- (void)setDepth:(unsigned long long)arg1;
- (void)setForceResourceIndex:(BOOL)arg1;
- (void)setFramebufferOnly:(BOOL)arg1;
- (void)setHazardTrackingMode:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setIsDrawable:(BOOL)arg1;
- (void)setMipmapLevelCount:(unsigned long long)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setProtectionOptions:(unsigned long long)arg1;
- (void)setResourceIndex:(unsigned long long)arg1;
- (void)setResourceOptions:(unsigned long long)arg1;
- (void)setRotation:(unsigned long long)arg1;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setSparseSurfaceDefaultValue:(unsigned long long)arg1;
- (void)setStorageMode:(unsigned long long)arg1;
- (void)setSwizzle:(CDStruct_a06f635e)arg1;
- (void)setSwizzleKey:(unsigned int)arg1;
- (void)setTextureType:(unsigned long long)arg1;
- (void)setTextureUsage:(unsigned long long)arg1;
- (void)setUsage:(unsigned long long)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (void)setWriteSwizzleEnabled:(BOOL)arg1;
- (unsigned long long)sparseSurfaceDefaultValue;
- (unsigned long long)storageMode;
- (CDStruct_a06f635e)swizzle;
- (unsigned int)swizzleKey;
- (unsigned long long)textureType;
- (unsigned long long)textureUsage;
- (unsigned long long)usage;
- (BOOL)validateWithDevice:(id)arg1;
- (unsigned long long)width;
- (BOOL)writeSwizzleEnabled;

@end

