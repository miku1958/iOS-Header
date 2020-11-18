//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>

@class NSString;

@interface SBGridLayoutSwitcherModifier : SBSwitcherModifier <PTSettingsKeyObserver>
{
    struct CGPoint _previousContentOffset;
    BOOL _isScrollingForward;
    BOOL _usesFixedCardSize;
    double _unroundedCardScale;
    unsigned long long _scrollAxis;
    unsigned long long _fixedGroupingSize;
    unsigned long long _alignment;
    unsigned long long _layoutDirection;
    struct CGSize _fixedCardSize;
}

@property (nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property (nonatomic) double cardScale; // @synthesize cardScale=_unroundedCardScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize fixedCardSize; // @synthesize fixedCardSize=_fixedCardSize;
@property (nonatomic) unsigned long long fixedGroupingSize; // @synthesize fixedGroupingSize=_fixedGroupingSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property (nonatomic) unsigned long long scrollAxis; // @synthesize scrollAxis=_scrollAxis;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUsingFixedCardSize) BOOL usesFixedCardSize; // @synthesize usesFixedCardSize=_usesFixedCardSize;

- (void)_applyPrototypeSettings;
- (double)_cardCornerRadiusInSwitcher;
- (double)_cardHeaderHeight;
- (struct CGSize)_cardSize;
- (unsigned long long)_columnForIndex:(unsigned long long)arg1;
- (struct CGSize)_contentSize;
- (unsigned long long)_firstTrailingIndexForContentOffset:(struct CGPoint)arg1;
- (struct CGSize)_fittedContentSize;
- (struct CGRect)_frameForIndex:(unsigned long long)arg1 ignoringScrollOffset:(BOOL)arg2;
- (struct CGRect)_frameWithScaleAppliedForIndex:(unsigned long long)arg1 ignoringScrollOffset:(BOOL)arg2;
- (double)_gridSwitcherPageScale;
- (void)_handleTransitionEvent:(id)arg1;
- (double)_horizontalSpacing;
- (unsigned long long)_indexOfLeadingCard;
- (BOOL)_isIndexVisible:(unsigned long long)arg1;
- (double)_leadingPadding;
- (unsigned long long)_numberOfColumns;
- (unsigned long long)_numberOfRows;
- (unsigned long long)_rowForIndex:(unsigned long long)arg1;
- (struct CGSize)_scaledCardSize;
- (double)_trailingPadding;
- (double)_verticalSpacing;
- (struct _NSRange)_visibleAppLayoutRangeForContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)adjustedOffsetForOffset:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 startPoint:(struct CGPoint)arg3 locationInView:(struct CGPoint)arg4 horizontalVelocity:(inout double *)arg5 verticalVelocity:(inout double *)arg6;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (id)appLayoutsToCacheSnapshots;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (struct CGPoint)contentOffsetForIndex:(unsigned long long)arg1 centered:(BOOL)arg2;
- (double)contentPageViewScaleForAppLayout:(id)arg1;
- (double)contentViewScale;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (struct CGRect)fullyPresentedFrameForAppLayout:(id)arg1;
- (id)handleInlineTransitionEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleScrollEvent:(id)arg1;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1;
- (id)initWithScrollAxis:(unsigned long long)arg1 fixedGroupingSize:(unsigned long long)arg2 cardScale:(double)arg3 alignment:(unsigned long long)arg4 layoutDirection:(unsigned long long)arg5;
- (double)minimumTranslationToKillIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfRows;
- (double)opacityForIndex:(unsigned long long)arg1;
- (void)resetAdjustedScrollingState;
- (struct CGPoint)restingOffsetForScrollOffset:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (double)rotationAngleForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)scrollViewAttributes;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (BOOL)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1;
- (BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
- (double)snapshotScaleForAppLayout:(id)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (id)visibleAppLayouts;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;

@end
