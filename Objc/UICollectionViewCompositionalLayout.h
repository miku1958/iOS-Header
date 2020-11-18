//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionViewLayout.h>

#import <UIKitCore/_UICollectionViewLayoutInteractionStateModuleHost-Protocol.h>

@class NSCollectionLayoutSection, NSString, UICollectionViewCompositionalLayoutConfiguration, _UICollectionCompositionalLayoutSolver, _UICollectionCompositionalLayoutSolverUpdate, _UICollectionViewLayoutInteractionStateModule, _UIDataSourceSnapshotter, _UIUpdateVisibleCellsContext;
@protocol _UICollectionCompositionalLayoutSolverResolveResult;

@interface UICollectionViewCompositionalLayout : UICollectionViewLayout <_UICollectionViewLayoutInteractionStateModuleHost>
{
    UICollectionViewCompositionalLayoutConfiguration *_configuration;
    _UICollectionViewLayoutInteractionStateModule *_interactionStateModule;
    BOOL _defersInitialSolveUntilPrepare;
    BOOL _shouldAdjustContentInsetModeForCollectionViewNeverMode;
    BOOL _isInUpdateVisibleCellsPass;
    BOOL _deferredLastInvalidationNextInvalidationRequiresFullResolve;
    BOOL _layoutRTL;
    BOOL _roundsToScreenScale;
    NSCollectionLayoutSection *_layoutSectionTemplate;
    CDUnknownBlockType _layoutSectionProvider;
    _UICollectionCompositionalLayoutSolver *_solver;
    _UIDataSourceSnapshotter *_dataSourceSnapshotter;
    unsigned long long _edgesForSafeAreaPropagation;
    _UIUpdateVisibleCellsContext *_updateVisibleCellsContext;
    _UICollectionCompositionalLayoutSolverUpdate *_currentUpdate;
    id<_UICollectionCompositionalLayoutSolverResolveResult> _currentResolveResult;
    CDUnknownBlockType _dynamicsConfigurationHandler;
    struct CGSize _memoizedPreviousSolvedViewBoundsSize;
    struct UIEdgeInsets _memoizedDynamicAnimatorWorldAdjustingInsets;
    struct UIEdgeInsets _memoizedPreviousLayoutMargins;
    struct CGRect _contentFrame;
}

