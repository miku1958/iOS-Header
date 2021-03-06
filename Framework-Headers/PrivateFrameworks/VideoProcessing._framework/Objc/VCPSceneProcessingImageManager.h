//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPSceneProcessingImageManager : NSObject
{
    struct CF<__CVPixelBufferPool *> _pixelBufferPoolBGRA;
}

+ (id)imageManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_createPixelBufferPool;
- (int)_createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(struct __CVBuffer **)arg4;
- (void)dealloc;
- (int)loadFullPixelBuffer:(struct __CVBuffer **)arg1 scaledPixelBuffer:(struct __CVBuffer **)arg2 fromImageURL:(id)arg3 isPano:(BOOL)arg4;

@end

