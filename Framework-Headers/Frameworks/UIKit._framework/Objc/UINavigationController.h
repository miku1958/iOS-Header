//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UIGestureRecognizerDelegatePrivate-Protocol.h>
#import <UIKit/UILayoutContainerViewDelegate-Protocol.h>
#import <UIKit/_UINavigationBarDelegatePrivate-Protocol.h>
#import <UIKit/_UIScrollViewScrollObserver-Protocol.h>

@class NSArray, NSMapTable, NSString, NSUUID, UIFocusContainerGuide, UIGestureRecognizer, UILayoutContainerView, UINavigationBar, UINavigationDeferredTransitionContext, UINavigationTransitionView, UIPanGestureRecognizer, UITapGestureRecognizer, UIToolbar, UIView, _UIAnimationCoordinator, _UIBarPanGestureRecognizer, _UIBarTapGestureRecognizer, _UINavigationControllerPalette, _UINavigationInteractiveTransition, _UINavigationParallaxTransition;
@protocol UINavigationControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@interface UINavigationController : UIViewController <UIGestureRecognizerDelegatePrivate, _UINavigationBarDelegatePrivate, _UIScrollViewScrollObserver, UILayoutContainerViewDelegate>
{
    UILayoutContainerView *_containerView;
    UINavigationBar *_navigationBar;
    Class _navigationBarClass;
    UIToolbar *_toolbar;
    UIView *_navigationTransitionView;
    double _bottomInsetDelta;
    double _statusBarHeightForHideShow;
    UIViewController *_disappearingViewController;
    UINavigationDeferredTransitionContext *_deferredTransitionContext;
    id<UINavigationControllerDelegate> _delegate;
    long long _savedNavBarStyleBeforeSheet;
    long long _savedToolBarStyleBeforeSheet;
    UITapGestureRecognizer *_backGestureRecognizer;
    _UINavigationControllerPalette *_topPalette;
    UIView *_paletteClippingView;
    _UINavigationControllerPalette *_freePalette;
    _UINavigationControllerPalette *_transitioningTopPalette;
    BOOL _interactiveScrollActive;
    CDStruct_ef18196a _interactiveScrollNavBarIntrinsicHeightRange;
    double _interactiveScrollNavBarVerticalSizingPriorityHeight;
    long long _updateTopViewFramesToMatchScrollOffsetDisabledCount;
    unsigned int _pushSoundID;
    unsigned int _popSoundID;
    struct {
        unsigned int isAppearingAnimated:1;
        unsigned int isAlreadyPoppingNavigationItem:1;
        unsigned int isNavigationBarHidden:1;
        unsigned int isToolbarShown:1;
        unsigned int needsDeferredTransition:1;
        unsigned int isTransitioning:1;
        unsigned int paletteTransitionPending:1;
        unsigned int lastOperation:4;
        unsigned int lastOperationAnimated:1;
        unsigned int deferredTransition:8;
        unsigned int didPreloadKeyboardAnimation:1;
        unsigned int didHideBottomBar:1;
        unsigned int didExplicitlyHideTabBar:1;
        unsigned int isChangingOrientationForPop:1;
        unsigned int pretendNavBarHidden:1;
        unsigned int avoidMovingNavBarOffscreenBeforeUnhiding:1;
        unsigned int searchBarHidNavBar:1;
        unsigned int useSystemPopoverBarAppearance:1;
        unsigned int isCustomTransition:1;
        unsigned int isBuiltinTransition:1;
        unsigned int resetDidHideOnCancel:1;
        unsigned int delegateWillShowViewController:1;
        unsigned int delegateDidShowViewController:1;
        unsigned int delegateTransitionController:1;
        unsigned int delegateTransitionControllerEx:1;
        unsigned int delegateInteractionController:1;
        unsigned int delegateInteractionControllerEx:1;
        unsigned int delegateShouldCrossFadeNavigationBar:1;
        unsigned int delegateShouldCrossFadeBottomBars:1;
        unsigned int delegateShouldUseBuiltinInteractionController:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int delegateLayoutTransitioningClass:1;
        unsigned int delegateWasNonNil:1;
        unsigned int navigationBarHidesCompletelyOffscreen:1;
        unsigned int clipUnderlapWhileTransitioning:1;
        unsigned int isCrossfadingOutTabBar:1;
        unsigned int isCrossfadingInTabBar:1;
        unsigned int skipContentInsetCalculation:1;
        unsigned int neverInWindow:1;
        unsigned int useStandardStatusBarHeight:1;
        unsigned int allowUserInteractionDuringTransition:1;
        unsigned int enableBackButtonDuringTransition:1;
        unsigned int allowsGroupBlending:1;
        unsigned int allowNestedNavigationControllers:1;
        unsigned int allowChildSplitViewControllers:1;
        unsigned int nestedNavigationBarWasHidden:1;
        unsigned int nestedToolbarWasHidden:1;
        unsigned int isNested:1;
        unsigned int searchHidNavigationBar:1;
        unsigned int suppressMixedOrientationPop:1;
        unsigned int disappearingViewControllerIsBeingRemoved:1;
        unsigned int isWrappingDuringAdaptation:1;
        unsigned int cannotPerformShowViewController:1;
        unsigned int navigationSoundsEnabled:1;
        unsigned int didSetNeedsFocusInTransition:1;
        unsigned int layingOutTopViewController:1;
        unsigned int hasScheduledDeferredUpdateNavigationBarHostedRefreshControl:1;
        unsigned int allowsFreezeLayoutForOrientationChangeOnDismissal:1;
    } _navigationControllerFlags;
    BOOL _interactiveTransition;
    BOOL _hidesBarsWhenKeyboardAppears;
    BOOL _hidesBarsOnSwipe;
    BOOL _hidesBarsWhenVerticallyCompact;
    BOOL _hidesBarsOnTap;
    BOOL __shouldUseBuiltinAnimator;
    BOOL __usingBuiltinAnimator;
    BOOL __toolbarAnimationWasCancelled;
    BOOL __navigationBarAnimationWasCancelled;
    Class _toolbarClass;
    double _customNavigationTransitionDuration;
    NSMapTable *_rememberedFocusedItemsByViewController;
    long long _builtinTransitionStyle;
    double _builtinTransitionGap;
    NSString *__backdropGroupName;
    long long __preferredNavigationBarPosition;
    id<UIViewControllerAnimatedTransitioning> __transitionController;
    _UINavigationParallaxTransition *__cachedTransitionController;
    id<UIViewControllerInteractiveTransitioning> __interactionController;
    _UINavigationInteractiveTransition *__cachedInteractionController;
    NSUUID *__toolbarAnimationId;
    NSUUID *__navbarAnimationId;
    CDUnknownBlockType __updateNavigationBarHandler;
    UIFocusContainerGuide *_contentFocusContainerGuide;
    id __keyboardAppearedNotificationToken;
    _UIBarPanGestureRecognizer *__barSwipeHideGesture;
    _UIAnimationCoordinator *__barInteractiveAnimationCoordinator;
    _UIBarTapGestureRecognizer *__barTapHideGesture;
}

