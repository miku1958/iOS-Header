//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CMKExposureBiasSliderThumb;

@interface CMKExposureBiasSlider : UIView
{
    BOOL _suspendTrackFadeOut;
    float _exposureBiasMin;
    float _exposureBiasMax;
    float _exposureBiasValue;
    CMKExposureBiasSliderThumb *__thumbView;
    UIView *__minTrackView;
    UIView *__maxTrackView;
    UIView *__minTrackMaskView;
    UIView *__maxTrackMaskView;
    double __lastInteractionTime;
}

@property (readonly, nonatomic) double _lastInteractionTime; // @synthesize _lastInteractionTime=__lastInteractionTime;
@property (readonly, strong, nonatomic) UIView *_maxTrackMaskView; // @synthesize _maxTrackMaskView=__maxTrackMaskView;
@property (readonly, strong, nonatomic) UIView *_maxTrackView; // @synthesize _maxTrackView=__maxTrackView;
@property (readonly, strong, nonatomic) UIView *_minTrackMaskView; // @synthesize _minTrackMaskView=__minTrackMaskView;
@property (readonly, strong, nonatomic) UIView *_minTrackView; // @synthesize _minTrackView=__minTrackView;
@property (readonly, strong, nonatomic) CMKExposureBiasSliderThumb *_thumbView; // @synthesize _thumbView=__thumbView;
@property (nonatomic) float exposureBiasMax; // @synthesize exposureBiasMax=_exposureBiasMax;
@property (nonatomic) float exposureBiasMin; // @synthesize exposureBiasMin=_exposureBiasMin;
@property (nonatomic) float exposureBiasValue; // @synthesize exposureBiasValue=_exposureBiasValue;
@property (nonatomic) BOOL suspendTrackFadeOut; // @synthesize suspendTrackFadeOut=_suspendTrackFadeOut;
@property (readonly, nonatomic) double thumbMaxExtension;

- (void).cxx_destruct;
- (void)_animateTrackAlpha:(double)arg1 withDuration:(double)arg2;
- (void)_cancelDelayedDim;
- (void)_dimTrackForInactivity;
- (float)_normalizedExposureValue;
- (void)_scheduleDelayedDim;
- (struct CGPoint)_sunCenterForNormalizedValue:(float)arg1;
- (double)_trackAlpha;
- (void)_updateForChangedNormalizedExposureValue;
- (void)forceTrackDimmed;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateLastInteractionTime;

@end

