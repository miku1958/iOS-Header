//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@interface SBLowEndHardwareSwitcherModifier : SBSwitcherModifier
{
    unsigned long long _options;
    BOOL _floatingAppVisibleOverSplitView;
    BOOL _floatingAppVisibleOverExclusiveForegroundApp;
}

- (BOOL)_shouldResignActiveAppsUnderFloatingApp;
- (BOOL)_shouldSimplifyForOpenFolder;
- (BOOL)_shouldSimplifyForTodayViewOrSpotlight;
- (id)handleMainTransitionEvent:(id)arg1;
- (double)homeScreenAlpha;
- (double)homeScreenScale;
- (id)initWithSimplificationOptions:(unsigned long long)arg1;
- (long long)keyboardSuppressionMode;
- (long long)sceneDeactivationReason;
- (double)wallpaperScale;
- (BOOL)wantsResignActiveAssertion;

@end
