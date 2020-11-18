//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VideoScaler : NSObject
{
    char *_tempBuffer1;
    char *_tempBuffer2;
    unsigned long long _tempBufferWidth;
    unsigned long long _tempBufferHeight;
}

- (int)convertAndScalePixelBuffer:(struct __CVBuffer *)arg1 toWidth:(int)arg2 toHeight:(int)arg3 withPixelFormat:(unsigned int)arg4 usingPixelBufferPool:(struct __CVPixelBufferPool *)arg5 andStoreTo:(struct __CVBuffer **)arg6;
- (void)dealloc;
- (id)init;

@end

