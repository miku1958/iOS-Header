//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFStaticWallpaperView.h>

#import <SpringBoardFoundation/UIScrollViewDelegate-Protocol.h>

@class NSString, SBFLockScreenWallpaperParallaxSettings, SBFSubject, UIColor, UIImageView, UIScrollView;
@protocol SBFCancelable;

@interface SBFScrollableStaticWallpaperView : SBFStaticWallpaperView <UIScrollViewDelegate>
{
    UIImageView *_imageView;
    UIImageView *_gradientView;
    UIScrollView *_scrollView;
    SBFLockScreenWallpaperParallaxSettings *_parallaxSettings;
    SBFSubject *_scrollViewObserver;
    id<SBFCancelable> _colorBoxCancelToken;
    id<SBFCancelable> _parallaxCancelToken;
    double _minimumZoomScaleForParallax;
    double _minimumZoomScale;
    BOOL _parallaxCanBeEnabledAutomatically;
    UIColor *_averageColor;
}

@property (readonly) UIColor *averageColor; // @synthesize averageColor=_averageColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)_shouldScaleForParallax;
- (struct CGPoint)_boundedContentOffsetForOverhang;
- (void)_cacheImagesIfNeededTreated:(BOOL)arg1;
- (struct CGRect)_cropRect;
- (struct CGSize)_imageSize;
- (struct CGPoint)_maximumContentOffsetForOverhang;
- (struct CGPoint)_minimumContentOffsetForOverhang;
- (id)_newImageView;
- (double)_parallaxFactorWithZoomScale:(double)arg1 contentOffset:(struct CGPoint)arg2;
- (id)_scrollView;
- (double)_scrollViewParallaxFactor;
- (void)_setupColorBoxObserver;
- (void)_setupContentView;
- (void)_setupParallaxObserver;
- (void)_setupSampleImage:(id)arg1 treated:(BOOL)arg2;
- (void)_setupScrollView;
- (void)_setupScrollViewObserver;
- (double)_throttleDuration;
- (void)_updateParallaxForScroll;
- (void)_updateScrollViewZoomScales;
- (id)_wallpaperImageForAnalysis;
- (struct CGRect)cropRect;
- (double)cropZoomScale;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3;
- (void)layoutSubviews;
- (void)legibilitySettingsDidChange;
- (double)parallaxFactor;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)setCropRect:(struct CGRect)arg1 zoomScale:(double)arg2;
- (void)setParallaxEnabled:(BOOL)arg1;
- (BOOL)supportsCropping;
- (id)viewForZoomingInScrollView:(id)arg1;

@end

