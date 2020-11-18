//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDImageProvider.h>

@class NSMutableDictionary, NSObject, TSUOnce;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TSDBitmapImageProvider : TSDImageProvider
{
    struct CGImageSource *mImageSource;
    struct CGImage *mImage;
    NSMutableDictionary *mResampledImages;
    unsigned long long mImageGamut;
    struct CGSize mNaturalSize;
    long long mOrientation;
    BOOL mIsOpaque;
    BOOL mIsValid;
    unsigned long long mValidationStatus;
    unsigned long long mDPI;
    NSObject<OS_dispatch_queue> *mImageQueue;
    TSUOnce *mCheckIfValidOnce;
    NSObject<OS_dispatch_semaphore> *mFlushableContentLock;
    BOOL mHasFlushableContent;
    unsigned long long mEstimatedSize;
}

@property (readonly, nonatomic) struct CGImageSource *CGImageSource;
@property (readonly, nonatomic) struct CGSize dpiAdjustedFillSize;
@property (readonly, nonatomic) unsigned long long imageDPI;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) long long orientation;
@property (readonly, nonatomic) unsigned long long validationStatus; // @synthesize validationStatus=mValidationStatus;

+ (struct CGImage *)CGImageForImageData:(id)arg1;
+ (id)TSUImageForImageData:(id)arg1;
+ (void)clearCacheForData:(id)arg1;
+ (void)initialize;
+ (struct CGSize)naturalSizeForImageData:(id)arg1;
+ (id)p_cacheDirectoryForData:(id)arg1;
+ (id)p_cacheStringForData:(id)arg1;
+ (struct CGImageSource *)p_newImageSourceFromCacheForData:(id)arg1 withFilenameSuffix:(id)arg2;
+ (struct CGImageSource *)p_newImageSourceFromFilePath:(id)arg1;
- (void).cxx_destruct;
- (struct CGImage *)CGImageForNaturalSize;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1 inContext:(struct CGContext *)arg2 orLayer:(id)arg3;
- (struct CGImage *)CGImageResampledToSize:(struct CGSize)arg1 lowQuality:(BOOL)arg2;
- (void)dealloc;
- (struct CGSize)dpiAdjustedNaturalSize;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)flush;
- (void)i_commonInit;
- (unsigned long long)i_flushableMemoryEstimate;
- (BOOL)i_hasFlushableContent;
- (unsigned long long)imageGamut;
- (BOOL)isValid;
- (struct CGSize)naturalSize;
- (id)p_cacheSuffixForScale:(unsigned long long)arg1;
- (void)p_configureOrientationAndSizeFromImageSource:(struct CGImageSource *)arg1 andImage:(struct CGImage *)arg2;
- (void)p_loadFullSizedImageIfNecessary;
- (void)p_loadImageMetadata;
- (struct CGImage *)p_loadOrCreateResampledImageWithReciprocalScale:(unsigned long long)arg1;
- (void)p_loadSourceRefIfNecessary;
- (struct CGImageSource *)p_newCGImageSource;
- (struct CGImageSource *)p_newCGImageSourceForTemporaryUse;
- (struct CGImage *)p_newImageFromSource:(struct CGImageSource *)arg1;
- (struct CGImageSource *)p_newImageOfSize:(struct CGSize)arg1 andWriteToCacheWithSuffix:(id)arg2;
- (long long)p_reciprocalScaleForImageSize:(struct CGSize)arg1;
- (struct CGImage *)p_resampledImageOfReciprocalScale:(unsigned long long)arg1;
- (BOOL)p_shouldScaleRetinaScreenshots;
- (void)p_updateEstimatedSize;

@end
