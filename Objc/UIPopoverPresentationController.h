//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import <UIKit/UIDimmingViewDelegate-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate-Protocol.h>

@class NSArray, NSString, UIBarButtonItem, UIColor, UIDimmingView, UIPanGestureRecognizer, UIView, UIViewController, _UIMirrorNinePatchView, _UIPopoverLayoutInfo, _UIPopoverView;
@protocol UIPopoverPresentationControllerDelegate;

@interface UIPopoverPresentationController : UIPresentationController <UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate>
{
    UIViewController *_contentViewController;
    _UIPopoverView *_popoverView;
    UIDimmingView *_dimmingView;
    _UIMirrorNinePatchView *_shadowImageView;
    UIView *_layoutConstraintView;
    struct CGRect _targetRectInEmbeddingView;
    UIBarButtonItem *_targetBarButtonItem;
    unsigned long long _currentArrowDirection;
    long long _popoverBackgroundStyle;
    UIColor *_backgroundColor;
    _UIPopoverLayoutInfo *_preferredLayoutInfo;
    Class _popoverBackgroundViewClass;
    struct CGSize _popoverContentSize;
    struct CGRect _targetRectInContainerView;
    struct CGRect _embeddedTargetRect;
    long long _popoverControllerStyle;
    BOOL _ignoresKeyboardNotifications;
    BOOL _canOverlapSourceViewRect;
    unsigned int draggingChildScrollViewCount;
    id _target;
    SEL _didEndSelector;
    UIViewController *_modalPresentationFromViewController;
    UIViewController *_modalPresentationToViewController;
    unsigned long long _toViewAutoResizingMask;
    UIViewController *_slidingViewController;
    BOOL _isArrowDirectionFixed;
    BOOL _useSourceViewBoundsAsSourceRect;
    UIView *_presentingView;
    unsigned long long _presentationEdge;
    long long _presentationDirection;
    int _presentationState;
    BOOL _didPresentInActiveSequence;
    unsigned long long _slideTransitionCount;
    UIPanGestureRecognizer *_vendedGestureRecognizer;
    UIPanGestureRecognizer *_dimmingViewGestureRecognizer;
    struct {
        unsigned int isPresentingModalViewController:1;
        unsigned int isPresentingActionSheet:1;
        unsigned int wasIgnoringDimmingViewTouchesBeforeScrolling:1;
        unsigned int isInTextEffectsWindow:1;
        unsigned int isEmbeddingInView:1;
        unsigned int embeddedPresentationBounces:1;
        unsigned int isRepositioningRectDisabled:1;
    } _popoverControllerFlags;
    BOOL _isDismissingBecauseDimmingViewTapped;
    BOOL _dismissesOnRotation;
    BOOL _showsTargetRect;
    BOOL _showsOrientationMarker;
    BOOL _showsPresentationArea;
    BOOL _retainsSelfWhilePresented;
    BOOL __centersPopoverIfSourceViewNotSet;
    BOOL __shouldHideArrow;
    BOOL _shouldDisableInteractionDuringTransitions;
    BOOL __ignoreBarButtonItemSiblings;
    unsigned long long _permittedArrowDirections;
    unsigned long long _popoverArrowDirection;
    UIPopoverPresentationController *_retainedSelf;
    double __dimmingViewTopEdgeInset;
    struct UIEdgeInsets _popoverLayoutMargins;
}

