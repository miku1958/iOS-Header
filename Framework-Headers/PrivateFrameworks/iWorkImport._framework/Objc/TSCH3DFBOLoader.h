//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DResourceLoader.h>

@protocol TSCH3DRenderBufferAllocator;

__attribute__((visibility("hidden")))
@interface TSCH3DFBOLoader : TSCH3DResourceLoader
{
    tvec2_3b141483 mSize;
    struct FramebufferAttributes mFramebufferAttributes;
    id<TSCH3DRenderBufferAllocator> mColorAllocator;
    id<TSCH3DRenderBufferAllocator> mDepthAllocator;
}

@property (readonly, nonatomic) id<TSCH3DRenderBufferAllocator> colorAllocator; // @synthesize colorAllocator=mColorAllocator;
@property (readonly, nonatomic) id<TSCH3DRenderBufferAllocator> depthAllocator; // @synthesize depthAllocator=mDepthAllocator;
@property (readonly, nonatomic) struct FramebufferAttributes framebufferAttributes; // @synthesize framebufferAttributes=mFramebufferAttributes;
@property (readonly, nonatomic) tvec2_3b141483 size; // @synthesize size=mSize;

+ (unsigned long long)estimatedMemoryInBytesForSize:(tvec2_3b141483)arg1 samples:(unsigned long long)arg2 hasColorbuffer:(BOOL)arg3 hasDepthbuffer:(BOOL)arg4;
+ (id)loaderWithFramebufferAttributes:(const struct FramebufferAttributes *)arg1 size:(const tvec2_3b141483 *)arg2 colorAllocator:(id)arg3 depthAllocator:(id)arg4;
- (id).cxx_construct;
- (void)bindHandle:(id)arg1 config:(void *)arg2;
- (void)deactivateHandle:(id)arg1 insideContext:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)generateHandleWithConfig:(void *)arg1;
- (unsigned long long)hash;
- (id)initWithFramebufferAttributes:(const struct FramebufferAttributes *)arg1 size:(const tvec2_3b141483 *)arg2 colorAllocator:(id)arg3 depthAllocator:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (struct SessionLoadResourceResult)loadResource:(id)arg1 insideSession:(id)arg2;
- (unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void *)arg4;

@end
