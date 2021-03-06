//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewControllerAnimatedTransitioningEx-Protocol.h>
#import <UIKitCore/_UIBasicAnimationFactory-Protocol.h>

@class NSString, NSUUID, UIColor, UIView, _UINavigationInteractiveTransitionBase, _UIParallaxDimmingView;
@protocol UIViewControllerContextTransitioning;

@interface _UINavigationParallaxTransition : NSObject <_UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx>
{
    NSUUID *_currentRunningAnimationsUUID;
    NSUUID *_currentTrackingAnimatorsAnimationsUUID;
    BOOL _interactionAborted;
    BOOL _clipUnderlapWhileTransitioning;
    BOOL __shouldReverseLayoutDirection;
    long long _operation;
    id<UIViewControllerContextTransitioning> _transitionContext;
    _UINavigationInteractiveTransitionBase *_interactionController;
    _UIParallaxDimmingView *_borderDimmingView;
    _UIParallaxDimmingView *_contentDimmingView;
    UIView *_containerFromView;
    UIView *_containerToView;
    UIView *_clipUnderView;
    long long _transitionStyle;
    double _transitionGap;
    UIColor *_overrideDimmingColor;
}

@property (nonatomic, setter=_setShouldReverseLayoutDirection:) BOOL _shouldReverseLayoutDirection; // @synthesize _shouldReverseLayoutDirection=__shouldReverseLayoutDirection;
@property (strong, nonatomic) _UIParallaxDimmingView *borderDimmingView; // @synthesize borderDimmingView=_borderDimmingView;
@property (strong, nonatomic) UIView *clipUnderView; // @synthesize clipUnderView=_clipUnderView;
@property (nonatomic) BOOL clipUnderlapWhileTransitioning; // @synthesize clipUnderlapWhileTransitioning=_clipUnderlapWhileTransitioning;
@property (strong, nonatomic) UIView *containerFromView; // @synthesize containerFromView=_containerFromView;
@property (strong, nonatomic) UIView *containerToView; // @synthesize containerToView=_containerToView;
@property (strong, nonatomic) _UIParallaxDimmingView *contentDimmingView; // @synthesize contentDimmingView=_contentDimmingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL interactionAborted; // @synthesize interactionAborted=_interactionAborted;
@property (nonatomic) _UINavigationInteractiveTransitionBase *interactionController; // @synthesize interactionController=_interactionController;
@property (nonatomic) long long operation; // @synthesize operation=_operation;
@property (strong, nonatomic) UIColor *overrideDimmingColor; // @synthesize overrideDimmingColor=_overrideDimmingColor;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property (nonatomic) double transitionGap; // @synthesize transitionGap=_transitionGap;
@property (nonatomic) long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;

+ (double)defaultSlidingTransitionDuration;
+ (void)setDefaultSlidingTransitionDuration:(double)arg1;
- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_stopTransitionImmediately;
- (id)_timingFunctionForAnimation;
- (void)animateKeyboard:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (void)completeKeyboard:(id)arg1;
- (double)gapBetweenViews;
- (id)initWithCurrentOperation:(long long)arg1;
- (double)parallaxOffset;
- (void)prepareToAnimateKeyboard:(id)arg1;
- (void)resizeShadow:(id)arg1;
- (id)resizedFromContainerView;
- (id)resizedToContainerView;
- (id)shadowContainerForKeyboardTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end

