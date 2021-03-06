//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraUI/CAMAccessibilityHUDItemProvider-Protocol.h>
#import <CameraUI/CAMAdditiveAnimatorDelegate-Protocol.h>
#import <CameraUI/CAMBarsAccessibilityHUDManagerGestureProvider-Protocol.h>
#import <CameraUI/CAMControlDrawerPresentationDelegate-Protocol.h>
#import <CameraUI/CAMInstructionLabelDelegate-Protocol.h>
#import <CameraUI/CAMViewfinderTransitionable-Protocol.h>
#import <CameraUI/CEKBadgeViewDelegate-Protocol.h>

@class AVSpatialOverCaptureVideoPreviewLayer, CAMAdditiveAnimator, CAMBadgeTray, CAMCTMDescriptionOverlayView, CAMControlDrawer, CAMControlStatusBar, CAMCreativeCameraButton, CAMDynamicShutterControl, CAMElapsedTimeView, CAMFilterNameBadge, CAMFlashCompromisedInstructionLabel, CAMFlipButton, CAMFullscreenModeSelector, CAMFullscreenViewfinderLayout, CAMImageWell, CAMInterfaceModulationView, CAMLowLightInstructionLabel, CAMModeDial, CAMModeIndicatorView, CAMPanoramaView, CAMPortraitModeDescriptionOverlayView, CAMPortraitModeInstructionLabel, CAMPreviewAlignmentGuide, CAMPreviewView, CAMQRCodeInstructionLabel, CAMTimerIndicatorView, CAMViewfinderReticleView, CAMZoomControl, CAMZoomSlider, CEKLightingControl, CEKLightingNameBadge, NSString, UILongPressGestureRecognizer;
@protocol CAMFullscreenViewfinderDelegate;

@interface CAMFullscreenViewfinder : UIView <CAMAdditiveAnimatorDelegate, CAMControlDrawerPresentationDelegate, CEKBadgeViewDelegate, CAMInstructionLabelDelegate, CAMViewfinderTransitionable, CAMAccessibilityHUDItemProvider, CAMBarsAccessibilityHUDManagerGestureProvider>
{
    BOOL _controlDrawerAllowed;
    BOOL _modeUIAllowed;
    BOOL _controlDrawerExpanded;
    BOOL _flipButtonVisible;
    BOOL _zoomControlVisible;
    BOOL _elapsedTimeViewVisible;
    BOOL _timerIndicatorVisible;
    BOOL _qrCodeLabelVisible;
    BOOL _lowLightInstructionLabelVisible;
    BOOL _previewAlignmentGuideVisible;
    BOOL _legibilityBackgroundsVisible;
    BOOL _portraitControlsAllowed;
    BOOL _flashCompromisedInstructionLabelVisible;
    BOOL __usingCreativeCameraControls;
    BOOL __controlDrawerPresentedModally;
    id<CAMFullscreenViewfinderDelegate> _delegate;
    NSString *_contentSize;
    unsigned long long _zoomStyle;
    CAMPreviewView *_previewView;
    long long _previewViewOrientation;
    long long _orientation;
    CAMPreviewAlignmentGuide *_previewAlignmentGuide;
    CAMControlDrawer *_controlDrawer;
    CAMDynamicShutterControl *_shutterControl;
    CAMControlStatusBar *_controlStatusBar;
    CAMBadgeTray *_badgeTray;
    CAMModeDial *_modeDial;
    CAMModeIndicatorView *_modeIndicator;
    CAMFullscreenModeSelector *_modeSelector;
    CAMFlipButton *_flipButton;
    CAMImageWell *_imageWell;
    CAMZoomControl *_zoomControl;
    CAMZoomSlider *_zoomSlider;
    CAMElapsedTimeView *_elapsedTimeView;
    CAMTimerIndicatorView *_timerIndicator;
    CAMPanoramaView *_panoramaView;
    CAMCreativeCameraButton *_creativeCameraButton;
    CAMFilterNameBadge *_filterNameBadge;
    long long _shallowDepthOfFieldStatus;
    CEKLightingControl *_lightingControl;
    CEKLightingNameBadge *_lightingNameBadge;
    CAMPortraitModeInstructionLabel *_portraitInstructionLabel;
    long long _viewportAspectRatio;
    UILongPressGestureRecognizer *_modeSelectorGestureRecognizer;
    CAMQRCodeInstructionLabel *_qrCodeInstructionLabel;
    CAMPortraitModeDescriptionOverlayView *_portraitModeOverlayView;
    CAMCTMDescriptionOverlayView *_ctmOverlayView;
    CAMFlashCompromisedInstructionLabel *_flashCompromisedInstructionLabel;
    UIView *__previewContainerView;
    UIView *__modeClippingView;
    CAMViewfinderReticleView *__reticleView;
    CAMLowLightInstructionLabel *__lowLightInstructionLabel;
    UIView *__bottomLegibilityBackground;
    CAMFullscreenViewfinderLayout *__layout;
    AVSpatialOverCaptureVideoPreviewLayer *__overCapturePreviewLayer;
    CAMAdditiveAnimator *__viewportAnimator;
    CAMInterfaceModulationView *__contentView;
}

