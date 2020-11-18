//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAMStageLightAnimator, CAMStageLightOverlayCircleView, UIImageView;

@interface CAMStageLightOverlayView : UIView
{
    BOOL _active;
    BOOL _visible;
    long long _orientation;
    double _bottomContentInset;
    UIView *__tintView;
    UIImageView *__vignetteView;
    CAMStageLightOverlayCircleView *__circleView;
    unsigned long long __activeTimerID;
    CAGradientLayer *__gradientLayer;
    CAMStageLightAnimator *__animator;
}

@property (nonatomic, setter=_setActiveTimerID:) unsigned long long _activeTimerID; // @synthesize _activeTimerID=__activeTimerID;
@property (strong, nonatomic, setter=_setAnimator:) CAMStageLightAnimator *_animator; // @synthesize _animator=__animator;
@property (readonly, nonatomic) CAMStageLightOverlayCircleView *_circleView; // @synthesize _circleView=__circleView;
@property (readonly, nonatomic) CAGradientLayer *_gradientLayer; // @synthesize _gradientLayer=__gradientLayer;
@property (readonly, nonatomic) UIView *_tintView; // @synthesize _tintView=__tintView;
@property (readonly, nonatomic) UIImageView *_vignetteView; // @synthesize _vignetteView=__vignetteView;
@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (nonatomic) double bottomContentInset; // @synthesize bottomContentInset=_bottomContentInset;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;

- (void).cxx_destruct;
- (double)_circleDiameterForOrientation:(long long)arg1;
- (struct CGRect)_circleFrameForOrientation:(long long)arg1;
- (void)_updateAnimatorState;
- (void)_updateShadowViewsAnimated:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setActive:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;

@end
