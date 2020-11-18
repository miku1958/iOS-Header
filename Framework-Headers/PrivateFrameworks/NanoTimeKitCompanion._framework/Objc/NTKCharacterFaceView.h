//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceView.h>

#import <NanoTimeKitCompanion/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, NTKCharacterTimeView, NTKUtilityComplicationFactory, UIColor, UITapGestureRecognizer, UIView;

@interface NTKCharacterFaceView : NTKFaceView <UIGestureRecognizerDelegate>
{
    NTKCharacterTimeView *_characterTimeView;
    UIView *_circleView;
    UIView *_handsView;
    NTKUtilityComplicationFactory *_complicationFactory;
    UITapGestureRecognizer *_timeTapRecognizer;
    unsigned int _isContentLoaded:1;
    long long _prevDataMode;
    unsigned long long _optionCharacter;
    UIColor *_optionClothingColor;
    double _optionClothingDesaturation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_prewarm;
+ (id)_swatchColorForColorOption:(id)arg1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1;
- (void).cxx_destruct;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyDataMode;
- (void)_applyDataModeFromOldDataMode:(long long)arg1;
- (void)_applyForegroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyShowsCanonicalContent;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_faceTapped:(id)arg1;
- (BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (BOOL)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_performWristRaiseAnimation;
- (void)_prepareForEditing;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_prepareWristRaiseAnimation;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1;
- (void)_scrubToDate:(id)arg1 animated:(BOOL)arg2;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)_supportsTimeScrubbing;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (struct CGRect)_tapToSpeakRect;
- (void)_unloadSnapshotContentViews;
- (void)_updateComplicationViewsAlphasWithAnimation:(BOOL)arg1;
- (BOOL)_usesCustomZoom;
- (long long)_utilitySlotForSlot:(id)arg1;
- (double)_verticalPaddingForStatusBar;
- (void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
