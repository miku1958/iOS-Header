//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotoEditToolController.h>

#import <PhotosUI/CEKLightingControlDelegate-Protocol.h>
#import <PhotosUI/CEKSliderDelegate-Protocol.h>
#import <PhotosUI/PUPhotoEditApertureToolbarDelegate-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>

@class CEKApertureButton, CEKLightingControl, CEKLightingNameBadge, CEKSlider, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PFCoalescer, PUPhotoEditApertureToolbar, PXUIButton, UIView, _PULightingGradientView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditPortraitToolController : PUPhotoEditToolController <PUPhotoEditApertureToolbarDelegate, CEKLightingControlDelegate, CEKSliderDelegate, PXChangeObserver>
{
    CEKApertureButton *_apertureButton;
    PXUIButton *_lightingIntensityButton;
    UIView *_lightingContainer;
    UIView *_apertureContainer;
    NSMutableArray *_containerConstraints;
    long long _initialLightingType;
    double _initialLightingIntensity;
    PXUIButton *_depthToolbarButton;
    _PULightingGradientView *_lightingGradient;
    CEKLightingNameBadge *_lightingNameBadge;
    NSArray *_lightingNameBadgeConstraints;
    NSArray *_lightingControlConstraints;
    CEKSlider *_lightingSlider;
    PUPhotoEditApertureToolbar *_apertureToolbar;
    PFCoalescer *_apertureUpdateCoalescer;
    NSMutableArray *_toolConstraints;
    NSDictionary *_cachedPortraitEffectSettings;
    BOOL _isStageLightEnabled;
    NSMutableDictionary *_lightingIntensityCache;
    CEKLightingControl *_lightingControl;
    long long _toolSelection;
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
}

@property (readonly, nonatomic) PUPhotoEditApertureToolbar *apertureToolbar; // @synthesize apertureToolbar=_apertureToolbar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CEKLightingControl *lightingControl; // @synthesize lightingControl=_lightingControl;
@property (nonatomic) unsigned long long majorVersion; // @synthesize majorVersion=_majorVersion;
@property (nonatomic) unsigned long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property (readonly) Class superclass;
@property (nonatomic) long long toolSelection; // @synthesize toolSelection=_toolSelection;

- (void).cxx_destruct;
- (BOOL)_canRenderPortraitEffect;
- (id)_depthButtonTitle;
- (void)_handleDepthEffectButton:(id)arg1;
- (void)_handlePortraitNavigationButtons:(id)arg1;
- (void)_refreshFromValuesCalculator;
- (void)_refreshLightingWithCompositionController:(id)arg1;
- (void)_setShowLightingControl:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_setupApertureControlsIfNeeded;
- (BOOL)_setupDepthControlsIfNeeded;
- (BOOL)_setupLightingControlsIfNeeded;
- (BOOL)_shouldShowPortraitV2;
- (void)_updateApertureSliderLength;
- (void)_updateCompositionWithApertureValue;
- (void)_updateCompositionWithLightingIntensity;
- (void)_updateIntensityForLightingType:(long long)arg1;
- (void)_updateLabelOrientation;
- (void)_updateLightingIntensityCache;
- (void)_updateLightingNameBadgeForOrientation:(long long)arg1 expanded:(BOOL)arg2;
- (void)_updateLightingSliderAnimated:(BOOL)arg1;
- (void)_updateNavigationButtonsAnimated:(BOOL)arg1;
- (void)_updateToolConstraints;
- (void)_updateToolContainerConstraints;
- (void)_updateToolVisibilityAnimated:(BOOL)arg1;
- (id)accessibilityHUDItemForButton:(id)arg1;
- (void)apertureToolbar:(id)arg1 didChangeValue:(double)arg2;
- (BOOL)apertureToolbarShouldRotateLabelsWithOrientation:(id)arg1;
- (BOOL)canResetToDefaultValue;
- (id)centerToolbarView;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (void)dealloc;
- (BOOL)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (BOOL)installTogglePreviewGestureRecognizer:(id)arg1;
- (id)leadingToolbarViews;
- (void)lightingControl:(id)arg1 willChangeExpanded:(BOOL)arg2;
- (void)lightingControlDidChangeExpanded:(id)arg1;
- (void)lightingControlDidChangeSelectedLightingType:(id)arg1;
- (id)localizedName;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)setPhotoEditSpec:(id)arg1;
- (void)setToolSelection:(long long)arg1 animated:(BOOL)arg2;
- (void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 overcaptureEditSource:(id)arg4 valuesCalculator:(id)arg5;
- (void)sliderDidEndScrolling:(id)arg1;
- (void)sliderDidScroll:(id)arg1;
- (void)sliderWillBeginScrolling:(id)arg1;
- (void)sliderWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (long long)toolControllerTag;
- (id)toolbarIcon;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (BOOL)wantsSecondaryToolbarVisible;
- (BOOL)wantsZoomAndPanEnabled;
- (void)willBecomeActiveTool;

@end
