//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@interface SBDeckSwitcherModifier : SBSwitcherModifier
{
    struct CGPoint _previousContentOffset;
    BOOL _isScrollingForward;
    long long _grabbedDraggingIndex;
    double _outputContentOffsetAdjustmentForIndexChange;
    double _inputContentOffsetAdjustmentForIndexChange;
    struct CGPoint _start;
    struct CGPoint _originalLocationInView;
    double _initialTranslationAdjustment;
    BOOL _useTitleOpacityPrototypeSettings;
    unsigned long long _ongoingAppLayoutRemovals;
}

- (struct CGPoint)_adjustedOffsetForIndex:(long long)arg1 offset:(struct CGPoint)arg2 start:(struct CGPoint)arg3 originalLocationInView:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5;
- (void)_applyPrototypeSettings;
- (double)_cardCornerRadiusInSwitcher;
- (struct CGPoint)_contentOffsetForScrollProgress:(double)arg1;
- (struct CGSize)_contentSize;
- (double)_counteractScrollingForOffset:(double)arg1 scrollProgress:(double)arg2;
- (double)_depthForFrameOrigin:(double)arg1;
- (unsigned long long)_directionForRemovingIndex:(unsigned long long)arg1 centeredIndex:(unsigned long long)arg2;
- (struct CGRect)_frameForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3 ignoringScrollOffset:(BOOL)arg4;
- (unsigned long long)_indexForContentOffset:(struct CGPoint)arg1;
- (unsigned long long)_indexForScrollProgress:(double)arg1 displayItemsCount:(unsigned long long)arg2 depth:(double)arg3;
- (unsigned long long)_indexOfCurrentCenteredCard;
- (BOOL)_isIndexVisible:(unsigned long long)arg1;
- (unsigned long long)_newIndexOfItemAtIndex:(unsigned long long)arg1 afterRemovingItemAtIndex:(unsigned long long)arg2;
- (double)_preferredVisibleMarginForTopPage;
- (BOOL)_priorIndex:(unsigned long long)arg1 fullyObscuresCardForIndex:(unsigned long long)arg2;
- (double)_restingScrollProgressForProgress:(double)arg1 velocity:(struct CGPoint)arg2;
- (double)_scaleForTransformForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (double)_scaleInSwitcherViewForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (struct CGRect)_scaleTransformedFrameForIndex:(unsigned long long)arg1 withUntransformedFrame:(struct CGRect)arg2 scrollProgress:(double)arg3;
- (double)_scaleTransformedXOrigin:(double)arg1 scrollProgress:(double)arg2;
- (double)_scrollMin;
- (double)_scrollProgress;
- (double)_scrollProgressForContentOffset:(struct CGPoint)arg1;
- (double)_scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 depth:(double)arg3;
- (double)_switcherCardScale;
- (long long)_topIndexForLocationInContainerCoordinateSpace:(struct CGPoint)arg1;
- (double)_unscaledCardCornerRadius;
- (double)_valueAlongDepthCurveForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2 aCoefficient:(double)arg3 bCoefficient:(double)arg4;
- (struct _NSRange)_visibleAppLayoutRangeForContentOffset:(struct CGPoint)arg1;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (struct CGPoint)adjustedOffsetForOffset:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 startPoint:(struct CGPoint)arg3 locationInView:(struct CGPoint)arg4 horizontalVelocity:(inout double *)arg5 verticalVelocity:(inout double *)arg6;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (id)appLayoutForReceivingHardwareButtonEvents;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (id)appLayoutsToCacheSnapshots;
- (id)appLayoutsToResignActive;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (double)containerStatusBarAnimationDuration;
- (struct CGPoint)contentOffsetForIndex:(unsigned long long)arg1 centered:(BOOL)arg2;
- (double)contentPageViewScaleForAppLayout:(id)arg1;
- (double)contentViewScale;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (id)debugDescription;
- (double)depthForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3;
- (double)desiredXOriginForQuantizedTopPage;
- (void)didMoveToParentModifier:(id)arg1;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
- (double)dockProgress;
- (long long)dockUpdateMode;
- (double)dockWindowLevel;
- (unsigned long long)dockWindowLevelPriority;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (struct CGRect)fullyPresentedFrameForAppLayout:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleScrollEvent:(id)arg1;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (double)homeScreenAlpha;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (unsigned long long)indexForScrollProgress:(double)arg1 displayItemsCount:(unsigned long long)arg2 frameOrigin:(double)arg3;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1;
- (id)init;
- (BOOL)isContainerStatusBarVisible;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (BOOL)isHomeGrabberVisibleForIndex:(unsigned long long)arg1;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)isIndexKillable:(unsigned long long)arg1;
- (BOOL)isIndexSelectable:(unsigned long long)arg1;
- (BOOL)isItemContainerPointerInteractionEnabled;
- (BOOL)isScrollEnabled;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)keyboardSuppressionMode;
- (double)leadingOffsetForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3;
- (double)lighteningAlphaForIndex:(unsigned long long)arg1;
- (id)liveContentRasterizationAttributesForAppLayout:(id)arg1;
- (double)minimumTranslationToKillIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (double)plusButtonAlpha;
- (long long)plusButtonStyle;
- (long long)preferredSnapshotOrientationForAppLayout:(id)arg1;
- (double)reopenClosedWindowsButtonAlpha;
- (double)reopenClosedWindowsButtonScale;
- (void)resetAdjustedScrollingState;
- (struct CGPoint)restingOffsetForScrollOffset:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (double)rotationAngleForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)scrollProgressForIndex:(unsigned long long)arg1;
- (double)scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 frameOrigin:(double)arg3;
- (double)scrollRange;
- (id)scrollViewAttributes;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (long long)shadowStyleForAppLayout:(id)arg1;
- (BOOL)shouldAcceleratedHomeButtonPressBegin;
- (BOOL)shouldAllowContentViewTouchesForIndex:(unsigned long long)arg1;
- (BOOL)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1;
- (BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
- (BOOL)shouldConfigureInAppDockHiddenAssertion;
- (BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (BOOL)shouldPerformRotationAnimationForOrientationChange;
- (BOOL)shouldRubberbandFullScreenHomeGrabberView;
- (BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)arg1;
- (BOOL)shouldUseBackgroundWallpaperTreatmentForIndex:(unsigned long long)arg1;
- (BOOL)shouldUseBrightMaterialForIndex:(unsigned long long)arg1;
- (double)snapshotScaleForAppLayout:(id)arg1;
- (double)switcherBackdropBlurProgress;
- (long long)switcherBackdropBlurType;
- (double)switcherDimmingAlpha;
- (BOOL)switcherDimmingViewBlocksTouches;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (id)topMostLayoutElements;
- (unsigned long long)transactionCompletionOptions;
- (id)visibleAppLayouts;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1;
- (double)wallpaperScale;
- (long long)wallpaperStyle;
- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;
- (BOOL)wantsDockBehaviorAssertion;
- (BOOL)wantsDockWindowLevelAssertion;
- (BOOL)wantsHomeScreenPointerInteractions;
- (BOOL)wantsSwitcherBackdropBlur;
- (BOOL)wantsSwitcherDimmingView;

@end
