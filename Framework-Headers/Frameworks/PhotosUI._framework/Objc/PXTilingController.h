//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXTilingLayoutObserver-Protocol.h>

@class NSArray, NSMutableArray, NSMutableIndexSet, NSString, PXTileStatePool, PXTilingChange, PXTilingControllerDebugInfo, PXTilingCoordinateSpace, PXTilingCoordinateSpaceConverter, PXTilingLayout, PXTilingScrollInfo;
@protocol PXTileAnimator, PXTileSource, PXTilingControllerObserver, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXTilingDebugDelegate, PXTilingScrollController;

@interface PXTilingController : NSObject <PXTilingLayoutObserver>
{
    BOOL _isPerformingUpdates;
    BOOL _hasScheduledUpdate;
    struct {
        BOOL scrollControllerMetrics;
        BOOL pagedRect;
        BOOL layoutMetrics;
        BOOL layoutPreferredVisibleOrigin;
        BOOL layoutPosition;
        BOOL layoutVisibleRect;
        BOOL layoutPreparation;
        BOOL tiles;
        BOOL preheating;
        BOOL maxPreheatPadding;
        BOOL scrollInfo;
    } _needsUpdateFlags;
    struct {
        BOOL respondsToInitialVisibleOriginForLayout;
        BOOL respondsToTargetVisibleOriginForLayoutProposedVisibleOrigin;
        BOOL respondsToScrollInfoForLayout;
    } _scrollDelegateFlags;
    struct {
        BOOL respondsToPrepareForChange;
        BOOL respondsToTileIdentifierConverterForChange;
        BOOL respondsToTransitionAnimationCoordinatorForChange;
    } _transitionDelegateFlags;
    BOOL _hasInitializedLayout;
    struct PXTileIdentifier *_identifierBuffer;
    struct PXTileGeometry *_geometryBuffer;
    unsigned long long _bufferCount;
    BOOL _shouldAggressivelyEvictTileCaches;
    PXTilingChange *__currentChange;
    PXTilingLayout *_targetLayout;
    PXTilingLayout *_currentLayout;
    id<PXTilingScrollController> _scrollController;
    id<PXTileSource> _tileSource;
    id<PXTileAnimator> _tileAnimator;
    id<PXTilingControllerScrollDelegate> _scrollDelegate;
    id<PXTilingControllerTransitionDelegate> _transitionDelegate;
    PXTilingCoordinateSpace *__coordinateSpace;
    void *__coordinateSpaceIdentifier;
    PXTilingCoordinateSpaceConverter *__coordinateSpaceConverter;
    PXTilingLayout *__layoutWithInitializedVisibleOrigin;
    PXTilingScrollInfo *__scrollInfo;
    PXTileStatePool *__tileStates;
    NSMutableIndexSet *__dirtyTileIndexes;
    NSMutableArray *__preheatRecords;
    id<PXTilingControllerObserver> _observer;
    NSArray *_compositionInvalidationContexts;
    id<PXTilingDebugDelegate> _debugDelegate;
    struct CGSize __referenceSize;
    struct CGPoint __updatedPreferredVisibleOrigin;
    struct CGPoint __layoutDesiredOrigin;
    struct UIEdgeInsets __contentInset;
    struct CGRect __activeRect;
    struct CGRect __visibleRect;
    struct CGRect __pagedRect;
    struct CGRect __cachedRect;
    struct CGRect __dirtyRect;
    struct UIEdgeInsets __maxPreheatPadding;
}

