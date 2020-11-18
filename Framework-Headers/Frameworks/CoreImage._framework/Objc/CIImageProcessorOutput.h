//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIImageProcessorInOut.h>

#import <CoreImage/CIImageProcessorOutput-Protocol.h>

@protocol MTLCommandBuffer, MTLTexture;

__attribute__((visibility("hidden")))
@interface CIImageProcessorOutput : CIImageProcessorInOut <CIImageProcessorOutput>
{
    id<MTLCommandBuffer> _cmdBuffer;
}

@property (readonly, nonatomic) void *baseAddress;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) id<MTLCommandBuffer> metalCommandBuffer;
@property (readonly, nonatomic) id<MTLTexture> metalTexture;
@property (readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property (readonly, nonatomic) struct CGRect region;

- (void)dealloc;
- (id)initWithSurface:(struct __IOSurface *)arg1 texture:(struct Texture)arg2 allowSRGB:(BOOL)arg3 bounds:(struct CGRect)arg4 context:(struct Context *)arg5;
- (BOOL)metalCommandBufferRequested;

@end
