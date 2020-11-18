//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISlider.h>

@class NSTimer, UIImageView, UIView;
@protocol CMKZoomSliderDelegate;

@interface CMKZoomSlider : UISlider
{
    BOOL _minimumAutozooming;
    BOOL _maximumAutozooming;
    BOOL __autozooming;
    id<CMKZoomSliderDelegate> _delegate;
    NSTimer *__visibilityTimer;
    UIImageView *__thumbImageView;
    UIView *__minTrackMaskView;
    UIView *__maxTrackMaskView;
}

@property (nonatomic, getter=_isAutozooming, setter=_setAutozooming:) BOOL _autozooming; // @synthesize _autozooming=__autozooming;
@property (readonly, nonatomic) UIView *_maxTrackMaskView; // @synthesize _maxTrackMaskView=__maxTrackMaskView;
@property (readonly, nonatomic) UIView *_minTrackMaskView; // @synthesize _minTrackMaskView=__minTrackMaskView;
@property (readonly, nonatomic) UIImageView *_thumbImageView; // @synthesize _thumbImageView=__thumbImageView;
@property (readonly, nonatomic) NSTimer *_visibilityTimer; // @synthesize _visibilityTimer=__visibilityTimer;
@property (nonatomic) id<CMKZoomSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, getter=isMaximumAutozooming) BOOL maximumAutozooming; // @synthesize maximumAutozooming=_maximumAutozooming;
@property (nonatomic, getter=isMinimumAutozooming) BOOL minimumAutozooming; // @synthesize minimumAutozooming=_minimumAutozooming;

- (void).cxx_destruct;
- (void)_beginAutozooming;
- (void)_commonCMKZoomSliderInitialization;
- (void)_endAutozooming;
- (void)_hideZoomSlider:(id)arg1;
- (BOOL)_isMinimumOrMaximumAutozooming;
- (void)_postHideZoomSliderAnimation;
- (void)_setMaximumAutozooming:(BOOL)arg1;
- (void)_setMinimumAutozooming:(BOOL)arg1;
- (void)_updateAutozooming;
- (struct UIEdgeInsets)alignmentRectInsets;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (void)dealloc;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (long long)locationOfTouch:(id)arg1;
- (void)makeInvisible;
- (void)makeVisible;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)startVisibilityTimer;
- (void)stopVisibilityTimer;
- (BOOL)visibilityTimerIsValid;

@end
