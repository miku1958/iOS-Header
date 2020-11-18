//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UILayoutContainerViewDelegate-Protocol.h>
#import <UIKitCore/UITabBarDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, UIFocusContainerGuide, UIGestureRecognizer, UILayoutContainerView, UILongPressGestureRecognizer, UIMoreNavigationController, UINavigationController, UITabBar, UITapGestureRecognizer, UIView;
@protocol UITabBarControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@interface UITabBarController : UIViewController <UIGestureRecognizerDelegate, UILayoutContainerViewDelegate, UITabBarDelegate, NSCoding>
{
    UITabBar *_tabBar;
    UILayoutContainerView *_containerView;
    UIView *_viewControllerTransitionView;
    id _tabBarItemsToViewControllers;
    UIViewController *_selectedViewController;
    UIMoreNavigationController *_moreNavigationController;
    NSArray *_customizableViewControllers;
    UIViewController *_selectedViewControllerDuringWillAppear;
    UIViewController *_transientViewController;
    unsigned long long _customMaxItems;
    unsigned long long _defaultMaxItems;
    long long _tabBarPosition;
    UITapGestureRecognizer *_backGestureRecognizer;
    UITapGestureRecognizer *_nudgeLeftGestureRecognizer;
    UITapGestureRecognizer *_nudgeRightGestureRecognizer;
    UITapGestureRecognizer *_selectGestureRecognizer;
    UIGestureRecognizer *_touchDetectionGestureRecognizer;
    UIFocusContainerGuide *_contentFocusContainerGuide;
    UILongPressGestureRecognizer *_accessibilityLongPressGestureRecognizer;
    struct {
        unsigned int isShowingMoreItem:1;
        unsigned int needsToRebuildItems:1;
        unsigned int isBarHidden:1;
        unsigned int editButtonOnLeft:1;
        unsigned int barLayoutIsValid:1;
        unsigned int reselectTab:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int preferTabBarFocused:1;
        unsigned int offscreen:1;
        unsigned int hidNavBar:1;
    } _tabBarControllerFlags;
    NSMutableArray *_moreChildViewControllers;
    UIView *_accessoryView;
    NSMapTable *_rememberedFocusedItemsByViewController;
    id<UITabBarControllerDelegate> _delegate;
    NSString *__backdropGroupName;
    id<UIViewControllerAnimatedTransitioning> __animator;
    id<UIViewControllerInteractiveTransitioning> __interactor;
}

@property (strong, nonatomic, setter=_setAccessoryView:) UIView *_accessoryView; // @synthesize _accessoryView;
@property (strong, nonatomic, setter=_setAnimator:) id<UIViewControllerAnimatedTransitioning> _animator; // @synthesize _animator=__animator;
@property (strong, nonatomic, getter=_backdropGroupName, setter=_setBackdropGroupName:) NSString *_backdropGroupName; // @synthesize _backdropGroupName=__backdropGroupName;
@property (strong, nonatomic, setter=_setInteractor:) id<UIViewControllerInteractiveTransitioning> _interactor; // @synthesize _interactor=__interactor;
@property (copy, nonatomic) NSArray *customizableViewControllers; // @synthesize customizableViewControllers=_customizableViewControllers;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UITabBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *moreChildViewControllers; // @synthesize moreChildViewControllers=_moreChildViewControllers;
@property (readonly, nonatomic) UINavigationController *moreNavigationController;
@property (readonly, nonatomic, getter=_rememberedFocusedItemsByViewController) NSMapTable *rememberedFocusedItemsByViewController; // @synthesize rememberedFocusedItemsByViewController=_rememberedFocusedItemsByViewController;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) UIViewController *selectedViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITabBar *tabBar;
@property (copy, nonatomic) NSArray *viewControllers;

