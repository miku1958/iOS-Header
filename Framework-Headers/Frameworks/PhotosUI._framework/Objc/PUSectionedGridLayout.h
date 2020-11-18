//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

#import <PhotosUI/PUCollectionViewLayoutDelegating-Protocol.h>
#import <PhotosUI/PUGridLayoutProtocol-Protocol.h>
#import <PhotosUI/PUPhotosGridTransitioningLayout-Protocol.h>
#import <PhotosUI/PUReorderableLayout-Protocol.h>

@class NSArray, NSDictionary, NSIndexPath, NSIndexSet, NSPointerArray, NSSet, NSString, PULayoutAnimationsHelper, PULayoutSampledSectioning, PUSectionedGridLayoutInvalidationContext, UICollectionViewLayoutAttributes;
@protocol PUCollectionViewLayoutTransitioningDelegate, PUSectionedGridLayoutDelegate;

@interface PUSectionedGridLayout : UICollectionViewLayout <PUReorderableLayout, PUPhotosGridTransitioningLayout, PUCollectionViewLayoutDelegating, PUGridLayoutProtocol>
{
    BOOL _layoutDataIsValid;
    BOOL _sectioningDataIsValid;
    BOOL _samplingDataIsValid;
    struct CGSize _contentSize;
    UICollectionViewLayoutAttributes *_globalHeaderAttributes;
    UICollectionViewLayoutAttributes *_globalFooterAttributes;
    NSSet *_supplementaryViewKinds;
    long long _totalRealSections;
    long long _totalVisualSections;
    NSPointerArray *_realToVisualSections;
    NSArray *_visualToRealSectionIndexes;
    NSPointerArray *_samplingHelpersByVisualSection;
    double *_visualSectionStartYs;
    long long *_realSectionItemCounts;
    long long *_visualSectionMaxRows;
    NSArray *_cachedNonHeaderLayoutAttributesInRect;
    struct CGRect _cachedLayoutAttributesLastKnownRect;
    NSIndexSet *_deletedSections;
    NSSet *_deletedItemIndexPaths;
    BOOL _processingCollectionViewUpdates;
    NSIndexPath *_viewSizeTransitionAnchorItem;
    double _viewSizeTransitionAnchorItemNormalizedYOffset;
    BOOL _floatingHeadersLayoutIsValid;
    BOOL _hasFloatingHeaders;
    long long _floatingHeaderVisualSectionIndex;
    PUSectionedGridLayoutInvalidationContext *_cachedFloatingHeaderInvalidationContext;
    long long _cachedFloatingHeaderInvalidationContextNewVisualSection;
    NSDictionary *_transitionSectionInfosByTransitionSection;
    NSDictionary *_transitionSectionInfosByVisualSection;
    BOOL _delegateSupportsGroupedSections;
    BOOL _delegateSupportsAnchorItemForContentOffset;
    BOOL _delegateSupportsTargetContentOffset;
    BOOL _delegateSupportsTransitionAutoContentOffsetEnabled;
    BOOL _delegateSupportsDidInvalidateWithContext;
    BOOL _delegateSupportsAspectRatioForItemAtIndexPath;
    BOOL _delegateSupportsSectionHeaderHeightForVisualSection;
    BOOL _delegateSupportsWillPrepareLayout;
    BOOL _usesRenderedStrips;
    NSIndexPath *_reorderingSourceIndexPath;
    NSIndexPath *_reorderingTargetIndexPath;
    NSIndexPath *_reorderingInsertedIndexPath;
    struct CGPoint _transitionEffectiveContentOrigin;
    BOOL _transitionApplyingEffectiveContentOrigin;
    PULayoutAnimationsHelper *_transitionAnimationsHelper;
    CDUnknownBlockType _transitionAnimationEndCleanupBlock;
    BOOL _sectionHeadersEnabled;
    BOOL _transitionIsAppearing;
    BOOL _transitionIsAnimated;
    BOOL _transitionAnchorShiftsColumns;
    BOOL _transitionZoomingOut;
    BOOL _floatingSectionHeadersEnabled;
    BOOL _usesRenderedStripTopExtendersForTransitions;
    BOOL _usesAspectItems;
    NSSet *_hiddenItemIndexPaths;
    NSString *_sectionHeaderElementKind;
    double _sectionHeaderHeight;
    double _sectionTopPadding;
    id<PUCollectionViewLayoutTransitioningDelegate> _transitioningDelegate;
    double _globalTopPadding;
    double _globalBottomPadding;
    UICollectionViewLayout *_transitionLayout;
    long long _transitionAnchorColumnOffset;
    NSIndexPath *_transitionExplicitAnchorItemIndexPath;
    NSIndexPath *_transitionFirstVisibleRowVisualPath;
    NSIndexPath *_transitionLastVisibleRowVisualPath;
    id<PUSectionedGridLayoutDelegate> _delegate;
    long long _columnsPerRow;
    PULayoutSampledSectioning *_layoutSectioning;
    double _sectionBottomPadding;
    double _globalHeaderHeight;
    double _globalFooterHeight;
    NSString *_renderedStripsElementKind;
    long long _cropType;
    double _cropAmount;
    struct CGPoint _transitionStartContentOffset;
    struct CGPoint _transitionEndContentOffset;
    struct CGSize _interItemSpacing;
    struct CGSize _itemSize;
    struct UIEdgeInsets _sectionContentInset;
}

