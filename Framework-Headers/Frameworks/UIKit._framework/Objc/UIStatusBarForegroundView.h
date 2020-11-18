//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIStatusBarComposedData, UIStatusBarForegroundStyleAttributes, UIStatusBarLayoutManager;

__attribute__((visibility("hidden")))
@interface UIStatusBarForegroundView : UIView
{
    BOOL _usesVerticalLayout;
    BOOL _itemIsEnabled[36];
    UIStatusBarLayoutManager *_layoutManagers[3];
    int _ignoreDataLevel;
    NSMutableArray *_actionAnimationStack;
    UIStatusBarComposedData *_currentData;
    UIStatusBarComposedData *_pendedData;
    int _pendedActions;
    long long _idiom;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}

@property (readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle; // @synthesize foregroundStyle=_foregroundStyle;
@property (nonatomic) long long idiom; // @synthesize idiom=_idiom;

- (void).cxx_destruct;
- (void)_cleanUpAfterDataChange;
- (void)_cleanUpAfterSimpleReflow;
- (id)_computeVisibleItemsPreservingHistory:(BOOL)arg1;
- (void)_reflowItemViewsCrossfadingCenterWithDuration:(double)arg1;
- (void)_reflowItemViewsWithDuration:(double)arg1 preserveHistory:(BOOL)arg2;
- (void)_setStatusBarData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3;
- (BOOL)_tryToPlaceItem:(id)arg1 inItemArray:(id)arg2 layoutManager:(id)arg3 roomRemaining:(double *)arg4 allowSwap:(BOOL)arg5 swappedItem:(id *)arg6;
- (void)dealloc;
- (void)didMoveToWindow;
- (double)edgePadding;
- (BOOL)ignoringData;
- (id)initWithFrame:(struct CGRect)arg1 foregroundStyle:(id)arg2 usesVerticalLayout:(BOOL)arg3;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)reflowItemViews:(BOOL)arg1;
- (void)reflowItemViewsCrossfadingCenter:(id)arg1 duration:(double)arg2;
- (void)reflowItemViewsForgettingEitherSideItemHistory;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setPersistentAnimationsEnabled:(BOOL)arg1;
- (void)setStatusBarData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3;
- (void)startIgnoringData;
- (void)stopIgnoringData:(BOOL)arg1;
- (BOOL)willChangeNavigationItemDisplayWithSystemNavigationAction:(id)arg1;

@end

