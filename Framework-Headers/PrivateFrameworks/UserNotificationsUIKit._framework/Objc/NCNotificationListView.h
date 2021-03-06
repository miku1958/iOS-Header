//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSMutableDictionary, NSMutableSet, UILabel, UIView;
@protocol NCNotificationListViewDataSource;

@interface NCNotificationListView : UIScrollView
{
    BOOL _grouped;
    BOOL _subviewPerformingGroupingAnimation;
    BOOL _performingContentRevealAnimation;
    BOOL _revealed;
    BOOL _leadingRevealView;
    BOOL _activeRevealTransitioning;
    BOOL _performingGroupingAnimation;
    BOOL _performingRevealAnimation;
    BOOL _performingHeaderReloadAnimation;
    BOOL _performingVisibleRectAdjustment;
    BOOL _performedFirstLayout;
    BOOL _cachedSizeValid;
    id<NCNotificationListViewDataSource> _dataSource;
    double _groupedTranslation;
    double _revealPercentage;
    unsigned long long _revealIndexOffset;
    NSMutableDictionary *_visibleViews;
    NSMutableSet *_insertedViewIndices;
    NSMutableSet *_reloadedViewIndices;
    unsigned long long _removedViewIndex;
    NSMutableSet *_viewsPerformingAnimation;
    UILabel *_titleLabel;
    UIView *_headerView;
    UIView *_footerView;
    struct CGSize _cachedSize;
    struct CGRect _visibleRect;
}