@property (nonatomic, setter=_setColumnsPerRow:) long long columnsPerRow; // @synthesize columnsPerRow=_columnsPerRow;
@property (nonatomic) double cropAmount; // @synthesize cropAmount=_cropAmount;
@property (nonatomic) long long cropType; // @synthesize cropType=_cropType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUSectionedGridLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL floatingSectionHeadersEnabled; // @synthesize floatingSectionHeadersEnabled=_floatingSectionHeadersEnabled;
@property (nonatomic) double globalBottomPadding; // @synthesize globalBottomPadding=_globalBottomPadding;
@property (nonatomic) double globalFooterHeight; // @synthesize globalFooterHeight=_globalFooterHeight;
@property (readonly, nonatomic) NSIndexPath *globalFooterIndexPath;
@property (readonly, nonatomic) UICollectionViewLayoutAttributes *globalHeaderAttributes; // @synthesize globalHeaderAttributes=_globalHeaderAttributes;
@property (nonatomic) double globalHeaderHeight; // @synthesize globalHeaderHeight=_globalHeaderHeight;
@property (readonly, nonatomic) NSIndexPath *globalHeaderIndexPath;
@property (nonatomic) double globalTopPadding; // @synthesize globalTopPadding=_globalTopPadding;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSSet *hiddenItemIndexPaths; // @synthesize hiddenItemIndexPaths=_hiddenItemIndexPaths;
@property (nonatomic) struct CGSize interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property (nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property (readonly, nonatomic) long long itemsPerRow;
@property (readonly, nonatomic) PULayoutSampledSectioning *layoutSectioning; // @synthesize layoutSectioning=_layoutSectioning;
@property (readonly, nonatomic) long long numberOfVisualSections;
@property (copy, nonatomic) NSString *renderedStripsElementKind; // @synthesize renderedStripsElementKind=_renderedStripsElementKind;
@property (nonatomic) double sectionBottomPadding; // @synthesize sectionBottomPadding=_sectionBottomPadding;
@property (nonatomic) struct UIEdgeInsets sectionContentInset; // @synthesize sectionContentInset=_sectionContentInset;
@property (copy, nonatomic) NSString *sectionHeaderElementKind; // @synthesize sectionHeaderElementKind=_sectionHeaderElementKind;
@property (nonatomic) double sectionHeaderHeight; // @synthesize sectionHeaderHeight=_sectionHeaderHeight;
@property (nonatomic) BOOL sectionHeadersEnabled; // @synthesize sectionHeadersEnabled=_sectionHeadersEnabled;
@property (nonatomic) double sectionTopPadding; // @synthesize sectionTopPadding=_sectionTopPadding;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct CGSize transitionActualContentSize;
@property (readonly, nonatomic) long long transitionAnchorColumnOffset; // @synthesize transitionAnchorColumnOffset=_transitionAnchorColumnOffset;
@property (nonatomic) BOOL transitionAnchorShiftsColumns; // @synthesize transitionAnchorShiftsColumns=_transitionAnchorShiftsColumns;
@property (nonatomic) struct CGPoint transitionEffectiveContentOrigin; // @synthesize transitionEffectiveContentOrigin=_transitionEffectiveContentOrigin;
@property (readonly, nonatomic) struct CGPoint transitionEndContentOffset; // @synthesize transitionEndContentOffset=_transitionEndContentOffset;
@property (copy, nonatomic) NSIndexPath *transitionExplicitAnchorItemIndexPath; // @synthesize transitionExplicitAnchorItemIndexPath=_transitionExplicitAnchorItemIndexPath;
@property (readonly, copy, nonatomic) NSIndexPath *transitionFirstVisibleRowVisualPath; // @synthesize transitionFirstVisibleRowVisualPath=_transitionFirstVisibleRowVisualPath;
@property (nonatomic) BOOL transitionIsAnimated; // @synthesize transitionIsAnimated=_transitionIsAnimated;
@property (readonly, nonatomic) BOOL transitionIsAppearing; // @synthesize transitionIsAppearing=_transitionIsAppearing;
@property (readonly, copy, nonatomic) NSIndexPath *transitionLastVisibleRowVisualPath; // @synthesize transitionLastVisibleRowVisualPath=_transitionLastVisibleRowVisualPath;
@property (readonly, nonatomic) UICollectionViewLayout *transitionLayout; // @synthesize transitionLayout=_transitionLayout;
@property (nonatomic) struct CGPoint transitionStartContentOffset; // @synthesize transitionStartContentOffset=_transitionStartContentOffset;
@property (nonatomic) BOOL transitionZoomingOut; // @synthesize transitionZoomingOut=_transitionZoomingOut;
@property (weak, nonatomic) id<PUCollectionViewLayoutTransitioningDelegate> transitioningDelegate; // @synthesize transitioningDelegate=_transitioningDelegate;
@property (nonatomic) BOOL usesAspectItems; // @synthesize usesAspectItems=_usesAspectItems;
@property (nonatomic) BOOL usesRenderedStripTopExtendersForTransitions; // @synthesize usesRenderedStripTopExtendersForTransitions=_usesRenderedStripTopExtendersForTransitions;

+ (Class)invalidationContextClass;
- (void).cxx_destruct;
- (void)_adjustGridTransitionLayoutAttributes:(id)arg1 toOrFromGridLayout:(id)arg2 outTargetRowExists:(BOOL *)arg3 isAppearing:(BOOL)arg4;
- (void)_adjustItemLayoutAttributesForReordering:(id)arg1;
- (void)_adjustRenderedStripLayoutAttributes:(id)arg1 toOrFromGridLayout:(id)arg2 isAppearing:(BOOL)arg3;
- (void)_adjustSectionHeaderLayoutAttributes:(id)arg1 toOrFromGridLayout:(id)arg2 isAppearing:(BOOL)arg3;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (void)_clearLayoutCaches;
- (void)_clearRetainedCaches;
- (void)_clearSamplingCaches;
- (void)_clearSectioningCaches;
- (struct CGPoint)_currentVisibleRectOrigin;
- (void)_didFinishLayoutTransitionAnimations:(BOOL)arg1;
- (void)_enumerateVisualItemFramesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (double)_finalSectionHeaderHeightForSection:(long long)arg1;
- (long long)_firstVisualItemIndexForRenderedStripIndex:(long long)arg1;
- (long long)_floatingHeaderVisualSectionForVisibleOrigin:(struct CGPoint)arg1;
- (struct CGRect)_frameByAdjustingOffScreenEnteringFrame:(struct CGRect)arg1 forRowAtVisualIndexPath:(struct PUSimpleIndexPath)arg2 transitionSectionInfo:(id)arg3 toOrFromGridLayout:(id)arg4 isAppearing:(BOOL)arg5;
- (id)_gridTransitionLayout;
- (double)_heightOfSectionAtVisualIndex:(long long)arg1;
- (void)_invalidateFloatingHeadersLayout;
- (void)_invalidateLayoutWithContext:(id)arg1;
- (void)_invalidateSupplementaryViewKinds;
- (BOOL)_isSupportedSupplementaryViewKind:(id)arg1;
- (BOOL)_isTransitionForeignSupplementaryViewKind:(id)arg1;
- (struct PUSimpleIndexPath)_itemVisualIndexPathAtPoint:(struct CGPoint)arg1;
- (id)_layoutAttributesForItemAtVisualIndexPath:(struct PUSimpleIndexPath)arg1 realIndexPath:(id)arg2 isMainRealItem:(BOOL)arg3;
- (id)_layoutAttributesForSupplementaryViewOfKind:(id)arg1 forVisualSection:(long long)arg2 supplementaryViewIndex:(long long)arg3;
- (void)_prepareFloatingHeadersLayoutIfNeeded;
- (void)_prepareForTransitionFromStackedLayout:(id)arg1;
- (void)_prepareForTransitionToOrFromGridLayout:(id)arg1 isAppearing:(BOOL)arg2;
- (void)_prepareLayoutIfNeeded;
- (void)_prepareSamplingDataIfNeeded;
- (void)_prepareSectioningDataIfNeeded;
- (id)_realItemIndexPathClosestToPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 withTest:(CDUnknownBlockType)arg3;
- (long long)_renderedStripIndexForSectionRowIndex:(long long)arg1;
- (double)_sectionWidth;
- (double)_startYOfContentAtVisualSectionIndex:(long long)arg1;
- (double)_startYOfVisualSectionAtIndex:(long long)arg1;
- (id)_supplementaryViewKinds;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (struct CGPoint)_targetContentOffsetWithAnchorItemIndexPath:(id)arg1 isRotation:(BOOL)arg2 orTransitionFromLayout:(id)arg3 keepAnchorStable:(BOOL)arg4;
- (struct PUGridCoordinates)_targetTransitionGridCoordsForGridCoords:(struct PUGridCoordinates)arg1 atVisualSection:(long long)arg2 transitionSectionInfo:(id)arg3;
- (struct CATransform3D)_transformToConvertRect:(struct CGRect)arg1 intoRect:(struct CGRect)arg2 referenceCenter:(struct CGPoint)arg3;
- (void)_updateHasFloatingHeaders;
- (struct CGPoint)_visibleRectOriginForScrollOffset:(struct CGPoint)arg1;
- (struct PUSimpleIndexPath)_visualIndexPathForTransitionCoordinates:(struct PUGridCoordinates)arg1 inTransitionSection:(long long)arg2;
- (struct PUSimpleIndexPath)_visualRowPathForTransitionRowIndex:(long long)arg1 transitionSectionInfo:(id)arg2;
- (long long)_visualSectionAtPoint:(struct CGPoint)arg1;
- (BOOL)_visualSectionsMatchTransitionSectionsToOrFromLayout:(id)arg1;
- (void)adjustEffectiveContentOriginForTransitionEndContentOffset:(struct CGPoint)arg1;
- (id)assetIndexPathsForElementsInRect:(struct CGRect)arg1;
- (void)beginInsertingItemAtIndexPath:(id)arg1;
- (void)beginReorderingItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)dealloc;
- (void)endInsertingItem;
- (void)endReordering;
- (void)enumerateItemIndexPathsForVisualSection:(long long)arg1 inVisualItemRange:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateRealSectionsForVisualSection:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeCollectionViewUpdates;
- (void)finalizeLayoutTransition;
- (void)finalizeViewTransitionToSize;
- (struct CGRect)frameForItemAtGridCoordinates:(struct PUGridCoordinates)arg1 inTransitionSection:(long long)arg2;
- (struct CGRect)frameForItemAtGridCoordinates:(struct PUGridCoordinates)arg1 inVisualSection:(long long)arg2;
- (struct CGRect)frameForItemAtGridCoordinates:(struct PUGridCoordinates)arg1 inVisualSection:(long long)arg2 indexPath:(id)arg3;
- (struct CGRect)frameForSectionHeaderAtVisualSection:(long long)arg1;
- (struct CGRect)frameForSectionHeaderOfRealItem:(id)arg1;
- (void)getVisualSectionIndex:(long long *)arg1 visualItemRange:(struct _NSRange *)arg2 forRenderStripAtIndexPath:(id)arg3;
- (struct PUGridCoordinates)gridCoordinatesInSectionForItemAtVisualIndex:(long long)arg1;
- (struct PUGridCoordinates)gridCoordinatesInTransitionSectionForItemAtIndexPath:(id)arg1;
- (struct PUGridCoordinates)gridCoordinatesInVisualSectionForItemAtIndexPath:(id)arg1;
- (BOOL)hasItemAtGridCoordinates:(struct PUGridCoordinates)arg1 inTransitionSection:(long long)arg2;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)invalidateLayoutForMetricsChange;
- (void)invalidateLayoutForVerticalScroll;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (id)itemIndexPathAtCenterOfRect:(struct CGRect)arg1;
- (id)itemIndexPathAtPoint:(struct CGPoint)arg1;
- (id)itemIndexPathClosestToPoint:(struct CGPoint)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize)layoutItemSizeForColumn:(long long)arg1;
- (id)mainRealIndexPathAtGridCoordinates:(struct PUGridCoordinates)arg1 inTransitionSection:(long long)arg2;
- (long long)mainRealSectionForVisualSection:(long long)arg1;
- (id)maxItemIndexPathAbovePoint:(struct CGPoint)arg1;
- (id)maxItemIndexPathLeftOfPoint:(struct CGPoint)arg1;
- (long long)maximumNumberOfItemsInVisualSection:(long long)arg1 withNumberOfRealItems:(long long)arg2 forSectioning:(id)arg3;
- (long long)numberOfColumnsForWidth:(double)arg1;
- (long long)numberOfContiguousRowsInTransitionSection:(long long)arg1;
- (long long)numberOfItemsInRealSection:(long long)arg1 forSectioning:(id)arg2;
- (long long)numberOfRealItemsInRealSection:(long long)arg1;
- (long long)numberOfRealItemsInVisualSection:(long long)arg1;
- (long long)numberOfRealSections;
- (long long)numberOfRealSectionsForSectioning:(id)arg1;
- (long long)numberOfRowsInVisualSection:(long long)arg1;
- (long long)numberOfVisualItemsInVisualSection:(long long)arg1;
- (long long)numberOfVisualSectionsForSectioning:(id)arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (id)prepareForViewTransitionToSize:(struct CGSize)arg1;
- (void)prepareLayout;
- (id)pu_debugRows;
- (id)pu_layoutAttributesForElementClosestToPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)realSectionsForVisualSection:(long long)arg1 forSectioning:(id)arg2;
- (id)reorderedIndexPath:(id)arg1;
- (BOOL)shouldHideVisualSection:(long long)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)supplementaryViewIndexPathForVisualSection:(long long)arg1 supplementaryViewItemIndex:(long long)arg2;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForTransitionFromGridLayout:(id)arg1;
- (struct CGPoint)targetContentOffsetForViewSizeTransitionContext:(id)arg1;
- (struct PUGridCoordinates)targetTransitionGridCoordsForGridCoords:(struct PUGridCoordinates)arg1 atVisualSection:(long long)arg2 outTransitionSection:(long long *)arg3;
- (id)targetTransitionRealIndexPathForIndexPath:(id)arg1;
- (id)transitionAnchorIndexPathForTransitionSection:(long long)arg1;
- (id)transitionSectionsInRect:(struct CGRect)arg1 toOrFromGridLayout:(id)arg2;
- (void)updateReorderingTargetIndexPath:(id)arg1;
- (struct PUGridCoordinates)visualGridCoordsForTransitionGridCoords:(struct PUGridCoordinates)arg1 atTransitionSection:(long long)arg2 outVisualSection:(long long *)arg3;
- (long long)visualIndexForItemAtGridCoordinates:(struct PUGridCoordinates)arg1;
- (struct _NSRange)visualRowsInRect:(struct CGRect)arg1 inVisualSection:(long long)arg2 totalVisualSectionRows:(long long *)arg3;
- (long long)visualSectionForHeaderIndexPath:(id)arg1;
- (long long)visualSectionForRealSection:(long long)arg1;
- (long long)visualSectionForSupplementaryViewIndexPath:(id)arg1;
- (struct _NSRange)visualSectionsInRect:(struct CGRect)arg1;

@end

