//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITabBarVisualProvider.h>

@class UIMotionEffect, UIScrollView, UIView, _UIBarBackground;

__attribute__((visibility("hidden")))
@interface _UITabBarVisualProviderLegacyTVOS : _UITabBarVisualProvider
{
    _UIBarBackground *_backgroundView;
    UIView *_customBackgroundView;
    UIView *_accessoryView;
    UIScrollView *_itemsScrollView;
    UIView *_focusedItemHighlightView;
    UIMotionEffect *_focusedItemHighlightMotionEffect;
    BOOL _usingHorizontalLayout;
}

- (void).cxx_destruct;
- (void)_applyAppearanceCustomizationsToItem:(id)arg1;
- (void)_cleanupAdaptiveBackdrop;
- (void)_configureItems:(id)arg1;
- (void)_determineHorizontalLayout;
- (id)_focusedItemHighlightView;
- (BOOL)_focusedItemHighlightViewIsVisible;
- (struct CGRect)_layoutRegion;
- (void)_layoutTabBarItems;
- (id)_parentViewForItems;
- (id)_preferredFocusedViewATV;
- (id)_preferredFocusedViewCarplay;
- (void)_setFocusedItemHightlightVisible:(BOOL)arg1;
- (struct CGRect)_shadowFrameForBounds:(struct CGRect)arg1 height:(double)arg2;
- (id)_shim_accessoryView;
- (id)_shim_backdropGroupName;
- (id)_shim_compatibilityBackgroundView;
- (void)_shim_layoutItemsOnly;
- (void)_shim_setAccessoryView:(id)arg1;
- (void)_shim_setBackdropGroupName:(id)arg1;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (id)_shim_shadowView;
- (void)_shim_updateBackdropView;
- (void)_shim_updateFocusHighlightVisibility;
- (void)_shim_updateTabBarItemView:(id)arg1;
- (void)_updateAccessoryView;
- (void)_updateBackground;
- (void)_updateFocusedItemHighlightFrame;
- (void)_updateFocusedItemHighlightViewWithInterfaceStyle:(long long)arg1 visible:(BOOL)arg2;
- (void)_updateHighlightMotionEffect;
- (void)changeAppearance;
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 animate:(BOOL)arg4;
- (void)changeLayout;
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;
- (id)createViewForTabBarItem:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;
- (struct CGSize)intrinsicContentSizeGivenSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)preferredFocusedView;
- (void)prepare;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)tabBarSizeChanged:(struct CGSize)arg1;
- (void)teardown;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateArchivedSubviews:(id)arg1;

@end

