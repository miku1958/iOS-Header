//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLRenderPassStencilAttachmentDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLRenderPassStencilAttachmentDescriptorInternal : MTLRenderPassStencilAttachmentDescriptor
{
    struct MTLRenderPassAttachmentDescriptorPrivate _private;
}

+ (id)attachmentDescriptor;
- (const struct MTLRenderPassAttachmentDescriptorPrivate *)_descriptorPrivate;
- (unsigned int)clearStencil;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)depthPlane;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)level;
- (unsigned long long)loadAction;
- (unsigned long long)resolveDepthPlane;
- (unsigned long long)resolveLevel;
- (unsigned long long)resolveSlice;
- (id)resolveTexture;
- (void)setClearStencil:(unsigned int)arg1;
- (void)setDepthPlane:(unsigned long long)arg1;
- (void)setLevel:(unsigned long long)arg1;
- (void)setLoadAction:(unsigned long long)arg1;
- (void)setResolveDepthPlane:(unsigned long long)arg1;
- (void)setResolveLevel:(unsigned long long)arg1;
- (void)setResolveSlice:(unsigned long long)arg1;
- (void)setResolveTexture:(id)arg1;
- (void)setSlice:(unsigned long long)arg1;
- (void)setStoreAction:(unsigned long long)arg1;
- (void)setTexture:(id)arg1;
- (unsigned long long)slice;
- (unsigned long long)storeAction;
- (id)texture;

@end

