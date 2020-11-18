//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITabBarVisualProvider.h>

#import <UIKitCore/_UIBarAppearanceChangeObserver-Protocol.h>

@class NSString, UIView, _UIBarBackground, _UIBarBackgroundLayout;

__attribute__((visibility("hidden")))
@interface _UITabBarVisualProviderLegacyIOS : _UITabBarVisualProvider <_UIBarAppearanceChangeObserver>
{
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayout *_backgroundViewLayout;
    UIView *_customBackgroundView;
    UIView *_accessoryView;
    double _minimumWidthForHorizontalLayout;
    BOOL _useModernAppearance;
    long long _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyAppearanceCustomizationsToItem:(id)arg1;
- (void)_configureItems:(id)arg1;
- (id)_focusedItemHighlightView;
- (struct CGRect)_layoutRegion;
- (void)_layoutTabBarItems;
- (id)_preferredFocusedViewCarplay;
- (id)_preferredFocusedViewiOS;
- (struct CGRect)_shadowFrameForBounds:(struct CGRect)arg1 height:(double)arg2;
- (id)_shim_accessoryView;
- (id)_shim_compatibilityBackgroundView;
- (double)_shim_heightForCustomizingItems;
- (void)_shim_layoutItemsOnly;
- (void)_shim_setAccessoryView:(id)arg1;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (void)_shim_setShadowAlpha:(double)arg1;
- (void)_shim_setShadowHidden:(BOOL)arg1;
- (double)_shim_shadowAlpha;
- (BOOL)_shim_shadowHidden;
- (void)_shim_updateTabBarItemView:(id)arg1;
- (long long)_styleForTraitCollection:(id)arg1;
- (void)_updateAccessoryView;
- (void)_updateAppearanceForTransitionFromItem:(id)arg1 toItem:(id)arg2;
- (void)_updateBackground;
- (void)_updateBackgroundLegacy;
- (void)_updateBackgroundModern;
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;
- (id)appearanceObserver;
- (void)changeAppearance;
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(BOOL)arg5;
- (void)changeLayout;
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;
- (id)createViewForTabBarItem:(id)arg1;
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;
- (struct CGSize)intrinsicContentSizeGivenSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)minimumWidthForHorizontalLayout;
- (id)preferredFocusedView;
- (void)prepare;
- (void)setMinimumWidthForHorizontalLayout:(double)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setUseModernAppearance:(BOOL)arg1;
- (void)teardown;
- (void)traitCollectionDidChange:(id)arg1;
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;
- (void)updateArchivedSubviews:(id)arg1;
- (void)updateBackgroundGroupName;
- (BOOL)useModernAppearance;

@end
