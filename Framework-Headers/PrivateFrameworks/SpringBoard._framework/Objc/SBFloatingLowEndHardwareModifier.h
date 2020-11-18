//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@interface SBFloatingLowEndHardwareModifier : SBSwitcherModifier
{
    unsigned long long _options;
    BOOL _floatingSwitcherVisible;
    BOOL _floatingAppVisibleOverSplitView;
    BOOL _floatingAppVisibleOverExclusiveForegroundApp;
}

- (BOOL)_shouldDimAndBlockTouchesToAppsUnderFloating;
- (double)dimmingAlpha;
- (BOOL)dimmingViewBlocksTouches;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1;

@end
