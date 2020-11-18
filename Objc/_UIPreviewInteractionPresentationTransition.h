//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <UIKit/UIViewControllerInteractiveTransitioning-Protocol.h>

@class NSString, UIViewPropertyAnimator;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionPresentationTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>
{
    id<UIViewControllerContextTransitioning> _transitionContext;
    UIViewPropertyAnimator *_presentationAnimator;
    double _interactiveTransitionFraction;
    BOOL _shouldPerformAsDismissTransition;
    BOOL _didScheduleFinishTransition;
    BOOL _didScheduleCancelTransition;
}

@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double interactiveTransitionFraction; // @dynamic interactiveTransitionFraction;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;

- (void).cxx_destruct;
- (void)_applyPushDecayEffectTransformToView:(id)arg1;
- (id)_newPushDecayAnimator;
- (id)_newReducedMotionTimingCurveProviderForPreviewTransition;
- (id)_newTimingCurveProviderForPreviewTransition;
- (void)_performCancelTransition;
- (void)_performFinishTransition;
- (id)_preparedPresentationAnimator;
- (id)_previewPresentationControllerForTransitionContext:(id)arg1;
- (id)_previewPresentationControllerForViewController:(id)arg1;
- (BOOL)_shouldReduceMotion;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (void)cancelTransition;
- (void)finishTransition;
- (id)init;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)updateInteractiveTransition:(double)arg1;

@end

