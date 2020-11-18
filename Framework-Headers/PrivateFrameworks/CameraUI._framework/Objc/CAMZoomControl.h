//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <CameraUI/CAMZoomButtonDelegate-Protocol.h>

@class CAMZoomButton, CAMZoomControlButtonMaskView, CAMZoomDial, NSDate, NSString, NSTimer, UIView;
@protocol CAMZoomControlDelegate;

@interface CAMZoomControl : UIControl <CAMZoomButtonDelegate>
{
    BOOL _zoomDialEnabled;
    BOOL __eligibleForTapInEmptySpace;
    BOOL __shouldShowZoomDial;
    id<CAMZoomControlDelegate> _delegate;
    long long _layoutStyle;
    long long _orientation;
    CAMZoomButton *__zoomButton;
    CAMZoomDial *__zoomDial;
    UIView *__dialClippingView;
    CAMZoomControlButtonMaskView *__buttonMaskView;
    double __previousTouchTime;
    NSTimer *__zoomDialVisibilityTimer;
    NSDate *__startTimeForHideAnimationInProgress;
    struct CGPoint __startTouchLocation;
    struct CGPoint __previousTouchLocation;
    struct UIEdgeInsets _contentInsets;
}

@property (readonly, nonatomic) CAMZoomControlButtonMaskView *_buttonMaskView; // @synthesize _buttonMaskView=__buttonMaskView;
@property (readonly, nonatomic) UIView *_dialClippingView; // @synthesize _dialClippingView=__dialClippingView;
@property (nonatomic, getter=_isEligibleForTapInEmptySpace, setter=_setEligibleForTapInEmptySpace:) BOOL _eligibleForTapInEmptySpace; // @synthesize _eligibleForTapInEmptySpace=__eligibleForTapInEmptySpace;
@property (nonatomic, setter=_setPreviousTouchLocation:) struct CGPoint _previousTouchLocation; // @synthesize _previousTouchLocation=__previousTouchLocation;
@property (nonatomic, setter=_setPreviousTouchTime:) double _previousTouchTime; // @synthesize _previousTouchTime=__previousTouchTime;
@property (nonatomic, setter=_setShouldShowZoomDial:) BOOL _shouldShowZoomDial; // @synthesize _shouldShowZoomDial=__shouldShowZoomDial;
@property (strong, nonatomic, setter=_setStartTimeForHideAnimationInProgress:) NSDate *_startTimeForHideAnimationInProgress; // @synthesize _startTimeForHideAnimationInProgress=__startTimeForHideAnimationInProgress;
@property (nonatomic, setter=_setStartTouchLocation:) struct CGPoint _startTouchLocation; // @synthesize _startTouchLocation=__startTouchLocation;
@property (readonly, nonatomic) CAMZoomButton *_zoomButton; // @synthesize _zoomButton=__zoomButton;
@property (readonly, nonatomic) CAMZoomDial *_zoomDial; // @synthesize _zoomDial=__zoomDial;
@property (strong, nonatomic, setter=_setZoomDialVisibilityTimer:) NSTimer *_zoomDialVisibilityTimer; // @synthesize _zoomDialVisibilityTimer=__zoomDialVisibilityTimer;
@property (nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CAMZoomControlDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (nonatomic) double maximumZoomFactor;
@property (nonatomic) double minimumZoomFactor;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (nonatomic) BOOL shouldDisableValuesBelow2x;
@property (nonatomic) BOOL shouldShowLabelAt2x;
@property (readonly) Class superclass;
@property (nonatomic, getter=isZoomDialEnabled) BOOL zoomDialEnabled; // @synthesize zoomDialEnabled=_zoomDialEnabled;
@property (nonatomic) double zoomFactor;

- (void).cxx_destruct;
- (double)_accelerationForMovementFromPointFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 elapsedTime:(double)arg3;
- (double)_additionalAccelerationForMovementFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 deltaX:(double)arg3;
- (void)_cancelDelayedZoomDialVisibilityChange;
- (double)_dampingFactorForDistanceFromDialForPoint:(struct CGPoint)arg1;
- (double)_dampingFactorForMovementFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (double)_dampingFactorForPerpendicularityFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (double)_distanceFromDialClippingViewToPoint:(struct CGPoint)arg1;
- (void)_handleZoomDialVisibilityTimerFiredWithUserInfo:(id)arg1;
- (BOOL)_isWithinZoomButtonBoundsWithTouch:(id)arg1;
- (double)_normalizeValue:(double)arg1 betweenMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (void)_setShouldShowZoomDial:(BOOL)arg1 animationSpeed:(double)arg2;
- (void)_setShouldShowZoomDial:(BOOL)arg1 animationSpeed:(double)arg2 afterDelay:(double)arg3;
- (void)_setZoomFactor:(double)arg1 shouldNotifyDelegate:(BOOL)arg2;
- (BOOL)_shouldInterceptTouchesForHidingZoomDial;
- (void)_updateMaskViewForZoomButtonHighlightingTransform;
- (struct UIEdgeInsets)alignmentRectInsets;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)setShouldShowZoomDial:(BOOL)arg1 animationSpeed:(double)arg2 afterDelay:(double)arg3;
- (void)setZoomDialEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)zoomButtonDidLayout;

@end

