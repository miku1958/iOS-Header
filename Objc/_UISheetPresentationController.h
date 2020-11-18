//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPresentationController.h>

#import <UIKitCore/UIDragInteractionDelegate-Protocol.h>
#import <UIKitCore/_UISheetInteractionDelegate-Protocol.h>
#import <UIKitCore/_UISheetLayoutInfoDelegate-Protocol.h>

@class NSArray, NSString, NSUserActivity, UIDimmingView, UIDragInteraction, UIDropShadowView, UIPercentDrivenInteractiveTransition, UIView, UIViewPropertyAnimator, _UIRemoteViewController, _UISheetAnimationController, _UISheetInteraction, _UISheetLayoutInfo, _UISheetPresentationControllerConfiguration;
@protocol _UISheetPresentationControllerDelegate;

@interface _UISheetPresentationController : UIPresentationController <_UISheetLayoutInfoDelegate, _UISheetInteractionDelegate, UIDragInteractionDelegate>
{
    BOOL __shouldPresentedViewControllerControlStatusBarAppearance;
    BOOL __didAttemptToStartDismiss;
    BOOL __didTearOff;
    BOOL __remoteDismissing;
    BOOL __dimmingViewTapDismissing;
    BOOL __keyboardShown;
    BOOL __isRemote;
    BOOL __presentsAtStandardHalfHeight;
    BOOL __allowsTearOff;
    _UISheetLayoutInfo *__layoutInfo;
    UIDimmingView *__confinedDimmingView;
    _UISheetInteraction *__sheetInteraction;
    _UISheetAnimationController *__animationController;
    UIPercentDrivenInteractiveTransition *__interactionController;
    UIDragInteraction *__tearOffInteraction;
    NSUserActivity *__tearOffActivity;
    _UIRemoteViewController *__connectedRemoteViewController;
    UIViewPropertyAnimator *__remoteDismissalPropertyAnimator;
    UIDropShadowView *_dropShadowView;
    UIDimmingView *_dimmingView;
    struct CGPoint __initialTearOffPoint;
    struct CGRect _frameOfPresentedViewInContainerView;
}

@property (nonatomic, setter=_setAllowsTearOff:) BOOL _allowsTearOff; // @synthesize _allowsTearOff=__allowsTearOff;
@property (strong, nonatomic, setter=_setAnimatedTransition:) _UISheetAnimationController *_animationController; // @synthesize _animationController=__animationController;
@property (readonly, nonatomic) _UISheetPresentationController *_childSheetPresentationController;
@property (strong, nonatomic, setter=_setConfiguration:) _UISheetPresentationControllerConfiguration *_configuration;
@property (readonly, nonatomic) UIDimmingView *_confinedDimmingView; // @synthesize _confinedDimmingView=__confinedDimmingView;
@property (readonly, nonatomic) _UIRemoteViewController *_connectedRemoteViewController; // @synthesize _connectedRemoteViewController=__connectedRemoteViewController;
@property (nonatomic) double _cornerRadiusForPresentationAndDismissal;
@property (copy, nonatomic, setter=_setDetents:) NSArray *_detents;
@property (nonatomic, setter=_setDidAttemptToStartDismiss:) BOOL _didAttemptToStartDismiss; // @synthesize _didAttemptToStartDismiss=__didAttemptToStartDismiss;
@property (nonatomic, setter=_setDidTearOff:) BOOL _didTearOff; // @synthesize _didTearOff=__didTearOff;
@property (nonatomic, getter=_isDimmingViewTapDismissing, setter=_setDimmingViewTapDismissing:) BOOL _dimmingViewTapDismissing; // @synthesize _dimmingViewTapDismissing=__dimmingViewTapDismissing;
@property (readonly, nonatomic) _UIRemoteViewController *_expectedRemoteViewController;
@property (readonly, nonatomic, getter=_isHosting) BOOL _hosting;
@property (nonatomic, setter=_setIndexOfCurrentDetent:) long long _indexOfCurrentDetent;
@property (nonatomic, setter=_setIndexOfLastUndimmedDetent:) long long _indexOfLastUndimmedDetent;
@property (nonatomic, setter=_setInitialTearOffPoint:) struct CGPoint _initialTearOffPoint; // @synthesize _initialTearOffPoint=__initialTearOffPoint;
@property (strong, nonatomic, setter=_setInteractiveTransition:) UIPercentDrivenInteractiveTransition *_interactionController; // @synthesize _interactionController=__interactionController;
@property (nonatomic, setter=_setIsRemote:) BOOL _isRemote; // @synthesize _isRemote=__isRemote;
@property (readonly, nonatomic) BOOL _isRootPresentation;
@property (nonatomic, getter=_isKeyboardShown, setter=_setKeyboardShown:) BOOL _keyboardShown; // @synthesize _keyboardShown=__keyboardShown;
@property (readonly, nonatomic) _UISheetLayoutInfo *_layoutInfo; // @synthesize _layoutInfo=__layoutInfo;
@property (nonatomic, setter=_setMode:) long long _mode;
@property (readonly, nonatomic) _UISheetPresentationController *_parentSheetPresentationController;
@property (copy, nonatomic, setter=_setPassthroughViews:) NSArray *_passthroughViews;
@property (nonatomic, setter=_setPresentsAtStandardHalfHeight:) BOOL _presentsAtStandardHalfHeight; // @synthesize _presentsAtStandardHalfHeight=__presentsAtStandardHalfHeight;
@property (strong, nonatomic) UIViewPropertyAnimator *_remoteDismissalPropertyAnimator; // @synthesize _remoteDismissalPropertyAnimator=__remoteDismissalPropertyAnimator;
@property (nonatomic, getter=_isRemoteDismissing, setter=_setRemoteDismissing:) BOOL _remoteDismissing; // @synthesize _remoteDismissing=__remoteDismissing;
@property (readonly, nonatomic) _UISheetInteraction *_sheetInteraction; // @synthesize _sheetInteraction=__sheetInteraction;
@property (nonatomic, setter=_setShouldPresentedViewControllerControlStatusBarAppearance:) BOOL _shouldPresentedViewControllerControlStatusBarAppearance; // @synthesize _shouldPresentedViewControllerControlStatusBarAppearance=__shouldPresentedViewControllerControlStatusBarAppearance;
@property (nonatomic, setter=_setShouldScaleDownBehindDescendantSheets:) BOOL _shouldScaleDownBehindDescendantSheets;
@property (strong, nonatomic, setter=_setSourceView:) UIView *_sourceView;
@property (strong, nonatomic, setter=_setTearOffActivity:) NSUserActivity *_tearOffActivity; // @synthesize _tearOffActivity=__tearOffActivity;
@property (readonly, nonatomic) UIDragInteraction *_tearOffInteraction; // @synthesize _tearOffInteraction=__tearOffInteraction;
@property (nonatomic, setter=_setWantsBottomAttached:) BOOL _wantsBottomAttached;
@property (nonatomic, setter=_setWantsBottomAttachedInCompactHeight:) BOOL _wantsBottomAttachedInCompactHeight;
@property (nonatomic, setter=_setWantsFullScreen:) BOOL _wantsFullScreen;
@property (nonatomic, setter=_setWantsGrabber:) BOOL _wantsGrabber;
@property (nonatomic, setter=_setWidthFollowsPreferredContentSizeWhenBottomAttached:) BOOL _widthFollowsPreferredContentSizeWhenBottomAttached;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UISheetPresentationControllerDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property (readonly, nonatomic) UIDropShadowView *dropShadowView; // @synthesize dropShadowView=_dropShadowView;
@property (nonatomic) struct CGRect frameOfPresentedViewInContainerView; // @synthesize frameOfPresentedViewInContainerView=_frameOfPresentedViewInContainerView;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=_shouldDismissWhenTappedOutside, setter=_setShouldDismissWhenTappedOutside:) BOOL shouldDismissWhenTappedOutside;
@property (readonly) Class superclass;

