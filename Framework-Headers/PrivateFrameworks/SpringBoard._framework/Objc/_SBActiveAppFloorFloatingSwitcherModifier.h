//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout;

@interface _SBActiveAppFloorFloatingSwitcherModifier : SBSwitcherModifier
{
    SBAppLayout *_activeAppLayout;
    long long _floatingConfiguration;
}

- (void).cxx_destruct;
- (BOOL)_isActiveAppLayoutAtIndex:(unsigned long long)arg1;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)appLayoutsForInsertionOrRemoval;
- (double)backdropBlurProgress;
- (long long)backdropBlurType;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (double)containerStatusBarAnimationDuration;
- (double)contentViewScale;
- (id)cornerRadiusSettingsForIndex:(unsigned long long)arg1;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (double)dimmingAlpha;
- (BOOL)dimmingViewBlocksTouches;
- (double)dockProgress;
- (long long)dockUpdateMode;
- (double)dockWindowLevel;
- (unsigned long long)dockWindowLevelPriority;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (struct _NSRange)fullSizeSnapshotsRange;
- (double)homeScreenAlpha;
- (double)homeScreenScale;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1;
- (id)initWithActiveAppLayout:(id)arg1 floatingConfiguration:(long long)arg2;
- (unsigned long long)insertionStyleForInsertingAppLayout:(id)arg1;
- (BOOL)isContainerStatusBarVisible;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (BOOL)isHomeGrabberVisible;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)isIndexKillable:(unsigned long long)arg1;
- (BOOL)isIndexVisible:(unsigned long long)arg1;
- (BOOL)isScrollEnabled;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isTetheredScrollingEnabled;
- (BOOL)isWallpaperRequiredForSwitcher;
- (BOOL)itemContainersAllowContentViewTouches;
- (BOOL)itemContainersUseBrightMaterial;
- (long long)keyboardSuppressionMode;
- (id)layoutSettings;
- (id)layoutSettingsForIndex:(unsigned long long)arg1;
- (long long)layoutUpdateMode;
- (double)lighteningAlphaForIndex:(unsigned long long)arg1;
- (long long)liveContentRasterizationStyle;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (unsigned long long)numberOfDefaultAppLayoutsToCacheSnapshots;
- (double)opacityForIndex:(unsigned long long)arg1;
- (id)opacitySettings;
- (double)plusButtonAlpha;
- (long long)plusButtonStyle;
- (id)positionSettingsForIndex:(unsigned long long)arg1;
- (long long)preferredSnapshotOrientation;
- (double)reopenClosedWindowsButtonAlpha;
- (double)reopenClosedWindowsButtonScale;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)scaleSettingsForIndex:(unsigned long long)arg1;
- (long long)sceneDeactivationReason;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (BOOL)shouldAcceleratedHomeButtonPressBegin;
- (BOOL)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1;
- (BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
- (BOOL)shouldConfigureInAppDockHiddenAssertion;
- (BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (BOOL)shouldPerformRotationAnimationForOrientationChange;
- (BOOL)shouldRubberbandHomeGrabberView;
- (BOOL)shouldTetherTransitionCompletion;
- (BOOL)shouldTruncateAnimationsUponTransitionCompletion;
- (BOOL)shouldWaitForLayoutAndStyleUpdatesForTransactionCompletion;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (id)topMostAppLayouts;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1;
- (double)wallpaperScale;
- (long long)wallpaperStyle;
- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;
- (BOOL)wantsDockBehaviorAssertion;
- (BOOL)wantsDockWindowLevelAssertion;
- (BOOL)wantsMinificationFilter;
- (BOOL)wantsResignActiveAssertion;

@end
