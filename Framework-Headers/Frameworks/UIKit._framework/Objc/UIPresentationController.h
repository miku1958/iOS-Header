//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIAppearanceContainer-Protocol.h>
#import <UIKit/UIContentContainer-Protocol.h>
#import <UIKit/UIFocusEnvironment-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UITraitEnvironment-Protocol.h>
#import <UIKit/_UIAppearanceContainer-Protocol.h>
#import <UIKit/_UIContentContainerInternal-Protocol.h>
#import <UIKit/_UITraitEnvironmentInternal-Protocol.h>

@class NSString, UIBarButtonItem, UITapGestureRecognizer, UITraitCollection, UIView, UIViewController;
@protocol UIAdaptivePresentationControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerTransitionCoordinator, UIViewControllerTransitionCoordinatorContext;

@interface UIPresentationController : NSObject <_UIAppearanceContainer, _UITraitEnvironmentInternal, _UIContentContainerInternal, UIGestureRecognizerDelegate, UIAppearanceContainer, UITraitEnvironment, UIContentContainer, UIFocusEnvironment>
{
    BOOL _isDisconnectedRoot;
    BOOL _transitionAsDisconnectedRoot;
    BOOL _needsDidAppear;
    BOOL _needsDidDisappear;
    BOOL _monitorsSystemLayoutFittingSize;
    BOOL _didUpdateLayoutForStatusBarAndInterfaceOrientation;
    id _target;
    SEL _didEndSelector;
    UITraitCollection *_lastNotifiedTraitCollection;
    UIView *_snapshotOverlayView;
    UITapGestureRecognizer *_backGestureRecognizer;
    BOOL _containerIgnoresDirectTouchEvents;
    BOOL _isCurrentStateCancelled;
    BOOL _changedPresentingViewControllerDuringAdaptation;
    UIView *_sourceView;
    UIBarButtonItem *_barButtonItem;
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
    UIView *_containerView;
    id<UIAdaptivePresentationControllerDelegate> _delegate;
    UITraitCollection *_overrideTraitCollection;
    id<UIViewControllerAnimatedTransitioning> _currentTransitionController;
    id<UIViewControllerInteractiveTransitioning> _currentInteractionController;
    UIView *_presentationView;
    UIView *__currentPresentationSuperview;
    long long _state;
    id<UIViewControllerTransitionCoordinator> _adaptiveTransitionCoordinator;
    id<UIViewControllerTransitionCoordinatorContext> _adaptiveTransitionContext;
    CDUnknownBlockType __transitionViewForCurrentTransition;
    CDUnknownBlockType __fromViewForCurrentTransition;
    CDUnknownBlockType __toViewForCurrentTransition;
    CDUnknownBlockType __computeToEndFrameForCurrentTransition;
    CDUnknownBlockType __currentTransitionDidComplete;
    struct CGSize _preferredContentSize;
    struct CGRect _sourceRect;
}

