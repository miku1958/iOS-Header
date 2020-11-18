//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBGestureSwitcherModifier.h>

@class SBDismissSiriSwitcherModifier;

@interface SBGridSwipeUpGestureSwitcherModifier : SBGestureSwitcherModifier
{
    struct CGPoint _translation;
    BOOL _isApplyingContentViewScaleToSwitcherViewBounds;
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;
}

- (void).cxx_destruct;
- (void)_applyPrototypeSettings;
- (void)_performBlockByApplyContentViewScaleToSwitcherViewBounds:(CDUnknownBlockType)arg1;
- (double)contentViewScale;
- (void)didMoveToParentModifier:(id)arg1;
- (long long)finalResponseForGestureEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (long long)homeScreenBackdropBlurType;
- (id)initWithGestureID:(id)arg1;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isWallpaperRequiredForSwitcher;
- (struct CGPoint)scrollViewContentOffset;
- (struct CGRect)switcherViewBounds;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
