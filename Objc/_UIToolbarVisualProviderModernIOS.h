//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIToolbarVisualProvider.h>

#import <UIKitCore/_UIBarAppearanceChangeObserver-Protocol.h>
#import <UIKitCore/_UIBarButtonItemViewOwner-Protocol.h>

@class NSString, UIView, _UIBarBackground, _UIBarBackgroundLayout, _UIToolbarContentView;

__attribute__((visibility("hidden")))
@interface _UIToolbarVisualProviderModernIOS : _UIToolbarVisualProvider <_UIBarButtonItemViewOwner, _UIBarAppearanceChangeObserver>
{
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayout *_backgroundViewLayout;
    UIView *_customBackgroundView;
    _UIToolbarContentView *_contentView;
    long long _itemDistribution;
    BOOL _useModernAppearance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect)_backgroundFrame;
- (id)_currentCustomBackground;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemDidChangeEnabledState:(id)arg1;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSecondaryActionState:(id)arg1;
- (void)_itemDidChangeSecondaryActions:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (void)_setViewOwnersAndUpdateContentViewForItems:(id)arg1 withOldItems:(id)arg2 animated:(BOOL)arg3;
- (void)_updateBackgroundLegacyForPosition:(long long)arg1;
- (void)_updateBackgroundModern;
- (void)_updateContentView;
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;
- (id)appearanceObserver;
- (struct CGRect)backgroundFrame;
- (id)currentBackgroundView;
- (struct CGSize)defaultSizeForOrientation:(long long)arg1;
- (long long)itemDistribution;
- (void)layoutSubviews;
- (void)setCustomBackgroundView:(id)arg1;
- (void)setItemDistribution:(long long)arg1;
- (void)setUseModernAppearance:(BOOL)arg1;
- (BOOL)toolbarIsSmall;
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;
- (void)updateAppearance;
- (void)updateArchivedSubviews:(id)arg1;
- (void)updateBackgroundGroupName;
- (void)updateBarBackground;
- (void)updateBarBackgroundSize;
- (void)updateBarForStyle:(long long)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3;
- (BOOL)useModernAppearance;

@end

