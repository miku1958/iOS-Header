//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, UINavigationBar, _UINavigationBarItemStack, _UINavigationControllerRefreshControlHost;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualProvider : NSObject
{
    UINavigationBar *_navigationBar;
    _UINavigationBarItemStack *_stack;
    NSDictionary *_overrides;
    BOOL _usesLegacyUI;
    _UINavigationControllerRefreshControlHost *_refreshControlHost;
}

@property (readonly, nonatomic) long long currentContentSize;
@property (readonly, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property (strong, nonatomic) _UINavigationControllerRefreshControlHost *refreshControlHost; // @synthesize refreshControlHost=_refreshControlHost;
@property (strong, nonatomic) _UINavigationBarItemStack *stack; // @synthesize stack=_stack;
@property (readonly, nonatomic) BOOL wantsLargeTitleDisplayed;

+ (BOOL)supportsRefreshControlHosting;
- (void).cxx_destruct;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint)arg1;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint)arg1;
- (void)_shim_30244716;
- (BOOL)_shim_34415965;
- (id)_shim_backIndicatorView;
- (id)_shim_backdropGroupName;
- (long long)_shim_backdropStyle;
- (double)_shim_backgroundAlpha;
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
- (void)_shim_setBackdropGroupName:(id)arg1;
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
- (void)_shim_updateBackdropView;
- (void)_shim_updateBackgroundViewIgnoringFlag;
- (void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2;
- (id)_shim_userContentGuide;
- (BOOL)_shim_wantsCustomTouchHandlingForTouches:(id)arg1;
- (void)_updateBackground;
- (void)_updateTitleViewForOpacityChange;
- (void)animateForSearchPresentation:(BOOL)arg1;
- (void)barSizeChanged;
- (BOOL)canHandleStatusBarTouchAtPoint:(struct CGPoint)arg1;
- (void)changeAppearance;
- (void)changeLayout;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(CDUnknownBlockType)arg2;
- (CDStruct_c3b9c2ee)heightRangeFittingWidth:(double)arg1;
- (id)initWithNavigationBar:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;
- (void)popAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)preferredFocusedView;
- (void)prepare;
- (void)prepareForPop;
- (void)prepareForPush;
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;
- (void)pushAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recordBarSize:(struct CGSize)arg1;
- (void)safeAreaInsetsDidChange;
- (void)setBackButtonVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setupTopNavigationItem;
- (BOOL)shouldUseHeightRangeFittingWidth;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)stackDidChangeFrom:(id)arg1;
- (long long)statusBarStyle;
- (void)teardown;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateArchivedSubviews:(id)arg1;
- (void)updateConstraints;
- (void)updateTopNavigationItemAnimated:(BOOL)arg1;
- (void)updateTopNavigationItemTitleView;

@end

