//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

#import <NanoTimeKitCompanion/NTKOlympusViewDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKUtilityFlatComplicationViewDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKVictoryAnalogBackgroundViewDelegate-Protocol.h>

@class NSDate, NSString, NTKCircularAnalogDialView, NTKOlympusController, NTKOlympusTimeView, NTKRoundedCornerOverlayView, NTKVictoryAnalogBackgroundView;

@interface NTKOlympusFaceView : NTKAnalogFaceView <NTKVictoryAnalogBackgroundViewDelegate, NTKUtilityFlatComplicationViewDelegate, NTKOlympusViewDelegate>
{
    BOOL _contentLoaded;
    NTKOlympusController *_olympusController;
    NTKOlympusTimeView *_olympusView;
    NTKVictoryAnalogBackgroundView *_analogBackgroundView;
    NTKCircularAnalogDialView *_dialView;
    NTKRoundedCornerOverlayView *_cornerView;
    unsigned long long _hour;
    unsigned long long _minute;
    unsigned long long _second;
    NSDate *_date;
    double _circleDiameter;
    unsigned long long _currentStyle;
    unsigned long long _currentDial;
    unsigned long long _currentColor;
}

@property (strong, nonatomic) NTKVictoryAnalogBackgroundView *analogBackgroundView; // @synthesize analogBackgroundView=_analogBackgroundView;
@property (nonatomic) double circleDiameter; // @synthesize circleDiameter=_circleDiameter;
@property (nonatomic) BOOL contentLoaded; // @synthesize contentLoaded=_contentLoaded;
@property (strong, nonatomic) NTKRoundedCornerOverlayView *cornerView; // @synthesize cornerView=_cornerView;
@property (nonatomic) unsigned long long currentColor; // @synthesize currentColor=_currentColor;
@property (nonatomic) unsigned long long currentDial; // @synthesize currentDial=_currentDial;
@property (nonatomic) unsigned long long currentStyle; // @synthesize currentStyle=_currentStyle;
@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NTKCircularAnalogDialView *dialView; // @synthesize dialView=_dialView;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long hour; // @synthesize hour=_hour;
@property (nonatomic) unsigned long long minute; // @synthesize minute=_minute;
@property (strong, nonatomic) NTKOlympusController *olympusController; // @synthesize olympusController=_olympusController;
@property (strong, nonatomic) NTKOlympusTimeView *olympusView; // @synthesize olympusView=_olympusView;
@property (nonatomic) unsigned long long second; // @synthesize second=_second;
@property (readonly) Class superclass;

+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
- (void).cxx_destruct;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (id)_additonalViewsToApplyDesaturationDuringComplicationEditing;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyContentViewTranform:(struct CGAffineTransform)arg1;
- (void)_applyDataMode;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3 animateElements:(BOOL)arg4;
- (void)_applyTransitionFraction:(double)arg1 fromComplication:(id)arg2 toComplication:(id)arg3 slot:(id)arg4;
- (void)_applyTransitionFraction:(double)arg1 fromDial:(unsigned long long)arg2 toDial:(unsigned long long)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (double)_bezelUtilityComplicationAlphaForEditMode:(long long)arg1;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_cleanupAfterZoom;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureTimeView:(id)arg1;
- (double)_contentAlphaForEditMode:(long long)arg1;
- (void)_createAnalogBackgroundIfNeeded;
- (double)_dialAlphaForEditMode:(long long)arg1;
- (double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_loadSnapshotContentViews;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (BOOL)_needsForegroundContainerView;
- (void)_prepareForEditing;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_removeViews;
- (void)_setComplicationAlphaForTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5;
- (void)_setupController;
- (void)_setupDialViewIfNeeded;
- (void)_setupViews;
- (BOOL)_showAnalogHands;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_tearDownAnalogView;
- (void)_tearDownOlympusView;
- (double)_timeAlphaForEditMode:(long long)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_updateDialBezelComplicationColor:(id)arg1;
- (void)_updateDialTicksForBezelText;
- (BOOL)_wantsConstantSpeedZoom;
- (BOOL)_wantsStatusBarIconShadow;
- (void)applyColorOnAnalogHands;
- (void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2;
- (void)applyTransitionToCircularDialWithBezelFraction:(double)arg1;
- (double)bezelComplicationTextWidthInRadius;
- (void)configureComplicationAlphaFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)configureViewsForEditing;
- (double)contentViewScale;
- (void)createAndRemoveViewsForCurrentStateIfNeeded;
- (void)createOlympusViewIfNeeded;
- (id)customEditOptionContainerViewForSlot:(id)arg1;
- (void)dealloc;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (BOOL)isCircularDialWithBezel;
- (void)layoutSubviews;
- (void)logoTappedFromRect:(struct CGRect)arg1;
- (void)olympusView:(id)arg1 didTapAppLogoFromRect:(struct CGRect)arg2;
- (void)openVictoryAppFromRect:(struct CGRect)arg1;
- (void)setCircularMaskForCircularDialFraction:(double)arg1 circleDiameter:(double)arg2;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setTimeOffset:(double)arg1;
- (void)setupViewsForCurrentState;
- (void)tearDownDialView;
- (void)updateCircularMask;
- (id)utilityBezelComplicationView;
- (void)utilityComplicationView:(id)arg1 didChangeTextWidth:(double)arg2;

@end

