//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import <UserNotificationsUIKit/NCLongLookAnimator-Protocol.h>

@class NSString, UILabel, UIView, UIViewController, _UIBackdropView, _UIBackdropViewSettings, _UIFeedbackStatesBehavior;
@protocol NCLongLookAnimatorDelegate, NCLongLookPresentationControllerDelegate, NCViewControllerAnimatedTransitioningDelegate, UIViewControllerContextTransitioning, UIViewControllerTransitionCoordinator;

@interface NCLongLookPresentationController : UIPresentationController <NCLongLookAnimator>
{
    id<UIViewControllerContextTransitioning> _transitionContext;
    UIViewController *_sourceViewController;
    UIView *_sourceView;
    struct CGRect _sourceViewInitialFrame;
    _UIBackdropView *_backgroundBlurView;
    _UIBackdropViewSettings *_presentedBackgroundBlurSettings;
    UIView *_revealShortLook;
    UIView *_backgroundDarkeningView;
    UIView *_dismissLabelContainerView;
    UILabel *_dismissLabel;
    _UIFeedbackStatesBehavior *_dismissFeedbackBehavior;
    BOOL _didPlayDismissHaptic;
    id<UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;
    BOOL _listenToKeyboardEvents;
    BOOL _presenting;
    id<NCLongLookAnimatorDelegate> _transitionAnimatorDelegate;
    id<NCLongLookPresentationControllerDelegate> _longLookPresentationControllerDelegate;
    struct CGRect _keyboardFrame;
}

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=_keyboardFrame, setter=_setKeyboardFrame:) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property (weak, nonatomic) id<NCLongLookPresentationControllerDelegate> longLookPresentationControllerDelegate; // @synthesize longLookPresentationControllerDelegate=_longLookPresentationControllerDelegate;
@property (nonatomic, getter=isPresenting) BOOL presenting; // @synthesize presenting=_presenting;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<NCViewControllerAnimatedTransitioningDelegate> transitionAnimatorDelegate;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;

+ (struct CGSize)_sizeOfViewWithPreferredContentSize:(struct CGSize)arg1 inContainerViewWithBounds:(struct CGRect)arg2;
+ (struct CGSize)_sizeOfViewWithPreferredContentSize:(struct CGSize)arg1 inUseableContainerViewBounds:(struct CGRect)arg2;
+ (struct CGRect)useableContainerViewBoundsInContainerViewWithBounds:(struct CGRect)arg1;
- (void).cxx_destruct;
- (BOOL)_actuateFeedbackForDismissalIfNecessary;
- (void)_actuateFeedbackForDismissalInvalidationIfNecessary;
- (void)_animateDismissalToEdge:(unsigned long long)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_animatePreviewPresentation:(BOOL)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_animationFactoryForLongLookPresentation:(BOOL)arg1;
- (void)_configureDismissFeedbackIfNecessary;
- (void)_configureDismissLabelIfNecessary;
- (struct UIEdgeInsets)_contentInsetWithPresentedFrame:(struct CGRect)arg1 inContainerViewWithBounds:(struct CGRect)arg2;
- (struct CGPoint)_contentOffsetForPresentedLongLookView:(struct UIView *)arg1;
- (struct CGRect)_dismissLabelContainerViewFrameForPresentedViewFrame:(struct CGRect)arg1;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (struct CGRect)_frameOfPresentedViewInContainerViewWithBounds:(struct CGRect)arg1;
- (id)_initialBackgroundBlurSettings;
- (BOOL)_isTransitionAnimated;
- (void)_popDismissLabel;
- (id)_presentedAnimatableBlurringView;
- (id)_presentedBackgroundBlurSettings;
- (id)_presentedNotificationViewController;
- (BOOL)_shouldMakePresentedViewControllerFirstResponder;
- (BOOL)_shouldPresentInCurrentContext;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (void)cancelInteractiveTransition;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (void)finishInteractiveTransition;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)hintDismissalWithCommitProgress:(double)arg1 overallProgress:(double)arg2;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 sourceView:(id)arg4;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)updateInteractiveTransition:(double)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

