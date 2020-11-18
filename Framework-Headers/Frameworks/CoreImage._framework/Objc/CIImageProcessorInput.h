//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIImageProcessorInOut.h>

#import <CoreImage/CIImageProcessorInput-Protocol.h>

@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface CIImageProcessorInput : CIImageProcessorInOut <CIImageProcessorInput>
{
    BOOL _forCPU;
}

@property (readonly, nonatomic) const void *baseAddress;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) id<MTLTexture> metalTexture;
@property (readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property (readonly, nonatomic) struct CGRect region;

- (void)dealloc;
- (id)initWithSurface:(struct __IOSurface *)arg1 texture:(struct Texture)arg2 bounds:(struct CGRect)arg3 context:(struct Context *)arg4 forCPU:(BOOL)arg5;

@end
