//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

#import <NanoTimeKitCompanion/NTKActivityFaceViewFactoryDelegate-Protocol.h>

@class HKRingsView, NSMutableDictionary, NSString, NTKActivityDateComplicationLabel, NTKActivityDialView, NTKActivityFaceControl, NTKActivityFaceViewFactory, NTKDateComplicationController, UILabel, UIView;

@interface NTKActivityAnalogFaceView : NTKAnalogFaceView <NTKActivityFaceViewFactoryDelegate>
{
    NTKActivityFaceViewFactory *_faceViewFactory;
    HKRingsView *_ringsView;
    NTKDateComplicationController *_dateComplicationController;
    NTKActivityDateComplicationLabel *_dateComplicationLabel;
    UIView *_activityContainerView;
    UILabel *_energyLabel;
    UILabel *_briskMinutesLabel;
    UILabel *_standHoursLabel;
    NTKActivityDialView *_dialView;
    NTKActivityFaceControl *_tapToLaunchButton;
    NSMutableDictionary *_faceColorsToSchemes;
    BOOL _isDetailedDensity;
    double _contentScale;
    double _activityViewsAlpha;
    BOOL _wristRaiseAnimationPending;
    BOOL _snapshotContentViewsLoaded;
    double _lastEnergyPercentage;
    double _lastBriskPercentage;
    double _lastSedentaryPercentage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_prewarm;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1;
- (void).cxx_destruct;
- (id)_accentColorForFaceColor:(unsigned long long)arg1;
- (void)_addOrRemoveChronoViewsIfNecessary;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyCurrentEntryModelAnimated:(BOOL)arg1;
- (void)_applyCurrentEntryModelByFraction:(double)arg1 updateLabels:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_applyEntryModel:(id)arg1 byFraction:(double)arg2 updateLabels:(BOOL)arg3 animated:(BOOL)arg4;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyShowsCanonicalContent;
- (void)_applyShowsLockedUI;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (id)_cachedSchemeForFaceColor:(unsigned long long)arg1;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (struct CGPoint)_contentCenterOffset;
- (void)_dateComplicationPressed:(id)arg1;
- (double)_dialAlphaForEditMode:(long long)arg1;
- (double)_dialScaleForEditMode:(long long)arg1;
- (void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_enumerateActivityLabels:(CDUnknownBlockType)arg1;
- (void)_enumerateChronoViews:(CDUnknownBlockType)arg1;
- (void)_enumerateRingGroups:(CDUnknownBlockType)arg1;
- (BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_handAlphaForEditMode:(long long)arg1;
- (id)_highlightImage;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (struct CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_launchButtonPressed:(id)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadChronoViewsIfNecessary;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_performWristRaiseAnimation;
- (void)_prepareForEditing;
- (void)_prepareWristRaiseAnimation;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1;
- (double)_ringAlphaForEditMode:(long long)arg1;
- (void)_scrubToDate:(id)arg1 animated:(BOOL)arg2;
- (void)_setActivityViewsAlpha:(double)arg1 includeDateComplication:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_showChronoDetailByFraction:(double)arg1 fillRings:(BOOL)arg2;
- (void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (struct CGPoint)_timeTravelStatusModuleCenter;
- (void)_unloadSnapshotContentViews;
- (double)_verticalPaddingForStatusBar;
- (void)applyEntryModel:(id)arg1 animated:(BOOL)arg2;
- (void)applyEntryModelWithUnfilledRings:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setDataMode:(long long)arg1;
- (void)timeTravelDateEnteredOrExitedTimelineBounds:(BOOL)arg1;

@end

