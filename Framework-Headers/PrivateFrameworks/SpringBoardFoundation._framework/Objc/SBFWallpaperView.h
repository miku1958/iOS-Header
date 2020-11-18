//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardFoundation/SBFLegibilitySettingsProvider-Protocol.h>
#import <SpringBoardFoundation/_UISettingsKeyObserver-Protocol.h>

@class NSString, NSTimer, SBFWallpaperParallaxSettings, SBFWallpaperSettings, UIColor, UIImage, _UILegibilitySettings, _UILegibilitySettingsProvider;
@protocol SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewInternalObserver;

@interface SBFWallpaperView : UIView <_UISettingsKeyObserver, SBFLegibilitySettingsProvider>
{
    SBFWallpaperSettings *_wallpaperSettings;
    UIView *_parallaxView;
    double _zoomFactor;
    double _contentScaleFactor;
    long long _variant;
    unsigned long long _transformOptions;
    _UILegibilitySettingsProvider *_legibilitySettingsProvider;
    _UILegibilitySettings *_legibilitySettings;
    UIColor *_lastAverageColor;
    NSTimer *_colorSampleTimer;
    BOOL _shouldGenerateBlurredImagesWhenVisible;
    BOOL _generatingBlurredImages;
    SBFWallpaperParallaxSettings *_parallaxSettings;
    BOOL _wantsRasterization;
    long long _disallowRasterizationBlockCount;
    BOOL _parallaxEnabled;
    BOOL _continuousColorSamplingEnabled;
    BOOL _wallpaperAnimationEnabled;
    BOOL _rotating;
    BOOL _sharesContentsAcrossVariants;
    id<SBFLegibilitySettingsProviderDelegate> _delegate;
    UIView *_contentView;
    double _parallaxFactor;
    NSString *_wallpaperName;
    long long _variantsThatDarkenContentsToEnsureLegibility;
    long long _logicalContentOrientation;
    id<SBFWallpaperViewInternalObserver> _internalObserver;
}

@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (nonatomic) BOOL continuousColorSamplingEnabled; // @synthesize continuousColorSamplingEnabled=_continuousColorSamplingEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBFLegibilitySettingsProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContentOutsideVisibleBounds;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<SBFWallpaperViewInternalObserver> internalObserver; // @synthesize internalObserver=_internalObserver;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) long long logicalContentOrientation; // @synthesize logicalContentOrientation=_logicalContentOrientation;
@property (readonly, nonatomic) BOOL needsImmediateLayoutBeforeRotation;
@property (nonatomic) BOOL parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
@property (nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property (nonatomic, getter=isRotating) BOOL rotating; // @synthesize rotating=_rotating;
@property (nonatomic) BOOL sharesContentsAcrossVariants; // @synthesize sharesContentsAcrossVariants=_sharesContentsAcrossVariants;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transformOptions; // @synthesize transformOptions=_transformOptions;
@property (nonatomic) long long variant; // @synthesize variant=_variant;
@property (nonatomic) long long variantsThatDarkenContentsToEnsureLegibility; // @synthesize variantsThatDarkenContentsToEnsureLegibility=_variantsThatDarkenContentsToEnsureLegibility;
@property (nonatomic) BOOL wallpaperAnimationEnabled; // @synthesize wallpaperAnimationEnabled=_wallpaperAnimationEnabled;
@property (readonly, nonatomic) UIImage *wallpaperImage;
@property (copy, nonatomic) NSString *wallpaperName; // @synthesize wallpaperName=_wallpaperName;
@property (readonly, nonatomic) long long wallpaperType;
@property (nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;

+ (BOOL)_allowsParallax;
+ (BOOL)_allowsRasterization;
+ (BOOL)_shouldScaleForParallax;
- (void).cxx_destruct;
- (void)_addParallax;
- (void)_applyParallaxSettings;
- (id)_averageColorInContentViewRect:(struct CGRect)arg1 smudgeRadius:(double)arg2;
- (void)_beginDisallowRasterizationBlock;
- (id)_blurReplacementImage;
- (id)_blurredImage;
- (id)_computeAverageColor;
- (id)_displayedImage;
- (void)_endDisallowRasterizationBlock;
- (void)_handleVariantChange;
- (void)_handleVisibilityChange;
- (id)_imageForBackdropParameters:(CDStruct_83077358)arg1 includeTint:(BOOL)arg2;
- (BOOL)_isVisible;
- (void)_notifyBlursInvalidated;
- (void)_notifyGeometryInvalidated;
- (id)_primaryColorOverride;
- (void)_removeParallax;
- (void)_setLegibilitySettings:(id)arg1 notify:(BOOL)arg2;
- (void)_startGeneratingBlurredImages;
- (void)_stopGeneratingBlurredImages;
- (void)_updateContentViewScale;
- (void)_updateGeneratingBlurs;
- (void)_updateLegibilitySettingsForAverageColor:(id)arg1 notify:(BOOL)arg2;
- (void)_updateParallaxSettings;
- (void)_updateRasterizationState;
- (void)_updateScaleFactor;
- (id)averageColorInRect:(struct CGRect)arg1 withSmudgeRadius:(double)arg2;
- (id)blurredImage;
- (double)contentScaleFactor;
- (double)contrast;
- (double)contrastInRect:(struct CGRect)arg1;
- (double)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (BOOL)contrastRequiresGradient;
- (BOOL)contrastRequiresTreatments;
- (struct CGRect)cropRect;
- (double)cropZoomScale;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)imageForBackdropParameters:(CDStruct_83077358)arg1 includeTint:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 variant:(long long)arg2;
- (void)invalidate;
- (BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (void)layoutSubviews;
- (void)legibilitySettingsDidChange;
- (BOOL)luminanceInRectRequiresTreatments:(struct CGRect)arg1;
- (void)prepareToAppear;
- (void)prepareToDisappear;
- (void)setContentsRect:(struct CGRect)arg1;
- (void)setCropRect:(struct CGRect)arg1 zoomScale:(double)arg2;
- (void)setGeneratesBlurredImages:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setVariant:(long long)arg1 withAnimationFactory:(id)arg2;
- (void)setVariant:(long long)arg1 withAnimationFactory:(id)arg2 forced:(BOOL)arg3;
- (void)setZoomFactor:(double)arg1 withAnimationFactory:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)snapshotImage;
- (BOOL)supportsCropping;
- (void)updateLegibilitySettingsForAverageColor:(id)arg1;
- (BOOL)wantsRasterization;

@end