@property (strong, nonatomic, setter=_setBottomLegibilityBackground:) UIView *_bottomLegibilityBackground; // @synthesize _bottomLegibilityBackground=__bottomLegibilityBackground;
@property (readonly, nonatomic) CAMInterfaceModulationView *_contentView; // @synthesize _contentView=__contentView;
@property (nonatomic, getter=_isControlDrawerPresentedModally, setter=_setControlDrawerPresentedModally:) BOOL _controlDrawerPresentedModally; // @synthesize _controlDrawerPresentedModally=__controlDrawerPresentedModally;
@property (readonly, nonatomic) CAMFullscreenViewfinderLayout *_layout; // @synthesize _layout=__layout;
@property (strong, nonatomic, setter=_setLowLightInstructionLabel:) CAMLowLightInstructionLabel *_lowLightInstructionLabel; // @synthesize _lowLightInstructionLabel=__lowLightInstructionLabel;
@property (readonly, nonatomic) UIView *_modeClippingView; // @synthesize _modeClippingView=__modeClippingView;
@property (strong, nonatomic, setter=_setOverCapturePreviewLayer:) AVSpatialOverCaptureVideoPreviewLayer *_overCapturePreviewLayer; // @synthesize _overCapturePreviewLayer=__overCapturePreviewLayer;
@property (readonly, nonatomic) UIView *_previewContainerView; // @synthesize _previewContainerView=__previewContainerView;
@property (readonly, nonatomic) CAMViewfinderReticleView *_reticleView; // @synthesize _reticleView=__reticleView;
@property (readonly, nonatomic, getter=_isUsingCreativeCameraControls) BOOL _usingCreativeCameraControls; // @synthesize _usingCreativeCameraControls=__usingCreativeCameraControls;
@property (readonly, nonatomic) CAMAdditiveAnimator *_viewportAnimator; // @synthesize _viewportAnimator=__viewportAnimator;
@property (readonly, nonatomic) CAMBadgeTray *badgeTray; // @synthesize badgeTray=_badgeTray;
@property (strong, nonatomic) NSString *contentSize; // @synthesize contentSize=_contentSize;
@property (strong, nonatomic, setter=_setControlDrawer:) CAMControlDrawer *controlDrawer; // @synthesize controlDrawer=_controlDrawer;
@property (readonly, nonatomic, getter=isControlDrawerAllowed) BOOL controlDrawerAllowed; // @synthesize controlDrawerAllowed=_controlDrawerAllowed;
@property (nonatomic, getter=isControlDrawerExpanded) BOOL controlDrawerExpanded; // @synthesize controlDrawerExpanded=_controlDrawerExpanded;
@property (readonly, nonatomic) CAMControlStatusBar *controlStatusBar; // @synthesize controlStatusBar=_controlStatusBar;
@property (readonly, nonatomic) CAMCreativeCameraButton *creativeCameraButton; // @synthesize creativeCameraButton=_creativeCameraButton;
@property (strong, nonatomic, setter=setCTMOverlayView:) CAMCTMDescriptionOverlayView *ctmOverlayView; // @synthesize ctmOverlayView=_ctmOverlayView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CAMFullscreenViewfinderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long desiredAspectRatio;
@property (readonly, nonatomic) CAMElapsedTimeView *elapsedTimeView; // @synthesize elapsedTimeView=_elapsedTimeView;
@property (nonatomic, getter=isElapsedTimeViewVisible) BOOL elapsedTimeViewVisible; // @synthesize elapsedTimeViewVisible=_elapsedTimeViewVisible;
@property (readonly, nonatomic) CAMFilterNameBadge *filterNameBadge; // @synthesize filterNameBadge=_filterNameBadge;
@property (strong, nonatomic, setter=_setFlashCompromisedInstructionLabel:) CAMFlashCompromisedInstructionLabel *flashCompromisedInstructionLabel; // @synthesize flashCompromisedInstructionLabel=_flashCompromisedInstructionLabel;
@property (nonatomic, getter=isFlashCompromisedInstructionLabelVisible) BOOL flashCompromisedInstructionLabelVisible; // @synthesize flashCompromisedInstructionLabelVisible=_flashCompromisedInstructionLabelVisible;
@property (readonly, nonatomic) CAMFlipButton *flipButton; // @synthesize flipButton=_flipButton;
@property (nonatomic, getter=isFlipButtonVisible) BOOL flipButtonVisible; // @synthesize flipButtonVisible=_flipButtonVisible;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CAMImageWell *imageWell; // @synthesize imageWell=_imageWell;
@property (nonatomic) unsigned long long interfaceModulation;
@property (nonatomic, getter=isLegibilityBackgroundsVisible) BOOL legibilityBackgroundsVisible; // @synthesize legibilityBackgroundsVisible=_legibilityBackgroundsVisible;
@property (readonly, nonatomic) CEKLightingControl *lightingControl; // @synthesize lightingControl=_lightingControl;
@property (readonly, nonatomic) CEKLightingNameBadge *lightingNameBadge; // @synthesize lightingNameBadge=_lightingNameBadge;
@property (nonatomic, getter=isLowLightInstructionLabelVisible) BOOL lowLightInstructionLabelVisible; // @synthesize lowLightInstructionLabelVisible=_lowLightInstructionLabelVisible;
@property (readonly, nonatomic) CAMModeDial *modeDial; // @synthesize modeDial=_modeDial;
@property (readonly, nonatomic) CAMModeIndicatorView *modeIndicator; // @synthesize modeIndicator=_modeIndicator;
@property (readonly, nonatomic) CAMFullscreenModeSelector *modeSelector; // @synthesize modeSelector=_modeSelector;
@property (readonly, nonatomic) UILongPressGestureRecognizer *modeSelectorGestureRecognizer; // @synthesize modeSelectorGestureRecognizer=_modeSelectorGestureRecognizer;
@property (readonly, nonatomic, getter=isModeUIAllowed) BOOL modeUIAllowed; // @synthesize modeUIAllowed=_modeUIAllowed;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (nonatomic) struct CGSize panoramaCaptureSize;
@property (strong, nonatomic) CAMPanoramaView *panoramaView; // @synthesize panoramaView=_panoramaView;
@property (nonatomic, getter=isPortraitControlsAllowed) BOOL portraitControlsAllowed; // @synthesize portraitControlsAllowed=_portraitControlsAllowed;
@property (readonly, nonatomic) CAMPortraitModeInstructionLabel *portraitInstructionLabel; // @synthesize portraitInstructionLabel=_portraitInstructionLabel;
@property (strong, nonatomic) CAMPortraitModeDescriptionOverlayView *portraitModeOverlayView; // @synthesize portraitModeOverlayView=_portraitModeOverlayView;
@property (strong, nonatomic, setter=_setPreviewAlignmentGuide:) CAMPreviewAlignmentGuide *previewAlignmentGuide; // @synthesize previewAlignmentGuide=_previewAlignmentGuide;
@property (nonatomic, getter=isPreviewAlignmentGuideVisible) BOOL previewAlignmentGuideVisible; // @synthesize previewAlignmentGuideVisible=_previewAlignmentGuideVisible;
@property (strong, nonatomic) CAMPreviewView *previewView; // @synthesize previewView=_previewView;
@property (nonatomic) long long previewViewOrientation; // @synthesize previewViewOrientation=_previewViewOrientation;
@property (readonly, nonatomic) CAMQRCodeInstructionLabel *qrCodeInstructionLabel; // @synthesize qrCodeInstructionLabel=_qrCodeInstructionLabel;
@property (readonly, nonatomic, getter=isQRCodeLabelVisible) BOOL qrCodeLabelVisible; // @synthesize qrCodeLabelVisible=_qrCodeLabelVisible;
@property (readonly, nonatomic, getter=isReticleAnimating) BOOL reticleAnimating;
@property (nonatomic) long long shallowDepthOfFieldStatus; // @synthesize shallowDepthOfFieldStatus=_shallowDepthOfFieldStatus;
@property (readonly, nonatomic) CAMDynamicShutterControl *shutterControl; // @synthesize shutterControl=_shutterControl;
@property (readonly) Class superclass;
@property (strong, nonatomic, setter=_setTimerIndicator:) CAMTimerIndicatorView *timerIndicator; // @synthesize timerIndicator=_timerIndicator;
@property (nonatomic, getter=isTimerIndicatorVisible) BOOL timerIndicatorVisible; // @synthesize timerIndicatorVisible=_timerIndicatorVisible;
@property (nonatomic) long long viewportAspectRatio; // @synthesize viewportAspectRatio=_viewportAspectRatio;
@property (strong, nonatomic, setter=_setZoomControl:) CAMZoomControl *zoomControl; // @synthesize zoomControl=_zoomControl;
@property (nonatomic, getter=isZoomControlVisible) BOOL zoomControlVisible; // @synthesize zoomControlVisible=_zoomControlVisible;
@property (strong, nonatomic, setter=_setZoomSlider:) CAMZoomSlider *zoomSlider; // @synthesize zoomSlider=_zoomSlider;
@property (nonatomic) unsigned long long zoomStyle; // @synthesize zoomStyle=_zoomStyle;

