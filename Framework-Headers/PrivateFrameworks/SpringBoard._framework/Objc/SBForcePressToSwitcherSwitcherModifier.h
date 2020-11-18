//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBForcePressToSwitcherSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    SBSwitcherModifier *_multitaskingModifier;
}

- (void).cxx_destruct;
- (id)_appLayoutToScrollToDuringTransition;
- (unsigned long long)_indexOfSelectedAppLayout;
- (long long)backdropBlurType;
- (double)containerStatusBarAnimationDuration;
- (id)initWithTransitionID:(id)arg1 selectedAppLayout:(id)arg2 effectiveStartingEnvironmentMode:(long long)arg3 multitaskingModifier:(id)arg4;
- (BOOL)isContainerStatusBarVisible;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)isIndexVisible:(unsigned long long)arg1;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)layoutSettings;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (double)opacityForIndex:(unsigned long long)arg1;
- (id)transitionWillBegin;
- (long long)wallpaperStyle;

@end
