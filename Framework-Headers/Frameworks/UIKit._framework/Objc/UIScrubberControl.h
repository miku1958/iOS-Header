//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIOldSliderControl.h>

@class UIView;

@interface UIScrubberControl : UIOldSliderControl
{
    CDUnion_b710d1cf _sliderAvailableFill;
    double _duration;
    float _lastDisplayedWidth;
    float _maxTrackWidth;
    UIView *_elapsedTimeView;
    UIView *_remainingTimeView;
    id _delegate;
    double _trackingStartTime;
    struct CGPoint _lastUpdatedPoint;
    float _valueAvailable;
    unsigned int _didDrag:1;
    unsigned int _sentScrubbingStart:1;
    unsigned int _autoSizesToFitDuration:1;
    unsigned int _layoutTimeParts:2;
    unsigned int _remainingIsDuration:1;
    unsigned int _delegateDidEnterScrubbingState:1;
    unsigned int _delegateDidChangeScrubValue:1;
    unsigned int _delegateShouldBeginScrubbing:1;
    unsigned int _endingTracking:1;
    unsigned int _showKnob:1;
    unsigned int _largeKnob:1;
    unsigned int _rightCapIsDownloadCap:1;
    unsigned int _requireMomentaryDelay:1;
    unsigned int _showFullWidthComponents:1;
    unsigned int _alwaysShowAllComponentsForDuration:1;
    unsigned int _timeLayoutDisabledCount:7;
    unsigned int _timeLayoutSkippedLayout:1;
    unsigned int _timeLayoutSkippedForcedLayout:1;
    unsigned int _showTimeCentered:1;
    unsigned int _leftCapIsDownloadCap:1;
    unsigned int _allowsAnyValue:1;
    unsigned int _unused:3;
}

+ (BOOL)allowLayeredFillForKnob;
- (BOOL)_notAllValueAvailable;
- (struct CGRect)_rectOfTrack;
- (void)_resetTimeFrames;
- (void)_sendDelegateDidEnterScrubbingState:(BOOL)arg1;
- (void)_setValue:(float)arg1 andSendAction:(BOOL)arg2;
- (void)_updateAvailableFill;
- (void)_updateTimes:(BOOL)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createSliderKnobView;
- (void)dealloc;
- (void)disableTimesLayout;
- (void)drawSliderPiece:(int)arg1 inRect:(struct CGRect)arg2;
- (double)duration;
- (void)enableTimesLayout;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)fillBounds;
- (struct CGRect)hitRect;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)imageForSliderPiece:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 maxTrackWidth:(float)arg2 showTimes:(BOOL)arg3 knobStyle:(int)arg4;
- (id)initWithFrame:(struct CGRect)arg1 maxTrackWidth:(float)arg2 showTimes:(BOOL)arg3 showKnob:(BOOL)arg4;
- (const CDStruct_869f9c67 *)metrics;
- (BOOL)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInsideKnob:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (BOOL)pointInsideKnob:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)requiredAutoUpdateDurationForDuration:(double)arg1;
- (float)scrubValue;
- (void)setAllowsAnyValue:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setPinTimeToOutsideEdges:(BOOL)arg1;
- (void)setScrubbingRequiresMomentaryDelay:(BOOL)arg1;
- (void)setShowDuration:(BOOL)arg1;
- (void)setShowFullWidthComponents:(BOOL)arg1;
- (void)setShowTimeCenteredInAvailableArea:(BOOL)arg1;
- (void)setTimeColor:(id)arg1;
- (void)setTimeShadowColor:(id)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2 animationCurve:(int)arg3;
- (void)setValueAvailable:(float)arg1;
- (void)sizeToFit;
- (struct CGRect)sliderBounds;

@end

