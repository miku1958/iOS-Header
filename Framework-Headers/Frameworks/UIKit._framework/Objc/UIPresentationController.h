//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIAppearanceContainer-Protocol.h>
#import <UIKitCore/UIContentContainer-Protocol.h>
#import <UIKitCore/UIFocusEnvironment-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UITraitEnvironment-Protocol.h>
#import <UIKitCore/_UIAppearanceContainer-Protocol.h>
#import <UIKitCore/_UIContentContainerInternal-Protocol.h>
#import <UIKitCore/_UIFallbackEnvironment-Protocol.h>
#import <UIKitCore/_UIGeometryChangeObserver-Protocol.h>
#import <UIKitCore/_UITraitEnvironmentInternal-Protocol.h>

@class NSArray, NSString, NSUUID, UIBarButtonItem, UITapGestureRecognizer, UITraitCollection, UIView, UIViewController;
@protocol UIAdaptivePresentationControllerDelegate, UIFocusEnvironment, UIFocusItemContainer, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerTransitionCoordinator, UIViewControllerTransitionCoordinatorContext, _UITraitEnvironmentInternal;

@interface UIPresentationController : NSObject <_UIFallbackEnvironment, _UIGeometryChangeObserver, _UIAppearanceContainer, _UITraitEnvironmentInternal, _UIContentContainerInternal, UIGestureRecognizerDelegate, UIAppearanceContainer, UITraitEnvironment, UIContentContainer, UIFocusEnvironment>
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
    NSUUID *_currentRunningAnimationsUUID;
    BOOL _shouldDeactivateReachabilityWhenTransitioning;
    BOOL _forcePresentationInPresenterScene;
    BOOL _changedPresentingViewControllerDuringAdaptation;
    BOOL _shouldContinueTouchesOnTargetViewController;
    BOOL _containerIgnoresDirectTouchEvents;
    BOOL _isCurrentStateCancelled;
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
    CDUnknownBlockType __containerSuperviewForCurrentTransition;
    CDUnknownBlockType __fromViewForCurrentTransition;
    CDUnknownBlockType __toViewForCurrentTransition;
    CDUnknownBlockType __customFromViewForCurrentTransition;
    CDUnknownBlockType __customToViewForCurrentTransition;
    CDUnknownBlockType __computeToEndFrameForCurrentTransition;
    CDUnknownBlockType __currentTransitionDidComplete;
    UIView *_customViewForTouchContinuation;
    UITraitCollection *_internalOverrideTraitCollection;
    UIView *_realSourceView;
    struct CGSize _preferredContentSize;
    struct CGRect _sourceRect;
}

