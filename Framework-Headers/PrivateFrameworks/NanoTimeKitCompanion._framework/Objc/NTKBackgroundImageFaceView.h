//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKDigitalFaceView.h>

#import <NanoTimeKitCompanion/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, NTKDigitalTimeLabel, NTKEditOption, UIImageView, UIView;

@interface NTKBackgroundImageFaceView : NTKDigitalFaceView <UIGestureRecognizerDelegate>
{
    NTKEditOption *_editOptionFrom;
    UIView *_transitionViewFrom;
    NTKEditOption *_editOptionTo;
    UIView *_transitionViewTo;
    UIView *_animationView;
    UIImageView *_animationMaskImageView;
    BOOL _shouldAdjustLayoutForTimeTravel;
    UIView *_timeTravelDimmingOverlayView;
    UIView *_selectedContentView;
    NTKDigitalTimeLabel *_timeLabel;
    UIView *_zoomMaskView;
    UIImageView *_zoomVignette;
    UIView *_borrowedCircleView;
    UIView *_borrowedTimeView;
    struct CGPoint _timeViewZoomEndingCenter;
    struct CGRect _vignetteZoomStartingBounds;
    struct CGRect _maskZoomStartingBounds;
}

@property (strong, nonatomic) UIView *borrowedCircleView; // @synthesize borrowedCircleView=_borrowedCircleView;
@property (strong, nonatomic) UIView *borrowedTimeView; // @synthesize borrowedTimeView=_borrowedTimeView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect maskZoomStartingBounds; // @synthesize maskZoomStartingBounds=_maskZoomStartingBounds;
@property (readonly) Class superclass;
@property (strong, nonatomic) NTKDigitalTimeLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property (nonatomic) struct CGPoint timeViewZoomEndingCenter; // @synthesize timeViewZoomEndingCenter=_timeViewZoomEndingCenter;
@property (nonatomic) struct CGRect vignetteZoomStartingBounds; // @synthesize vignetteZoomStartingBounds=_vignetteZoomStartingBounds;
@property (strong, nonatomic) UIView *zoomMaskView; // @synthesize zoomMaskView=_zoomMaskView;
@property (strong, nonatomic) UIImageView *zoomVignette; // @synthesize zoomVignette=_zoomVignette;

- (void).cxx_destruct;
- (id)_animationImageView;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyForegroundZoomAlpha:(double)arg1;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (double)_backgroundImageAlphaForEditMode:(long long)arg1;
- (void)_beginTransitionToOption;
- (void)_bringForegroundViewsToFront;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_cleanupAfterZoom;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_didTransitionToOptionView:(id)arg1;
- (id)_digitalTimeLabelStyle;
- (void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
- (BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_layoutForegroundContainerView;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (void)_loadSnapshotContentViews;
- (BOOL)_needsForegroundContainerView;
- (BOOL)_needsVignette;
- (double)_parallaxScaleFactor;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_removeAllSubviewsFrom:(id)arg1;
- (void)_scrubToDate:(id)arg1 animated:(BOOL)arg2;
- (id)_selectedContentView;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (BOOL)_shouldAdjustLayoutForTimeTravel;
- (BOOL)_shouldFadeToTransitionView;
- (void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
- (BOOL)_supportsTimeScrubbing;
- (double)_timeLabelAlphaForEditMode:(long long)arg1;
- (BOOL)_timeLabelUsesLegibility;
- (double)_timeTravelCaptionLabelMaxWidth;
- (double)_timeTravelStatusModuleCaptionConstraintPadding;
- (double)_timeTravelYAdjustment;
- (void)_unloadSnapshotContentViews;
- (id)_updateFontInStyle:(id)arg1 monospace:(BOOL)arg2;
- (BOOL)_usesCustomZoom;
- (id)_viewForEditOption:(id)arg1;
- (BOOL)_wantsTimeTravelStatusModule;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setViewMode:(long long)arg1;

@end

