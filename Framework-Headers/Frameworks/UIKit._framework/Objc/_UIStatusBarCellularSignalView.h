//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarSignalView.h>

@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarCellularSignalView : _UIStatusBarSignalView
{
    BOOL _needsLargerScale;
    BOOL _needsCycleAnimationUpdate;
    _UIStatusBarCycleAnimation *_cycleAnimation;
}

@property (strong, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation; // @synthesize cycleAnimation=_cycleAnimation;
@property (nonatomic) BOOL needsCycleAnimationUpdate; // @synthesize needsCycleAnimationUpdate=_needsCycleAnimationUpdate;
@property (nonatomic) BOOL needsLargerScale; // @synthesize needsLargerScale=_needsLargerScale;

+ (double)_barCornerRadiusForIconSize:(long long)arg1;
+ (double)_barWidthForIconSize:(long long)arg1;
+ (double)_heightForNormalBarAtIndex:(long long)arg1 iconSize:(long long)arg2;
+ (double)_interspaceForIconSize:(long long)arg1;
+ (struct CGSize)_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2;
- (void).cxx_destruct;
- (void)_colorsDidChange;
- (double)_heightForBarAtIndex:(long long)arg1;
- (double)_heightForBarAtIndex:(long long)arg1 mode:(long long)arg2;
- (void)_iconSizeDidChange;
- (void)_setNeedsUpdateCycleAnimation;
- (void)_updateActiveBars;
- (void)_updateBars;
- (void)_updateCycleAnimationIfNeeded;
- (void)_updateCycleAnimationNow;
- (void)_updateFromMode:(long long)arg1;
- (id)accessibilityHUDRepresentation;
- (void)applyStyleAttributes:(id)arg1;
- (void)didMoveToWindow;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;

@end

