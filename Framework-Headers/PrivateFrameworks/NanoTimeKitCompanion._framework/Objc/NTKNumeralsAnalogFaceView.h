//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class NTKEditOptionPickerView, NTKNumeralsHourViewsManager, NTKUtilityComplicationFactory;

@interface NTKNumeralsAnalogFaceView : NTKAnalogFaceView
{
    NTKUtilityComplicationFactory *_complicationFactory;
    long long _utilitySlot;
    BOOL _areAllComplicationsOff;
    BOOL _complicationPositionNeedsUpdate;
    unsigned long long _faceColor;
    NTKEditOptionPickerView *_stylePickerView;
    NTKNumeralsHourViewsManager *_hourViewsManager;
    unsigned long long _selectedStyle;
    struct NSNumber *_clockTimerToken;
}

+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1;
+ (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void).cxx_destruct;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyDataMode;
- (void)_applyFaceColor:(unsigned long long)arg1 toComplicationView:(id)arg2;
- (void)_applyForegroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_applyFrozen;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyStyle:(unsigned long long)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_cleanupAfterStyleEditing;
- (long long)_complicationPlacementForCurrentHour;
- (long long)_complicationPlacementForHour:(long long)arg1;
- (void)_configureComplicationFactory:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForStyleEditing;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (long long)_currentHour;
- (void)_displayLinkFired;
- (void)_enumerateComplicationViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)_faceConfiguration;
- (id)_faceCurrentDate;
- (BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (void)_handleTimeChange;
- (double)_handsAlphaForEditMode:(long long)arg1;
- (BOOL)_isInTimeTravel;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (struct CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (struct CGRect)_keylineFrameForFullScreenEditingReducedForOutsideLabel;
- (struct CGRect)_keylineFrameForStyleEditing;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadHoursManagerIfNecessary;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (BOOL)_needComplicationAnimationForChangeToHour:(long long)arg1;
- (BOOL)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_prepareForHourChangeWithSecondsUntilChange:(double)arg1;
- (void)_prepareForStatusChange:(BOOL)arg1;
- (void)_scrubToDate:(id)arg1 animated:(BOOL)arg2;
- (double)_secondHandAlphaForEditMode:(long long)arg1;
- (long long)_styleIndexForStyle:(unsigned long long)arg1;
- (struct CGPoint)_timeTravelStatusModuleCenter;
- (BOOL)_timeViewBehindContentForEditMode:(long long)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_updateAreAllComplicationsOffState;
- (void)_updateComplicationAndHourNodePlacementsWithToHour:(long long)arg1 duration:(double)arg2;
- (void)_updateComplicationPositionWithAnimationProgress:(double)arg1;
- (void)dealloc;
- (void)endScrubbingAnimated:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;

@end