+ (long long)_initialMode;
- (void).cxx_destruct;
- (void)_accessibilityReduceMotionStatusDidChange;
- (void)_completeInteractiveTransition:(BOOL)arg1 duration:(double)arg2 timingCurve:(id)arg3;
- (void)_completeInteractiveTransitionFromRemote:(BOOL)arg1 offset:(double)arg2 duration:(double)arg3 timingCurve:(id)arg4;
- (void)_containerViewBoundsDidChange;
- (void)_containerViewLayoutSubviews;
- (void)_containerViewSafeAreaInsetsDidChange;
- (void)_containerViewTraitCollectionDidChange;
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
- (void)_handleKeyboardNotification:(id)arg1 aboutToHide:(BOOL)arg2;
- (BOOL)_inheritsPresentingViewControllerThemeLevel;
- (void)_keyboardAboutToChangeFrame:(id)arg1;
- (void)_keyboardAboutToHide:(id)arg1;
- (void)_keyboardAboutToShow:(id)arg1;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredInteractionControllerForDismissal:(id)arg1;
- (void)_realSourceViewGeometryDidChange;
- (void)_resetRemoteDismissing;
- (void)_sheetLayoutInfoDidInvalidateOutput:(id)arg1;
- (void)_sheetLayoutInfoLayout:(id)arg1;
- (void)_sheetLayoutInfoPrelayout:(id)arg1;
- (BOOL)_shouldOccludeDuringPresentation;
- (void)_startInteractiveTransitionFromRemoteWithProgress:(double)arg1 offset:(double)arg2;
- (void)_startInteractiveTransitionWithProgress:(double)arg1;
- (void)_tryToConnectToRemoteViewController:(id)arg1;
- (void)_updateAnimationController;
- (void)_updateInteractiveTransitionFromRemoteWithProgress:(double)arg1 offset:(double)arg2;
- (void)_updateInteractiveTransitionWithProgress:(double)arg1;
- (void)_updateLayoutInfoContainerSafeAreaInsets;
- (void)_updateLayoutInfoContainerTraitCollection;
- (void)_updatePresentedViewFrame;
- (void)_updateShouldPresentedViewControllerControlStatusBarAppearance;
- (id)_viewToIgnoreLayerTransformForViewFrameInWindowContentOverlayInsetsCalculation;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (BOOL)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (struct CGPoint)offsetForInterruptedAnimationInSheetInteraction:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)presentationStyle;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (void)sheetInteraction:(id)arg1 didChangeOffset:(struct CGPoint)arg2;
- (BOOL)sheetInteraction:(id)arg1 shouldBeginHorizontalRubberBandingAtPoint:(struct CGPoint)arg2;
- (void)transitionWillBegin:(BOOL)arg1;

@end

