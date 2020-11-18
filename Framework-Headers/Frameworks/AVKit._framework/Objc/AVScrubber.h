//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISlider.h>

#import <AVKit/AVExternalGestureRecognizerPreventing-Protocol.h>
#import <AVKit/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSTimer, UIImageView, UIScrollView, UISelectionFeedbackGenerator, UIView;
@protocol AVScrubberDelegate;

__attribute__((visibility("hidden")))
@interface AVScrubber : UISlider <UIScrollViewDelegate, AVExternalGestureRecognizerPreventing>
{
    double _trackingStartTime;
    float _previousValue;
    double _previousValueChangeTime;
    double _currentValueChangedTime;
    BOOL _didHaveLessThanFullScrubbingSpeedSinceTrackingBegin;
    BOOL _scrollScrubbing;
    BOOL _slowKnobMovementDetected;
    BOOL _shouldRecoverFromPrecisionScrubbingIfNeeded;
    BOOL _scrubsWhenTappedAnywhere;
    BOOL _canChangeScrubbingSpeed;
    BOOL _collapsed;
    BOOL _included;
    BOOL _removed;
    BOOL _hasAlternateAppearance;
    BOOL _hasFullScreenAppearance;
    BOOL _hasChangedLocationAtLeastOnce;
    float _estimatedFrameRate;
    float _rate;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    UIView *_loadedTrackOverlayView;
    NSMutableArray *_previousScrubberVelocities;
    id<AVScrubberDelegate> _delegate;
    NSArray *_loadedTimeRanges;
    long long _scrubbingSpeed;
    double _resolution;
    UIScrollView *_scrollView;
    UIImageView *_currentThumbView;
    NSTimer *_updateSlowKnobMovementDetectedTimer;
    double _timestampWhenTrackingEnded;
    struct CGSize _extrinsicContentSize;
    struct NSDirectionalEdgeInsets _hitRectInsets;
}

@property (nonatomic) BOOL canChangeScrubbingSpeed; // @synthesize canChangeScrubbingSpeed=_canChangeScrubbingSpeed;
@property (nonatomic, getter=isCollapsed) BOOL collapsed; // @synthesize collapsed=_collapsed;
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (weak, nonatomic) UIImageView *currentThumbView; // @synthesize currentThumbView=_currentThumbView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVScrubberDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) float estimatedFrameRate; // @synthesize estimatedFrameRate=_estimatedFrameRate;
@property (nonatomic) struct CGSize extrinsicContentSize; // @synthesize extrinsicContentSize=_extrinsicContentSize;
@property (readonly, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property (nonatomic) BOOL hasAlternateAppearance; // @synthesize hasAlternateAppearance=_hasAlternateAppearance;
@property (nonatomic) BOOL hasChangedLocationAtLeastOnce; // @synthesize hasChangedLocationAtLeastOnce=_hasChangedLocationAtLeastOnce;
@property (nonatomic) BOOL hasFullScreenAppearance; // @synthesize hasFullScreenAppearance=_hasFullScreenAppearance;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct NSDirectionalEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
@property (nonatomic, getter=isIncluded) BOOL included; // @synthesize included=_included;
@property (copy, nonatomic) NSArray *loadedTimeRanges; // @synthesize loadedTimeRanges=_loadedTimeRanges;
@property (readonly, nonatomic) UIView *loadedTrackOverlayView; // @synthesize loadedTrackOverlayView=_loadedTrackOverlayView;
@property (readonly, nonatomic) NSString *localizedScrubbingSpeedName;
@property (strong, nonatomic) NSMutableArray *previousScrubberVelocities; // @synthesize previousScrubberVelocities=_previousScrubberVelocities;
@property (nonatomic) float rate; // @synthesize rate=_rate;
@property (nonatomic, getter=isRemoved) BOOL removed; // @synthesize removed=_removed;
@property (nonatomic) double resolution; // @synthesize resolution=_resolution;
@property (nonatomic, getter=isScrollScrubbing) BOOL scrollScrubbing; // @synthesize scrollScrubbing=_scrollScrubbing;
@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (nonatomic) long long scrubbingSpeed; // @synthesize scrubbingSpeed=_scrubbingSpeed;
@property (nonatomic) BOOL scrubsWhenTappedAnywhere; // @synthesize scrubsWhenTappedAnywhere=_scrubsWhenTappedAnywhere;
@property (nonatomic) BOOL shouldRecoverFromPrecisionScrubbingIfNeeded; // @synthesize shouldRecoverFromPrecisionScrubbingIfNeeded=_shouldRecoverFromPrecisionScrubbingIfNeeded;
@property (nonatomic) BOOL slowKnobMovementDetected; // @synthesize slowKnobMovementDetected=_slowKnobMovementDetected;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double timeIntervalSinceTrackingEnded;
@property (nonatomic) double timestampWhenTrackingEnded; // @synthesize timestampWhenTrackingEnded=_timestampWhenTrackingEnded;
@property (strong, nonatomic) NSTimer *updateSlowKnobMovementDetectedTimer; // @synthesize updateSlowKnobMovementDetectedTimer=_updateSlowKnobMovementDetectedTimer;

+ (id)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;
- (void).cxx_destruct;
- (BOOL)_shouldTrackTouchAtPoint:(struct CGPoint)arg1;
- (void)_updateSlowKnobMovementDetected;
- (void)_updateSlowKnobMovementDetectedForTargetValue:(float)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (BOOL)avkit_shouldPreventExternalGestureRecognizerAtPoint:(struct CGPoint)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (float)clampedEstimatedFrameRate;
- (struct CGPoint)contentOffsetFromValue;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (float)duration;
- (void)endOrCancelTracking;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isTracking;
- (void)layoutSubviews;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (float)normalizedPosition;
- (double)normalizedScrollOffset;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setValue:(float)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (void)updateScrollViewContentSizeAndOffsetIfNeeded;
- (float)valueFromScrollView;

@end