@property (copy, nonatomic) CDUnknownBlockType _computeToEndFrameForCurrentTransition; // @synthesize _computeToEndFrameForCurrentTransition=__computeToEndFrameForCurrentTransition;
@property (copy, nonatomic) CDUnknownBlockType _containerSuperviewForCurrentTransition; // @synthesize _containerSuperviewForCurrentTransition=__containerSuperviewForCurrentTransition;
@property (weak, nonatomic, getter=_currentPresentationSuperview, setter=_setCurrentPresentationSuperview:) UIView *_currentPresentationSuperview; // @synthesize _currentPresentationSuperview=__currentPresentationSuperview;
@property (copy, nonatomic) CDUnknownBlockType _currentTransitionDidComplete; // @synthesize _currentTransitionDidComplete=__currentTransitionDidComplete;
@property (copy, nonatomic) CDUnknownBlockType _customFromViewForCurrentTransition; // @synthesize _customFromViewForCurrentTransition=__customFromViewForCurrentTransition;
@property (copy, nonatomic) CDUnknownBlockType _customToViewForCurrentTransition; // @synthesize _customToViewForCurrentTransition=__customToViewForCurrentTransition;
@property (nonatomic, setter=_setForcePresentationInPresenterScene:) BOOL _forcePresentationInPresenterScene; // @synthesize _forcePresentationInPresenterScene;
@property (copy, nonatomic) CDUnknownBlockType _fromViewForCurrentTransition; // @synthesize _fromViewForCurrentTransition=__fromViewForCurrentTransition;
@property (readonly, nonatomic) BOOL _isPresentedInFullScreen;
@property (readonly, nonatomic) BOOL _mayChildGrabPresentedViewControllerView;
@property (readonly, nonatomic) id<_UITraitEnvironmentInternal> _parentTraitEnvironment;
@property (nonatomic, getter=_preferredContentSize, setter=_setPreferredContentSize:) struct CGSize _preferredContentSize; // @synthesize _preferredContentSize;
@property (copy, nonatomic) CDUnknownBlockType _toViewForCurrentTransition; // @synthesize _toViewForCurrentTransition=__toViewForCurrentTransition;
@property (copy, nonatomic) CDUnknownBlockType _transitionViewForCurrentTransition; // @synthesize _transitionViewForCurrentTransition=__transitionViewForCurrentTransition;
@property (readonly, nonatomic) long long adaptivePresentationStyle;
@property (strong, nonatomic, getter=_adaptiveTransitionContext, setter=_setAdaptiveTransitionContext:) id<UIViewControllerTransitionCoordinatorContext> adaptiveTransitionContext; // @synthesize adaptiveTransitionContext=_adaptiveTransitionContext;
@property (strong, nonatomic, getter=_adaptiveTransitionCoordinator, setter=_setAdaptiveTransitionCoordinator:) id<UIViewControllerTransitionCoordinator> adaptiveTransitionCoordinator; // @synthesize adaptiveTransitionCoordinator=_adaptiveTransitionCoordinator;
@property (strong, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property (nonatomic, getter=_changedPresentingViewControllerDuringAdaptation, setter=_setChangedPresentingViewControllerDuringAdaptation:) BOOL changedPresentingViewControllerDuringAdaptation; // @synthesize changedPresentingViewControllerDuringAdaptation=_changedPresentingViewControllerDuringAdaptation;
@property (nonatomic, getter=_containerIgnoresDirectTouchEvents, setter=_setContainerIgnoresDirectTouchEvents:) BOOL containerIgnoresDirectTouchEvents; // @synthesize containerIgnoresDirectTouchEvents=_containerIgnoresDirectTouchEvents;
@property (strong, nonatomic, setter=_setContainerView:) UIView *containerView; // @synthesize containerView=_containerView;
@property (strong, nonatomic, getter=_currentInteractionController, setter=_setCurrentInteractionController:) id<UIViewControllerInteractiveTransitioning> currentInteractionController; // @synthesize currentInteractionController=_currentInteractionController;
@property (strong, nonatomic, getter=_currentTransitionController, setter=_setCurrentTransitionController:) id<UIViewControllerAnimatedTransitioning> currentTransitionController; // @synthesize currentTransitionController=_currentTransitionController;
@property (strong, nonatomic, getter=_customViewForTouchContinuation, setter=_setCustomViewForTouchContinuation:) UIView *customViewForTouchContinuation; // @synthesize customViewForTouchContinuation=_customViewForTouchContinuation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIAdaptivePresentationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, nonatomic) struct CGRect frameOfPresentedViewInContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic, getter=_internalOverrideTraitCollection, setter=_setInternalOverrideTraitCollection:) UITraitCollection *internalOverrideTraitCollection; // @synthesize internalOverrideTraitCollection=_internalOverrideTraitCollection;
@property (nonatomic) BOOL isCurrentStateCancelled; // @synthesize isCurrentStateCancelled=_isCurrentStateCancelled;
@property (copy, nonatomic) UITraitCollection *overrideTraitCollection; // @synthesize overrideTraitCollection=_overrideTraitCollection;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) struct CGSize preferredContentSize;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, nonatomic) long long presentationStyle;
@property (strong, nonatomic, getter=_presentationView, setter=_setPresentationView:) UIView *presentationView; // @synthesize presentationView=_presentationView;
@property (readonly, nonatomic) UIView *presentedView;
@property (strong, nonatomic, setter=_setPresentedViewController:) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property (strong, nonatomic, setter=_setPresentingViewController:) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (readonly, nonatomic, getter=_realSourceView) UIView *realSourceView; // @synthesize realSourceView=_realSourceView;
@property (nonatomic, getter=_shouldContinueTouchesOnTargetViewController, setter=_setShouldContinueTouchesOnTargetViewController:) BOOL shouldContinueTouchesOnTargetViewController; // @synthesize shouldContinueTouchesOnTargetViewController=_shouldContinueTouchesOnTargetViewController;
@property (nonatomic, getter=_shouldDeactivateReachabilityWhenTransitioning, setter=_setShouldDeactivateReachabilityWhenTransitioning:) BOOL shouldDeactivateReachabilityWhenTransitioning; // @synthesize shouldDeactivateReachabilityWhenTransitioning=_shouldDeactivateReachabilityWhenTransitioning;
@property (readonly, nonatomic) BOOL shouldPresentInFullscreen;
@property (readonly, nonatomic) BOOL shouldRemovePresentersView;
@property (nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property (strong, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITraitCollection *traitCollection;

+ (BOOL)_allowsDeferredTransitions;
+ (BOOL)_preventsAppearanceProxyCustomization;
+ (void)_scheduleTransition:(CDUnknownBlockType)arg1;
+ (BOOL)_shouldDeferTransitions;
+ (struct UIEdgeInsets)_statusBarOverlapAndMarginInfoForView:(id)arg1 inWindow:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
- (CDStruct_912cb5d2)__sizeClassPair;
- (id)_activePresentationController;
- (id)_adaptiveWillTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (struct UIEdgeInsets)_additionalSafeAreaInsets;
- (void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3;
- (id)_animatorForContainmentTransition;
- (id)_appearanceContainer;
- (Class)_appearanceGuideClass;
- (struct UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double *)arg1 rightMargin:(double *)arg2;
- (void)_beginOcclusionIfNecessary:(BOOL)arg1;
- (BOOL)_canPresentInSeparateScene;
- (id)_childPresentationController;
- (void)_cleanup;
- (void)_closeScene;
- (void)_containedViewControllerModalStateChanged;
- (void)_containerViewBoundsDidChange;
- (void)_containerViewLayoutSubviews;
- (void)_containerViewSafeAreaInsetsDidChange;
- (void)_containerViewTraitCollectionDidChange;
- (void)_containerViewWillLayoutSubviews;
- (void)_convertToSceneFromPresentingViewController:(id)arg1;
- (void)_coverWithSnapshot;
- (id)_currentContextPresentationSuperview;
- (long long)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (id)_descriptionForPrintingViewControllerHierarchy;
- (void)_disableMenuPressForBackGesture;
- (void)_dismissWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4;
- (void)_enableOcclusion:(BOOL)arg1;
- (BOOL)_fallbackShouldDismiss;
- (id)_fallbackTraitCollection;
- (id)_firstCurrentContextChildInWindow;
- (id)_focusMapContainer;
- (BOOL)_forcesPreferredAnimationControllers;
- (struct CGRect)_frameForChildContentContainer:(id)arg1;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 inWindow:(id)arg2;
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
- (id)_fullscreenPresentationSuperview;
- (void)_geometryChanged:(const CDStruct_ac6e8047 *)arg1 forAncestor:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)_inheritsPresentingViewControllerThemeLevel;
- (void)_initViewHierarchyForPresentationSuperview:(id)arg1;
- (void)_initViewHierarchyForPresentationSuperview:(id)arg1 inWindow:(id)arg2;
- (id)_initialPresentationViewControllerForViewController:(id)arg1;
- (BOOL)_isAdapted;
- (BOOL)_isModal;
- (BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (BOOL)_monitorsSystemLayoutFittingSize;
- (void)_parent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (id)_parentPresentationController;
- (id)_parentPresentationControllerImmediate:(BOOL)arg1;
- (id)_parentTraitCollection;
- (id)_passthroughViews;
- (void)_performBackGesture:(id)arg1;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (id)_preferredInteractionControllerForDismissal:(id)arg1;
- (id)_preferredInteractionControllerForPresentation:(id)arg1;
- (void)_prepareForWindowDeallocRecursively:(BOOL)arg1;
- (void)_presentWithAnimationController:(id)arg1 inWindow:(id)arg2 interactionController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (BOOL)_preserveResponderAcrossWindows;
- (void)_realSourceViewDidChangeFromView:(id)arg1 toView:(id)arg2;
- (void)_realSourceViewGeometryDidChange;
- (void)_releaseSnapshot;
- (id)_rootPresentingViewControllerForNestedPresentation;
- (void)_sendDelegateWillPresentWithAdaptiveStyle:(long long)arg1 transitionCoordinator:(id)arg2;
- (void)_sendDidAttemptToDismiss;
- (void)_sendDidDismiss;
- (void)_sendFallbackDidDismiss;
- (void)_sendFallbackWillDismiss;
- (void)_sendPresentationControllerNotification:(id)arg1 userInfo:(id)arg2;
- (void)_sendWillDismiss;
- (void)_setOverrideTraitCollection:(id)arg1 updatingPresentedViewControllerImmediately:(BOOL)arg2;
- (void)_setRealSourceView:(id)arg1;
- (BOOL)_shouldAdaptFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (BOOL)_shouldConvertToScene;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (BOOL)_shouldDisablePresentersAppearanceCallbacks;
- (BOOL)_shouldDismiss;
- (BOOL)_shouldGrabPresentersView;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)_shouldMakePresentedViewControllerFirstResponder;
- (BOOL)_shouldOccludeDuringPresentation;
- (BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
- (BOOL)_shouldPreserveFirstResponder;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (BOOL)_shouldRestoreFirstResponder;
- (BOOL)_shouldSavePresentedViewControllerForStateRestoration;
- (long long)_subclassPreferredFocusedViewPrioritizationType;
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
- (void)_updateRealSourceView;
- (void)_updateTraitsIfNecessary;
- (id)_viewToIgnoreLayerTransformForViewFrameInWindowContentOverlayInsetsCalculation;
- (id)_viewsParticipatingInNavigationControllerTransition;
- (void)_willRunTransitionForCurrentStateDeferred:(BOOL)arg1;
- (void)_window:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (long long)adaptivePresentationStyleForTraitCollection:(id)arg1;
- (void)completeCurrentTransitionImmediately;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (BOOL)dismissed;
- (BOOL)dismissing;
- (id)init;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (BOOL)presented;
- (id)presentedContentContainer;
- (BOOL)presenting;
- (void)runTransitionForCurrentState;
- (void)setNeedsFocusUpdate;
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

