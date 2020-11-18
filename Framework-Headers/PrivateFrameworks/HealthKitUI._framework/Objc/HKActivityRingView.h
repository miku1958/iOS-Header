//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class ARUIRenderer, ARUIRingsView, HKActivitySummary, _HKShapeView;

@interface HKActivityRingView : UIView
{
    ARUIRingsView *_ringsView;
    ARUIRenderer *_renderer;
    _HKShapeView *_maskView;
    BOOL _shouldBypassApplicationStateChecking;
    HKActivitySummary *_activitySummary;
    double _ringInsetPercentage;
    double _emptyRingAlpha;
}

@property (strong, nonatomic) HKActivitySummary *activitySummary; // @synthesize activitySummary=_activitySummary;
@property (nonatomic, getter=_emptyRingAlpha, setter=_setEmptyRingAlpha:) double emptyRingAlpha; // @synthesize emptyRingAlpha=_emptyRingAlpha;
@property (nonatomic, getter=_ringInsetPercentage, setter=_setRingInsetPercentage:) double ringInsetPercentage; // @synthesize ringInsetPercentage=_ringInsetPercentage;
@property (nonatomic, getter=_shouldBypassApplicationStateChecking, setter=_setShouldBypassApplicationStateChecking:) BOOL shouldBypassApplicationStateChecking; // @synthesize shouldBypassApplicationStateChecking=_shouldBypassApplicationStateChecking;

- (void).cxx_destruct;
- (void)_displayIconsForWheelchairUser:(BOOL)arg1;
- (double)_ringDiameter;
- (void)_setActivityRingViewBackgroundColor:(id)arg1;
- (void)_setActivityRingViewBackgroundTransparent:(BOOL)arg1;
- (void)_setActivitySummary:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setRingDiameter:(double)arg1 ringInterspacing:(double)arg2 ringThickness:(double)arg3;
- (void)_setUpAfterInit;
- (void)_setUpRingsView;
- (id)_snapshotImage;
- (void)_updateAndInterpolateRingsViewDiameterForWidth:(double)arg1 lowerDirective:(id)arg2 higherDirective:(id)arg3;
- (void)_updateMaskPath;
- (void)_updateRingsViewDiameter;
- (void)_updateRingsViewDiameterLegacy;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 renderer:(id)arg2;
- (void)layoutSubviews;
- (void)setActivitySummary:(id)arg1 animated:(BOOL)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end
