//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class NTKExplorerDialView, NTKExplorerHandsView, NTKExplorerStatusView, NTKFaceLayoutContentProvider;

@interface NTKExplorerFaceView : NTKAnalogFaceView
{
    NTKFaceLayoutContentProvider *_layoutContentProvider;
    NTKExplorerDialView *_dialView;
    NTKExplorerStatusView *_statusView;
    BOOL _observingConnectivity;
    long long _signalAnimationState;
    long long _dotPosition;
    unsigned long long _density;
    unsigned long long _color;
}

@property (nonatomic) unsigned long long color; // @synthesize color=_color;
@property (nonatomic) unsigned long long density; // @synthesize density=_density;
@property (readonly, nonatomic) NTKExplorerHandsView *timeView; // @dynamic timeView;

+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1;
+ (id)_swatchImageForColorOption:(id)arg1;
+ (Class)_timeViewClass;
- (void).cxx_destruct;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyColor:(unsigned long long)arg1;
- (void)_applyDensity:(unsigned long long)arg1;
- (void)_applyFrozen;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyShowsCanonicalContent;
- (void)_applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toOption:(unsigned long long)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureReusableTimeView:(id)arg1;
- (double)_contentAlphaForEditMode:(long long)arg1;
- (struct CGPoint)_contentCenterOffset;
- (double)_contentScaleForEditMode:(long long)arg1;
- (double)_handAlphaForEditMode:(long long)arg1;
- (struct CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_prepareForEditing;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (BOOL)_supportsTimeScrubbing;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_unloadSnapshotContentViews;
- (double)_verticalPaddingForStatusBar;
- (id)initWithFrame:(struct CGRect)arg1;

@end
