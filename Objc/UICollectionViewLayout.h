//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/_UICollectionViewLayoutOrthogonalScrolling-Protocol.h>

@class NSArray, NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSString, UICollectionView, UICollectionViewLayoutInvalidationContext, UIDynamicAnimator, _UICollectionViewCompositionLayout;

@interface UICollectionViewLayout : NSObject <_UICollectionViewLayoutOrthogonalScrolling, NSCoding>
{
    UICollectionView *_collectionView;
    struct CGSize _collectionViewBoundsSize;
    NSMutableDictionary *_initialAnimationLayoutAttributesDict;
    NSMutableDictionary *_finalAnimationLayoutAttributesDict;
    NSMutableDictionary *_deletedSupplementaryIndexPathsDict;
    NSMutableDictionary *_insertedSupplementaryIndexPathsDict;
    NSMutableDictionary *_deletedDecorationIndexPathsDict;
    NSMutableDictionary *_insertedDecorationIndexPathsDict;
    NSMutableIndexSet *_deletedSectionsSet;
    NSMutableIndexSet *_insertedSectionsSet;
    NSMutableDictionary *_decorationViewClassDict;
    NSMutableDictionary *_decorationViewNibDict;
    NSMutableDictionary *_decorationViewExternalObjectsTables;
    UICollectionViewLayout *_transitioningFromLayout;
    UICollectionViewLayout *_transitioningToLayout;
    UIDynamicAnimator *_animator;
    UICollectionViewLayoutInvalidationContext *_invalidationContext;
    struct CGRect _frame;
    NSIndexSet *_sections;
    NSIndexSet *_items;
    NSArray *_elementKinds;
    _UICollectionViewCompositionLayout *_compositionLayout;
    UICollectionViewLayout *_siblingLayout;
    struct CGPoint _layoutOffset;
    unsigned long long _layoutOffsetEdges;
    struct {
        unsigned int inTransitionFromTransitionLayout:1;
        unsigned int inTransitionToTransitionLayout:1;
        unsigned int prepared:1;
        unsigned int wantsRightToLeftHorizontalMirroringIfNeeded:1;
    } _layoutFlags;
    long long _sublayoutType;
}

