//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CAContext, CALayer, SBRecordingIndicatorView, UIColor, UIViewPropertyAnimator;

@interface SBRecordingIndicatorViewController : UIViewController
{
    UIViewPropertyAnimator *_animatorScaleToOverscale;
    UIViewPropertyAnimator *_animatorScaleToNormal;
    UIViewPropertyAnimator *_animatorScaleToRest;
    UIViewPropertyAnimator *_animatorScaleToZero;
    UIViewPropertyAnimator *_animatorFastFade;
    double _size;
    double _sideOffset;
    double _topOffset;
    struct CGPoint _center;
    CAContext *_context;
    CALayer *_rootLayer;
    CALayer *_contentLayer;
    BOOL _isStatusBarPortal;
    SBRecordingIndicatorView *_indicatorView;
    UIColor *_indicatorColor;
    unsigned long long _indicatorAnimationState;
    long long _activeInterfaceOrientation;
}

@property (nonatomic, getter=activeInterfaceOrientation) long long activeInterfaceOrientation; // @synthesize activeInterfaceOrientation=_activeInterfaceOrientation;
@property (readonly, nonatomic) unsigned long long indicatorAnimationState; // @synthesize indicatorAnimationState=_indicatorAnimationState;
@property (strong, nonatomic, getter=indicatorColor) UIColor *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
@property (readonly, nonatomic, getter=indicatorView) SBRecordingIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property (nonatomic) BOOL isStatusBarPortal; // @synthesize isStatusBarPortal=_isStatusBarPortal;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_configureRootLayer;
- (void)_stopAllAnimations;
- (void)_updateIndicatorLayerSize:(double)arg1 opacity:(double)arg2;
- (void)_updateIndicatorLayerWithBounds:(struct CGRect)arg1 andCenter:(struct CGPoint)arg2;
- (void)_updateIndicatorViewSize:(double)arg1 alpha:(double)arg2;
- (void)_updateToOrientation:(long long)arg1;
- (void)calculateInitialIndicatorPositionAndSize;
- (id)initForPortalView:(BOOL)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateIndicatorShape:(unsigned long long)arg1;
- (void)updateIndicatorVisibility:(BOOL)arg1;
- (void)updateIndicatorVisibility:(BOOL)arg1 skipFadeOutAnimation:(BOOL)arg2;
- (void)updateIndicatorVisibilityWithFastFadeAnimation:(BOOL)arg1;

@end