@property (copy, nonatomic) UICollectionViewCompositionalLayoutConfiguration *configuration;
@property (nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property (strong, nonatomic) id<_UICollectionCompositionalLayoutSolverResolveResult> currentResolveResult; // @synthesize currentResolveResult=_currentResolveResult;
@property (strong, nonatomic) _UICollectionCompositionalLayoutSolverUpdate *currentUpdate; // @synthesize currentUpdate=_currentUpdate;
@property (strong, nonatomic) _UIDataSourceSnapshotter *dataSourceSnapshotter; // @synthesize dataSourceSnapshotter=_dataSourceSnapshotter;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferredLastInvalidationNextInvalidationRequiresFullResolve; // @synthesize deferredLastInvalidationNextInvalidationRequiresFullResolve=_deferredLastInvalidationNextInvalidationRequiresFullResolve;
@property (nonatomic) BOOL defersInitialSolveUntilPrepare; // @synthesize defersInitialSolveUntilPrepare=_defersInitialSolveUntilPrepare;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType dynamicsConfigurationHandler; // @synthesize dynamicsConfigurationHandler=_dynamicsConfigurationHandler;
@property (nonatomic) unsigned long long edgesForSafeAreaPropagation; // @synthesize edgesForSafeAreaPropagation=_edgesForSafeAreaPropagation;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isInUpdateVisibleCellsPass; // @synthesize isInUpdateVisibleCellsPass=_isInUpdateVisibleCellsPass;
@property (nonatomic) BOOL layoutRTL; // @synthesize layoutRTL=_layoutRTL;
@property (copy, nonatomic) CDUnknownBlockType layoutSectionProvider; // @synthesize layoutSectionProvider=_layoutSectionProvider;
@property (strong, nonatomic) NSCollectionLayoutSection *layoutSectionTemplate; // @synthesize layoutSectionTemplate=_layoutSectionTemplate;
@property (nonatomic) struct UIEdgeInsets memoizedDynamicAnimatorWorldAdjustingInsets; // @synthesize memoizedDynamicAnimatorWorldAdjustingInsets=_memoizedDynamicAnimatorWorldAdjustingInsets;
@property (nonatomic) struct UIEdgeInsets memoizedPreviousLayoutMargins; // @synthesize memoizedPreviousLayoutMargins=_memoizedPreviousLayoutMargins;
@property (nonatomic) struct CGSize memoizedPreviousSolvedViewBoundsSize; // @synthesize memoizedPreviousSolvedViewBoundsSize=_memoizedPreviousSolvedViewBoundsSize;
@property (nonatomic) BOOL roundsToScreenScale; // @synthesize roundsToScreenScale=_roundsToScreenScale;
@property (nonatomic) BOOL shouldAdjustContentInsetModeForCollectionViewNeverMode; // @synthesize shouldAdjustContentInsetModeForCollectionViewNeverMode=_shouldAdjustContentInsetModeForCollectionViewNeverMode;
@property (strong, nonatomic) _UICollectionCompositionalLayoutSolver *solver; // @synthesize solver=_solver;
@property (readonly) Class superclass;
@property (strong, nonatomic) _UIUpdateVisibleCellsContext *updateVisibleCellsContext; // @synthesize updateVisibleCellsContext=_updateVisibleCellsContext;

+ (id)layoutWithListConfiguration:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_adjustCollectionViewContentInsetBehaviorForLayoutAxisIfNeeded:(unsigned long long)arg1 container:(id)arg2;
- (double)_alignedContentMarginGivenMargin:(double)arg1;
- (BOOL)_allowsItemInteractionsToBegin;
- (void)_backgroundChangedForInteractionAtIndexPath:(id)arg1;
- (id)_boundsChangeResolve;
- (BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
- (void)_computeAndUpdateAdjustedContentFrame;
- (id)_containerFromCollectionView;
- (id)_contentInsetsEnvironmentFromCollectionViewForInsetsReference:(long long)arg1;
- (void)_createSwipeActionsModuleIfNeeded;
- (id)_dataSourceSnapshotter;
- (void)_didEndSwiping;
- (void)_didPerformUpdateVisibleCellsPassWithLayoutOffset:(struct CGPoint)arg1;
- (BOOL)_disallowsFadeCellsForBoundsChange;
- (unsigned long long)_edgesForSafeAreaPropagationToDescendants;
- (id)_endInteractiveReorderingResolveWithContext:(id)arg1;
- (BOOL)_estimatesSizes;
- (BOOL)_estimatesSupplementaryItems;
- (id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(struct CGRect)arg1;
- (void)_fullResolve;
- (void)_handlePreferredSizingCustomizationsInvalidation:(id)arg1;
- (void)_handleSwipeActionsInvalidationWithContext:(id)arg1;
- (BOOL)_hasOrthogonalScrollingSections;
- (id)_interactionStateModule:(id)arg1 layoutSectionForIndex:(long long)arg2;
- (double)_interactionStateModule:(id)arg1 spacingAfterLayoutSection:(long long)arg2;
- (id)_invalidationContextForUpdatedLayoutMargins:(struct UIEdgeInsets)arg1;
- (BOOL)_invokeVisibleBoundsUpdateForDynamicAnimatorForNewVisibleBounds:(struct CGRect)arg1 preparingLayout:(BOOL)arg2;
- (id)_invokeVisibleItemsInvalidationHandlerIfNeededForVisibleBounds:(struct CGRect)arg1;
- (unsigned long long)_layoutAxis;
- (id)_layoutSectionForSectionIndex:(unsigned long long)arg1;
- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg1;
- (id)_marginsChangeResolve;
- (struct CGPoint)_offsetForOrthogonalScrollingSection:(long long)arg1;
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
- (BOOL)_orthogonalScrollingUsesTargetContentOffsetForSection:(long long)arg1;
- (BOOL)_overridesSafeAreaPropagationToDescendants;
- (void)_postProcessPreferredAttributes:(id)arg1 forView:(id)arg2;
- (void)_prepareForCollectionViewUpdates:(id)arg1 withDataSourceTranslator:(id)arg2;
- (void)_prepareForPreferredAttributesQueryForView:(id)arg1 withLayoutAttributes:(id)arg2;
- (void)_prepareForTransitionToLayout:(id)arg1;
- (BOOL)_preparedForBoundsChanges;
- (id)_propertyAnimatorForCollectionViewUpdates:(id)arg1 withCustomAnimator:(id)arg2;
- (struct CGVector)_scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1;
- (void)_setCollectionView:(id)arg1;
- (void)_setOffset:(struct CGPoint)arg1 forOrthogonalScrollingSection:(long long)arg2;
- (BOOL)_shouldAdjustTargetContentOffsetToValidateContentExtents;
- (BOOL)_shouldConfigureForPagingForOrthogonalScrollingSection:(long long)arg1;
- (BOOL)_shouldInvalidateLayoutForBoundsSizeChange:(struct CGRect)arg1;
- (BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
- (BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
- (void)_solveForPinnedSupplementaryItemsIfNeededWithContext:(id)arg1;
- (BOOL)_supportsSwipeActionsForIndexPath:(id)arg1;
- (struct CGPoint)_targetPositionForInteractiveMovementOfItemAtIndexPath:(id)arg1 withProposedTargetPosition:(struct CGPoint)arg2;
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg1;
- (void)_traitCollectionDidChangeFromPreviousCollection:(id)arg1 newTraitCollection:(id)arg2;
- (void)_transformCellLayoutAttributes:(id)arg1;
- (void)_transformDecorationLayoutAttributes:(id)arg1;
- (void)_transformSupplementaryLayoutAttributes:(id)arg1;
- (id)_updatePinnedSectionSupplementaryItemsForCurrentVisibleBounds;
- (id)_updateResolve;
- (BOOL)_viewBoundsPermitsLayout:(struct CGRect)arg1;
- (BOOL)_wantsAnimationsForOffscreenAuxillaries;
- (BOOL)_wantsUntrackedAnimationCleanupForAuxillaryItems;
- (void)_willBeginSwiping;
- (void)_willPerformUpdateVisibleCellsPass;
- (id)boundarySupplementaryItems;
- (BOOL)canBeEdited;
- (struct CGSize)collectionViewContentSize;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)initWithLayoutSection:(id)arg1;
- (id)initWithLayoutSection:(id)arg1 scrollDirection:(long long)arg2;
- (id)initWithSection:(id)arg1;
- (id)initWithSection:(id)arg1 configuration:(id)arg2;
- (id)initWithSection:(id)arg1 sectionProvider:(CDUnknownBlockType)arg2 configuration:(id)arg3;
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1;
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1 configuration:(id)arg2;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (BOOL)isEditing;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;
- (long long)scrollDirection;
- (void)setBoundarySupplementaryItems:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;

@end

