//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalKit/MTKTextureLoaderData.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MTKTextureLoaderPVR3 : MTKTextureLoaderData
{
    int _pvrCompressedFormat;
    struct MTLPixelFormatInfo _pixelFormatInfo;
    unsigned int _metaDataSize;
    NSData *_imageData;
}

+ (BOOL)isPVR3File:(id)arg1;
- (void)dealloc;
- (void)determineBlockSize:(unsigned long long *)arg1 blocksWide:(unsigned long long *)arg2 blocksHigh:(unsigned long long *)arg3 bytesPerBlock:(unsigned long long *)arg4 fromFormat:(unsigned int)arg5 width:(unsigned long long)arg6 andHeight:(unsigned long long)arg7;
- (unsigned long long)determineFormat:(unsigned long long)arg1 colorSpace:(unsigned int)arg2 channelType:(unsigned int)arg3 options:(id)arg4;
- (id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long *)arg5 bytesPerImage:(unsigned long long *)arg6;
- (id)initWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)parseMetadataWithError:(id *)arg1;

@end

