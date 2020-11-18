//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ETImagePreprocessor : NSObject
{
    struct vimage2espresso_param param;
    struct shared_ptr<Espresso::blob_cpu> imageBlob;
    shared_ptr_ae8b808b ctx;
    unsigned long long nChannels;
    NSArray *imageShape;
    unsigned long long bytesPerPixel;
    unsigned long long bitsPerComponent;
    struct CGColorSpace *colorSpace;
    struct vImage_Buffer targetBuffer;
    struct vImage_Buffer srcBuffer;
    unsigned long long currentSrcBufferSize;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithImagePreprocessParams:(id)arg1;
- (void)loadSrcBufferWithCGImage:(struct CGImage *)arg1;
- (void)preprocess;
- (id)tensorWithCGImage:(struct CGImage *)arg1;
- (id)tensorWithPath:(id)arg1;

@end
