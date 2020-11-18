//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIAccessibilityHUDGestureDelegate-Protocol.h>

@class NSMutableArray, NSString, UIAccessibilityHUDGestureManager, UIStatusBar, UIStatusBarComposedData, UIStatusBarForegroundStyleAttributes, UIStatusBarLayoutManager;

__attribute__((visibility("hidden")))
@interface UIStatusBarForegroundView : UIView <UIAccessibilityHUDGestureDelegate>
{
    BOOL _usesVerticalLayout;
    BOOL _itemIsEnabled[47];
    UIStatusBarLayoutManager *_layoutManagers[3];
    int _ignoreDataLevel;
    NSMutableArray *_actionAnimationStack;
    UIStatusBarComposedData *_currentData;
    UIStatusBarComposedData *_pendedData;
    int _pendedActions;
    UIAccessibilityHUDGestureManager *_accessibilityHUDGestureManager;
    long long _idiom;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle; // @synthesize foregroundStyle=_foregroundStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property (readonly, nonatomic) UIStatusBar *statusBar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;
- (BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 showHUDItem:(id)arg2;
- (void)_animateUnlockCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_cleanUpAfterDataChange;
- (void)_cleanUpAfterSimpleReflow;
- (id)_computeVisibleItemsPreservingHistory:(BOOL)arg1;
- (void)_dismissAccessibilityHUDForGestureManager:(id)arg1;
- (void)_reflowItemViewsCrossfadingCenterWithDuration:(double)arg1 timeWasEnabled:(BOOL)arg2;
- (void)_reflowItemViewsWithDuration:(double)arg1 preserveHistory:(BOOL)arg2;
- (void)_setStatusBarData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3;
- (id)_statusBarItemViewAtPoint:(struct CGPoint)arg1;
- (id)_statusBarWindowForAccessibilityHUD;
- (BOOL)_tryToPlaceItem:(id)arg1 inItemArray:(id)arg2 layoutManager:(id)arg3 roomRemaining:(double *)arg4 allowSwap:(BOOL)arg5 swappedItem:(id *)arg6;
- (void)animateUnlock;
- (void)dealloc;
- (void)didMoveToWindow;
- (struct CGRect)frameForAllItemsInRegion:(int)arg1;
- (struct CGRect)frameForItemOfType:(int)arg1;
- (BOOL)ignoringData;
- (id)initWithFrame:(struct CGRect)arg1 foregroundStyle:(id)arg2 usesVerticalLayout:(BOOL)arg3;
- (BOOL)isShowingBreadcrumb;
- (void)jiggleLockIcon;
- (double)leftEdgePadding;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)rectIntersectsBatteryItem:(struct CGRect)arg1;
- (BOOL)rectIntersectsTimeItem:(struct CGRect)arg1;
- (void)reflowItemViews:(BOOL)arg1;
- (void)reflowItemViewsCrossfadingCenter:(id)arg1 duration:(double)arg2;
- (void)reflowItemViewsForgettingEitherSideItemHistory;
- (double)rightEdgePadding;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setPersistentAnimationsEnabled:(BOOL)arg1;
- (void)setStatusBarData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3;
- (void)startIgnoringData;
- (void)stopIgnoringData:(BOOL)arg1;
- (BOOL)willChangeNavigationItemDisplayWithSystemNavigationAction:(id)arg1;

@end

