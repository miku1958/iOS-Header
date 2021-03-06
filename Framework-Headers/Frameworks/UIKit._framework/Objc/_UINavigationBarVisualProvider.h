//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIBarButtonItem, UINavigationBar, UINavigationItem, _UINavigationBarItemStack, _UINavigationControllerRefreshControlHost;
@protocol _UIBarAppearanceChangeObserver;

@interface _UINavigationBarVisualProvider : NSObject
{
    UINavigationBar *_navigationBar;
    _UINavigationBarItemStack *_stack;
    NSString *_backdropGroupName;
    UINavigationItem *_itemForMeasuring;
}

@property (readonly, nonatomic, getter=isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange) BOOL animatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
@property (nonatomic) long long appearanceAPIVersion;
@property (readonly, nonatomic) id<_UIBarAppearanceChangeObserver> appearanceObserver;
@property (copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property (nonatomic) double backgroundAlpha;
@property (readonly, nonatomic, getter=isContentViewHidden) BOOL contentViewHidden;
@property (readonly, nonatomic) long long currentContentSize;
@property (nonatomic) BOOL forceScrollEdgeAppearance;
@property (readonly, nonatomic) double navItemContentLayoutGuideAnimationDistance;
@property (readonly, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property (strong, nonatomic) _UINavigationControllerRefreshControlHost *refreshControlHost;
@property (nonatomic) BOOL shouldFadeStaticNavBarButton;
@property (strong, nonatomic) _UINavigationBarItemStack *stack; // @synthesize stack=_stack;
@property (strong, nonatomic) UIBarButtonItem *staticNavBarButtonItem;
@property (nonatomic) BOOL staticNavBarButtonLingers;
@property (nonatomic) double titleAlpha;
@property (nonatomic) BOOL useInlineBackgroundHeightWhenLarge;
@property (readonly, nonatomic) BOOL wantsLargeTitleDisplayed;

- (void).cxx_destruct;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint)arg1;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint)arg1;
- (BOOL)_accessibility_shouldBeginHUDGestureAtPoint:(struct CGPoint)arg1;
- (void)_installContentClippingView:(id)arg1;
- (void)_refreshBackButtonMenu;
- (void)_removeContentClippingView;
- (void)_shim_30244716;
- (BOOL)_shim_34415965;
- (id)_shim_backIndicatorView;
- (long long)_shim_backdropStyle;
- (double)_shim_backgroundHeight;
- (id)_shim_compatibilityBackgroundView;
- (id)_shim_contentView;
- (id)_shim_customHitTest:(struct CGPoint)arg1 forView:(id)arg2;
- (BOOL)_shim_disableBlurTinting;
- (id)_shim_displayViewsIncludingHiddenBackButtonViews:(BOOL)arg1;
- (id)_shim_layoutView;
- (void)_shim_popForCarplayPressAtFakePoint:(struct CGPoint)arg1;
- (void)_shim_pressBackIndicator:(BOOL)arg1 initialPress:(BOOL)arg2;
- (id)_shim_promptText;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (void)_shim_setDisableBlurTinting:(BOOL)arg1;
- (void)_shim_setPromptText:(id)arg1 animated:(BOOL)arg2;
- (void)_shim_setShadowAlpha:(double)arg1;
- (void)_shim_setUseContentView:(BOOL)arg1;
- (double)_shim_shadowAlpha;
- (BOOL)_shim_throwConstraintExceptions;
- (void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_shim_updateBackIndicator;
- (void)_shim_updateBackgroundViewIgnoringFlag;
- (void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2;
- (id)_shim_userContentGuide;
- (BOOL)_shim_wantsCustomTouchHandlingForTouches:(id)arg1;
- (void)animateForSearchPresentation:(BOOL)arg1;
- (void)appendToDescription:(id)arg1;
- (void)barDidAddSubview:(id)arg1;
- (void)barDidMoveToWindow;
- (void)barSizeChanged;
- (void)beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (BOOL)canHandleStatusBarTouchAtPoint:(struct CGPoint)arg1;
- (void)changeAppearance;
- (void)changeLayout;
- (id)description;
- (void)dismissHostedSearchWithTransitionCoordinator:(id)arg1;
- (void)endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(CDUnknownBlockType)arg2;
- (double)heightForRestoringFromCancelledTransition;
- (id)initWithNavigationBar:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)invalidateIntrinsicContentSize;
- (CDStruct_39925896)layoutHeightsFittingWidth:(double)arg1;
- (void)layoutSubviews;
- (void)navigationBarInvalidatedResolvedLayoutMargins;
- (void)popAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)preferredFocusedView;
- (void)prepare;
- (void)prepareForPop;
- (void)prepareForPush;
- (void)presentHostedSearchWithTransitionCoordinator:(id)arg1;
- (void)presentSearchWithTransitionCoordinator:(id)arg1;
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;
- (void)pushAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recordBarSize:(struct CGSize)arg1;
- (struct NSDirectionalEdgeInsets)resolvedLargeTitleMargins;
- (struct NSDirectionalEdgeInsets)resolvedSearchBarMargins;
- (id)restingHeights;
- (void)safeAreaInsetsDidChange;
- (void)setBackButtonVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNeedsStaticNavBarButtonUpdate;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setupTopNavigationItem;
- (BOOL)shouldUseHeightRangeFittingWidth;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)stackDidChangeFrom:(id)arg1;
- (long long)statusBarStyle;
- (BOOL)supportsRefreshControlHosting;
- (void)teardown;
- (BOOL)topItemHasVariableHeight;
- (void)traitCollectionDidChange:(id)arg1;
- (void)traitCollectionDidChangeOnSubtree:(id)arg1;
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;
- (void)updateArchivedSubviews:(id)arg1;
- (void)updateBackgroundGroupName;
- (void)updateConstraints;
- (BOOL)updateNavItemContentLayoutGuideAnimationConstraintConstant:(double)arg1;
- (void)updateTopNavigationItemAnimated:(BOOL)arg1;
- (void)updateTopNavigationItemTitleView;

@end

