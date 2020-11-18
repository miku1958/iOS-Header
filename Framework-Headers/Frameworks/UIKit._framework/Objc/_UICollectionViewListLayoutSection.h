//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSCollectionLayoutSection.h>

#import <UIKitCore/_UICollectionLayoutSectionCallback-Protocol.h>

@class NSString, _UICollectionViewListLayoutSectionConfiguration;
@protocol NSCollectionLayoutEnvironment_Private;

@interface _UICollectionViewListLayoutSection : NSCollectionLayoutSection <_UICollectionLayoutSectionCallback>
{
    _UICollectionViewListLayoutSectionConfiguration *_configuration;
    id<NSCollectionLayoutEnvironment_Private> _layoutEnvironment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=_layoutEnvironment) id<NSCollectionLayoutEnvironment_Private> layoutEnvironment; // @synthesize layoutEnvironment=_layoutEnvironment;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)__isLastItemInSection:(id)arg1;
- (BOOL)__isLastSection:(long long)arg1;
- (BOOL)__shouldDrawSeparatorAtBottom:(BOOL)arg1 ofSection:(long long)arg2 interactionState:(id)arg3;
- (BOOL)_adjustsLayoutToMergeWithBarInSection:(long long)arg1 interactionState:(id)arg2;
- (double)_alignedContentMarginGivenMargin:(double)arg1;
- (id)_callback;
- (void)_configureLayoutAttributes:(id)arg1 forSeparatorAtBottom:(BOOL)arg2 interactionState:(id)arg3;
- (void)_configureLayoutAttributesForBackgroundDecoration:(id)arg1;
- (void)_configureLayoutAttributesForPlainCell:(id)arg1;
- (void)_configureLayoutAttributesForSidebarPlainCell:(id)arg1;
- (void)_configureLayoutAttributesForSwipeActionMasking:(id)arg1;
- (void)_configureLayoutAttributesWithDefaultMasking:(id)arg1;
- (void)_configureLayoutAttributesWithInsetGroupedMasking:(id)arg1 stylesFirstItemAsHeader:(BOOL)arg2;
- (id)_constants;
- (struct NSDirectionalEdgeInsets)_defaultDirectionalLayoutMarginsInsideSection;
- (struct UIEdgeInsets)_defaultLayoutMarginsInsideSection;
- (struct NSDirectionalEdgeInsets)_defaultSectionContentInsetsForAppearanceStyle:(long long)arg1;
- (void)_didEndSwiping;
- (id)_effectiveBackgroundColor;
- (struct NSDirectionalEdgeInsets)_effectiveBoundarySeparatorInsetsFromConfiguration:(id)arg1;
- (struct UIEdgeInsets)_effectiveCollectionViewLayoutMarginsForAppearanceStyle:(long long)arg1 forUseAsContentInsets:(BOOL)arg2;
- (struct NSDirectionalEdgeInsets)_effectiveSectionHorizontalInsets;
- (void)_enrichLayoutAttributes:(id)arg1 interactionState:(id)arg2;
- (void)_enrichPreferredLayoutAttributes:(id)arg1 interactionState:(id)arg2;
- (BOOL)_hasHorizontalInsets;
- (id)_invalidationContextForBackgroundChangeAtIndexPath:(id)arg1 interactionState:(id)arg2;
- (BOOL)_isRTL;
- (BOOL)_isVisuallyContiguousWithSectionAfterSectionIndex:(long long)arg1 interactionState:(id)arg2;
- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg1;
- (unsigned long long)_maskedCornersForBackgroundOfItemWithSelectionGrouping:(unsigned long long)arg1;
- (struct NSDirectionalEdgeInsets)_preferredSeparatorInsetsFromCellLayoutAttributes:(id)arg1;
- (id)_preferredSizingCustomizationsForItemWithLayoutAttributes:(id)arg1 interactionState:(id)arg2;
- (struct NSDirectionalEdgeInsets)_sectionPreferredDirectionalSeparatorInsetsForIndexPath:(id)arg1;
- (BOOL)_shouldHideBottomSeparatorAtIndexPath:(id)arg1 forGrouping:(unsigned long long)arg2 interactionState:(id)arg3;
- (BOOL)_shouldHideTopSeparatorAtIndexPath:(id)arg1 interactionState:(id)arg2;
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg1;
- (void)_updateStyleForSwipeActionsConfiguration:(id)arg1;
- (BOOL)_useRoundedSwipeActions;
- (BOOL)_wantsSwipeActions;
- (void)_willBeginSwiping;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 layoutEnvironment:(id)arg2;
- (BOOL)prefersListSolver;
- (BOOL)shouldRestrictOrthogonalAxisDuringInteractiveMovement;

@end
