//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLSamplerDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLSamplerDescriptorInternal : MTLSamplerDescriptor
{
    struct MTLSamplerDescriptorPrivate *_private;
}

- (unsigned long long)compareFunction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (const struct MTLSamplerDescriptorPrivate *)descriptorPrivate;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)label;
- (BOOL)lodAverage;
- (float)lodBias;
- (float)lodMaxClamp;
- (float)lodMinClamp;
- (unsigned long long)magFilter;
- (unsigned long long)maxAnisotropy;
- (unsigned long long)minFilter;
- (unsigned long long)mipFilter;
- (BOOL)normalizedCoordinates;
- (unsigned long long)rAddressMode;
- (unsigned long long)sAddressMode;
- (void)setCompareFunction:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setLodAverage:(BOOL)arg1;
- (void)setLodBias:(float)arg1;
- (void)setLodMaxClamp:(float)arg1;
- (void)setLodMinClamp:(float)arg1;
- (void)setMagFilter:(unsigned long long)arg1;
- (void)setMaxAnisotropy:(unsigned long long)arg1;
- (void)setMinFilter:(unsigned long long)arg1;
- (void)setMipFilter:(unsigned long long)arg1;
- (void)setNormalizedCoordinates:(BOOL)arg1;
- (void)setRAddressMode:(unsigned long long)arg1;
- (void)setSAddressMode:(unsigned long long)arg1;
- (void)setTAddressMode:(unsigned long long)arg1;
- (unsigned long long)tAddressMode;

@end

