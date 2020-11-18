//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <UIKit/_UIKeyboardAutoRespondingScrollView-Protocol.h>

@class NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, UICollectionReusableView, UICollectionViewCell, UICollectionViewData, UICollectionViewLayout, UICollectionViewLayoutAttributes, UICollectionViewUpdate, UIFocusContainerGuide, UITouch, UIView, _UIDynamicAnimationGroup;
@protocol UICollectionViewDataSource, UICollectionViewDataSource_Private, UICollectionViewDelegate;

@interface UICollectionView : UIScrollView <_UIKeyboardAutoRespondingScrollView>
{
    UICollectionViewLayout *_layout;
    id<UICollectionViewDataSource_Private> _dataSource;
    UIView *_backgroundView;
    NSMutableSet *_indexPathsForSelectedItems;
    NSMutableDictionary *_cellReuseQueues;
    NSMutableDictionary *_supplementaryViewReuseQueues;
    NSMutableSet *_indexPathsForHighlightedItems;
    long long _reloadingSuspendedCount;
    long long _updateAnimationCount;
    UICollectionReusableView *_firstResponderView;
    UIView *_newContentView;
    long long _firstResponderViewType;
    NSString *_firstResponderViewKind;
    NSIndexPath *_firstResponderIndexPath;
    NSMutableDictionary *_visibleCellsDict;
    NSMutableDictionary *_visibleSupplementaryViewsDict;
    NSMutableDictionary *_visibleDecorationViewsDict;
    NSMutableDictionary *_clonedCellsDict;
    NSMutableDictionary *_clonedSupplementaryViewsDict;
    NSMutableDictionary *_clonedDecorationViewsDict;
    NSMutableDictionary *_templateLayoutCells;
    NSIndexPath *_pendingSelectionIndexPath;
    NSMutableSet *_pendingDeselectionIndexPaths;
    UICollectionViewData *_collectionViewData;
    UICollectionViewUpdate *_currentUpdate;
    struct CGRect _visibleBounds;
    struct CGRect _preRotationBounds;
    struct CGPoint _rotationBoundsOffset;
    long long _rotationAnimationCount;
    long long _updateCount;
    NSMutableArray *_insertItems;
    NSMutableArray *_deleteItems;
    NSMutableArray *_reloadItems;
    NSMutableArray *_moveItems;
    NSArray *_originalInsertItems;
    NSArray *_originalDeleteItems;
    UITouch *_currentTouch;
    CDUnknownBlockType _updateCompletionHandler;
    CDUnknownBlockType _postUpdateBlock;
    NSMutableDictionary *_cellClassDict;
    NSMutableDictionary *_cellNibDict;
    NSMutableDictionary *_supplementaryViewClassDict;
    NSMutableDictionary *_supplementaryViewNibDict;
    NSMutableDictionary *_cellNibExternalObjectsTables;
    NSMutableDictionary *_supplementaryViewNibExternalObjectsTables;
    UICollectionViewLayoutAttributes *_transitionLayoutAttributes;
    BOOL _isInInteractiveTransition;
    BOOL _shouldAccumulateTrackedLayoutValues;
    NSMutableDictionary *_interactiveTransitionInfos;
    CDUnknownBlockType _interactiveCompletionHandler;
    double _currentInteractiveTransitionTimeStamp;
    double _previousInteractiveTransitionTimeStamp;
    double _startTimeStamp;
    struct CGPoint _currentCenterOffset;
    struct CGPoint _previousCenterOffset;
    double _currentInteractiveTransitionProgress;
    double _previousInteractiveTransitionProgress;
    _UIDynamicAnimationGroup *_endInteractiveTransitionAnimationGroup;
    UICollectionViewLayout *_nextLayoutForInteractiveTranstion;
    NSMutableDictionary *_interactiveTransitionValueTrackingDict;
    NSMutableArray *_trackedValuesKeys;
    NSMutableSet *_invalidatedItemIndexPaths;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    CDUnknownBlockType _invalidationBlock;
    NSMutableArray *_reorderedItems;
    struct CGPoint _reorderingTargetPosition;
    NSTimer *_autoscrollTimer;
    long long _focusedViewType;
    UIFocusContainerGuide *_contentFocusContainerGuide;
    struct {
        unsigned int delegateShouldHighlightItemAtIndexPath:1;
        unsigned int delegateDidHighlightItemAtIndexPath:1;
        unsigned int delegateDidUnhighlightItemAtIndexPath:1;
        unsigned int delegateShouldSelectItemAtIndexPath:1;
        unsigned int delegateShouldDeselectItemAtIndexPath:1;
        unsigned int delegateDidSelectItemAtIndexPath:1;
        unsigned int delegateDidDeselectItemAtIndexPath:1;
        unsigned int delegateSupportsMenus:1;
        unsigned int delegateWillDisplayCell:1;
        unsigned int delegateWillDisplaySupplementaryView:1;
        unsigned int delegateDidEndDisplayingCell:1;
        unsigned int delegateDidEndDisplayingSupplementaryView:1;
        unsigned int delegateIndexForReferenceItemDuringLayoutTransition:1;
        unsigned int delegateOverrideForTransitionOffsetSize:1;
        unsigned int delegateTargetContentOffsetForProposedContentOffsetSPI:1;
        unsigned int delegateTargetContentOffsetForProposedContentOffset:1;
        unsigned int delegateTargetIndexPathForMoveSPI:1;
        unsigned int delegateTargetIndexPathForMove:1;
        unsigned int delegateCanFocusItemAtIndexPath_deprecated:1;
        unsigned int delegateDidFocusItemAtIndexPath_deprecated:1;
        unsigned int delegateCanFocusItemAtIndexPath:1;
        unsigned int delegateDidFocusItemAtIndexPath:1;
        unsigned int delegateDidUnfocusItemAtIndexPath:1;
        unsigned int delegateShouldChangeFocusedItem:1;
        unsigned int delegateIndexPathForPreferredFocusedItem:1;
        unsigned int delegateShouldUpdateFocusFromRowAtIndexPathToView:1;
        unsigned int delegateIndexPathForPreferredFocusedView:1;
        unsigned int delegateShouldUpdateFocusInContext:1;
        unsigned int delegateDidUpdateFocusInContext:1;
        unsigned int delegateTemplateLayoutCell:1;
        unsigned int delegateWillLayoutCellUsingTemplateLayoutCell:1;
        unsigned int delegateWasNonNil:1;
        unsigned int dataSourceNumberOfSections:1;
        unsigned int dataSourceViewForSupplementaryElement:1;
        unsigned int dataSourceCanMoveItemAtIndexPathSPI:1;
        unsigned int dataSourceMoveItemAtIndexPathSPI:1;
        unsigned int dataSourceCanMoveItemAtIndexPath:1;
        unsigned int dataSourceMoveItemAtIndexPath:1;
        unsigned int dataSourceWasNonNil:1;
        unsigned int dataSourceWillRequestCellForItemAtIndexPath:1;
        unsigned int reloadSkippedDuringSuspension:1;
        unsigned int scheduledUpdateVisibleCells:1;
        unsigned int scheduledUpdateVisibleCellLayoutAttributes:1;
        unsigned int allowsSelection:1;
        unsigned int allowsMultipleSelection:1;
        unsigned int fadeCellsForBoundsChange:1;
        unsigned int updatingLayout:1;
        unsigned int needsReload:1;
        unsigned int reloading:1;
        unsigned int skipLayoutDuringSnapshotting:1;
        unsigned int layoutInvalidatedSinceLastCellUpdate:1;
        unsigned int doneFirstLayout:1;
        unsigned int loadingOffscreenViews:1;
        unsigned int updating:1;
        unsigned int updatingVisibleCells:1;
        unsigned int preRotationBoundsSet:1;
        unsigned int updateFocusAfterItemAnimations:1;
        unsigned int remembersLastFocusedIndexPath:1;
        unsigned int updateFocusAfterLoadingCells:1;
        unsigned int performingLayout:1;
        unsigned int keepsFirstResponderVisibleOnBoundsChange:1;
        unsigned int inCreateTemplateCell:1;
    } _collectionViewFlags;
    struct CGPoint _lastLayoutOffset;
    long long _prefetchMode;
    NSMutableDictionary *_prefetchCacheItems;
    NSMutableArray *_prefetchCandidateItems;
    struct CGRect _previousVisibleBounds;
    struct CGVector _previousPrefetchUnitVector;
    CDUnknownBlockType _navigationCompletion;
    UIFocusContainerGuide *_endOfContentFocusContainerGuide;
    UICollectionViewCell *_currentPromiseFulfillmentCell;
    NSIndexPath *_focusedCellIndexPath;
    UICollectionReusableView *_focusedCell;
    NSString *_focusedCellElementKind;
}

