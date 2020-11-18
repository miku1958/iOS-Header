//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAMStageLightAnimator, CAShapeLayer, UIImageView;

@interface CAMStageLightOverlayView : UIView
{
    BOOL _active;
    BOOL _visible;
    long long _orientation;
    double _bottomContentInset;
    UIView *__tintView;
    UIImageView *__vignetteView;
    CAShapeLayer *__circleLayer;
    unsigned long long __activeTimerID;
    CAGradientLayer *__gradientLayer;
    CAMStageLightAnimator *__animator;
    struct CGRect _viewportFrame;
}

@property (nonatomic, setter=_setActiveTimerID:) unsigned long long _activeTimerID; // @synthesize _activeTimerID=__activeTimerID;
@property (strong, nonatomic, setter=_setAnimator:) CAMStageLightAnimator *_animator; // @synthesize _animator=__animator;
@property (readonly, nonatomic) CAShapeLayer *_circleLayer; // @synthesize _circleLayer=__circleLayer;
@property (readonly, nonatomic) CAGradientLayer *_gradientLayer; // @synthesize _gradientLayer=__gradientLayer;
@property (readonly, nonatomic) UIView *_tintView; // @synthesize _tintView=__tintView;
@property (readonly, nonatomic) UIImageView *_vignetteView; // @synthesize _vignetteView=__vignetteView;
@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (nonatomic) double bottomContentInset; // @synthesize bottomContentInset=_bottomContentInset;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (nonatomic) struct CGRect viewportFrame; // @synthesize viewportFrame=_viewportFrame;
@property (nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;

+ (double)_circleDiameterForViewportSize:(struct CGSize)arg1 orientation:(long long)arg2;
+ (BOOL)_useLargeLayoutForViewportSize:(struct CGSize)arg1;
+ (struct CGRect)circleFrameForViewport:(struct CGRect)arg1 orientation:(long long)arg2 bottomContentInset:(double)arg3;
- (void).cxx_destruct;
- (struct CGRect)_circleFrameForOrientation:(long long)arg1;
- (void)_updateAnimatorState;
- (void)_updateShadowViewsAnimated:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setActive:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;

@end
