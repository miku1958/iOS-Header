//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <WebKit/UIViewControllerInteractiveTransitioning-Protocol.h>

@class NSString, UIViewController;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface WKFullscreenAnimationController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>
{
    struct CGRect _initialMaskViewBounds;
    struct CGRect _finalMaskViewBounds;
    struct CGAffineTransform _initialAnimatingViewTransform;
    struct CGAffineTransform _finalAnimatingViewTransform;
    struct CGPoint _initialMaskViewCenter;
    struct CGPoint _finalMaskViewCenter;
    struct RetainPtr<UIView> _maskView;
    struct RetainPtr<UIView> _animatingView;
    struct RetainPtr<id<UIViewControllerContextTransitioning>> _context;
    double _initialBackgroundAlpha;
    double _finalBackgroundAlpha;
    BOOL _animatingIn;
    UIViewController *_viewController;
    struct CGRect _initialFrame;
    struct CGRect _finalFrame;
}

@property (nonatomic, getter=isAnimatingIn) BOOL animatingIn; // @synthesize animatingIn=_animatingIn;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) id<UIViewControllerContextTransitioning> context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect finalFrame; // @synthesize finalFrame=_finalFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_createViewsForTransitionContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (void)configureInitialAndFinalStatesForTransition:(id)arg1;
- (void)dealloc;
- (void)end:(BOOL)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)updateWithProgress:(double)arg1;
- (void)updateWithProgress:(double)arg1 scale:(double)arg2 translation:(struct CGSize)arg3 anchor:(struct CGPoint)arg4;
- (void)updateWithProgress:(double)arg1 translation:(struct CGSize)arg2 anchor:(struct CGPoint)arg3;

@end