@property (nonatomic, setter=_setActiveRect:) struct CGRect _activeRect; // @synthesize _activeRect=__activeRect;
@property (nonatomic, setter=_setCachedRect:) struct CGRect _cachedRect; // @synthesize _cachedRect=__cachedRect;
@property (nonatomic, setter=_setContentInset:) struct UIEdgeInsets _contentInset; // @synthesize _contentInset=__contentInset;
@property (readonly, nonatomic) PXTilingCoordinateSpace *_coordinateSpace; // @synthesize _coordinateSpace=__coordinateSpace;
@property (readonly, nonatomic) PXTilingCoordinateSpaceConverter *_coordinateSpaceConverter; // @synthesize _coordinateSpaceConverter=__coordinateSpaceConverter;
@property (readonly, nonatomic) void *_coordinateSpaceIdentifier; // @synthesize _coordinateSpaceIdentifier=__coordinateSpaceIdentifier;
@property (readonly, nonatomic) PXTilingChange *_currentChange; // @synthesize _currentChange=__currentChange;
@property (nonatomic, setter=_setDirtyRect:) struct CGRect _dirtyRect; // @synthesize _dirtyRect=__dirtyRect;
@property (readonly, nonatomic) NSMutableIndexSet *_dirtyTileIndexes; // @synthesize _dirtyTileIndexes=__dirtyTileIndexes;
@property (nonatomic, setter=_setLayoutDesiredOrigin:) struct CGPoint _layoutDesiredOrigin; // @synthesize _layoutDesiredOrigin=__layoutDesiredOrigin;
@property (weak, nonatomic, setter=_setLayoutWithInitializedVisibleOrigin:) PXTilingLayout *_layoutWithInitializedVisibleOrigin; // @synthesize _layoutWithInitializedVisibleOrigin=__layoutWithInitializedVisibleOrigin;
@property (nonatomic, setter=_setMaxPreheatPadding:) struct UIEdgeInsets _maxPreheatPadding; // @synthesize _maxPreheatPadding=__maxPreheatPadding;
@property (nonatomic, setter=_setPagedRect:) struct CGRect _pagedRect; // @synthesize _pagedRect=__pagedRect;
@property (readonly, nonatomic) NSMutableArray *_preheatRecords; // @synthesize _preheatRecords=__preheatRecords;
@property (nonatomic, setter=_setReferenceSize:) struct CGSize _referenceSize; // @synthesize _referenceSize=__referenceSize;
@property (copy, nonatomic, setter=_setScrollInfo:) PXTilingScrollInfo *_scrollInfo; // @synthesize _scrollInfo=__scrollInfo;
@property (readonly, nonatomic) PXTileStatePool *_tileStates; // @synthesize _tileStates=__tileStates;
@property (nonatomic, setter=_setUpdatedPreferredVisibleOrigin:) struct CGPoint _updatedPreferredVisibleOrigin; // @synthesize _updatedPreferredVisibleOrigin=__updatedPreferredVisibleOrigin;
@property (nonatomic, setter=_setVisibleRect:) struct CGRect _visibleRect; // @synthesize _visibleRect=__visibleRect;
@property (copy, nonatomic) NSArray *compositionInvalidationContexts; // @synthesize compositionInvalidationContexts=_compositionInvalidationContexts;
@property (readonly, nonatomic) void *contentCoordinateSpaceIdentifier;
@property (strong, nonatomic, setter=_setCurrentLayout:) PXTilingLayout *currentLayout; // @synthesize currentLayout=_currentLayout;
@property (weak, nonatomic) id<PXTilingDebugDelegate> debugDelegate; // @synthesize debugDelegate=_debugDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXTilingControllerDebugInfo *debugInfo;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGRect layoutContentBounds;
@property (readonly, nonatomic) struct CGPoint layoutOrigin;
@property (readonly, nonatomic) struct CGPoint layoutPreferredOrigin;
@property (readonly, nonatomic) struct CGRect layoutScrollBounds;
@property (weak, nonatomic) id<PXTilingControllerObserver> observer; // @synthesize observer=_observer;
@property (weak, nonatomic) id<PXTilingScrollController> scrollController; // @synthesize scrollController=_scrollController;
@property (weak, nonatomic) id<PXTilingControllerScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property (readonly, nonatomic) PXTilingScrollInfo *scrollInfo;
@property (nonatomic) BOOL shouldAggressivelyEvictTileCaches; // @synthesize shouldAggressivelyEvictTileCaches=_shouldAggressivelyEvictTileCaches;
@property (readonly) Class superclass;
@property (strong, nonatomic, setter=_setTargetLayout:) PXTilingLayout *targetLayout; // @synthesize targetLayout=_targetLayout;
@property (weak, nonatomic) id<PXTileAnimator> tileAnimator; // @synthesize tileAnimator=_tileAnimator;
@property (weak, nonatomic) id<PXTileSource> tileSource; // @synthesize tileSource=_tileSource;
@property (weak, nonatomic) id<PXTilingControllerTransitionDelegate> transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;

