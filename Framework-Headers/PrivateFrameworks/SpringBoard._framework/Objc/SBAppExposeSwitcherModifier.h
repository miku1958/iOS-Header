//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class NSArray, NSString, SBAppLayout;
@protocol SBFluidSwitcherModifierProviding;

@interface SBAppExposeSwitcherModifier : SBSwitcherModifier
{
    NSString *_bundleIdentifier;
    SBAppLayout *_activatingAppLayout;
    unsigned long long _incomingTransitionPhase;
    NSArray *_appLayoutsToKeepDuringIncomingTransition;
    id<SBFluidSwitcherModifierProviding> _modifierProvider;
    SBSwitcherModifier *_outgoingTransitionModifier;
    BOOL _isFloating;
    BOOL _isShowingReopenClosedWindowsButton;
    long long _numberOfHiddenAppLayouts;
}

- (void).cxx_destruct;
- (BOOL)_canShowReopenClosedWindowsButton;
- (BOOL)_shouldFilteringIncludeAppLayout:(id)arg1;
- (id)_updateReopenClosedWindowsButtonPresence;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)appLayoutsForInsertionOrRemoval;
- (id)handleAppExposeEvent:(id)arg1;
- (id)handleEvent:(id)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleTetheredInsertionEvent:(id)arg1;
- (id)handleTetheredRemovalEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 modifierProvider:(id)arg2 floating:(BOOL)arg3;
- (BOOL)isTetheredScrollingEnabled;
- (long long)liveContentRasterizationStyle;
- (double)plusButtonAlpha;
- (long long)plusButtonStyle;
- (double)reopenClosedWindowsButtonAlpha;
- (double)reopenClosedWindowsButtonScale;

@end
