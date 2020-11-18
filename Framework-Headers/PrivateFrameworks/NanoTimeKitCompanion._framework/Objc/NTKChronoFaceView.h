//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKSpriteKitAnalogFaceView.h>

#import <NanoTimeKitCompanion/NTKUtilityComplicationFactoryDelegate-Protocol.h>

@class NSString, NTKChronoButton, NTKChronoHandsView, NTKChronoPalette, NTKChronoScene, NTKStopwatchButton, NTKTimeIntervalLabel, NTKUtilityComplicationFactory, UIColor, UILabel, _LapLabel;

@interface NTKChronoFaceView : NTKSpriteKitAnalogFaceView <NTKUtilityComplicationFactoryDelegate>
{
    NTKStopwatchButton *_startSessionButton;
    NTKChronoButton *_pauseButton;
    NTKChronoButton *_lapResetButton;
    NTKUtilityComplicationFactory *_complicationFactory;
    NTKChronoPalette *_palette;
    UIColor *_labelColor;
    UILabel *_totalLabel;
    NTKTimeIntervalLabel *_totalTimeLabel;
    NTKTimeIntervalLabel *_lapTimeLabel;
    _LapLabel *_lapLabel;
    unsigned long long _currentMode;
    double _lastStartTime;
}

@property (readonly, nonatomic) NTKChronoScene *chronoScene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NTKChronoHandsView *timeView; // @dynamic timeView;

+ (id)_swatchColorForColorOption:(id)arg1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1;
+ (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
+ (Class)_timeViewClass;
- (void).cxx_destruct;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyDataMode;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyPaletteToTimeView:(id)arg1;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransformToForegroundViews:(struct CGAffineTransform)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (double)_buttonAlphaForEditMode:(long long)arg1;
- (BOOL)_canStartTimeScrubbing;
- (void)_cleanupAfterZoom;
- (void)_configureComplicationAlphasForFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_considerUpdatingLabels;
- (id)_dateAccentColorForEditMode:(long long)arg1;
- (struct CGPoint)_dateComplicationCenterOffset;
- (id)_dateComplicationFontForStyle:(unsigned long long)arg1;
- (struct CGPoint)_dateComplicationRightAlignment;
- (id)_dateForegroundColorForEditMode:(long long)arg1;
- (void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_enumerateChronoModeViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTimeModeViewsWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_handsAlphaForEditMode:(long long)arg1;
- (BOOL)_handsAreInForegroundForEditMode:(long long)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (struct CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_lapResetButtonPressed;
- (void)_layoutForegroundContainerView;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadChronoModeViews;
- (void)_loadLayoutRules;
- (void)_loadScene;
- (void)_loadSnapshotContentViews;
- (void)_loadTimeModeViews;
- (BOOL)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_pauseButtonPressed;
- (void)_performWristRaiseAnimation;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_prepareWristRaiseAnimation;
- (void)_reconsiderStopwatchUpdates;
- (void)_reloadStopwatchState;
- (void)_setDateComplicationAlpha:(double)arg1 animated:(BOOL)arg2;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_showAppropriateModeAnimated:(BOOL)arg1;
- (void)_showChronographModeAnimated:(BOOL)arg1;
- (void)_showTimeModeAnimated:(BOOL)arg1;
- (void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_startSessionButtonPressed;
- (void)_startStopwatchUpdates;
- (void)_stopStopwatchUpdates;
- (BOOL)_supportsUnadornedSnapshot;
- (void)_unloadSnapshotContentViews;
- (void)_updateComplicationFactoryWithDateComplicationView:(id)arg1;
- (void)_updateDateComplicationPositionIfNecessary;
- (void)_updateStopwatchButtons;
- (void)_updateStopwatchLabels;
- (BOOL)_usesCustomZoom;
- (long long)_utilitySlotForSlot:(id)arg1;
- (double)_verticalPaddingForStatusBar;
- (BOOL)_wantsStatusBarHidden;
- (void)dealloc;
- (void)fadeInLowerSubdialAnimated:(BOOL)arg1;
- (void)fadeOutLowerSubdialAnimated:(BOOL)arg1;
- (void)fadeStartSessionButtonToAlpha:(double)arg1 animated:(BOOL)arg2;
- (BOOL)inSession;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)lapAdded;
- (BOOL)lapReset;
- (void)reload;
- (void)setUserInteractionForButtonsEnabled:(BOOL)arg1;
- (BOOL)startStop;
- (void)stateChanged;
- (void)updateStartSessionButtonGlyph;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1;

@end

