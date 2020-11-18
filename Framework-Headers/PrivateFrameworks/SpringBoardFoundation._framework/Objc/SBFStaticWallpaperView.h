//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFWallpaperView.h>

@class NSString, SBFColorBoxes, UIImage;

@interface SBFStaticWallpaperView : SBFWallpaperView
{
    UIImage *_image;
    UIImage *_displayedImage;
    double _overallContrast;
    SBFColorBoxes *_colorBoxes;
    NSString *_cacheGroup;
}

@property (strong, nonatomic) SBFColorBoxes *colorBoxes;
@property (strong, nonatomic, getter=_displayedImage, setter=_setDisplayedImage:) UIImage *displayedImage; // @synthesize displayedImage=_displayedImage;

+ (BOOL)_allowsParallax;
+ (BOOL)_allowsRasterization;
+ (BOOL)_canCacheImages;
+ (BOOL)_canDownscaleSampleImage;
+ (id)_imageByApplyingLegibilityDarkeningToImage:(id)arg1;
- (void).cxx_destruct;
- (id)_averageColorInContentViewRect:(struct CGRect)arg1 smudgeRadius:(double)arg2;
- (id)_blurredImage;
- (id)_computeAverageColor;
- (id)_createColorBoxes;
- (void)_disableLegibilityDarkening;
- (void)_enableLegibilityDarkening;
- (id)_fallbackImageWithSize:(struct CGSize)arg1;
- (void)_handleVariantChange;
- (id)_imageByApplyingLegibilityDarkeningToImage:(id)arg1;
- (id)_imageByDarkeningHighlightsInImage:(id)arg1;
- (id)_imageForBackdropParameters:(CDStruct_83077358)arg1 includeTint:(BOOL)arg2;
- (struct CGSize)_imageSize;
- (id)_mappedImageKeyForParameters:(CDStruct_83077358)arg1 includingTint:(BOOL)arg2 andLegibilityDarkening:(BOOL)arg3;
- (id)_repeatingGradientImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)_resetColorBoxes;
- (void)_setImage:(id)arg1;
- (void)_setSampleImage:(id)arg1;
- (void)_setupContentView;
- (void)_setupWallpaperImage:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)_shouldApplyLegibilityDarkeningForVariant:(long long)arg1;
- (void)_toggleLegibilityDarkeningIfNecessary;
- (id)_variantCacheIdentifier;
- (id)_wallpaperImageForAnalysis;
- (float)_zoomScale;
- (double)contrastInRect:(struct CGRect)arg1;
- (double)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (BOOL)contrastRequiresTreatments;
- (double)cropZoomScale;
- (BOOL)hasContentOutsideVisibleBounds;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperImage:(id)arg2 cacheGroup:(id)arg3 variant:(long long)arg4 options:(unsigned long long)arg5;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3;
- (BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (void)setContentView:(id)arg1;
- (void)setContentsRect:(struct CGRect)arg1;
- (void)setCropRect:(struct CGRect)arg1 zoomScale:(double)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)snapshotImage;
- (id)wallpaperImage;
- (long long)wallpaperType;

@end
