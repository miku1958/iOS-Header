//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFWallpaperView.h>

#import <SpringBoardFoundation/SBFProceduralWallpaperDelegate-Protocol.h>

@class CADisplayLink, NSDictionary, NSString, NSTimer, UIImage;
@protocol SBFProceduralWallpaper;

@interface SBFProceduralWallpaperView : SBFWallpaperView <SBFProceduralWallpaperDelegate>
{
    id<SBFProceduralWallpaper> _proceduralWallpaper;
    NSDictionary *_options;
    NSTimer *_colorSampleTimer;
    int _thermalNotificationToken;
    BOOL _pausedForThermalReasons;
    struct _CAImageQueue *_blurQueue;
    UIImage *_blur;
    UIImage *_cachedUnblurredImage;
    CADisplayLink *_cachedUnblurredImageDisplayLinkObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property (readonly, nonatomic) id<SBFProceduralWallpaper> proceduralWallpaper; // @synthesize proceduralWallpaper=_proceduralWallpaper;
@property (readonly) Class superclass;

+ (BOOL)_allowsParallax;
+ (BOOL)_allowsRasterization;
- (void).cxx_destruct;
- (id)_blurredImage;
- (void)_cachedUnbluredImageDidInvalidate;
- (id)_computeAverageColor;
- (BOOL)_deviceMayRotate;
- (void)_handleVariantChange;
- (void)_handleVisibilityChange;
- (BOOL)_isVisible;
- (BOOL)_needsFallbackImageForBackdropGeneratedImage:(id)arg1;
- (id)_newImageFromBlurSurface:(void *)arg1 rect:(struct CGRect)arg2;
- (void)_sample;
- (BOOL)_shouldSampleContinuously;
- (void)_startGeneratingBlurredImages;
- (void)_stopGeneratingBlurredImages;
- (void)_updateAnimating;
- (void)_updateSampleTimer;
- (void)dealloc;
- (BOOL)hasBeenInvalidated;
- (BOOL)hasContentOutsideVisibleBounds;
- (id)initWithFrame:(struct CGRect)arg1 proceduralWallpaper:(id)arg2 options:(id)arg3 variant:(long long)arg4 wallpaperSettingsProvider:(id)arg5;
- (void)invalidate;
- (BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (void)layoutSubviews;
- (BOOL)needsImmediateLayoutBeforeRotation;
- (void)prepareToAppear;
- (void)prepareToDisappear;
- (void)setContinuousColorSamplingEnabled:(BOOL)arg1;
- (void)setRotating:(BOOL)arg1;
- (void)setWallpaperAnimationEnabled:(BOOL)arg1;
- (id)snapshotImage;
- (void)wallpaper:(id)arg1 didComputeAverageColor:(id)arg2 forRect:(struct CGRect)arg3;
- (void)wallpaper:(id)arg1 didGenerateBlur:(void *)arg2 forRect:(struct CGRect)arg3;
- (long long)wallpaperType;

@end

