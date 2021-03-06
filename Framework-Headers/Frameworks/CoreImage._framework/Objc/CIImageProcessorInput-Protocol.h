//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol MTLTexture;

@protocol CIImageProcessorInput

@property (readonly, nonatomic) const void *baseAddress;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) id<MTLTexture> metalTexture;
@property (readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property (readonly, nonatomic) struct CGRect region;
@property (readonly, nonatomic) struct __IOSurface *surface;

@end

