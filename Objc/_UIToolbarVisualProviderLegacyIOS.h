//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIToolbarVisualProvider.h>

@class UIView, _UIBarBackground, _UIBarBackgroundLayoutLegacy;

__attribute__((visibility("hidden")))
@interface _UIToolbarVisualProviderLegacyIOS : _UIToolbarVisualProvider
{
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;
    UIView *_customBackgroundView;
}

- (void).cxx_destruct;
- (void)_createViewsForItems:(id)arg1;
- (id)_currentCustomBackground;
- (double)_edgeMarginForBorderedItem:(BOOL)arg1 isText:(BOOL)arg2;
- (id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(BOOL)arg3 actuallyRepositionButtons:(BOOL)arg4;
- (id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id *)arg2 withHitRects:(id *)arg3 buttonIndexes:(id *)arg4 textButtonIndexes:(id *)arg5;
- (struct CGRect)backgroundFrame;
- (id)currentBackgroundView;
- (void)customViewChangedForButtonItem:(id)arg1;
- (struct CGSize)defaultSizeForOrientation:(long long)arg1;
- (void)drawBackgroundViewInRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)arg1;
- (void)setCustomBackgroundView:(id)arg1;
- (BOOL)toolbarIsSmall;
- (void)updateBackgroundGroupName;
- (void)updateBarBackground;
- (void)updateBarBackgroundSize;
- (void)updateBarForStyle:(long long)arg1;
- (void)updateItemsForNewFrame:(id)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3;

@end