@property (nonatomic, getter=_arrowOffset, setter=_setArrowOffset:) double _arrowOffset;
@property (nonatomic, getter=_centersPopoverIfSourceViewNotSet, setter=_setCentersPopoverIfSourceViewNotSet:) BOOL _centersPopoverIfSourceViewNotSet; // @synthesize _centersPopoverIfSourceViewNotSet=__centersPopoverIfSourceViewNotSet;
@property (nonatomic, setter=_setDimmingViewTopEdgeInset:) double _dimmingViewTopEdgeInset; // @synthesize _dimmingViewTopEdgeInset=__dimmingViewTopEdgeInset;
@property (nonatomic, setter=_setIgnoreBarButtonItemSiblings:) BOOL _ignoreBarButtonItemSiblings; // @synthesize _ignoreBarButtonItemSiblings=__ignoreBarButtonItemSiblings;
@property (nonatomic, setter=_setIgnoresKeyboardNotifications:) BOOL _ignoresKeyboardNotifications; // @dynamic _ignoresKeyboardNotifications;
@property (nonatomic, getter=_shouldHideArrow, setter=_setShouldHideArrow:) BOOL _shouldHideArrow; // @synthesize _shouldHideArrow=__shouldHideArrow;
@property (readonly, nonatomic) unsigned long long arrowDirection;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (strong, nonatomic) UIBarButtonItem *barButtonItem; // @dynamic barButtonItem;
@property (nonatomic) BOOL canOverlapSourceViewRect;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIPopoverPresentationControllerDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property (nonatomic) BOOL dismissesOnRotation; // @synthesize dismissesOnRotation=_dismissesOnRotation;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
@property (nonatomic) unsigned long long popoverArrowDirection; // @synthesize popoverArrowDirection=_popoverArrowDirection;
@property (strong, nonatomic) Class popoverBackgroundViewClass; // @synthesize popoverBackgroundViewClass=_popoverBackgroundViewClass;
@property (nonatomic) struct UIEdgeInsets popoverLayoutMargins; // @synthesize popoverLayoutMargins=_popoverLayoutMargins;
@property (strong, nonatomic) _UIPopoverLayoutInfo *preferredLayoutInfo; // @synthesize preferredLayoutInfo=_preferredLayoutInfo;
@property (nonatomic, getter=_presentationEdge, setter=_setPresentationEdge:) unsigned long long presentationEdge; // @synthesize presentationEdge=_presentationEdge;
@property (weak, nonatomic, getter=_presentingView, setter=_setPresentingView:) UIView *presentingView; // @synthesize presentingView=_presentingView;
@property (strong, nonatomic) UIPopoverPresentationController *retainedSelf; // @synthesize retainedSelf=_retainedSelf;
@property (nonatomic, getter=_retainsSelfWhilePresented, setter=_setRetainsSelfWhilePresented:) BOOL retainsSelfWhilePresented; // @synthesize retainsSelfWhilePresented=_retainsSelfWhilePresented;
@property (nonatomic, getter=_shouldDisableInteractionDuringTransitions, setter=_setShouldDisableInteractionDuringTransitions:) BOOL shouldDisableInteractionDuringTransitions; // @synthesize shouldDisableInteractionDuringTransitions=_shouldDisableInteractionDuringTransitions;
@property (nonatomic) BOOL showsOrientationMarker; // @synthesize showsOrientationMarker=_showsOrientationMarker;
@property (nonatomic) BOOL showsPresentationArea; // @synthesize showsPresentationArea=_showsPresentationArea;
@property (nonatomic) BOOL showsTargetRect; // @synthesize showsTargetRect=_showsTargetRect;
@property (nonatomic) struct CGRect sourceRect; // @dynamic sourceRect;
@property (strong, nonatomic) UIView *sourceView; // @dynamic sourceView;
@property (readonly) Class superclass;

