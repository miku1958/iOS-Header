//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

#import <NanoTimeKitCompanion/CLKMonochromeFilterProvider-Protocol.h>
#import <NanoTimeKitCompanion/NTKRichComplicationBezelViewDelegate-Protocol.h>

@class NSString, NTKCircularAnalogDialView, NTKWhistlerAnalogColorPalette, NTKWhistlerAnalogFaceViewComplicationFactory;

@interface NTKWhistlerAnalogFaceView : NTKAnalogFaceView <NTKRichComplicationBezelViewDelegate, CLKMonochromeFilterProvider>
{
    NTKWhistlerAnalogFaceViewComplicationFactory *_faceViewComplicationFactory;
    NTKCircularAnalogDialView *_dialView;
    NTKWhistlerAnalogColorPalette *_colorPalette;
    double _bezelLabelCurvedRadius;
    unsigned long long _color;
    unsigned long long _dateStyle;
}

@property (nonatomic) unsigned long long color; // @synthesize color=_color;
@property (nonatomic) unsigned long long dateStyle; // @synthesize dateStyle=_dateStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2;
+ (double)curvedRadiusForDevice:(id)arg1 dark:(BOOL)arg2;
- (void).cxx_destruct;
- (id)_additonalViewsToApplyDesaturationDuringComplicationEditing;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyEnteringEditingWithTransitionFraction:(double)arg1;
- (void)_applyExitingEditingWithTransitionFraction:(double)arg1;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (double)_bezelCircularBackgroundFromComplication:(id)arg1;
- (double)_bezelLabelCurvedRadiusForColor:(unsigned long long)arg1;
- (id)_bezelTextColorForEditMode:(long long)arg1 color:(unsigned long long)arg2;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (id)_complicationPickerKeylineViewForComplicationSlot:(id)arg1;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureTimeView:(id)arg1;
- (void)_configureUIOnColorChange;
- (double)_contentAlphaForEditMode:(long long)arg1;
- (double)_contentScaleForEditMode:(long long)arg1;
- (id)_customEditOptionContainerViewForSlot:(id)arg1;
- (double)_dialTextBackgroundAlphaForEditMode:(long long)arg1;
- (long long)_editMode;
- (double)_handAlphaForEditMode:(long long)arg1;
- (BOOL)_isComplicationSlotInsideDial:(id)arg1;
- (struct CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (struct UIEdgeInsets)_keylineLabelActiveAreaInsetsForComplicationAtSlot:(id)arg1;
- (struct UIEdgeInsets)_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (id)_pickerMaskForSlot:(id)arg1;
- (id)_platterTextColorForEditMode:(long long)arg1 color:(unsigned long long)arg2;
- (void)_prepareForEditing;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_reorderSwitcherSnapshotView;
- (id)_richComplicationViewForView:(id)arg1;
- (long long)_richComplicationViewThemeFromFaceColor:(unsigned long long)arg1;
- (void)_setupDialView;
- (BOOL)_supportsTimeScrubbing;
- (void)_unloadSnapshotContentViews;
- (void)_updateDialTicksForBezelText;
- (double)_verticalPaddingForStatusBar;
- (BOOL)_wantsDimWithDesaturationFilterDuringComplicationEditing;
- (void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2;
- (void)bezelViewDidBecomeInteractive:(id)arg1;
- (void)bezelViewDidEndInteractive:(id)arg1;
- (id)colorForView:(id)arg1 accented:(BOOL)arg2;
- (void)complicationDisplayWrapperView:(id)arg1 updateCustomDataAnimationFromEarlierView:(id)arg2 laterView:(id)arg3 isForward:(BOOL)arg4 animationType:(unsigned long long)arg5 animationDuration:(double)arg6 animationFraction:(float)arg7;
- (void)didUpdateBezelTextForRichComplicationBezelView:(id)arg1;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (BOOL)viewShouldIgnoreTwoPieceImage:(id)arg1;

@end
