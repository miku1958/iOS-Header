//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <MediaControls/UIGestureRecognizerDelegate-Protocol.h>

@class AVTimeFormatter, CADisplayLink, MPCPlayerResponse, NSArray, NSLayoutConstraint, NSString, UIImageView, UILabel, UILayoutGuide, UIView;

@interface MediaControlsTimeControl : UIControl <UIGestureRecognizerDelegate>
{
    NSArray *_defaultConstraints;
    NSArray *_trackingConstraints;
    NSArray *_initialConstraints;
    NSLayoutConstraint *_knobViewXConstraint;
    CADisplayLink *_displayLink;
    AVTimeFormatter *_elapsedTimeFormatter;
    AVTimeFormatter *_remainingTimeFormatter;
    double _lastRecordedTime;
    double _currentTimeInTrack;
    NSString *_elapsedTime;
    NSString *_remainingTime;
    BOOL _debugPreviousDisplayLinkPaused;
    BOOL _transitioning;
    BOOL _empty;
    BOOL _timeControlOnScreen;
    BOOL _currentlyTracking;
    long long _style;
    MPCPlayerResponse *_response;
    UIView *_elapsedTrack;
    UIView *_remainingTrack;
    UIView *_knobView;
    UILabel *_elapsedTimeLabel;
    UILabel *_remainingTimeLabel;
    UILabel *_liveLabel;
    UIImageView *_liveBackground;
    UILayoutGuide *_trackLayoutGuide;
    double _sliderValue;
    CDStruct_fce57115 _durationSnapshot;
}

@property (nonatomic, getter=isCurrentlyTracking) BOOL currentlyTracking; // @synthesize currentlyTracking=_currentlyTracking;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CDStruct_fce57115 durationSnapshot; // @synthesize durationSnapshot=_durationSnapshot;
@property (strong, nonatomic) UILabel *elapsedTimeLabel; // @synthesize elapsedTimeLabel=_elapsedTimeLabel;
@property (strong, nonatomic) UIView *elapsedTrack; // @synthesize elapsedTrack=_elapsedTrack;
@property (nonatomic, getter=isEmpty) BOOL empty; // @synthesize empty=_empty;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIView *knobView; // @synthesize knobView=_knobView;
@property (strong, nonatomic) UIImageView *liveBackground; // @synthesize liveBackground=_liveBackground;
@property (strong, nonatomic) UILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property (strong, nonatomic) UILabel *remainingTimeLabel; // @synthesize remainingTimeLabel=_remainingTimeLabel;
@property (strong, nonatomic) UIView *remainingTrack; // @synthesize remainingTrack=_remainingTrack;
@property (strong, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
@property (nonatomic) double sliderValue; // @synthesize sliderValue=_sliderValue;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTimeControlOnScreen) BOOL timeControlOnScreen; // @synthesize timeControlOnScreen=_timeControlOnScreen;
@property (strong, nonatomic) UILayoutGuide *trackLayoutGuide; // @synthesize trackLayoutGuide=_trackLayoutGuide;
@property (nonatomic, getter=isTransitioning) BOOL transitioning; // @synthesize transitioning=_transitioning;

- (void).cxx_destruct;
- (void)_displayLinkTick:(id)arg1;
- (void)_updateDisplayLinkPause;
- (void)_updateLabels:(double)arg1 withRemainingDuration:(double)arg2;
- (void)_updateLabels:(CDStruct_fce57115)arg1 withTargetTimestamp:(double)arg2;
- (void)_updateSliderPosition;
- (void)_updateStyle;
- (void)_updateTimeControl;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)createDisplayLinkIfNeeded;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidateDisplayLinkIfNeeded;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLabelAvoidance;
- (void)viewDidMoveToSuperview;

@end

