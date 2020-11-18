//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLResource-Protocol.h>

@protocol MTLBuffer, MTLResource, MTLTexture;

@protocol MTLTexture <MTLResource>

@property (readonly) unsigned long long arrayLength;
@property (readonly) id<MTLBuffer> buffer;
@property (readonly) unsigned long long bufferBytesPerRow;
@property (readonly) unsigned long long bufferOffset;
@property (readonly) unsigned long long depth;
@property (readonly, getter=isFramebufferOnly) BOOL framebufferOnly;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long mipmapLevelCount;
@property (readonly) unsigned long long parentRelativeLevel;
@property (readonly) unsigned long long parentRelativeSlice;
@property (readonly) id<MTLTexture> parentTexture;
@property (readonly) unsigned long long pixelFormat;
@property (readonly) id<MTLResource> rootResource;
@property (readonly) unsigned long long sampleCount;
@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long usage;
@property (readonly) unsigned long long width;

- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(CDStruct_4c83c94d)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(CDStruct_4c83c94d)arg3 mipmapLevel:(unsigned long long)arg4;
- (id<MTLTexture>)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (id<MTLTexture>)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4;
- (void)replaceRegion:(CDStruct_4c83c94d)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void *)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (void)replaceRegion:(CDStruct_4c83c94d)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void *)arg3 bytesPerRow:(unsigned long long)arg4;
@end