@property (nonatomic) BOOL allowsMultipleSelection;
@property (nonatomic) BOOL allowsSelection;
@property (strong, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (readonly, nonatomic, getter=_collectionViewData) UICollectionViewData *collectionViewData;
@property (strong, nonatomic) UICollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_layout;
@property (strong, nonatomic, getter=_currentPromiseFulfillmentCell, setter=_setCurrentPromiseFulfillmentCell:) UICollectionViewCell *currentPromiseFulfillmentCell; // @synthesize currentPromiseFulfillmentCell=_currentPromiseFulfillmentCell;
@property (strong, nonatomic, getter=_currentTouch, setter=_setCurrentTouch:) UITouch *currentTouch; // @synthesize currentTouch=_currentTouch;
@property (readonly, nonatomic, getter=_currentUpdate) UICollectionViewUpdate *currentUpdate;
@property (weak, nonatomic) id<UICollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, nonatomic, getter=_dataSourceSupportsReordering) BOOL dataSourceSupportsReordering;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UICollectionViewDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_endOfContentFocusContainerGuide) UIFocusContainerGuide *endOfContentFocusContainerGuide; // @synthesize endOfContentFocusContainerGuide=_endOfContentFocusContainerGuide;
@property (strong, nonatomic, getter=_focusedCell, setter=_setFocusedCell:) UICollectionReusableView *focusedCell; // @synthesize focusedCell=_focusedCell;
@property (copy, nonatomic, getter=_focusedCellElementKind, setter=_setFocusedCellElementKind:) NSString *focusedCellElementKind; // @synthesize focusedCellElementKind=_focusedCellElementKind;
@property (copy, nonatomic, getter=_focusedCellIndexPath, setter=_setFocusedCellIndexPath:) NSIndexPath *focusedCellIndexPath; // @synthesize focusedCellIndexPath=_focusedCellIndexPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=_keepsFirstResponderVisibleOnBoundsChange, setter=_setKeepsFirstResponderVisibleOnBoundsChange:) BOOL keepsFirstResponderVisibleOnBoundsChange;
@property (copy, nonatomic, getter=_navigationCompletion, setter=_setNavigationCompletion:) CDUnknownBlockType navigationCompletion; // @synthesize navigationCompletion=_navigationCompletion;
@property (nonatomic) BOOL remembersLastFocusedIndexPath;
@property (readonly, nonatomic, getter=_reorderedItems) NSArray *reorderedItems;
@property (readonly, nonatomic, getter=_reorderingTargetPosition) struct CGPoint reorderingTargetPosition;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_visibleViews) NSArray *visibleViews;