@property (strong, nonatomic, getter=_backdropGroupName, setter=_setBackdropGroupName:) NSString *_backdropGroupName; // @synthesize _backdropGroupName=__backdropGroupName;
@property (strong, nonatomic, setter=_setInteractiveAnimationCoordinator:) _UIAnimationCoordinator *_barInteractiveAnimationCoordinator; // @synthesize _barInteractiveAnimationCoordinator=__barInteractiveAnimationCoordinator;
@property (strong, nonatomic, setter=_setBarSwipeHideGesture:) _UIBarPanGestureRecognizer *_barSwipeHideGesture; // @synthesize _barSwipeHideGesture=__barSwipeHideGesture;
@property (strong, nonatomic, setter=_setBarTapHideGesture:) _UIBarTapGestureRecognizer *_barTapHideGesture; // @synthesize _barTapHideGesture=__barTapHideGesture;
@property (strong, nonatomic, setter=_setCachedInteractionController:) _UINavigationInteractiveTransition *_cachedInteractionController; // @synthesize _cachedInteractionController=__cachedInteractionController;
@property (strong, nonatomic, setter=_setCachedTransitionController:) _UINavigationParallaxTransition *_cachedTransitionController; // @synthesize _cachedTransitionController=__cachedTransitionController;
@property (strong, nonatomic, setter=_setInteractionController:) id<UIViewControllerInteractiveTransitioning> _interactionController; // @synthesize _interactionController=__interactionController;
@property (nonatomic, setter=_setInteractiveScrollActive:) BOOL _interactiveScrollActive; // @synthesize _interactiveScrollActive;
@property (readonly, nonatomic) BOOL _isLayingOutTopViewController;
@property (strong, nonatomic, setter=_setKeyboardAppearedNotificationToken:) id _keyboardAppearedNotificationToken; // @synthesize _keyboardAppearedNotificationToken=__keyboardAppearedNotificationToken;
@property (strong, nonatomic, setter=_setNavbarAnimationId:) NSUUID *_navbarAnimationId; // @synthesize _navbarAnimationId=__navbarAnimationId;
@property (nonatomic, setter=_setNavigationBarAnimationWasCancelled:) BOOL _navigationBarAnimationWasCancelled; // @synthesize _navigationBarAnimationWasCancelled=__navigationBarAnimationWasCancelled;
@property (nonatomic, setter=_setPreferredNavigationBarPosition:) long long _preferredNavigationBarPosition; // @synthesize _preferredNavigationBarPosition=__preferredNavigationBarPosition;
@property (nonatomic, setter=_setSearchHidNavigationBar:) BOOL _searchHidNavigationBar;
@property (nonatomic, setter=_setShouldUseBuiltinAnimator:) BOOL _shouldUseBuiltinAnimator; // @synthesize _shouldUseBuiltinAnimator=__shouldUseBuiltinAnimator;
@property (strong, nonatomic, setter=_setToolbarAnimationId:) NSUUID *_toolbarAnimationId; // @synthesize _toolbarAnimationId=__toolbarAnimationId;
@property (nonatomic, setter=_setToolbarAnimationWasCancelled:) BOOL _toolbarAnimationWasCancelled; // @synthesize _toolbarAnimationWasCancelled=__toolbarAnimationWasCancelled;
@property (nonatomic, setter=_setToolbarClass:) Class _toolbarClass; // @synthesize _toolbarClass;
@property (strong, nonatomic, setter=_setTransitionController:) id<UIViewControllerAnimatedTransitioning> _transitionController; // @synthesize _transitionController=__transitionController;
@property (copy, nonatomic, setter=_setUpdateNavigationBarHandler:) CDUnknownBlockType _updateNavigationBarHandler; // @synthesize _updateNavigationBarHandler=__updateNavigationBarHandler;
@property (nonatomic, getter=_isUsingBuiltinAnimator, setter=_setUsingBuiltinAnimator:) BOOL _usingBuiltinAnimator; // @synthesize _usingBuiltinAnimator=__usingBuiltinAnimator;
@property (nonatomic, getter=_allowChildSplitViewControllers, setter=_setAllowChildSplitViewControllers:) BOOL allowChildSplitViewControllers;
@property (nonatomic, getter=_allowNestedNavigationControllers, setter=_setAllowNestedNavigationControllers:) BOOL allowNestedNavigationControllers;
@property (nonatomic) BOOL avoidMovingNavBarOffscreenBeforeUnhiding;
@property (readonly, nonatomic) UIPanGestureRecognizer *barHideOnSwipeGestureRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *barHideOnTapGestureRecognizer;
@property (readonly, nonatomic) UIViewController *bottomViewController;
@property (nonatomic, getter=_builtinTransitionGap, setter=_setBuiltinTransitionGap:) double builtinTransitionGap; // @synthesize builtinTransitionGap=_builtinTransitionGap;
@property (nonatomic, getter=_builtinTransitionStyle, setter=_setBuiltinTransitionStyle:) long long builtinTransitionStyle; // @synthesize builtinTransitionStyle=_builtinTransitionStyle;
@property (readonly, nonatomic, getter=_contentFocusContainerGuide) UIFocusContainerGuide *contentFocusContainerGuide; // @synthesize contentFocusContainerGuide=_contentFocusContainerGuide;
@property (nonatomic, getter=_isCrossfadingInTabBar, setter=_setCrossfadingInTabBar:) BOOL crossfadingInTabBar;
@property (nonatomic, getter=_isCrossfadingOutTabBar, setter=_setCrossfadingOutTabBar:) BOOL crossfadingOutTabBar;
@property (nonatomic) double customNavigationTransitionDuration; // @synthesize customNavigationTransitionDuration=_customNavigationTransitionDuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UINavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong) UIViewController *detailViewController;
@property (nonatomic, getter=_didExplicitlyHideTabBar, setter=_setDidExplicitlyHideTabBar:) BOOL didHideTabBar;
@property (strong, nonatomic) UIViewController *disappearingViewController; // @synthesize disappearingViewController=_disappearingViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hidesBarsOnSwipe; // @synthesize hidesBarsOnSwipe=_hidesBarsOnSwipe;
@property (nonatomic) BOOL hidesBarsOnTap; // @synthesize hidesBarsOnTap=_hidesBarsOnTap;
@property (nonatomic) BOOL hidesBarsWhenKeyboardAppears; // @synthesize hidesBarsWhenKeyboardAppears=_hidesBarsWhenKeyboardAppears;
@property (nonatomic) BOOL hidesBarsWhenVerticallyCompact; // @synthesize hidesBarsWhenVerticallyCompact=_hidesBarsWhenVerticallyCompact;
@property (readonly, nonatomic) UIGestureRecognizer *interactivePopGestureRecognizer;
@property (nonatomic, getter=isInteractiveTransition) BOOL interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property BOOL isExpanded;
@property (nonatomic, getter=_isNestedNavigationController, setter=_setIsNestedNavigationController:) BOOL isNestedNavigationController;
@property (readonly, nonatomic) UINavigationBar *navigationBar;
@property (nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property (readonly, nonatomic) UINavigationTransitionView *navigationTransitionView;
@property (nonatomic) BOOL needsDeferredTransition;
@property (nonatomic) BOOL pretendNavBarHidden;
@property (readonly, nonatomic) UIViewController *previousViewController;
@property (readonly, nonatomic, getter=_rememberedFocusedItemsByViewController) NSMapTable *rememberedFocusedItemsByViewController; // @synthesize rememberedFocusedItemsByViewController=_rememberedFocusedItemsByViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIToolbar *toolbar;
@property (nonatomic, getter=isToolbarHidden) BOOL toolbarHidden;
@property (readonly, nonatomic) UIViewController *topViewController;
@property (copy, nonatomic) NSArray *viewControllers;
@property (readonly, nonatomic) UIViewController *visibleViewController;

+ (BOOL)_directlySetsContentOverlayInsetsForChildren;
+ (BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+ (BOOL)doesOverrideSupportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)__viewWillLayoutSubviews;
- (id)_additionalViewControllersToCheckForUserActivity;
- (struct CGSize)_adjustedContentSizeForPopover:(struct CGSize)arg1;
- (BOOL)_allowsAutorotation;
- (BOOL)_allowsFreezeLayoutForOrientationChangeOnDismissal;
- (BOOL)_animationParametersForHidingNavigationBar:(BOOL)arg1 lastOperation:(long long)arg2 edge:(unsigned long long *)arg3 duration:(double *)arg4;
- (struct UIEdgeInsets)_avoidanceInsets;
- (id)_backdropBarGroupName;
- (struct CGRect)_boundsForPalette:(id)arg1 size:(struct CGSize)arg2;
- (id)_builtinInteractionController;
- (id)_builtinTransitionController;
- (CDStruct_1c6ce877)_calculateTopLayoutInfoForViewController:(id)arg1;
- (void)_calculateTopViewFramesForExpandedLayoutWithViewController:(id)arg1 contentScrollView:(id)arg2 gettingNavBarFrame:(struct CGRect *)arg3 topPaletteFrame:(struct CGRect *)arg4;
- (void)_calculateTopViewFramesForLayoutWithViewController:(id)arg1 contentScrollView:(id)arg2 navBarFrame:(struct CGRect *)arg3 topPaletteFrame:(struct CGRect *)arg4 topLayoutType:(long long)arg5;
- (void)_calculateTopViewFramesForPushPopIncomingLayoutWithViewController:(id)arg1 contentScrollView:(id)arg2 gettingNavBarFrame:(struct CGRect *)arg3 topPaletteFrame:(struct CGRect *)arg4;
- (BOOL)_canHostRefreshControlOwnedByScrollView:(id)arg1;
- (BOOL)_canRestoreFocusAfterTransitionToRecalledItem:(id)arg1 inViewController:(id)arg2;
- (BOOL)_canUpdateTopViewFramesToMatchScrollView;
- (void)_cancelInteractiveTransition:(double)arg1 transitionContext:(id)arg2;
- (id)_childViewControllersToSendViewWillTransitionToSize;
- (void)_clearLastOperation;
- (BOOL)_clipUnderlapWhileTransitioning;
- (struct UIEdgeInsets)_collapsableContentPaddingForObservedScrollView:(id)arg1;
- (void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)arg1;
- (struct CGPoint)_computeTopBarCenter:(id)arg1 hidden:(BOOL)arg2 edge:(unsigned long long)arg3 center:(struct CGPoint)arg4 offset:(double)arg5;
- (void)_configureBarSwipeGesture;
- (void)_configureBarTapGesture;
- (void)_configureBarsAutomaticActions;
- (void)_configureKeyboardBarHiding;
- (void)_configureToolbar;
- (void)_confirmBarAccessMethods;
- (void)_createAndAttachSearchPaletteForTopViewControllerIfNecessary:(id)arg1;
- (void)_createAndAttachSearchPaletteForTransitionToTopViewControllerIfNecesssary:(id)arg1;
- (id)_customInteractionController:(id)arg1;
- (double)_customNavigationTransitionDuration;
- (id)_customTransitionController:(BOOL)arg1;
- (id)_deepestUnambiguousResponder;
- (int)_deferredTransition;
- (void)_detachPalette:(id)arg1;
- (void)_detachTopPaletteIfShowingSearchBarForTopmostViewControllerInNavigationController:(id)arg1;
- (void)_detachTopPaletteIfShowingSearchBarForViewController:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)_doesTopViewControllerSupportInterfaceOrientation:(long long)arg1;
- (void)_eagerlyUpdateSafeAreaInsets;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL *)arg2;
- (void)_executeNavigationHandler:(CDUnknownBlockType)arg1 deferred:(BOOL)arg2;
- (id)_existingNavigationBar;
- (id)_existingToolbar;
- (id)_existingToolbarWithItems;
- (struct UIEdgeInsets)_expectedContentInsetDeltaForViewController:(id)arg1;
- (id)_findViewControllerToPopTo;
- (id)_findViewControllerToPopToForNavigationItem:(id)arg1;
- (void)_finishAnimationTracking;
- (void)_finishInteractiveTransition:(double)arg1 transitionContext:(id)arg2;
- (void)_forgetFocusedItemForViewController:(id)arg1;
- (struct CGRect)_frameForContainerViewInSheetForBounds:(struct CGRect)arg1 displayingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3;
- (struct CGRect)_frameForPalette:(id)arg1;
- (struct CGRect)_frameForViewController:(id)arg1;
- (struct CGRect)_frameForWrapperViewForViewController:(id)arg1;
- (void)_gestureRecognizedInteractiveHide:(id)arg1;
- (void)_gestureRecognizedToggleVisibility:(id)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (void)_handleSubtreeDidGainScrollView:(id)arg1;
- (BOOL)_hasInterruptibleNavigationTransition;
- (BOOL)_hasNestedNavigationController;
- (BOOL)_hasPreferredInterfaceOrientationForPresentation;
- (BOOL)_hasTranslucentNavigationBarIncludingViewController:(id)arg1;
- (double)_heightOfTopPartsWhenHiddenAndCollapsed;
- (double)_heightOfTopPartsWhenVisibleAndExpanded;
- (void)_hideForKeyboardAppearance;
- (void)_hideOrShowBottomBarIfNeededWithTransition:(int)arg1;
- (void)_hideShowNavigationBarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_hideShowToolbarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (struct CGRect)_incomingNavigationBarFrame;
- (void)_initializeHeightOfTopPalette:(id)arg1;
- (void)_initializeNavigationDeferredTransitionContextIfNecessary;
- (void)_installPaletteIntoViewHierarchy:(id)arg1;
- (id)_interruptibleNavigationTransitionAnimator;
- (CDStruct_c3b9c2ee)_intrinsicNavigationBarHeightRangeForViewController:(id)arg1;
- (BOOL)_isAlreadyPoppingNavItem;
- (BOOL)_isInteractiveCustomNavigationTransition;
- (BOOL)_isNavigationBarEffectivelyVisible;
- (BOOL)_isNavigationBarVisible;
- (BOOL)_isPerformingLayoutToLayoutTransition;
- (BOOL)_isPresentationContextByDefault;
- (BOOL)_isPushingOrPopping;
- (BOOL)_isPushingOrPoppingUsingLayoutToLayoutNavigationTransition;
- (BOOL)_isSupportedInterfaceOrientation:(long long)arg1;
- (BOOL)_isTransitioning;
- (BOOL)_isTransitioningOrPaletteIsTransitioning;
- (BOOL)_isViewControllerFullScene;
- (id)_keyboardAnimationStyle;
- (int)_keyboardDirectionForTransition:(long long)arg1;
- (id)_lastNavigationItems;
- (void)_layoutContainerViewSemanticContentAttributeChanged:(id)arg1;
- (struct NSDirectionalEdgeInsets)_layoutMarginsforNavigationBar:(id)arg1;
- (void)_layoutTopViewController;
- (void)_layoutTopViewControllerInSheet;
- (void)_layoutTopViewControllerInSheetWithPopoverView:(id)arg1;
- (void)_layoutTopViewControllerOutOfSheet;
- (void)_layoutViewController:(id)arg1;
- (void)_loadTopSearchPaletteForDeferredTransitionIfNecessaryForTransitionToViewController:(id)arg1;
- (void)_makeBarHideGestureIfNecessary;
- (void)_makeBarSwipeGestureIfNecessary;
- (id)_managedSearchPaletteForEdge:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;
- (id)_moreListTitle;
- (id)_navControllerToCreateManagedSearchPaletteForNavController:(id)arg1;
- (BOOL)_navbarIsAppearingInteractively;
- (void)_navigationBarChangedSize:(id)arg1;
- (void)_navigationBarDidChangeStyle:(id)arg1;
- (void)_navigationBarDidEndAnimation:(id)arg1;
- (id)_navigationBarForDragAffordance;
- (id)_navigationBarForNestedNavigationController;
- (id)_navigationBarHiddenByDefault:(BOOL)arg1;
- (BOOL)_navigationBarShouldUpdateProgress;
- (struct CGSize)_navigationBarSizeForViewController:(id)arg1 proposedHeight:(double)arg2 verticalFittingPriority:(float)arg3 allowRubberBandStretch:(BOOL)arg4;
- (void)_navigationBarWillBeginCoordinatedTransitionAnimations:(id)arg1;
- (void)_navigationItemDidUpdateSearchController:(id)arg1 oldSearchController:(id)arg2;
- (id)_navigationItems;
- (id)_navigationItemsCallingPublicAccessor:(BOOL)arg1;
- (BOOL)_navigationSoundsEnabled;
- (long long)_navigationTransitionForUITransition:(int)arg1;
- (void)_navigationTransitionView:(id)arg1 didCancelTransition:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 wrapperView:(id)arg5;
- (void)_noteNestedNavigationControllerDidReturnToNormal:(id)arg1;
- (void)_notifyTransitionBegan:(id)arg1;
- (id)_nthChildViewControllerFromTop:(unsigned long long)arg1;
- (void)_observeScrollView:(id)arg1 didBeginTransitionToDeferredContentOffset:(struct CGPoint)arg2;
- (void)_observeScrollView:(id)arg1 willEndDraggingWithVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3 unclampedOriginalTarget:(struct CGPoint)arg4;
- (void)_observeScrollViewDidEndDecelerating:(id)arg1;
- (void)_observeScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_observeScrollViewDidScroll:(id)arg1 topLayoutType:(long long)arg2;
- (void)_observeScrollViewWillBeginDragging:(id)arg1;
- (id)_outermostNavigationController;
- (id)_overridingPreferredFocusEnvironment;
- (id)_paletteForEdge:(unsigned long long)arg1 size:(struct CGSize)arg2 paletteClass:(Class)arg3;
- (void)_performBackGesture:(id)arg1;
- (void)_performCoordinatedLayoutToLayoutNavigationTransitionAnimations;
- (void)_performCoordinatedUpdateTopFramesTransitionAnimation;
- (void)_performSkippedHostedRefreshControlUpdateSchedulingDeferredUpdateIfNecessary;
- (void)_performTopViewGeometryUpdates:(CDUnknownBlockType)arg1;
- (void)_performWhileIgnoringUpdateTopViewFramesToMatchScrollOffset:(CDUnknownBlockType)arg1;
- (id)_pinningBarForPalette:(id)arg1;
- (void)_playPopNavigationSound;
- (void)_playPushNavigationSound;
- (void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(BOOL)arg1;
- (id)_popViewControllerWithTransition:(int)arg1 allowPoppingLast:(BOOL)arg2;
- (long long)_positionForBar:(id)arg1;
- (void)_positionNavigationBar:(id)arg1 hidden:(BOOL)arg2 edge:(unsigned long long)arg3 center:(struct CGPoint)arg4 offset:(double)arg5;
- (void)_positionNavigationBarHidden:(BOOL)arg1;
- (void)_positionNavigationBarHidden:(BOOL)arg1 edge:(unsigned long long)arg2;
- (void)_positionNavigationBarHidden:(BOOL)arg1 edge:(unsigned long long)arg2 initialOffset:(double)arg3;
- (void)_positionPaletteHidden:(BOOL)arg1 edge:(unsigned long long)arg2;
- (void)_positionPaletteHidden:(BOOL)arg1 edge:(unsigned long long)arg2 initialOffset:(double)arg3;
- (void)_positionToolbarHidden:(BOOL)arg1;
- (void)_positionToolbarHidden:(BOOL)arg1 edge:(unsigned long long)arg2;
- (void)_positionToolbarHidden:(BOOL)arg1 edge:(unsigned long long)arg2 crossFade:(BOOL)arg3;
- (void)_positionTransitioningPalette:(id)arg1 outside:(BOOL)arg2 edge:(unsigned long long)arg3 preservingYPosition:(BOOL)arg4;
- (double)_preferredHeightForHidingNavigationBarForViewController:(id)arg1;
- (void)_prepareCollectionViewController:(id)arg1 forSharingWithCollectionViewController:(id)arg2;
- (void)_prepareCollectionViewControllerForSharing:(id)arg1;
- (void)_prepareCollectionViewControllers:(id)arg1 forSharingInRange:(id)arg2;
- (void)_prepareForDismissalInPopover:(id)arg1;
- (void)_prepareForNestedDisplayWithNavigationController:(id)arg1;
- (void)_prepareForNormalDisplayWithNavigationController:(id)arg1;
- (void)_prepareForPresentationInPopover:(id)arg1;
- (void)_presentationTransitionUnwrapViewController:(id)arg1;
- (void)_presentationTransitionWrapViewController:(id)arg1 forTransitionContext:(id)arg2;
- (void)_privateWillShowViewController:(id)arg1;
- (void)_propagateContentAdjustmentsForControllersWithSharedViews;
- (BOOL)_reallyWantsFullScreenLayout;
- (id)_recallRememberedFocusedItemForViewController:(id)arg1;
- (void)_releaseContainerViews;
- (void)_reloadCachedInteractiveScrollMeasurements;
- (void)_rememberFocusedItem:(id)arg1 forViewController:(id)arg2;
- (void)_rememberPresentingFocusedItem:(id)arg1;
- (void)_repositionPaletteWithNavigationBarHidden:(BOOL)arg1 duration:(double)arg2 shouldUpdateNavigationItems:(BOOL)arg3;
- (void)_resetBottomBarHiddenState;
- (struct UIEdgeInsets)_revealableContentPaddingForObservedScrollView:(id)arg1 includeContentWithCollapsedAffinity:(BOOL)arg2;
- (void)_safeAreaInsetsDidChangeForView;
- (id)_screenEdgePanGestureRecognizer;
- (id)_scrollDetentOffsetsForScrollView:(id)arg1;
- (double)_scrollOffsetRetargettedToDetentOffsetIfNecessary:(double)arg1 unclampedOriginalTargetOffset:(double)arg2 scrollView:(id)arg3;
- (double)_scrollViewBottomContentInsetForViewController:(id)arg1;
- (double)_scrollViewTopContentInsetForViewController:(id)arg1;
- (void)_sendNavigationBarToBack;
- (void)_setAllowsFreezeLayoutForOrientationChangeOnDismissal:(BOOL)arg1;
- (void)_setBarsHidden:(BOOL)arg1;
- (void)_setBarsHidden:(BOOL)arg1 allowAnimation:(BOOL)arg2;
- (void)_setClipUnderlapWhileTransitioning:(BOOL)arg1;
- (void)_setClipsToBounds:(BOOL)arg1;
- (void)_setContentInset:(struct UIEdgeInsets)arg1;
- (void)_setCustomTransition:(BOOL)arg1;
- (void)_setIsWrappingDuringAdaptation:(BOOL)arg1;
- (void)_setKeyboardNotificationToken:(id)arg1;
- (void)_setNavigationBarHidden:(BOOL)arg1 edge:(unsigned long long)arg2 duration:(double)arg3;
- (void)_setNavigationBarHidden:(BOOL)arg1 edgeIfNotNavigating:(unsigned long long)arg2 duration:(double)arg3;
- (void)_setNavigationBarHidesCompletelyOffscreen:(BOOL)arg1;
- (void)_setNavigationSoundsEnabled:(BOOL)arg1;
- (void)_setPreferredContentSizeFromChildContentContainer:(id)arg1;
- (void)_setToolbarHidden:(BOOL)arg1 edge:(unsigned long long)arg2 duration:(double)arg3;
- (void)_setUpContentFocusContainerGuide;
- (void)_setUseCurrentStatusBarHeight:(BOOL)arg1;
- (void)_setUseStandardStatusBarHeight:(BOOL)arg1;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3 operation:(long long)arg4;
- (void)_setViewControllers_7_0:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3;
- (void)_setViewControllers_7_0:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3 operation:(long long)arg4;
- (BOOL)_shouldBottomBarBeHidden;
- (BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (BOOL)_shouldCrossFadeBottomBars;
- (BOOL)_shouldCrossFadeNavigationBar;
- (BOOL)_shouldHideBarsForTraits:(id)arg1;
- (BOOL)_shouldHideSearchBarWhenScrollingForNavigationItem:(id)arg1;
- (BOOL)_shouldLayoutViewControllerForTransparentStatusBar:(id)arg1;
- (BOOL)_shouldNavigationBarInsetViewController:(id)arg1;
- (BOOL)_shouldNavigationBarInsetViewController:(id)arg1 orOverlayContent:(BOOL *)arg2;
- (BOOL)_shouldNavigationBarInsetViewControllerPreInnsbruck:(id)arg1;
- (BOOL)_shouldPersistViewWhenCoding;
- (BOOL)_shouldPopFromLandscapeToPortraitOrientation;
- (BOOL)_shouldSkipHostedRefreshControlUpdateSchedulingDeferredUpdateIfNecessary;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (BOOL)_shouldTabBarController:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(BOOL *)arg3;
- (BOOL)_shouldToolBar:(id)arg1 insetViewController:(id)arg2;
- (BOOL)_shouldToolBar:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(BOOL *)arg3;
- (BOOL)_shouldUseBuiltinInteractionController;
- (BOOL)_shouldUseOnePartRotation;
- (id)_snapshotView;
- (void)_startCustomTransition:(id)arg1;
- (void)_startDeferredTransitionIfNeeded;
- (void)_startDeferredTransitionIfNeeded:(id)arg1;
- (id)_startInteractiveBarTransition:(id)arg1;
- (void)_startInteractiveNavbarTransition;
- (void)_startInteractiveToolbarTransition;
- (void)_startPaletteTransitionIfNecessary:(id)arg1 animated:(BOOL)arg2;
- (void)_startToolbarTransitionIfNecessary:(id)arg1 animated:(BOOL)arg2;
- (void)_startTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)_stopObservingContentScrollView:(id)arg1;
- (void)_stopObservingContentScrollViewForViewController:(id)arg1;
- (void)_stopTransitionsImmediately;
- (long long)_subclassPreferredFocusedViewPrioritizationType;
- (void)_tabBarControllerDidFinishShowingTabBar:(id)arg1 isHidden:(BOOL)arg2;
- (BOOL)_toolbarIsAnimatingInteractively;
- (double)_topBarHeight;
- (long long)_topLayoutTypeForViewController:(id)arg1;
- (id)_topPalette;
- (double)_topPalettePreferredLayoutHeightForVisibilityStateIfDisplayedForViewController:(id)arg1;
- (id)_transitionAnimationContext;
- (BOOL)_transitionConflictsWithNavigationTransitions:(id)arg1;
- (id)_transitionCoordinator;
- (int)_transitionForOldViewControllers:(id)arg1 newViewControllers:(id)arg2;
- (void)_unhideNavigationBarForEdge:(unsigned long long)arg1;
- (void)_updateBarsForCurrentInterfaceOrientation;
- (void)_updateBottomBarHiddenState;
- (void)_updateChildContentMargins;
- (void)_updateControlledViewsToFrame:(struct CGRect)arg1;
- (void)_updateInteractiveBarTransition:(id)arg1 withUUID:(id)arg2 percent:(double)arg3 isFinished:(BOOL)arg4 didComplete:(BOOL)arg5 completionSpeed:(double)arg6 completionCurve:(long long)arg7;
- (void)_updateInteractivePopGestureEnabledState;
- (void)_updateInteractiveTransition:(double)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateNavigationBarHostedRefreshControlToHostRefreshControlForScrollView:(id)arg1;
- (void)_updatePaletteConstraints;
- (void)_updatePalettesWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateScrollViewFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_updateSearchPaletteSettingsForTopViewController:(id)arg1;
- (void)_updateToolbarItemsFromViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_updateTopPaletteVisibilityState;
- (void)_updateTopViewFramesForViewController:(id)arg1;
- (void)_updateTopViewFramesToMatchScrollOffsetInViewController:(id)arg1 contentScrollView:(id)arg2 topLayoutType:(long long)arg3;
- (BOOL)_useCrossFadeForGestureHiding;
- (BOOL)_useCurrentStatusBarHeight;
- (BOOL)_useStandardStatusBarHeight;
- (BOOL)_usesTransitionController;
- (id)_viewControllerForDisappearCallback;
- (id)_viewControllerForSearchPalette;
- (void)_viewControllerSubtreeDidGainViewController:(id)arg1;
- (BOOL)_viewControllerUnderlapsStatusBar;
- (BOOL)_viewControllerWasSelected;
- (id)_viewForContentInPopover;
- (void)_viewSubtreeDidGainScrollView:(id)arg1 enclosingViewController:(id)arg2;
- (id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1;
- (double)_widthForLayout;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (BOOL)_willPerformCustomNavigationTransitionForPop;
- (BOOL)_willPerformCustomNavigationTransitionForPush;
- (BOOL)allowUserInteractionDuringTransition;
- (id)allowedChildViewControllersForUnwindingFromSource:(id)arg1;
- (void)attachPalette:(id)arg1 isPinned:(BOOL)arg2;
- (BOOL)becomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForUserInterfaceStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2;
- (BOOL)condensesBarsOnSwipe;
- (struct CGSize)contentSizeForViewInPopover;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)defaultPNGName;
- (void)detachPalette:(id)arg1;
- (void)detachPalette:(id)arg1 isInPaletteTransition:(BOOL)arg2;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (double)durationForTransition:(int)arg1;
- (BOOL)editing;
- (BOOL)enableBackButtonDuringTransition;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)existingPaletteForEdge:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (BOOL)isBuiltinTransition;
- (BOOL)isCustomTransition;
- (BOOL)isModalInPopover;
- (BOOL)isShown;
- (long long)lastOperation;
- (void)loadView;
- (long long)modalTransitionStyle;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)moreListTableCell;
- (void)navigationBar:(id)arg1 buttonClicked:(int)arg2;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (Class)navigationBarClass;
- (void)navigationBarDidChangeOpacity:(id)arg1;
- (void)navigationBarDidResizeForPrompt:(id)arg1;
- (id)navigationItem;
- (void)navigationTransitionView:(id)arg1 didEndTransition:(long long)arg2 fromView:(id)arg3 toView:(id)arg4;
- (void)navigationTransitionView:(id)arg1 didStartTransition:(long long)arg2;
- (double)navigationTransitionView:(id)arg1 durationForTransition:(long long)arg2;
- (id)paletteForEdge:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToRootViewControllerWithTransition:(int)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popToViewController:(id)arg1 transition:(int)arg2;
- (id)popToViewControllerWithSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (id)popViewControllerWithAnimationTransition:(long long)arg1 duration:(double)arg2 curve:(long long)arg3;
- (id)popViewControllerWithTransition:(int)arg1;
- (struct CGSize)preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredStatusBarStyle;
- (void)purgeMemoryForReason:(int)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (void)pushViewController:(id)arg1 transition:(int)arg2 forceImmediate:(BOOL)arg3;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (BOOL)searchBarHidNavBar;
- (id)segueForUnwindingToViewController:(id)arg1 fromViewController:(id)arg2 identifier:(id)arg3;
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;
- (void)setAllowUserInteractionDuringTransition:(BOOL)arg1;
- (void)setCondensesBarsOnSwipe:(BOOL)arg1;
- (void)setContentSizeForViewInPopover:(struct CGSize)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEnableBackButtonDuringTransition:(BOOL)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setNavigationBarClass:(Class)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNeedsDeferredTransition;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)setSearchBarHidNavBar:(BOOL)arg1;
- (void)setToolbar:(id)arg1;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tabBarItem;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unwindForSegue:(id)arg1 towardsViewController:(id)arg2;
- (void)updateTabBarItemForViewController:(id)arg1;
- (void)updateTitleForViewController:(id)arg1;
- (id)viewControllerForUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)wasLastOperationAnimated;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

