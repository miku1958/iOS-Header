//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <UIKitCore/UIViewControllerTransitioningDelegate-Protocol.h>
#import <UIKitCore/_UIClickPresentationAssisting-Protocol.h>

@class NSString, UITargetedPreview, UIView, UIViewController, UIViewPropertyAnimator, _UIClickPresentation, _UIPortalView, _UIStateMachine;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIClickPresentationAssistant : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, _UIClickPresentationAssisting>
{
    id<UIViewControllerContextTransitioning> _currentContext;
    UIViewPropertyAnimator *_presentationAnimator;
    CDUnknownBlockType dismissalCompletion;
    _UIClickPresentation *presentation;
    _UIPortalView *_presentationSourcePortalView;
    UITargetedPreview *_sourcePreview;
    UIViewController *_stashedParentViewController;
    UIView *_stashedSuperView;
    CDUnknownBlockType _transitionCompletion;
    _UIStateMachine *_stateMachine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType dismissalCompletion; // @synthesize dismissalCompletion;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _UIClickPresentation *presentation; // @synthesize presentation;
@property (readonly, nonatomic) UIViewPropertyAnimator *presentationAnimator; // @synthesize presentationAnimator=_presentationAnimator;
@property (strong, nonatomic) _UIPortalView *presentationSourcePortalView; // @synthesize presentationSourcePortalView=_presentationSourcePortalView;
@property (strong, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
@property (strong, nonatomic) UIViewController *stashedParentViewController; // @synthesize stashedParentViewController=_stashedParentViewController;
@property (strong, nonatomic) UIView *stashedSuperView; // @synthesize stashedSuperView=_stashedSuperView;
@property (strong, nonatomic) _UIStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType transitionCompletion; // @synthesize transitionCompletion=_transitionCompletion;

- (void).cxx_destruct;
- (void)_animateDismissalIsInterruption:(BOOL)arg1;
- (void)_animatePresentation;
- (void)_applyStashedParentViewControllerIfNecessary;
- (void)_createPropertyAnimatorIfNecessaryForTransition:(id)arg1 isAppearing:(BOOL)arg2;
- (void)_didTransitionToDismissingFromState:(unsigned long long)arg1;
- (void)_didTransitionToPossibleEndingTransition:(id)arg1;
- (void)_didTransitionToPresented;
- (void)_didTransitionToPresenting;
- (void)_postInteractionCleanup;
- (void)_prepareStateMachine;
- (id)_sourcePreviewPortal;
- (void)_stashParentViewControllerIfNecessary;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissWithReason:(unsigned long long)arg1 alongsideActions:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithClickPresentation:(id)arg1;
- (void)presentFromViewController:(id)arg1 sourcePreview:(id)arg2 dismissalCompletion:(CDUnknownBlockType)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (double)transitionDuration:(id)arg1;

@end

