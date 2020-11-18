//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIStatusBarForegroundView, UIStatusBarItemView;

__attribute__((visibility("hidden")))
@interface UIStatusBarLayoutManager : NSObject
{
    int _region;
    UIStatusBarItemView *_itemViews[36];
    BOOL _persistentAnimationsEnabled;
    BOOL _usesVerticalLayout;
    UIStatusBarForegroundView *_foregroundView;
}

@property (weak, nonatomic) UIStatusBarForegroundView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property (nonatomic) BOOL persistentAnimationsEnabled; // @synthesize persistentAnimationsEnabled=_persistentAnimationsEnabled;
@property (readonly, nonatomic) BOOL usesVerticalLayout; // @synthesize usesVerticalLayout=_usesVerticalLayout;

- (void).cxx_destruct;
- (void)_addOriginDelta:(double)arg1 toPoint:(struct CGPoint *)arg2;
- (id)_createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3;
- (double)_dimensionForSize:(struct CGSize)arg1;
- (struct CGRect)_frameForItemView:(id)arg1 startPosition:(double)arg2 firstView:(BOOL)arg3;
- (id)_itemViews;
- (id)_itemViewsSortedForLayout;
- (double)_positionAfterPlacingItemView:(id)arg1 startPosition:(double)arg2 firstView:(BOOL)arg3;
- (void)_positionNewItemViewsWithEnabledItems:(BOOL *)arg1;
- (void)_prepareEnabledItemType:(int)arg1 withEnabledItems:(BOOL *)arg2 withData:(id)arg3 actions:(int)arg4 itemAppearing:(BOOL *)arg5 itemDisappearing:(BOOL *)arg6;
- (BOOL)_processDelta:(double)arg1 forView:(id)arg2;
- (struct CGRect)_repositionedNewFrame:(struct CGRect)arg1 sizeDelta:(double)arg2;
- (void)_setOrigin:(double)arg1 forPoint:(struct CGPoint *)arg2;
- (double)_sizeNeededForItemView:(id)arg1;
- (double)_startPosition;
- (BOOL)_updateItemView:(id)arg1 withData:(id)arg2 actions:(int)arg3 animated:(BOOL)arg4;
- (id)_viewForItem:(id)arg1;
- (void)clearOverlapFromItems:(id)arg1;
- (void)dealloc;
- (double)distributeOverlap:(double)arg1 amongItems:(id)arg2;
- (id)initWithRegion:(int)arg1 foregroundView:(id)arg2 usesVerticalLayout:(BOOL)arg3;
- (BOOL)itemIsVisible:(id)arg1;
- (void)itemView:(id)arg1 sizeChangedBy:(double)arg2;
- (void)makeVisibleItemsPerformPendedActions;
- (void)positionInvisibleItems;
- (BOOL)prepareDoubleHeightItemWithEnabledItems:(BOOL *)arg1;
- (BOOL)prepareEnabledItems:(BOOL *)arg1 withData:(id)arg2 actions:(int)arg3;
- (struct CGRect)rectForItems:(id)arg1;
- (void)reflowWithVisibleItems:(id)arg1 duration:(double)arg2;
- (void)removeDisabledItems:(BOOL *)arg1;
- (double)removeOverlap:(double)arg1 fromItems:(id)arg2;
- (void)setVisibilityOfAllItems:(BOOL)arg1;
- (void)setVisibilityOfItem:(id)arg1 visible:(BOOL)arg2;
- (double)sizeNeededForItem:(id)arg1;
- (double)sizeNeededForItems:(id)arg1;
- (BOOL)updateDoubleHeightItem;
- (BOOL)updateItemsWithData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3;

@end

