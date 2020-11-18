//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class NTKColorAnalogBackgroundView, UIColor, UIView;

@interface NTKColorAnalogFaceView : NTKAnalogFaceView
{
    UIView *_backgroundComplicationContainerView;
    NTKColorAnalogBackgroundView *_backgroundView;
    UIColor *_complicationForegroundColor;
    UIColor *_complicationPlatterColor;
    UIColor *_monogramForegroundColor;
    unsigned long long _currentStyle;
    unsigned long long _currentColor;
    struct CGRect _monogramOverrideFrame;
}

+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
- (void).cxx_destruct;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (id)_colorComplicationViewForSlot:(id)arg1;
- (id)_complicationContainerViewForSlot:(id)arg1;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (id)_complicationSlotsHiddenByEditOption:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureReusableTimeView:(id)arg1;
- (double)_edgeGapForState:(long long)arg1;
- (void)_enumerateColorComplicationSlotsWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (struct CGRect)_frameForComplicationDisplayWrapper:(id)arg1 inSlot:(id)arg2;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (double)_lisaGapForState:(long long)arg1;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (struct UIEdgeInsets)_monogramKeylinePadding;
- (struct CGRect)_monogramReferenceFrameForState:(long long)arg1;
- (struct CGRect)_monogramReferenceFrameForState:(long long)arg1 style:(unsigned long long)arg2;
- (BOOL)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_unloadSnapshotContentViews;
- (BOOL)_wantsStatusBarIconShadow;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)layoutSubviews;

@end

