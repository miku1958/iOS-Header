//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXRPixelFormatInfo : NSObject
{
}

+ (unsigned char)componentsPerPixel:(unsigned long long)arg1;
+ (BOOL)hasAlpha:(unsigned long long)arg1;
+ (BOOL)isASTC:(unsigned long long)arg1;
+ (BOOL)isBC1to5:(unsigned long long)arg1;
+ (BOOL)isBC6to7:(unsigned long long)arg1;
+ (BOOL)isCompressed:(unsigned long long)arg1;
+ (BOOL)isETC2:(unsigned long long)arg1;
+ (BOOL)isFloat:(unsigned long long)arg1;
+ (BOOL)isGammaEncoded:(unsigned long long)arg1;
+ (BOOL)isInteger:(unsigned long long)arg1;
+ (BOOL)isPVRTC:(unsigned long long)arg1;
+ (BOOL)isSRGB:(unsigned long long)arg1;
+ (struct TXRImageMemoryLayout)packedMemoryLayoutForFormat:(unsigned long long)arg1 dimensions: /* Error: Ran out of types for this method. */;
+ (unsigned char)pixelBytes:(unsigned long long)arg1;

@end