+ (BOOL)_directlySetsContentOverlayInsetsForChildren;
+ (Class)_moreNavigationControllerClass;
+ (BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+ (BOOL)doesOverrideSupportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)__viewWillLayoutSubviews;
- (id)_accessibilityHUDLongPressRecognizer;
- (void)_accessibilityLongPressChanged:(id)arg1;
- (id)_additionalViewControllersToCheckForUserActivity;
- (struct CGRect)_adjustContentViewFrameForOffscreenFocus:(struct CGRect)arg1 viewController:(id)arg2;
- (struct CGRect)_adjustTabBarFrameForOffscreenFocus:(struct CGRect)arg1 barPosition:(long long)arg2;
- (id)_allContainedViewControllers;
- (BOOL)_allowSelectionWithinMoreList;
- (BOOL)_allowsAutorotation;
- (BOOL)_allowsCustomizing;
- (id)_backdropBarGroupName;
- (BOOL)_canRestoreFocusAfterTransitionToRecalledItem:(id)arg1 inViewController:(id)arg2;
- (void)_configureTargetActionForTabBarItem:(id)arg1;
- (id)_customAnimatorForFromViewController:(id)arg1 toViewController:(id)arg2;
- (id)_customInteractionControllerForAnimator:(id)arg1;
- (id)_deepestUnambiguousResponder;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)_doAllViewControllersSupportInterfaceOrientation:(long long)arg1;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL *)arg2;
- (unsigned long long)_effectiveMaxItems;
- (long long)_effectiveTabBarPosition;
- (id)_existingMoreNavigationController;
- (void)_forgetFocusedItemForViewController:(id)arg1;
- (struct CGRect)_frameForViewController:(id)arg1;
- (struct CGRect)_frameForWrapperViewForViewController:(id)arg1;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (BOOL)_hasPreferredInterfaceOrientationForPresentation;
- (void)_hideBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2;
- (void)_hideBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2 duration:(double)arg3;
- (BOOL)_ignoreUnselectedTabsForStateRestoration;
- (void)_invalidateBarLayoutIfNecessary;
- (BOOL)_isBarHidden;
- (BOOL)_isPresentationContextByDefault;
- (BOOL)_isSupportedInterfaceOrientation:(long long)arg1;
- (BOOL)_isTabBarFocused;
- (void)_layoutContainerView;
- (void)_layoutViewController:(id)arg1;
- (id)_overridingPreferredFocusEnvironment;
- (void)_performBackGesture:(id)arg1;
- (void)_performFocusGesture:(unsigned long long)arg1;
- (void)_performLeftGesture:(id)arg1;
- (void)_performRightGesture:(id)arg1;
- (void)_performSelectGesture:(id)arg1;
- (void)_performTouchDetectionGesture:(id)arg1;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (void)_prepareTabBar;
- (BOOL)_reallyWantsFullScreenLayout;
- (void)_rebuildTabBarItemsAnimated:(BOOL)arg1;
- (void)_rebuildTabBarItemsIfNeeded;
- (id)_recallRememberedFocusedItemForViewController:(id)arg1;
- (void)_rememberFocusedItem:(id)arg1 forViewController:(id)arg2;
- (void)_rememberPresentingFocusedItem:(id)arg1;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (void)_safeAreaInsetsDidChangeForView;
- (void)_selectDefaultViewControllerIfNecessaryWithAppearanceTransitions:(BOOL)arg1;
- (id)_selectedViewControllerInTabBar;
- (void)_setBadgeValue:(id)arg1 forTabBarItem:(id)arg2;
- (void)_setMaximumNumberOfItems:(unsigned long long)arg1;
- (void)_setMoreNavigationControllerRestorationIdentifier;
- (void)_setSelectedTabBarItem:(id)arg1;
- (void)_setSelectedViewController:(id)arg1;
- (void)_setSelectedViewControllerNeedsLayout;
- (void)_setTabBarPosition:(long long)arg1;
- (void)_setUpFocusContainerGuides;
- (void)_setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_shouldAdjustContentViewFrameForOffscreenFocus:(id)arg1 adjustedTabBarFrame:(struct CGRect)arg2;
- (BOOL)_shouldPersistViewWhenCoding;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (BOOL)_shouldUseOnePartRotation;
- (void)_showBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2;
- (void)_showBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2 duration:(double)arg3;
- (long long)_subclassPreferredFocusedViewPrioritizationType;
- (void)_tabBarItemClicked:(id)arg1;
- (long long)_tabBarPosition;
- (id)_transitionView;
- (BOOL)_transitionsChildViewControllers;
- (void)_updateGestureRecognizersForTraitCollection:(id)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateLayoutForTraitCollection:(id)arg1;
- (void)_updateOffscreenStatus:(BOOL)arg1;
- (void)_updateTabBarLayout;
- (id)_viewControllerForSelectAtIndex:(unsigned long long)arg1;
- (id)_viewControllerForTabBarItem:(id)arg1;
- (id)_viewControllersInTabBar;
- (id)_viewForViewController:(id)arg1;
- (id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (id)_wrapperViewForViewController:(id)arg1;
- (id)allViewControllers;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (BOOL)becomeFirstResponder;
- (void)beginCustomizingTabBar:(id)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForUserInterfaceStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)concealTabBarSelection;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)hideBarWithTransition:(int)arg1;
- (void)hideBarWithTransition:(int)arg1 duration:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)purgeMemoryForReason:(int)arg1;
- (void)revealTabBarSelection;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (void)setRestorationIdentifier:(id)arg1;
- (void)setShowsEditButtonOnLeft:(BOOL)arg1;
- (void)setTabBar:(id)arg1;
- (void)setTransientViewController:(id)arg1;
- (void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setView:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (void)showBarWithTransition:(int)arg1;
- (void)showBarWithTransition:(int)arg1 duration:(double)arg2;
- (BOOL)showsEditButtonOnLeft;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)tabBarSizingDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transientViewController;
- (id)transitionCoordinator;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 transition:(int)arg3 shouldSetSelected:(BOOL)arg4;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)transitionViewDidStart:(id)arg1;
- (void)unwindForSegue:(id)arg1 towardsViewController:(id)arg2;
- (void)updateTabBarItemForViewController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

