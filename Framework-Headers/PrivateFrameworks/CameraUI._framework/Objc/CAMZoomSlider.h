//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISlider.h>

@class NSTimer, UIView;
@protocol CAMZoomSliderDelegate;

@interface CAMZoomSlider : UISlider
{
    BOOL _minimumAutozooming;
    BOOL _maximumAutozooming;
    BOOL _visibilityTimerSuspended;
    BOOL __autozooming;
    long long _layoutStyle;
    id<CAMZoomSliderDelegate> _delegate;
    long long _orientation;
    NSTimer *__visibilityTimer;
    UIView *__minTrackMaskView;
    UIView *__maxTrackMaskView;
    struct UIEdgeInsets _alignmentRectInsets;
}

@property (nonatomic, getter=_isAutozooming, setter=_setAutozooming:) BOOL _autozooming; // @synthesize _autozooming=__autozooming;
@property (readonly, nonatomic) UIView *_maxTrackMaskView; // @synthesize _maxTrackMaskView=__maxTrackMaskView;
@property (readonly, nonatomic) UIView *_minTrackMaskView; // @synthesize _minTrackMaskView=__minTrackMaskView;
@property (readonly, nonatomic) NSTimer *_visibilityTimer; // @synthesize _visibilityTimer=__visibilityTimer;
@property (nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
@property (readonly, nonatomic, getter=isAutozooming) BOOL autozooming;
@property (weak, nonatomic) id<CAMZoomSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (nonatomic, getter=isMaximumAutozooming, setter=_setMaximumAutozooming:) BOOL maximumAutozooming; // @synthesize maximumAutozooming=_maximumAutozooming;
@property (nonatomic, getter=isMinimumAutozooming, setter=_setMinimumAutozooming:) BOOL minimumAutozooming; // @synthesize minimumAutozooming=_minimumAutozooming;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (nonatomic, getter=isVisibilityTimerSuspended) BOOL visibilityTimerSuspended; // @synthesize visibilityTimerSuspended=_visibilityTimerSuspended;

+ (BOOL)shouldFadeOutZoomSliderForLayoutStyle:(long long)arg1;
- (void).cxx_destruct;
- (void)_beginAutozooming;
- (void)_commonCAMZoomSliderInitializationWithLayoutStyle:(long long)arg1;
- (void)_endAutozooming;
- (void)_handleTouchUpInside:(id)arg1;
- (void)_hideZoomSlider:(id)arg1;
- (void)_makeInvisibleAnimationDuration:(double)arg1;
- (void)_startVisibilityTimer;
- (void)_stopVisibilityTimer;
- (double)_thumbCenterMaximumXForTrackRect:(struct CGRect)arg1;
- (double)_thumbCenterMinimumXForTrackRect:(struct CGRect)arg1;
- (double)_thumbCenterXForValue:(float)arg1 trackRect:(struct CGRect)arg2;
- (void)_updateAutozooming;
- (void)_updateForLayoutStyle;
- (float)_valueForThumbCenterX:(double)arg1 trackRect:(struct CGRect)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (long long)locationOfTouch:(id)arg1;
- (void)makeInvisibleAnimated:(BOOL)arg1;
- (void)makeVisibleAnimated:(BOOL)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (BOOL)shouldHideForExpiredVisibilityTimer;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;

@end

