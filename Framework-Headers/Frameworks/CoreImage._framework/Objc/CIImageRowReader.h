//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreImage/ImageRowReading-Protocol.h>

__attribute__((visibility("hidden")))
@interface CIImageRowReader : NSObject <ImageRowReading>
{
    unsigned long long height;
    unsigned long long width;
    unsigned long long bpr;
    void *data;
    short red;
    short green;
    short blue;
    short alpha;
    struct CGColorSpace *cs;
}

+ (id)forImage:(id)arg1 downscaleToMax:(unsigned int)arg2;
+ (id)forImage:(id)arg1 downscaleToMax:(unsigned int)arg2 colorspace:(struct CGColorSpace *)arg3;
+ (id)forImage:(id)arg1 downscaleToMax:(unsigned int)arg2 colorspace:(struct CGColorSpace *)arg3 usingContext:(id)arg4;
+ (id)forImage:(id)arg1 usingContext:(id)arg2;
+ (id)forImage:(id)arg1 usingContext:(id)arg2 colorspace:(struct CGColorSpace *)arg3;
+ (id)fromImage:(struct CGImage *)arg1;
+ (id)fromImageFile:(id)arg1;
+ (id)withDictionary:(id)arg1;
- (void)_dumpImage:(id)arg1 colorspace:(struct CGColorSpace *)arg2;
- (short)alpha;
- (short)blue;
- (unsigned int)bytesPerPixel;
- (void)dealloc;
- (void)dumpImage:(id)arg1;
- (void)dumpImageAsDeviceRGB:(id)arg1;
- (void)dumpImageAsDict:(id)arg1;
- (short)green;
- (unsigned long long)height;
- (id)init;
- (short)red;
- (const char *)rowAtIndex:(unsigned int)arg1;
- (unsigned long long)width;

@end