@property (copy, nonatomic) CDUnknownBlockType _computeToEndFrameForCurrentTransition; // @synthesize _computeToEndFrameForCurrentTransition=__computeToEndFrameForCurrentTransition;
@property (strong, nonatomic, getter=_currentPresentationSuperview, setter=_setCurrentPresentationSuperview:) UIView *_currentPresentationSuperview; // @synthesize _currentPresentationSuperview=__currentPresentationSuperview;
@property (copy, nonatomic) CDUnknownBlockType _currentTransitionDidComplete; // @synthesize _currentTransitionDidComplete=__currentTransitionDidComplete;
@property (copy, nonatomic) CDUnknownBlockType _fromViewForCurrentTransition; // @synthesize _fromViewForCurrentTransition=__fromViewForCurrentTransition;
@property (nonatomic, getter=_preferredContentSize, setter=_setPreferredContentSize:) struct CGSize _preferredContentSize; // @synthesize _preferredContentSize;
@property (copy, nonatomic) CDUnknownBlockType _toViewForCurrentTransition; // @synthesize _toViewForCurrentTransition=__toViewForCurrentTransition;
@property (copy, nonatomic) CDUnknownBlockType _transitionViewForCurrentTransition; // @synthesize _transitionViewForCurrentTransition=__transitionViewForCurrentTransition;
@property (strong, nonatomic, getter=_adaptiveTransitionContext, setter=_setAdaptiveTransitionContext:) id<UIViewControllerTransitionCoordinatorContext> adaptiveTransitionContext; // @synthesize adaptiveTransitionContext=_adaptiveTransitionContext;
@property (strong, nonatomic, getter=_adaptiveTransitionCoordinator, setter=_setAdaptiveTransitionCoordinator:) id<UIViewControllerTransitionCoordinator> adaptiveTransitionCoordinator; // @synthesize adaptiveTransitionCoordinator=_adaptiveTransitionCoordinator;
@property (strong, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property (nonatomic, getter=_changedPresentingViewControllerDuringAdaptation, setter=_setChangedPresentingViewControllerDuringAdaptation:) BOOL changedPresentingViewControllerDuringAdaptation; // @synthesize changedPresentingViewControllerDuringAdaptation=_changedPresentingViewControllerDuringAdaptation;
@property (nonatomic, getter=_containerIgnoresDirectTouchEvents, setter=_setContainerIgnoresDirectTouchEvents:) BOOL containerIgnoresDirectTouchEvents; // @synthesize containerIgnoresDirectTouchEvents=_containerIgnoresDirectTouchEvents;
@property (strong, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (strong, nonatomic, getter=_currentInteractionController, setter=_setCurrentInteractionController:) id<UIViewControllerInteractiveTransitioning> currentInteractionController; // @synthesize currentInteractionController=_currentInteractionController;
@property (strong, nonatomic, getter=_currentTransitionController, setter=_setCurrentTransitionController:) id<UIViewControllerAnimatedTransitioning> currentTransitionController; // @synthesize currentTransitionController=_currentTransitionController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIAdaptivePresentationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isCurrentStateCancelled; // @synthesize isCurrentStateCancelled=_isCurrentStateCancelled;
@property (copy, nonatomic) UITraitCollection *overrideTraitCollection; // @synthesize overrideTraitCollection=_overrideTraitCollection;
@property (readonly, nonatomic) struct CGSize preferredContentSize;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, nonatomic) long long presentationStyle;
@property (strong, nonatomic, getter=_presentationView, setter=_setPresentationView:) UIView *presentationView; // @synthesize presentationView=_presentationView;
@property (strong, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property (strong, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property (strong, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITraitCollection *traitCollection;

+ (struct UIEdgeInsets)_defaultBaseContentInsetsForFrame:(struct CGRect)arg1 inView:(id)arg2;
+ (BOOL)_preventsAppearanceProxyCustomization;
- (void).cxx_destruct;
- (CDStruct_d58201db)__sizeClassPair;
- (id)_activePresentationController;
- (void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3;
- (id)_animatorForContainmentTransition;
- (id)_appearanceContainer;
- (Class)_appearanceGuideClass;
- (struct UIEdgeInsets)_baseContentInsets;
- (void)_beginOcclusionIfNecessary:(BOOL)arg1;
- (id)_childPresentationController;
- (void)_cleanup;
- (void)_containedViewControllerModalStateChanged;
- (void)_containerViewWillLayoutSubviews;
- (void)_coverWithSnapshot;
- (id)_currentContextPresentationSuperview;
- (long long)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (id)_descriptionForPrintingViewControllerHierarchy;
- (void)_disableMenuPressForBackGesture;
- (void)_dismissWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4;
- (void)_enableOcclusion:(BOOL)arg1;
- (id)_firstCurrentContextChildInWindow;
- (struct CGSize)_flipSize:(struct CGSize)arg1;
- (BOOL)_forcesPreferredAnimationControllers;
- (struct CGRect)_frameForChildContentContainer:(id)arg1;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
- (id)_fullscreenPresentationSuperview;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_initViewHierarchyForPresentationSuperview:(id)arg1;
- (id)_initialPresentationViewControllerForViewController:(id)arg1;
- (BOOL)_isAdapted;
- (BOOL)_isModalWhenContainedInPopover;
- (BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (BOOL)_monitorsSystemLayoutFittingSize;
- (void)_parent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (id)_parentFocusEnvironment;
- (id)_parentPresentationController;
- (id)_parentPresentationControllerImmediate:(BOOL)arg1;
- (id)_parentTraitCollection;
- (id)_parentTraitEnvironment;
- (id)_passthroughViews;
- (void)_performBackGesture:(id)arg1;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (void)_presentWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (BOOL)_preserveResponderAcrossWindows;
- (void)_releaseSnapshot;
- (void)_sendDelegateWillPresentWithAdaptiveStyle:(long long)arg1 transitionCoordinator:(id)arg2;
- (void)_setContainerView:(id)arg1;
- (void)_setPresentedViewController:(id)arg1;
- (void)_setPresentingViewController:(id)arg1;
- (id)_sharedParent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (BOOL)_shouldAdaptFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (BOOL)_shouldChangeStatusBarViewController;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (BOOL)_shouldDisablePresentersAppearanceCallbacks;
- (BOOL)_shouldGrabPresentersView;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)_shouldOccludeDuringPresentation;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (BOOL)_shouldSavePresentedViewControllerForStateRestoration;
- (void)_systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 childViewController:(id)arg2;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_transitionToWillBegin;
- (BOOL)_transitioningFrom;
- (BOOL)_transitioningTo;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_updateTraitsIfNecessary;
- (id)_viewsParticipatingInNavigationControllerTransition;
- (void)_willRunTransitionForCurrentStateDeferred:(BOOL)arg1;
- (void)_window:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (long long)adaptivePresentationStyle;
- (long long)adaptivePresentationStyleForTraitCollection:(id)arg1;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (BOOL)dismissed;
- (BOOL)dismissing;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (BOOL)presented;
- (id)presentedContentContainer;
- (id)presentedView;
- (BOOL)presenting;
- (void)runTransitionForCurrentState;
- (void)setNeedsFocusUpdate;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transitionDidFinish:(BOOL)arg1;
- (void)transitionDidStart;
- (void)updateFocusIfNeeded;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