+ (id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;
- (void).cxx_destruct;
- (void)_addControlledSubview:(id)arg1 atZIndex:(long long)arg2;
- (void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2;
- (void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2 andSet:(id)arg3;
- (void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(BOOL)arg2 lastAdjustment:(double *)arg3;
- (void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2;
- (id)_arrayForUpdateAction:(int)arg1;
- (void)_autoscrollForReordering:(id)arg1;
- (BOOL)_beginReorderingItemAtIndexPath:(id)arg1;
- (void)_beginUpdates;
- (BOOL)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (void)_cancelInteractiveTransitionWithFinalAnimation:(BOOL)arg1;
- (void)_cancelReordering;
- (void)_cancelTouches;
- (void)_cellBecameFocused:(id)arg1;
- (BOOL)_cellCanBecomeFocused:(id)arg1;
- (void)_cellDidBecomeFocused:(id)arg1;
- (void)_cellDidBecomeUnfocused:(id)arg1;
- (void)_cellMenuDismissed;
- (long long)_cellPrefetchMode;
- (void)_checkForPreferredAttributesInView:(id)arg1 originalAttributes:(id)arg2;
- (id)_childFocusRegionsInRect:(struct CGRect)arg1;
- (void)_cleanUpAfterInteractiveTransitionDidFinish:(BOOL)arg1;
- (id)_contentFocusContainerGuide;
- (struct CGPoint)_contentOffsetForNewFrame:(struct CGRect)arg1 oldFrame:(struct CGRect)arg2 newContentSize:(struct CGSize)arg3 andOldContentSize:(struct CGSize)arg4;
- (id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(BOOL)arg3;
- (id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(BOOL)arg3 isFocused:(BOOL)arg4;
- (id)_createPreparedSupplementaryViewForElementOfKind:(id)arg1 atIndexPath:(id)arg2 withLayoutAttributes:(id)arg3 applyAttributes:(BOOL)arg4;
- (id)_createTemplateLayoutCellForCellsWithIdentifier:(id)arg1;
- (BOOL)_dataSourceImplementsNumberOfSections;
- (id)_delegatePreferredIndexPath;
- (struct CGPoint)_delegateTargetOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (id)_dequeueReusableViewOfKind:(id)arg1 withIdentifier:(id)arg2 forIndexPath:(id)arg3 viewCategory:(unsigned long long)arg4;
- (void)_deselectAllAnimated:(BOOL)arg1 notifyDelegate:(BOOL)arg2;
- (void)_deselectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_doubleSidedAnimationsForView:(id)arg1 withStartingLayoutAttributes:(id)arg2 startingLayout:(id)arg3 endingLayoutAttributes:(id)arg4 endingLayout:(id)arg5 withAnimationSetup:(CDUnknownBlockType)arg6 animationCompletion:(CDUnknownBlockType)arg7 enableCustomAnimations:(BOOL)arg8 customAnimationsType:(unsigned long long)arg9;
- (id)_dynamicAnimationsForTrackValues;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1 tentativelyForReordering:(BOOL)arg2;
- (void)_endReordering;
- (void)_endUpdatesWithInvalidationContext:(id)arg1 tentativelyForReordering:(BOOL)arg2;
- (void)_ensureViewsAreLoadedInRect:(struct CGRect)arg1;
- (void)_finishInteractiveTransitionShouldFinish:(BOOL)arg1 finalAnimation:(BOOL)arg2;
- (void)_finishInteractiveTransitionWithFinalAnimation:(BOOL)arg1;
- (void)_focusedView:(id)arg1 isMinX:(BOOL *)arg2 isMaxX:(BOOL *)arg3 isMinY:(BOOL *)arg4 isMaxY:(BOOL *)arg5;
- (id)_fulfillPromisedFocusRegionForCell:(id)arg1;
- (void)_getOriginalReorderingIndexPaths:(id *)arg1 targetIndexPaths:(id *)arg2;
- (BOOL)_hasFocusedCellForIndexPath:(id)arg1 shouldUsePreUpdateData:(BOOL)arg2;
- (void)_highlightFirstVisibleItemIfAppropriate;
- (BOOL)_highlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3;
- (BOOL)_highlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 notifyDelegate:(BOOL)arg4;
- (id)_indexPathForView:(id)arg1 ofType:(unsigned long long)arg2;
- (BOOL)_indexPathIsValid:(id)arg1;
- (id)_indexPathsForVisibleDecorationViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(BOOL)arg2;
- (void)_invalidateLayoutIfNecessary;
- (void)_invalidateLayoutWithContext:(id)arg1;
- (void)_invalidateWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)_itemIndexPathIsReordered:(id)arg1;
- (id)_keysForObject:(id)arg1 inDictionary:(id)arg2;
- (id)_managedSubviewForView:(id)arg1;
- (id)_objectInDictionary:(id)arg1 forKind:(id)arg2 indexPath:(id)arg3;
- (void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (void)_performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 invalidationContext:(id)arg3;
- (void)_performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 invalidationContext:(id)arg3 tentativelyForReordering:(BOOL)arg4;
- (id)_pivotForTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (id)_preReorderingIndexPathForLayoutIndexPath:(id)arg1;
- (unsigned long long)_prefetchItemsForVelocity:(struct CGVector)arg1 maxItemsToPrefetch:(unsigned long long)arg2;
- (void)_prepareLayoutForUpdates;
- (void)_prepareViewForUse:(id)arg1 withElementCategory:(unsigned long long)arg2 elementKind:(id)arg3 reuseIdentifier:(id)arg4 indexPath:(id)arg5;
- (void)_prepareViewForUse:(id)arg1 withElementCategory:(unsigned long long)arg2 elementKind:(id)arg3 reuseIdentifier:(id)arg4 indexPath:(id)arg5 applyDefaultAttributes:(BOOL)arg6;
- (void)_reloadDataIfNeeded;
- (BOOL)_remembersPreviouslyFocusedItem;
- (id)_reorderedItemForView:(id)arg1;
- (void)_resetPrefetchState;
- (void)_resumeReloads;
- (void)_reuseCell:(id)arg1;
- (void)_reusePreviouslyFocusedManagedSubviewIfNeeded:(id)arg1;
- (id)_reuseQueueForViewWithElementCategory:(unsigned long long)arg1 elementKind:(id)arg2 reuseIdentifier:(id)arg3;
- (void)_reuseSupplementaryView:(id)arg1;
- (void)_scrollFirstResponderCellToVisible:(BOOL)arg1;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)_scrollViewWillEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2;
- (void)_selectAllSelectedItems;
- (void)_selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 notifyDelegate:(BOOL)arg4;
- (id)_selectableIndexPathForItemContainingHitView:(id)arg1;
- (void)_setCellPrefetchMode:(long long)arg1;
- (void)_setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 isInteractive:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfCellWithReuseIdentifier:(id)arg2;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)_setIsAncestorOfFirstResponder:(BOOL)arg1;
- (void)_setNeedsVisibleCellsUpdate:(BOOL)arg1 withLayoutAttributes:(BOOL)arg2;
- (void)_setObject:(id)arg1 inDictionary:(id)arg2 forKind:(id)arg3 indexPath:(id)arg4;
- (void)_setRemembersPreviouslyFocusedItem:(BOOL)arg1;
- (void)_setVisibleView:(id)arg1 forLayoutAttributes:(id)arg2;
- (void)_setupCellAnimations;
- (BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (BOOL)_shouldShowMenuForCell:(id)arg1;
- (BOOL)_shouldUpdateFocusInContext:(id)arg1;
- (void)_stopAutoscrollTimer;
- (void)_suspendReloads;
- (id)_templateLayoutCellForCellsWithReuseIdentifier:(id)arg1;
- (void)_trackLayoutValue:(double)arg1 forKey:(id)arg2;
- (double)_trackedLayoutValueForKey:(id)arg1;
- (void)_unhighlightAllItems;
- (void)_unhighlightAllItemsAndHighlightGlobalItem:(long long)arg1;
- (void)_unhighlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)_unhighlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)_updateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateBackgroundView;
- (void)_updateContentFocusContainerGuides;
- (void)_updateFocusedCellIndexPathIfNecessaryWithLastFocusedRect:(struct CGRect)arg1;
- (void)_updateReorderingTargetPosition:(struct CGPoint)arg1;
- (void)_updateReorderingTargetPosition:(struct CGPoint)arg1 forced:(BOOL)arg2;
- (void)_updateRowsAtIndexPaths:(id)arg1 updateAction:(int)arg2;
- (void)_updateSections:(id)arg1 updateAction:(int)arg2;
- (void)_updateTrackedLayoutValuesWith:(id)arg1;
- (void)_updateTransitionWithProgress:(double)arg1;
- (unsigned long long)_updateVisibleCellsNow:(BOOL)arg1;
- (void)_updateWithItems:(id)arg1 tentativelyForReordering:(BOOL)arg2;
- (void)_userSelectItemAtIndexPath:(id)arg1;
- (id)_viewAnimationsForCurrentUpdate;
- (id)_viewControllerToNotifyOnLayoutSubviews;
- (BOOL)_viewIsReorderedCell:(id)arg1;
- (BOOL)_visible;
- (struct CGRect)_visibleBounds;
- (id)_visibleCellForIndexPath:(id)arg1;
- (id)_visibleDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleDecorationViewsOfKind:(id)arg1;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 isDecorationView:(BOOL)arg3;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(BOOL)arg2;
- (id)_visibleViewDictForElementCategory:(unsigned long long)arg1 elementKind:(id)arg2;
- (id)_visibleViewForLayoutAttributes:(id)arg1;
- (BOOL)beginInteractiveMovementForItemAtIndexPath:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canBecomeFocused;
- (void)cancelInteractiveMovement;
- (void)cancelInteractiveTransition;
- (id)cellForItemAtIndexPath:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)deleteSections:(id)arg1;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)didMoveToWindow;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endInteractiveMovement;
- (void)finishInteractiveTransition;
- (long long)highlightedGlobalItem;
- (id)indexPathForCell:(id)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)indexPathForSupplementaryView:(id)arg1;
- (id)indexPathsForSelectedItems;
- (id)indexPathsForVisibleItems;
- (id)indexPathsForVisibleSupplementaryElementsOfKind:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)insertSections:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)layoutSubviews;
- (long long)maximumGlobalItemIndex;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)preferredFocusedItem;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerNib:(id)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)reloadData;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)reloadSections:(id)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3;
- (void)setBounds:(struct CGRect)arg1;
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2;
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)startInteractiveTransitionToCollectionViewLayout:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)supplementaryViewForElementKind:(id)arg1 atIndexPath:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateInteractiveMovementTargetPosition:(struct CGPoint)arg1;
- (id)visibleCells;
- (id)visibleSupplementaryViewsOfKind:(id)arg1;

@end

