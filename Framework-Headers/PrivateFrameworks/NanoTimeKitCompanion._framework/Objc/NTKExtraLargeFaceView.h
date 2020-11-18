//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceView.h>

@class NTKDigitalTimeLabel, NTKDigitalTimeLabelStyle, NTKExtraLargeTimeView, NTKFaceColorScheme, UILabel, UITapGestureRecognizer, UIView;

@interface NTKExtraLargeFaceView : NTKFaceView
{
    UIView *_zoomingIconCircleView;
    UIView *_zoomingIconTimeView;
    NTKFaceColorScheme *_colorScheme;
    unsigned long long _faceColor;
    double _currentFaceViewScale;
    double _currentFaceOffsetY;
    NTKExtraLargeTimeView *_largeTimeLabel;
    NTKDigitalTimeLabel *_smallTimeLabel;
    NTKDigitalTimeLabelStyle *_smallTimeLabelStyle;
    UILabel *_timeTravelLabel;
    NTKDigitalTimeLabelStyle *_timeTravelStyle;
    UIView *_timeTravelExitView;
    UITapGestureRecognizer *_timeTravelExitRecognizer;
    BOOL _statusBarIsVisible;
    BOOL _viewsOffsetForStatusBar;
    BOOL _isEditing;
    BOOL _complicationIsVisible;
    BOOL _snapshotContentViewsLoaded;
    UIView *_complicationEditingTimeOverlayView;
}

+ (id)_swatchImageForColorOption:(id)arg1;
- (void).cxx_destruct;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyFrozen;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (BOOL)_canStartTimeScrubbing;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (id)_complicationView;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureLargeTimeLabelColors;
- (void)_configureSmallTimeLabelColors;
- (void)_handleTimeTravelTapGesture:(id)arg1;
- (void)_initLargeTimeLabelIfNecessary;
- (void)_initSmallTimeLabelIfNecessary;
- (struct CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_layoutForegroundContainerView;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (BOOL)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_noteComplicationVisibilityChanged;
- (void)_performWristRaiseAnimation;
- (void)_prepareForEditing;
- (void)_prepareForStatusChange:(BOOL)arg1;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_prepareWristRaiseAnimation;
- (void)_scrubToDate:(id)arg1 animated:(BOOL)arg2;
- (double)_smallTimeAlphaForEditMode:(long long)arg1;
- (void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (double)_statusBarOffsetForComplication;
- (double)_statusBarOffsetForComplicationBackground;
- (double)_statusBarOffsetForSmallTime;
- (BOOL)_supportsTimeScrubbing;
- (id)_timeTravelStyle;
- (void)_unloadSnapshotContentViews;
- (void)_updateComplicationVisibility;
- (double)_verticalPaddingForStatusBar;
- (BOOL)_wantsTimeTravelStatusModule;
- (void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;

@end
