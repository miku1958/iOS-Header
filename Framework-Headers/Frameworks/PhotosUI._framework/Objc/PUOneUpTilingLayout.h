//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUSectionedTilingLayout.h>

@class NSIndexPath, NSMutableDictionary, PUParallaxComputer;
@protocol PUOneUpTilingLayoutDelegate;

@interface PUOneUpTilingLayout : PUSectionedTilingLayout
{
    struct CGSize _itemSize;
    NSIndexPath *_inFocusIndexPath;
    NSIndexPath *_neighborIndexPath;
    double _transitionProgress;
    struct {
        BOOL respondsToAspectRatioForItemAtIndexPath;
        BOOL respondsToBadgeSizeForItemAtIndexPath;
        BOOL respondsToShouldShowPlayButtonForItemAtIndexPath;
        BOOL respondsToShouldShowProgressIndicatorForItemAtIndexPath;
        BOOL respondsToShouldShowBufferingIndicatorForItemAtIndexPath;
        BOOL respondsToShouldShowLoadingIndicatorForItemAtIndexPath;
        BOOL respondsToModelTileTransformForItemAtIndexPath;
        BOOL respondsToScrollOffsetForItemAtIndexPath;
        BOOL respondsToCanShowCommentsForItemAtIndexPath;
        BOOL respondsToShouldShowCommentsForItemAtIndexPath;
        BOOL respondsToShouldShowVideoPlaceholderForItemAtIndexPath;
        BOOL respondsToDisableInitialZoomToFillForItemAtIndexPath;
    } _delegateFlags;
    NSMutableDictionary *_layoutInfosByIndexPathByTileKind;
    BOOL _useBackgroundTile;
    BOOL _useBadgeTiles;
    BOOL _useCommentsTiles;
    BOOL _useUserTransformTiles;
    BOOL _shouldPinContentToTop;
    id<PUOneUpTilingLayoutDelegate> _delegate;
    double _tileContentMaximumInitialZoomToFillScale;
    PUParallaxComputer *_parallaxComputer;
    struct CGSize _interpageSpacing;
    struct CGSize _playButtonSize;
    struct CGSize _progressIndicatorSize;
    struct CGSize _bufferingIndicatorSize;
    struct CGSize _loadingIndicatorSize;
    struct CGSize _displaySizeForInsetMatching;
    struct UIEdgeInsets _contentGuideInsets;
}

@property (nonatomic) struct CGSize bufferingIndicatorSize; // @synthesize bufferingIndicatorSize=_bufferingIndicatorSize;
@property (nonatomic) struct UIEdgeInsets contentGuideInsets; // @synthesize contentGuideInsets=_contentGuideInsets;
@property (weak, nonatomic) id<PUOneUpTilingLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) struct CGSize displaySizeForInsetMatching; // @synthesize displaySizeForInsetMatching=_displaySizeForInsetMatching;
@property (readonly, nonatomic) NSIndexPath *indexPathOfCurrentItem;
@property (nonatomic) struct CGSize interpageSpacing; // @synthesize interpageSpacing=_interpageSpacing;
@property (nonatomic) struct CGSize loadingIndicatorSize; // @synthesize loadingIndicatorSize=_loadingIndicatorSize;
@property (strong, nonatomic) PUParallaxComputer *parallaxComputer; // @synthesize parallaxComputer=_parallaxComputer;
@property (nonatomic) struct CGSize playButtonSize; // @synthesize playButtonSize=_playButtonSize;
@property (nonatomic) struct CGSize progressIndicatorSize; // @synthesize progressIndicatorSize=_progressIndicatorSize;
@property (nonatomic) BOOL shouldPinContentToTop; // @synthesize shouldPinContentToTop=_shouldPinContentToTop;
@property (nonatomic) double tileContentMaximumInitialZoomToFillScale; // @synthesize tileContentMaximumInitialZoomToFillScale=_tileContentMaximumInitialZoomToFillScale;
@property (readonly, nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property (nonatomic) BOOL useBackgroundTile; // @synthesize useBackgroundTile=_useBackgroundTile;
@property (nonatomic) BOOL useBadgeTiles; // @synthesize useBadgeTiles=_useBadgeTiles;
@property (nonatomic) BOOL useCommentsTiles; // @synthesize useCommentsTiles=_useCommentsTiles;
@property (nonatomic) BOOL useUserTransformTiles; // @synthesize useUserTransformTiles=_useUserTransformTiles;

+ (id)centerTileKinds;
+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)_areCommentsVisibleForItemAtIndexPath:(id)arg1;
- (struct CGPoint)_contentOffsetForItemAtIndexPath:(id)arg1;
- (id)_createLayoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (id)_displayTileTransformForItemAtIndexPath:(id)arg1;
- (id)_displayTileTransformForItemAtIndexPath:(id)arg1 pageSize:(struct CGSize)arg2 secondaryDisplayTransform:(id)arg3;
- (void)_getLayoutRect:(out struct CGRect *)arg1 transform:(out struct CGAffineTransform *)arg2 shouldIncludeBottomOffset:(BOOL)arg3 forContentOfItemAtIndexPath:(id)arg4;
- (id)_indexPathOfItemClosestToAbscissa:(double)arg1;
- (BOOL)_isVideoPlacholderVisibleForItemAtIndexPath:(id)arg1;
- (struct CGSize)_itemSize;
- (double)_minimumBottomContentInsetsForItemAtIndexPath:(id)arg1;
- (double)_normalizedTransitionProgressFrom:(id)arg1 withAbscissa:(double)arg2 outNeighbor:(out id *)arg3;
- (struct CGRect)_pageRectForItemAtIndexPath:(id)arg1;
- (struct CGRect)_untransformedRectForItemAtIndexPath:(id)arg1;
- (struct CGRect)_untransformedRectForItemAtIndexPath:(id)arg1 pageRect:(struct CGRect)arg2;
- (void)addLayoutInfosForTilesInRect:(struct CGRect)arg1 section:(long long)arg2 toSet:(id)arg3;
- (struct CGSize)estimatedSectionSize;
- (id)init;
- (void)invalidateBadgeSizeForItemAtIndexPath:(id)arg1;
- (void)invalidateCommentsForItemAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)invalidateModelTileTransformForItemAtIndexPath:(id)arg1;
- (void)invalidateVideoPlaceholderForItemAtIndexPath:(id)arg1;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (id)preferredScrollInfo;
- (void)prepareLayout;
- (void)setVisibleRect:(struct CGRect)arg1;
- (struct CGSize)sizeForSection:(long long)arg1 numberOfItems:(long long)arg2;
- (struct CGRect)visibleRectForItemAtIndexPath:(id)arg1 transitionProgress:(double)arg2;
- (struct CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2;

@end

