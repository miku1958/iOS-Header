//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSAttributedString, UIColor, UIScrollView, _UIRefreshControlContentView;

@interface UIRefreshControl : UIControl
{
    long long _style;
    _UIRefreshControlContentView *_contentView;
    UIScrollView *_scrollView;
    double _refreshControlHeight;
    double _visibleHeight;
    double _snappingHeight;
    double _additionalTopInset;
    BOOL _insetsApplied;
    BOOL _adjustingInsets;
    BOOL _automaticContentOffsetAdjustmentEnabledWhenLastIdle;
    BOOL _automaticContentOffsetAdjustmentEnabledNeedsReset;
    struct UIEdgeInsets _appliedInsets;
    long long _refreshControlState;
}

@property (readonly, nonatomic) BOOL _areInsetsBeingApplied;
@property (readonly, nonatomic) double _refreshControlHeight;
@property (readonly, nonatomic) double _snappingHeight;
@property (readonly, nonatomic) double _visibleHeight;
@property (readonly, nonatomic, getter=_appliedInsets) struct UIEdgeInsets appliedInsets;
@property (strong, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) long long refreshControlState; // @synthesize refreshControlState=_refreshControlState;
@property (readonly, nonatomic, getter=isRefreshing) BOOL refreshing;
@property (readonly, nonatomic) long long style;
@property (strong, nonatomic) UIColor *tintColor;

+ (Class)_contentViewClassForStyle:(long long)arg1;
+ (id)_defaultColor;
- (void).cxx_destruct;
- (void)_addInsetHeight:(double)arg1;
- (void)_addInsets;
- (id)_attributedTitle;
- (BOOL)_canTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (id)_contentView;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_didScroll;
- (double)_impactIntensityForVelocity:(double)arg1;
- (BOOL)_isApplyingInsets;
- (struct CGPoint)_originForContentOffset:(struct CGPoint)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (long long)_recomputeNewState;
- (void)_removeInsetHeight:(double)arg1;
- (void)_removeInsets;
- (void)_resizeToFitContents;
- (id)_scrollView;
- (double)_scrollViewHeight;
- (void)_setAttributedTitle:(id)arg1;
- (void)_setRefreshControlState:(long long)arg1 notify:(BOOL)arg2;
- (void)_setTintColor:(id)arg1;
- (void)_setVisibleHeight:(double)arg1;
- (double)_stiffnessForVelocity:(double)arg1;
- (id)_tintColor;
- (void)_update;
- (void)_updateConcealingMask;
- (void)_updateHiddenStateIfNeeded;
- (void)_updateSnappingHeight;
- (double)_visibleHeightForContentOffset:(struct CGPoint)arg1 origin:(struct CGPoint)arg2;
- (void)beginRefreshing;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)encodeWithCoder:(id)arg1;
- (void)endRefreshing;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;
- (double)revealedFraction;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setRefreshControlState:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)willMoveToSuperview:(id)arg1;

@end