@property (nonatomic, getter=isActiveRevealTransitioning) BOOL activeRevealTransitioning; // @synthesize activeRevealTransitioning=_activeRevealTransitioning;
@property (nonatomic) struct CGSize cachedSize; // @synthesize cachedSize=_cachedSize;
@property (nonatomic, getter=isCachedSizeValid) BOOL cachedSizeValid; // @synthesize cachedSizeValid=_cachedSizeValid;
@property (readonly, nonatomic) unsigned long long count;
@property (weak, nonatomic) id<NCNotificationListViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (strong, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property (nonatomic, getter=isGrouped) BOOL grouped; // @synthesize grouped=_grouped;
@property (nonatomic) double groupedTranslation; // @synthesize groupedTranslation=_groupedTranslation;
@property (strong, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property (strong, nonatomic) NSMutableSet *insertedViewIndices; // @synthesize insertedViewIndices=_insertedViewIndices;
@property (nonatomic, getter=isLeadingRevealView) BOOL leadingRevealView; // @synthesize leadingRevealView=_leadingRevealView;
@property (readonly, nonatomic, getter=isNotificationListViewCurrentlyVisible) BOOL notificationListViewCurrentlyVisible;
@property (nonatomic, getter=hasPerformedFirstLayout) BOOL performedFirstLayout; // @synthesize performedFirstLayout=_performedFirstLayout;
@property (nonatomic, getter=isPerformingContentRevealAnimation) BOOL performingContentRevealAnimation; // @synthesize performingContentRevealAnimation=_performingContentRevealAnimation;
@property (nonatomic, getter=isPerformingGroupingAnimation) BOOL performingGroupingAnimation; // @synthesize performingGroupingAnimation=_performingGroupingAnimation;
@property (nonatomic, getter=isPerformingHeaderReloadAnimation) BOOL performingHeaderReloadAnimation; // @synthesize performingHeaderReloadAnimation=_performingHeaderReloadAnimation;
@property (nonatomic, getter=isPerformingRevealAnimation) BOOL performingRevealAnimation; // @synthesize performingRevealAnimation=_performingRevealAnimation;
@property (nonatomic, getter=isPerformingVisibleRectAdjustment) BOOL performingVisibleRectAdjustment; // @synthesize performingVisibleRectAdjustment=_performingVisibleRectAdjustment;
@property (strong, nonatomic) NSMutableSet *reloadedViewIndices; // @synthesize reloadedViewIndices=_reloadedViewIndices;
@property (nonatomic) unsigned long long removedViewIndex; // @synthesize removedViewIndex=_removedViewIndex;
@property (nonatomic) unsigned long long revealIndexOffset; // @synthesize revealIndexOffset=_revealIndexOffset;
@property (nonatomic) double revealPercentage; // @synthesize revealPercentage=_revealPercentage;
@property (nonatomic, getter=isRevealed) BOOL revealed; // @synthesize revealed=_revealed;
@property (nonatomic, getter=isSubviewPerformingGroupingAnimation) BOOL subviewPerformingGroupingAnimation; // @synthesize subviewPerformingGroupingAnimation=_subviewPerformingGroupingAnimation;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) NSMutableSet *viewsPerformingAnimation; // @synthesize viewsPerformingAnimation=_viewsPerformingAnimation;
@property (nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property (strong, nonatomic) NSMutableDictionary *visibleViews; // @synthesize visibleViews=_visibleViews;

- (void).cxx_destruct;
- (void)_adjustContentSizeHeightIfNecessaryForUpdatedHeight:(double)arg1;
- (void)_adjustContentSizeWidthIfNecessary;
- (double)_adjustedFrictionForRevealAnimation;
- (double)_adjustedTensionForRevealAnimation;
- (void)_configureClippingIfNecessary;
- (void)_configureStackDimmingForGroupedView:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)_footerViewFromDataSource;
- (double)_footerViewHeight;
- (struct CGRect)_frameForViewAtIndex:(unsigned long long)arg1;
- (id)_headerViewFromDataSource;
- (double)_headerViewHeight;
- (BOOL)_isGrouping;
- (BOOL)_isTopSubviewHeightLessThanVisibleRect;
- (BOOL)_isViewWithinVisibleRectForHeight:(double)arg1 layoutOffset:(double)arg2;
- (BOOL)_isVisibleView:(id)arg1;
- (void)_layoutFooterViewForGroupingIfNecessary;
- (void)_layoutFooterViewIfNecessaryAtLayoutOffset:(double)arg1;
- (void)_layoutForGrouping;
- (void)_layoutForList;
- (void)_layoutGroupedViewForGroupingLayout:(id)arg1 atIndex:(unsigned long long)arg2 isExistingView:(BOOL)arg3 leadingViewHeight:(double)arg4;
- (void)_layoutHeaderViewForGroupingIfNecessary;
- (void)_layoutHeaderViewIfNecessaryAtLayoutOffset:(double)arg1;
- (void)_layoutHiddenViewsForGroupingLayoutIfNecessaryWithLeadingViewHeight:(double)arg1;
- (void)_layoutLeadingViewForGroupingLayoutIfNecessary:(id)arg1 hasShadow:(BOOL)arg2;
- (double)_layoutViewIfNecessaryAtIndex:(unsigned long long)arg1 layoutOffset:(double)arg2;
- (id)_listViewForView:(id)arg1;
- (void)_performAnimationForView:(id)arg1 atIndex:(unsigned long long)arg2 animationBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_performInsertionAnimationForView:(id)arg1;
- (void)_performRemovalAnimationForView:(id)arg1;
- (void)_performViewAnimationBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_performViewAnimationBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 withTension:(double)arg3 friction:(double)arg4;
- (double)_positionOffsetForRevealHintingForHeaderView;
- (double)_positionOffsetForRevealHintingForItemAtIndex:(unsigned long long)arg1;
- (void)_recycleViewIfNecessary:(id)arg1;
- (void)_recycleViewIfNecessary:(id)arg1 withDataSource:(id)arg2;
- (void)_removeAllStoredVisibleViews;
- (void)_removeStoredVisibleViewAtIndex:(unsigned long long)arg1;
- (void)_resetClipping;
- (double)_revealAnimationDelayForObjectAtIndex:(unsigned long long)arg1;
- (struct CGAffineTransform)_scaleTransformForGroupingAnimationForViewAtIndex:(unsigned long long)arg1 leadingViewHeight:(double)arg2;
- (void)_setContentHiddenForGroupedView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_setVisibleView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_setupClipping;
- (BOOL)_shouldPerformClipping;
- (void)_updateStoredVisibleViewsForViewInsertedAtIndex:(unsigned long long)arg1;
- (void)_updateStoredVisibleViewsForViewRemovedAtIndex:(unsigned long long)arg1;
- (void)_updateVisibleViewsForUpdatedVisibleRect:(struct CGRect)arg1;
- (double)_verticalVelocityForSuperview;
- (id)_visibleViewAtIndex:(unsigned long long)arg1;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertViewAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)invalidateData;
- (BOOL)isVisibleForViewAtIndex:(unsigned long long)arg1;
- (double)layoutOffsetForViewAtIndex:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)recycleVisibleViews;
- (void)reloadHeaderView;
- (void)reloadViewAtIndex:(unsigned long long)arg1;
- (void)removeViewAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)revealNotificationContentBelowGroupedViewIfNecessary:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

