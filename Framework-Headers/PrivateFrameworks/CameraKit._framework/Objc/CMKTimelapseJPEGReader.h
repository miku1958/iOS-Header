//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMKTimelapseJPEGReader : NSObject
{
}

+ (id)_decodeOptionsWithMaxPixelSize:(long long)arg1 applyTransform:(BOOL)arg2 useBGRA:(BOOL)arg3;
+ (struct CGImage *)createCGImageFromData:(id)arg1 applyTransform:(BOOL)arg2 maxPixelSize:(long long)arg3 useBGRA:(BOOL)arg4;
+ (struct __CVBuffer *)createPixelBufferFromData:(id)arg1 applyTransform:(BOOL)arg2 maxPixelSize:(long long)arg3 useBGRA:(BOOL)arg4;
+ (id)newDataFromFilePath:(id)arg1;

@end

