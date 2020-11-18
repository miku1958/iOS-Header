//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIControl, _UIFeedbackRetargetBehavior;
@protocol MPDetailScrubControllerDelegate, MPDetailedScrubbing;

@interface MPDetailScrubController : NSObject
{
    BOOL _didBeginTracking;
    BOOL _needsCommit;
    float _accumulatedDelta;
    struct CGPoint _previousLocationInView;
    struct CGPoint _beginLocationInView;
    struct CGPoint _lastCommittedLocationInView;
    float _currentValue;
    _UIFeedbackRetargetBehavior *_feedbackBehavior;
    BOOL _detailedScrubbingEnabled;
    BOOL _isTracking;
    UIControl<MPDetailedScrubbing> *_scrubbingControl;
    id<MPDetailScrubControllerDelegate> _delegate;
    double _duration;
    double _scrubbingVerticalRange;
    long long _currentScrubSpeed;
}

@property (readonly, nonatomic) long long currentScrubSpeed; // @synthesize currentScrubSpeed=_currentScrubSpeed;
@property (weak, nonatomic) id<MPDetailScrubControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL detailedScrubbingEnabled; // @synthesize detailedScrubbingEnabled=_detailedScrubbingEnabled;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) BOOL durationAllowsForDetailedScrubbing;
@property (readonly, nonatomic) BOOL isTracking; // @synthesize isTracking=_isTracking;
@property (weak, nonatomic) UIControl<MPDetailedScrubbing> *scrubbingControl; // @synthesize scrubbingControl=_scrubbingControl;
@property (nonatomic) double scrubbingVerticalRange; // @synthesize scrubbingVerticalRange=_scrubbingVerticalRange;

- (void).cxx_destruct;
- (void)_beginScrubbing;
- (void)_commitValue:(float)arg1;
- (void)_endScrubbing;
- (float)_minimumScale;
- (float)_scaleForIdealValueForVerticalPosition:(double)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithScrubbingControl:(id)arg1;
- (float)scaleForVerticalPosition:(double)arg1;

@end

