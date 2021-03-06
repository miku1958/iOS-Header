//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraEditKit/CEKDiscreteSlider.h>

@class NSTimer;

@interface CAMLowLightSlider : CEKDiscreteSlider
{
    BOOL _lowLightActive;
    BOOL __performingCaptureAnimation;
    unsigned long long __selectedIndexBeforeCaptureAnimation;
    double __remainingCaptureAnimationTime;
    NSTimer *__valueLabelUpdateTimer;
    double __inactiveTickMarkHeight;
    CDStruct_c534d91b _durationMapping;
}

@property (readonly, nonatomic) double _inactiveTickMarkHeight; // @synthesize _inactiveTickMarkHeight=__inactiveTickMarkHeight;
@property (nonatomic, getter=_isPerformingCaptureAnimation, setter=_setPerformingCaptureAnimation:) BOOL _performingCaptureAnimation; // @synthesize _performingCaptureAnimation=__performingCaptureAnimation;
@property (nonatomic, setter=_setRemainingCaptureAnimationTime:) double _remainingCaptureAnimationTime; // @synthesize _remainingCaptureAnimationTime=__remainingCaptureAnimationTime;
@property (nonatomic, setter=_setSelectedIndexBeforeCaptureAnimation:) unsigned long long _selectedIndexBeforeCaptureAnimation; // @synthesize _selectedIndexBeforeCaptureAnimation=__selectedIndexBeforeCaptureAnimation;
@property (strong, nonatomic, setter=_setValueLabelUpdateTimer:) NSTimer *_valueLabelUpdateTimer; // @synthesize _valueLabelUpdateTimer=__valueLabelUpdateTimer;
@property (nonatomic) CDStruct_c3b9c2ee durationMapping; // @synthesize durationMapping=_durationMapping;
@property (nonatomic, getter=isLowLightActive) BOOL lowLightActive; // @synthesize lowLightActive=_lowLightActive;
@property (nonatomic) unsigned long long lowLightMode;

- (void).cxx_destruct;
- (void)_handleValueLabelUpdateTimerWithStartTime:(double)arg1 duration:(double)arg2;
- (void)_startValueLabelUpdateTimerWithDuration:(double)arg1;
- (void)_stopValueLabelUpdateTimer;
- (id)_valueTextForDuration:(double)arg1;
- (id)_valueTextForDuration:(double)arg1 format:(id)arg2;
- (void)dealloc;
- (void)endCaptureAnimationAnimated:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)performCaptureAnimationWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)valueText;

@end

