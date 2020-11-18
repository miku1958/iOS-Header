//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceView.h>

@class NTKComplicationDisplayWrapperView, NTKUtilityComplicationFactory, UIColor;

@interface NTKVictoryDigitalFaceView : NTKFaceView
{
    NTKUtilityComplicationFactory *_utilityComplicationFactory;
    UIColor *_complicationForegroundColor;
    UIColor *_complicationPlatterColor;
    NTKComplicationDisplayWrapperView *_logoWrapperView;
    struct CGPoint _logoPlatterCenter;
    double _currentLogoPlatterXOffset;
}

+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1;
+ (id)_swatchImageForColorOption:(id)arg1;
- (void).cxx_destruct;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyColor:(id)arg1 platterColor:(id)arg2 toComplicationView:(id)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (double)_bottomComplicationAlphaForEditMode:(long long)arg1;
- (void)_cleanupAfterEditing;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (double)_keylineEdgeGapForState:(long long)arg1;
- (struct CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (double)_logoPlatterAlphaForEditMode:(long long)arg1;
- (double)_logoPlatterXOffsetForEditMode:(long long)arg1;
- (void)_logoTapped;
- (BOOL)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_positionLogoPlatterView;
- (void)_prepareForEditing;
- (void)_scrubToDate:(id)arg1 animated:(BOOL)arg2;
- (void)_setupLogoViews;
- (BOOL)_supportsTimeScrubbing;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (double)_timeAlphaForEditMode:(long long)arg1;
- (double)_timeTravelStatusModuleCaptionConstraintPadding;
- (void)_unloadSnapshotContentViews;
- (long long)_utilitySlotForSlot:(id)arg1;
- (double)_verticalPaddingForStatusBar;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

