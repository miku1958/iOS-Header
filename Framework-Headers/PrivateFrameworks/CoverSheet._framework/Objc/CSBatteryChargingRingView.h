//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSBatteryChargingView.h>

@class CABackdropLayer, CALayer, CSAccessoryConfiguration, CSRingLayer, SBUILegibilityLabel, UIView;

@interface CSBatteryChargingRingView : CSBatteryChargingView
{
    BOOL _isBatterySaverModeActive;
    CSAccessoryConfiguration *_configuration;
    CABackdropLayer *_ringBlurBackdropLayer;
    CALayer *_chargingBoltGlyph;
    CABackdropLayer *_backgroundRadiusBackdropLayer;
    CABackdropLayer *_backgroundBackdropLayer;
    CABackdropLayer *_averageColorBackdropLayer;
    CALayer *_ringTempOverlayLayer;
    CALayer *_splashRing;
    CSRingLayer *_batteryLevelRing;
    CSRingLayer *_trackFillRingLayer;
    CSRingLayer *_ringBlurLayer;
    SBUILegibilityLabel *_chargePercentLabel;
    UIView *_chargingContainerView;
}

@property (strong, nonatomic) CABackdropLayer *averageColorBackdropLayer; // @synthesize averageColorBackdropLayer=_averageColorBackdropLayer;
@property (strong, nonatomic) CABackdropLayer *backgroundBackdropLayer; // @synthesize backgroundBackdropLayer=_backgroundBackdropLayer;
@property (strong, nonatomic) CABackdropLayer *backgroundRadiusBackdropLayer; // @synthesize backgroundRadiusBackdropLayer=_backgroundRadiusBackdropLayer;
@property (strong, nonatomic) CSRingLayer *batteryLevelRing; // @synthesize batteryLevelRing=_batteryLevelRing;
@property (strong, nonatomic) SBUILegibilityLabel *chargePercentLabel; // @synthesize chargePercentLabel=_chargePercentLabel;
@property (strong, nonatomic) CALayer *chargingBoltGlyph; // @synthesize chargingBoltGlyph=_chargingBoltGlyph;
@property (strong, nonatomic) UIView *chargingContainerView; // @synthesize chargingContainerView=_chargingContainerView;
@property (strong, nonatomic) CSAccessoryConfiguration *configuration; // @synthesize configuration=_configuration;
@property (nonatomic) BOOL isBatterySaverModeActive; // @synthesize isBatterySaverModeActive=_isBatterySaverModeActive;
@property (strong, nonatomic) CABackdropLayer *ringBlurBackdropLayer; // @synthesize ringBlurBackdropLayer=_ringBlurBackdropLayer;
@property (strong, nonatomic) CSRingLayer *ringBlurLayer; // @synthesize ringBlurLayer=_ringBlurLayer;
@property (strong, nonatomic) CALayer *ringTempOverlayLayer; // @synthesize ringTempOverlayLayer=_ringTempOverlayLayer;
@property (strong, nonatomic) CALayer *splashRing; // @synthesize splashRing=_splashRing;
@property (strong, nonatomic) CSRingLayer *trackFillRingLayer; // @synthesize trackFillRingLayer=_trackFillRingLayer;

- (void).cxx_destruct;
- (id)_chargePercentFont;
- (void)_chargingBoltDismissAnimationWithDuration;
- (void)_chargingBoltPresentAnimationWithDuration;
- (BOOL)_isDarkerSystemColorsEnabled;
- (BOOL)_isReduceMotionEnabled;
- (BOOL)_isReduceTransparencyEnabled;
- (void)_layoutChargePercentLabel;
- (void)_runAnimationWithType:(unsigned long long)arg1;
- (void)_runBatteryLevelDismissAnimation;
- (void)_runBatteryLevelRingAnimation;
- (void)_runChargingBoltAnimationVisible:(BOOL)arg1;
- (void)_runChargingLabelPresentAnimation;
- (void)_runDimAnimation;
- (void)_runRingBlurAnimation;
- (void)_runSplashRingAnimation;
- (id)_updateChargeString:(id)arg1 oldLabel:(id)arg2;
- (double)batteryChargingLevel;
- (long long)batteryCount;
- (BOOL)batteryVisible;
- (id)colorForBatteryLevel:(double)arg1;
- (double)desiredVisibilityDuration;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (void)layoutSubviews;
- (void)performAnimation:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setBatteryVisible:(BOOL)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;

@end

