//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXRDataConverter : NSObject
{
}

+ (id)newImageFromSourceImage:(id)arg1 newPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 gammaDegamma:(BOOL)arg4 error:(id *)arg5;
+ (id)newImageFromSourceImage:(id)arg1 newPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 multiplyAlpha:(BOOL)arg4 gammaDegamma:(BOOL)arg5 error:(id *)arg6;
+ (id)newPixelFormatSetForCGImage:(struct CGImage *)arg1 displayGamut:(unsigned long long)arg2 options:(id)arg3;

@end