+ (id)darkControlBackgroundColor;
+ (Class)layerClass;
+ (id)lightControlBackgroundColor;
- (void).cxx_destruct;
- (void)_applyAnimationSensitiveGeometry:(CDStruct_d54ccef3)arg1 toView:(id)arg2;
- (unsigned long long)_badgeFontStyle;
- (struct CGRect)_currentFourThreeViewportFrame;
- (struct CGRect)_frameForBottomLegibilityBackground;
- (struct CGRect)_frameForControlDrawer;
- (struct CGRect)_frameForFlipButton;
- (struct CGRect)_frameForImageWell;
- (struct CGRect)_frameForLightingControl;
- (struct CGRect)_frameForModeView;
- (struct CGRect)_frameForPreviewOverlaysInViewport:(struct CGRect)arg1;
- (struct CGRect)_frameForPreviewView;
- (struct CGRect)_frameForReticleViewport;
- (CDStruct_d54ccef3)_geometryForBadgeTray;
- (CDStruct_d54ccef3)_geometryForBottomCenteredView:(id)arg1;
- (CDStruct_d54ccef3)_geometryForInstructionLabel:(id)arg1;
- (CDStruct_d54ccef3)_geometryForLandscapeLightingBadge;
- (void)_handleDirectionIndicatorTapped;
- (void)_insertBackgroundSubview:(id)arg1;
- (void)_iterateViewsForHUDManager:(id)arg1 withItemFoundBlock:(CDUnknownBlockType)arg2;
- (void)_layoutPanoramaView;
- (void)_layoutZoomControls;
- (void)_loadFilterControlsIfNeeded;
- (void)_loadPortraitControlsIfNeeded;
- (void)_setNeedsLayoutAnimated:(BOOL)arg1;
- (void)_setViewportAnimatorFrame:(struct CGRect)arg1;
- (void)_setViewportAnimatorFrame:(struct CGRect)arg1 withDuration:(double)arg2 timingCurve:(id)arg3;
- (BOOL)_showControlDrawer;
- (BOOL)_showFilterNameBadge;
- (BOOL)_showLandscapeLightingBadge;
- (BOOL)_showModeView;
- (BOOL)_showPortraitControls;
- (BOOL)_showPortraitInstructions;
- (void)_transitionView:(id)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3;
- (void)_updateControlsForContentSize;
- (void)_updateModeDialClippingForViewportFrame:(struct CGRect)arg1;
- (void)_updatePortraitControlsHighlightAnimated:(BOOL)arg1;
- (void)_updatePreviewAlignmentGuideForViewportFrame:(struct CGRect)arg1;
- (void)_updatePreviewLayerForPreviewFrame:(struct CGRect)arg1 viewportFrame:(struct CGRect)arg2;
- (void)_updateReticleForViewportFrame:(struct CGRect)arg1;
- (void)_updateSubviewsVisibilityAnimated:(BOOL)arg1;
- (void)_updateTintColors;
- (id)_visibleInstructionLabel;
- (void)animator:(id)arg1 didUpdateValuesForKeys:(id)arg2;
- (void)badgeViewDidChangeIntrinsicContentSize:(id)arg1;
- (void)controlDrawer:(id)arg1 didChangeExpanded:(BOOL)arg2 forControlType:(long long)arg3 animated:(BOOL)arg4;
- (void)dismissModalControlDrawerIfNeeded;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)initWithMetalContext:(id)arg1 useCreativeCameraControls:(BOOL)arg2;
- (void)instructionLabelDidChangeIntrinsicContentSize:(id)arg1;
- (BOOL)isControlDrawerPresentedModallyWithControlType:(long long)arg1;
- (void)layoutSubviews;
- (BOOL)loadQRCodeInstructionLabelIfNeeded;
- (void)prepareForResumingUsingCrossfade;
- (void)presentControlDrawerModally:(BOOL)arg1 withControlType:(long long)arg2;
- (void)removeInflightBlurAnimations;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)setControlDrawerAllowed:(BOOL)arg1 modeUIAllowed:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setControlDrawerExpanded:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setElapsedTimeViewVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFlashCompromisedInstructionLabelVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFlipButtonVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setInterfaceModulation:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setLegibilityBackgroundsVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setLowLightInstructionLabelVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)setPortraitControlsAllowed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPreviewAlignmentGuideVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setQRCodeLabelVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setQrCodeLabelVisible:(BOOL)arg1;
- (void)setReticleMaskingStyle:(long long)arg1 withDuration:(double)arg2;
- (void)setShallowDepthOfFieldStatus:(long long)arg1 animated:(BOOL)arg2;
- (void)setTimerIndicatorVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setViewportAspectRatio:(long long)arg1 animated:(BOOL)arg2;
- (void)setZoomControlVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAccessibilityGestureBeginForHUDManager:(id)arg1;
- (id)touchingRecognizersToCancel;

@end

