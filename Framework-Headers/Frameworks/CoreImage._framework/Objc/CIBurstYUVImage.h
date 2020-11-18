//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIBurstYUVImage : NSObject
{
    char *Ybuffer;
    char *Cbuffer;
    int width;
    int height;
    int bytesPerRow;
    struct __CFData *dataPtr;
    struct __CVBuffer *pixelBuffer;
}

@property char *Cbuffer; // @synthesize Cbuffer;
@property char *Ybuffer; // @synthesize Ybuffer;
@property int bytesPerRow; // @synthesize bytesPerRow;
@property int height; // @synthesize height;
@property int width; // @synthesize width;

- (void)convertRGBAToYUV420:(char *)arg1 rgbaBytesPerRow:(int)arg2;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 maxDimension:(int)arg2;
- (struct __CVBuffer *)pixelBuffer;

@end

