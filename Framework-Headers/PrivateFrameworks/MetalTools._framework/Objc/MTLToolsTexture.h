//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsResource.h>

#import <MetalTools/MTLTextureImplementation-Protocol.h>

@class NSString;
@protocol MTLBuffer, MTLDevice, MTLHeap, MTLResource, MTLTexture;

@interface MTLToolsTexture : MTLToolsResource <MTLTextureImplementation>
{
    id<MTLTexture> _parentTexture;
    id<MTLBuffer> _buffer;
}

@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long allocationID;
@property (readonly) BOOL allowGPUOptimizedContents;
@property (readonly) unsigned long long arrayLength;
@property (readonly) id<MTLBuffer> buffer; // @synthesize buffer=_buffer;
@property (readonly) unsigned long long bufferBytesPerRow;
@property (readonly) unsigned long long bufferOffset;
@property (readonly) long long compressionFeedback;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long depth;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long firstMipmapInTail;
@property (readonly, getter=isFramebufferOnly) BOOL framebufferOnly;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long height;
@property (readonly) struct __IOSurface *iosurface;
@property (readonly) unsigned long long iosurfacePlane;
@property (readonly) BOOL isCompressed;
@property (readonly) BOOL isDrawable;
@property (readonly) BOOL isSparse;
@property (copy) NSString *label;
@property (readonly) unsigned long long mipmapLevelCount;
@property (readonly) unsigned long long numFaces;
@property (readonly) unsigned long long parentRelativeLevel;
@property (readonly) unsigned long long parentRelativeSlice;
@property (readonly) id<MTLTexture> parentTexture; // @synthesize parentTexture=_parentTexture;
@property (readonly) unsigned long long pixelFormat;
@property (readonly) unsigned long long protectionOptions;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long resourceOptions;
@property int responsibleProcess;
@property (readonly) id<MTLResource> rootResource;
@property (readonly) unsigned long long rotation;
@property (readonly) unsigned long long sampleCount;
@property (readonly) unsigned long long sparseSurfaceDefaultValue;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CDStruct_a06f635e swizzle;
@property (readonly) unsigned int swizzleKey;
@property (readonly) unsigned long long tailSizeInBytes;
@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly) unsigned long long usage;
@property (readonly) unsigned long long width;

- (BOOL)canGenerateMipmapLevels;
- (void)copyFromPixels:(const void *)arg1 rowBytes:(unsigned long long)arg2 imageBytes:(unsigned long long)arg3 toSlice:(unsigned long long)arg4 mipmapLevel:(unsigned long long)arg5 origin:(CDStruct_14f26992)arg6 size:(CDStruct_14f26992)arg7;
- (void)copyFromSlice:(unsigned long long)arg1 mipmapLevel:(unsigned long long)arg2 origin:(CDStruct_14f26992)arg3 size:(CDStruct_14f26992)arg4 toPixels:(void *)arg5 rowBytes:(unsigned long long)arg6 imageBytes:(unsigned long long)arg7;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)generateMipmapLevel:(unsigned long long)arg1 slice:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(CDStruct_1e3be3a8)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(CDStruct_1e3be3a8)arg3 mipmapLevel:(unsigned long long)arg4;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 buffer:(id)arg3;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 parentTexture:(id)arg3;
- (id)newCompressedTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4 resourceIndex:(unsigned long long)arg5;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4 swizzle:(CDStruct_a06f635e)arg5;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4 swizzle:(CDStruct_a06f635e)arg5 resourceIndex:(unsigned long long)arg6;
- (id)realRootResource;
- (void)replaceRegion:(CDStruct_1e3be3a8)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void *)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (void)replaceRegion:(CDStruct_1e3be3a8)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void *)arg3 bytesPerRow:(unsigned long long)arg4;
- (unsigned long long)tailSize;

@end

