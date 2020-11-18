//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDFill.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSSPresetSource-Protocol.h>

@class NSObject, TSDImageFillCachedImage, TSPData, TSUColor;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSDImageFill : TSDFill <TSDMixing, TSSPresetSource, NSCopying, NSMutableCopying>
{
    TSPData *mImageData;
    int mTechnique;
    TSUColor *mTintColor;
    TSDImageFillCachedImage *mStandardSizeTintedImage;
    TSDImageFillCachedImage *mHalfSizeTintedImage;
    TSDImageFillCachedImage *mQuarterSizeTintedImage;
    TSUColor *mReferenceColor;
    struct CGSize mFillSize;
    BOOL mHasIndicatedInterestInProvider;
    NSObject<OS_dispatch_queue> *mTempRenderLock;
    struct CGImage *mTempRenderCopy;
    struct CGImage *mSourceOfTempRenderCopy;
    long long mTempRenderCount;
}

@property (readonly, nonatomic) struct CGSize fillSize; // @synthesize fillSize=mFillSize;
@property (readonly, strong, nonatomic) TSPData *imageData; // @synthesize imageData=mImageData;
@property (nonatomic, setter=p_setFillSize:) struct CGSize p_fillSize;
@property (strong, nonatomic, setter=p_setImageData:) TSPData *p_imageData;
@property (nonatomic, setter=p_setTechnique:) int p_technique;
@property (strong, nonatomic, setter=p_setTintColor:) TSUColor *p_tintColor;
@property (readonly, nonatomic) double scale;
@property (nonatomic) int technique; // @synthesize technique=mTechnique;
@property (readonly, copy, nonatomic) TSUColor *tintColor; // @synthesize tintColor=mTintColor;

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)instanceWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;
+ (id)presetKinds;
- (void).cxx_destruct;
- (BOOL)canApplyToRenderable;
- (BOOL)canApplyToRenderableByAddingSubrenderables;
- (id)copyWithNewImageData:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)drawFillInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 clippingToPath:(struct CGPath *)arg3;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)drawsInOneStep;
- (int)fillType;
- (void)flushImageCache;
- (unsigned long long)hash;
- (void)i_commonInit;
- (id)imageDataAtFillSize;
- (id)initWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithImageData:(id)arg1 technique:(int)arg2 tintColor:(id)arg3 size:(struct CGSize)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isOpaque;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)p_cachedImageForSize:(struct CGSize)arg1 inContext:(struct CGContext *)arg2 orContentsScaleProvider:(id)arg3;
- (void)p_clearTintedImageCache;
- (void)p_drawBitmapImage:(struct CGImage *)arg1 withOrientation:(long long)arg2 inContext:(struct CGContext *)arg3 bounds:(struct CGRect)arg4;
- (void)p_drawPDFWithProvider:(id)arg1 inContext:(struct CGContext *)arg2 bounds:(struct CGRect)arg3;
- (struct CGRect)p_drawnRectForImageSize:(struct CGSize)arg1 destRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;
- (id)p_halfSizeCachedImage;
- (void)p_paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 rectForFill:(struct CGRect)arg3;
- (id)p_quarterSizeCachedImage;
- (void)p_setFillSizeForApplicationData;
- (BOOL)p_shouldApplyTintedImage;
- (BOOL)p_shouldPersistFillSizeForData:(id)arg1;
- (struct CGSize)p_sizeOfFillImageForDestRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)p_standardSizeCachedImage;
- (id)p_tintedImageWithScale:(double)arg1;
- (id)p_validatedImageProvider;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(BOOL)arg4;
- (id)presetKind;
- (id)referenceColor;
- (struct CGSize)renderedImageSizeForObjectSize:(struct CGSize)arg1;
- (void)saveToArchive:(struct FillArchive *)arg1 archiver:(id)arg2;
- (BOOL)tsch_hasAllResources;

@end