@property (readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (nonatomic, getter=_compositionLayout, setter=_setCompositionLayout:) _UICollectionViewCompositionLayout *compositionLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic, getter=_elementKinds, setter=_setElementKinds:) NSArray *elementKinds;
@property (readonly, nonatomic, getter=_focusFastScrollingIndexBarInsets) struct UIEdgeInsets focusFastScrollingIndexBarInsets;
@property (nonatomic, getter=_frame, setter=_setFrame:) struct CGRect frame;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic, getter=_items, setter=_setItems:) NSIndexSet *items;
@property (nonatomic, getter=_layoutOffset, setter=_setLayoutOffset:) struct CGPoint layoutOffset;
@property (nonatomic, getter=_layoutOffsetEdges, setter=_setLayoutOffsetEdges:) unsigned long long layoutOffsetEdges;
@property (nonatomic, getter=_isPrepared, setter=_setPrepared:) BOOL prepared;
@property (copy, nonatomic, getter=_sections, setter=_setSections:) NSIndexSet *sections;
@property (nonatomic, getter=_siblingLayout, setter=_setSiblingLayout:) UICollectionViewLayout *siblingLayout;
@property (nonatomic, getter=_sublayoutType, setter=_setSublayoutType:) long long sublayoutType; // @synthesize sublayoutType=_sublayoutType;
@property (readonly) Class superclass;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (struct CGRect)_bounds;
- (BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
- (struct CGPoint)_contentOffsetForScrollingToSection:(long long)arg1;
- (struct CGPoint)_contentOffsetFromProposedContentOffset:(struct CGPoint)arg1 forScrollingToItemAtIndexPath:(id)arg2 atScrollPosition:(unsigned long long)arg3;
- (id)_decorationViewForLayoutAttributes:(id)arg1;
- (void)_didFinishLayoutTransitionAnimations:(BOOL)arg1;
- (void)_didPerformUpdateVisibleCellsPass;
- (BOOL)_disallowsFadeCellsForBoundsChange;
- (id)_dynamicAnimator;
- (struct CGRect)_dynamicReferenceBounds;
- (unsigned long long)_edgesForSafeAreaPropagationToDescendants;
- (BOOL)_estimatesSizes;
- (BOOL)_estimatesSupplementaryItems;
- (id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(struct CGRect)arg1;
- (struct CGSize)_fallbackItemSize;
- (void)_finalizeCollectionViewItemAnimations;
- (void)_finalizeLayoutTransition;
- (BOOL)_hasOrthogonalScrollingSections;
- (id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (void)_invalidateLayoutUsingContext:(id)arg1;
- (id)_invalidationContextForEndingReorderingItemToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 reorderingCancelled:(BOOL)arg3;
- (id)_invalidationContextForReorderingTargetPosition:(struct CGPoint)arg1 targetIndexPaths:(id)arg2 withPreviousPosition:(struct CGPoint)arg3 previousIndexPaths:(id)arg4;
- (id)_invalidationContextForUpdatedLayoutMargins:(struct UIEdgeInsets)arg1;
- (id)_layoutAttributesForElementsInProjectedRect:(struct CGRect)arg1 withProjectionVector:(struct CGVector)arg2 projectionDistance:(double)arg3;
- (id)_layoutAttributesForReorderedItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (unsigned long long)_layoutAxis;
- (BOOL)_needsRecomputeOfPreferredAttributesForVisibleEstimatedItemsDuringUpdate;
- (struct CGPoint)_offsetForOrthogonalScrollingSection:(long long)arg1;
- (struct CGPoint)_offsetInTopParentLayout:(id *)arg1;
- (struct CGRect)_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg1 frame:(struct CGRect)arg2;
- (unsigned long long)_orthogonalScrollingAxis;
- (struct NSDirectionalEdgeInsets)_orthogonalScrollingContentInsetsForSection:(long long)arg1;
- (struct CGRect)_orthogonalScrollingContentRectForSection:(long long)arg1;
- (double)_orthogonalScrollingDecelerationRateForSection:(long long)arg1;
- (BOOL)_orthogonalScrollingElementShouldAppearAboveForAttributes:(id)arg1;
- (struct CGRect)_orthogonalScrollingLayoutRectForSection:(long long)arg1;
- (double)_orthogonalScrollingPagingDimensionForSection:(long long)arg1;
- (id)_orthogonalScrollingSections;
- (BOOL)_orthogonalScrollingShouldCenterCustomPagingSizeForSection:(long long)arg1;
- (struct CGPoint)_orthogonalScrollingTargetContentOffsetForOffset:(struct CGPoint)arg1 section:(long long)arg2;
- (id)_orthogonalScrollingTrace;
- (BOOL)_orthogonalScrollingUsesTargetContentOffsetForSection:(long long)arg1;
- (BOOL)_overridesSafeAreaPropagationToDescendants;
- (struct UIEdgeInsets)_preferredLayoutMargins;
- (void)_prepareForCollectionViewUpdates:(id)arg1 withDataSourceTranslator:(id)arg2;
- (void)_prepareForPreferredAttributesQueryForView:(id)arg1 withLayoutAttributes:(id)arg2;
- (void)_prepareForTransitionFromLayout:(id)arg1;
- (void)_prepareForTransitionToLayout:(id)arg1;
- (void)_prepareToAnimateFromCollectionViewItems:(id)arg1 atContentOffset:(struct CGPoint)arg2 toItems:(id)arg3 atContentOffset:(struct CGPoint)arg4;
- (BOOL)_preparedForBoundsChanges;
- (id)_reorderingTargetItemIndexPathForPosition:(struct CGPoint)arg1 withPreviousIndexPath:(id)arg2;
- (struct CGVector)_scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1;
- (void)_setCollectionView:(id)arg1;
- (void)_setCollectionViewBoundsSize:(struct CGSize)arg1;
- (void)_setDynamicAnimator:(id)arg1;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfDecorationViewOfKind:(id)arg2;
- (void)_setOffset:(struct CGPoint)arg1 forOrthogonalScrollingSection:(long long)arg2;
- (void)_setWantsRightToLeftHorizontalMirroringIfNeeded:(BOOL)arg1;
- (BOOL)_shouldConfigureForPagingForOrthogonalScrollingSection:(long long)arg1;
- (BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
- (BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (void)_traitCollectionDidChangeFromPreviousCollection:(id)arg1 newTraitCollection:(id)arg2;
- (BOOL)_wantsRightToLeftHorizontalMirroringIfNeeded;
- (BOOL)_wantsUntrackedAnimationCleanupForAuxillaryItems;
- (void)_willPerformUpdateVisibleCellsPass;
- (struct CGRect)bounds;
- (BOOL)canBeEdited;
- (struct CGSize)collectionViewContentSize;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromLayout:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toLayout:(id)arg2;
- (long long)developmentLayoutDirection;
- (void)encodeWithCoder:(id)arg1;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeCollectionViewUpdates;
- (void)finalizeLayoutTransition;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (id)invalidationContextForEndingInteractiveMovementOfItemsToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 movementCancelled:(BOOL)arg3;
- (id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(struct CGPoint)arg2 previousIndexPaths:(id)arg3 previousPosition:(struct CGPoint)arg4;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (BOOL)isEditing;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)prepareLayout;
- (void)registerClass:(Class)arg1 forDecorationViewOfKind:(id)arg2;
- (void)registerNib:(id)arg1 forDecorationViewOfKind:(id)arg2;
- (void)setEditing:(BOOL)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)snapshottedLayoutAttributeForItemAtIndexPath:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(struct CGPoint)arg2;
- (struct CGPoint)transitionContentOffsetForProposedContentOffset:(struct CGPoint)arg1 keyItemIndexPath:(id)arg2;
- (struct CGPoint)updatesContentOffsetForProposedContentOffset:(struct CGPoint)arg1;

@end