- (void).cxx_destruct;
- (id)_currentChangeIfExists;
- (void)_discardCurrentChange;
- (void)_ensureCurrentChange;
- (void)_fillBuffersWithTileStatesAtIndexes:(id)arg1;
- (void)_handleTileAnimationCompletionWithIndex:(unsigned long long)arg1;
- (id)_indexesOfVisibleTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2;
- (void)_invalidateAllCachedRects;
- (void)_invalidateCachesOutsideRect:(struct CGRect)arg1;
- (void)_invalidateLayoutMetrics;
- (void)_invalidateLayoutPosition;
- (void)_invalidateLayoutPreferredVisibleOrigin;
- (void)_invalidateLayoutPreparation;
- (void)_invalidateLayoutVisibleRect;
- (void)_invalidateMaxPreheatPadding;
- (void)_invalidatePagedRect;
- (void)_invalidatePreheating;
- (void)_invalidateRect:(struct CGRect)arg1;
- (void)_invalidateScrollControllerMetrics;
- (void)_invalidateScrollInfo;
- (void)_invalidateTiles;
- (void)_markRectAsCached:(struct CGRect)arg1;
- (BOOL)_needsUpdate;
- (id)_preheatRecordForPreheatHandler:(id)arg1 context:(void *)arg2 createIfNeeded:(BOOL)arg3;
- (void)_prepareBufferForCount:(unsigned long long)arg1;
- (void)_setNeedsUpdate;
- (void)_updateDebugDelegateIfNeeded;
- (void)_updateLayoutMetricsIfNeeded;
- (void)_updateLayoutPositionIfNeeded;
- (void)_updateLayoutPreferredVisibleOriginIfNeeded;
- (void)_updateLayoutPreparationIfNeeded;
- (void)_updateLayoutVisibleRectIfNeeded;
- (void)_updateMaxPreheatPaddingIfNeeded;
- (void)_updatePagedRectIfNeeded;
- (void)_updatePreheatingIfNeeded;
- (void)_updateScrollControllerMetricsIfNeeded;
- (void)_updateScrollInfoIfNeeded;
- (void)_updateTilesIfNeeded;
- (void)beginUpdate;
- (struct CGPoint)convertPointFromLayout:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromLayout:(struct CGRect)arg1;
- (id)convertScrollInfoFromLayout:(id)arg1;
- (void)dealloc;
- (id)debugQuickLookObject;
- (void)endUpdate;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)getTile:(out void **)arg1 geometry:(out struct PXTileGeometry *)arg2 group:(out unsigned long long *)arg3 userData:(out id *)arg4 forTileWithIdentifier:(struct PXTileIdentifier)arg5;
- (struct PXTileIdentifier)hitTestTileAtPoint:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)imageTileWithIdentifier:(struct PXTileIdentifier)arg1;
- (id)init;
- (id)initWithLayout:(id)arg1;
- (void)invalidateLayoutPreferredVisibleOrigin;
- (void)invalidateScrollControllerMetrics;
- (void)registerPreheatHandler:(id)arg1 withPadding:(struct UIEdgeInsets)arg2 tileGroup:(unsigned long long)arg3 context:(void *)arg4;
- (void)requestFocus;
- (void)setLayoutOrigin:(struct CGPoint)arg1;
- (void)setReferenceSize:(struct CGSize)arg1 contentInset:(struct UIEdgeInsets)arg2;
- (struct PXTileIdentifier)tileIdentifierForTile:(void *)arg1;
- (void)tilingLayout:(id)arg1 invalidatedWithContext:(id)arg2;
- (id)titleSubtitleTileWithIdentifier:(struct PXTileIdentifier)arg1;
- (void)transitionToLayout:(id)arg1;
- (void)unregisterPreheatHandler:(id)arg1 context:(void *)arg2;
- (void)updateLayout;
- (void)updateMetrics;

@end
