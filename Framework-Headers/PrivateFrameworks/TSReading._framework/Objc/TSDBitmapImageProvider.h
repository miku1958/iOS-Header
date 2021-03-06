//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDImageProvider.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface TSDBitmapImageProvider : TSDImageProvider
{
    struct CGImageSource *mImageSource;
    struct CGImage *mImage;
    unsigned long long mImageGamut;
    struct CGSize mNaturalSize;
    long long mOrientation;
    BOOL mIsOpaque;
    BOOL mIsValid;
    unsigned long long mDPI;
    NSObject<OS_dispatch_semaphore> *mImageLock;
    long long mCheckIfValidToken;
    struct CGImage *mHalfSizeImage;
    struct CGImage *mQuarterSizeImage;
}

+ (struct CGImage *)CGImageForImageData:(id)arg1;
+ (id)TSUImageForImageData:(id)arg1;
+ (void)clearCacheForData:(id)arg1;
+ (void)initialize;
+ (struct CGSize)naturalSizeForImageData:(id)arg1;
+ (id)p_cacheStringForData:(id)arg1;
+ (struct CGImageSource *)p_newImageSourceFromCacheForData:(id)arg1 withFilenameSuffix:(id)arg2;
+ (struct CGImageSource *)p_newImageSourceFromFilePath:(id)arg1;
+ (struct CGImage *)temporaryCGImageForImageData:(id)arg1;
+ (struct CGImageSource *)temporaryCGImageSourceForImageData:(id)arg1;
- (struct CGImage *)CGImageForNaturalSize;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1 inContext:(struct CGContext *)arg2 orLayer:(id)arg3;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1 lowQuality:(BOOL)arg2;
- (struct CGImageSource *)CGImageSource;
- (void)dealloc;
- (struct CGSize)dpiAdjustedFillSize;
- (struct CGSize)dpiAdjustedNaturalSize;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)flush;
- (BOOL)hasFlushableContent;
- (void)i_commonInit;
- (unsigned long long)imageDPI;
- (unsigned long long)imageGamut;
- (BOOL)isOpaque;
- (BOOL)isValid;
- (struct CGSize)naturalSize;
- (long long)orientation;
- (void)p_configureOrientationAndSizeFromImageSource:(struct CGImageSource *)arg1 andImage:(struct CGImage *)arg2;
- (void)p_loadFullSizedImageIfNecessary;
- (void)p_loadImageMetadata;
- (struct CGImage *)p_loadOrCreateResampledImageWithScale:(unsigned long long)arg1 andCGImage:(struct CGImage **)arg2;
- (void)p_loadSourceRefIfNecessary;
- (struct CGImageSource *)p_newCGImageSource;
- (struct CGImageSource *)p_newCGImageSourceForTemporaryUse;
- (struct CGImage *)p_newImageFromSource:(struct CGImageSource *)arg1;
- (struct CGImageSource *)p_newImageOfSize:(struct CGSize)arg1 andWriteToCacheWithSuffix:(id)arg2;
- (struct CGImage *)p_resampledImageOfSizeType:(int)arg1;

@end