+ (BOOL)_alwaysAllowPopoverPresentations;
+ (struct UIEdgeInsets)_defaultPopoverLayoutMarginsForPopoverControllerStyle:(long long)arg1 andContentViewController:(id)arg2;
+ (BOOL)_forceAttemptsToAvoidKeyboard;
+ (Class)_popoverViewClass;
+ (void)_setAlwaysAllowPopoverPresentations:(BOOL)arg1;
+ (BOOL)_showTargetRectPref;
- (void).cxx_destruct;
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(BOOL)arg2;
- (BOOL)_alwaysAdaptToFullscreenForTraitCollection:(id)arg1;
- (BOOL)_attemptsToAvoidKeyboard;
- (id)_backgroundView;
- (struct UIEdgeInsets)_baseContentInsets;
- (struct CGRect)_calculateContainingFrame;
- (struct CGPoint)_centerPointForScale:(double)arg1 frame:(struct CGRect)arg2 anchor:(struct CGPoint)arg3;
- (void)_commonPresentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(BOOL)arg4;
- (CDUnknownBlockType)_completionBlockForDismissalWhenNotifyingDelegate:(BOOL)arg1;
- (void)_containedViewControllerModalStateChanged;
- (struct CGSize)_currentPopoverContentSize;
- (Class)_defaultChromeViewClass;
- (long long)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (id)_dimmingView;
- (void)_dismissPopoverAnimated:(BOOL)arg1 stateOnly:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (double)_dismissalAnimationDuration;
- (BOOL)_embedsInView;
- (id)_exceptionStringForNilSourceViewOrBarButtonItem;
- (BOOL)_forcesPreferredAnimationControllers;
- (void)_incrementSlideTransitionCount:(BOOL)arg1;
- (id)_initialPresentationViewControllerForViewController:(id)arg1;
- (void)_invalidateLayoutInfo;
- (BOOL)_isDismissing;
- (BOOL)_isPresenting;
- (BOOL)_isShimmingPopoverControllerPresentation;
- (void)_keyboardStateChanged:(id)arg1;
- (id)_layoutInfoForCurrentKeyboardState;
- (id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1;
- (id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2;
- (BOOL)_manuallyHandlesContentViewControllerAppearanceCalls;
- (void)_moveAwayFromTheKeyboard:(id)arg1;
- (void)_newViewControllerWasPushed:(id)arg1;
- (void)_newViewControllerWillBePushed:(id)arg1;
- (id)_passthroughViews;
- (void)_performHierarchyCheckOnViewController:(id)arg1;
- (long long)_popoverBackgroundStyle;
- (BOOL)_popoverBackgroundViewWantsDefaultContentAppearance;
- (long long)_popoverControllerStyle;
- (id)_popoverHostingWindow;
- (BOOL)_popoverIsDismissingBecauseDimmingViewWasTapped;
- (Class)_popoverLayoutInfoForChromeClass:(Class)arg1;
- (void)_postludeForDismissal;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (double)_presentationAnimationDuration;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (int)_presentationState;
- (id)_presentationView;
- (void)_resetSlideTransitionCount;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_scrollViewWillBeginDragging:(id)arg1;
- (void)_sendDelegateWillRepositionToRect;
- (void)_setContentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_setContentViewController:(id)arg1 backgroundStyle:(long long)arg2 animated:(BOOL)arg3;
- (void)_setGesturesEnabled:(BOOL)arg1;
- (void)_setPopoverBackgroundStyle:(long long)arg1;
- (void)_setPopoverFrame:(struct CGRect)arg1 animated:(BOOL)arg2 coordinator:(id)arg3;
- (void)_setPopoverView:(id)arg1;
- (void)_setPresentationState:(int)arg1;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)_shouldOccludeDuringPresentation;
- (BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
- (unsigned long long)_slideTransitionCount;
- (struct CGRect)_sourceRect;
- (struct CGRect)_sourceRectInContainerView;
- (id)_sourceView;
- (void)_startWatchingForKeyboardNotificationsIfNecessary;
- (void)_startWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_startWatchingForScrollViewNotifications;
- (void)_stopWatchingForKeyboardNotifications;
- (void)_stopWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_stopWatchingForNotifications;
- (void)_stopWatchingForScrollViewNotifications;
- (void)_transitionFromDidEnd;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)_updateShadowFrame;
- (void)containerViewWillLayoutSubviews;
- (void)dealloc;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)dimmingViewWasTapped:(id)arg1 withDismissCompletion:(CDUnknownBlockType)arg2;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (id)init;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (BOOL)isPopoverVisible;
- (BOOL)isPresentingOrDismissing;
- (struct CGSize)popoverContentSize;
- (id)popoverView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)presentationStyle;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (void)setPopoverContentSize:(struct CGSize)arg1;
- (void)setPopoverContentSize:(struct CGSize)arg1 animated:(BOOL)arg2;
- (void)setPopoverFrame:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)set_ignoreBarButtonItemSiblings:(BOOL)arg1;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

