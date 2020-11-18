//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, _UIFlowLayoutInfo;

@interface UICollectionViewFlowLayout : UICollectionViewLayout
{
    struct {
        unsigned int delegateSizeForItem:1;
        unsigned int delegateReferenceSizeForHeader:1;
        unsigned int delegateReferenceSizeForFooter:1;
        unsigned int delegateInsetForSection:1;
        unsigned int delegateInteritemSpacingForSection:1;
        unsigned int delegateLineSpacingForSection:1;
        unsigned int delegateAlignmentOptions:1;
        unsigned int layoutDataIsValid:1;
        unsigned int delegateInfoIsValid:1;
        unsigned int roundsToScreenScale:1;
        unsigned int delegateSizesForSection:1;
        unsigned int sectionHeadersFloat:1;
        unsigned int sectionFootersFloat:1;
        unsigned int headerFollowsSectionMargins:1;
        unsigned int footerFollowsSectionMargins:1;
    } _gridLayoutFlags;
    double _interitemSpacing;
    double _lineSpacing;
    struct CGSize _itemSize;
    struct CGSize _estimatedItemSize;
    struct CGSize _headerReferenceSize;
    struct CGSize _footerReferenceSize;
    struct UIEdgeInsets _sectionInset;
    _UIFlowLayoutInfo *_data;
    struct CGSize _currentLayoutSize;
    NSMutableDictionary *_insertedItemsAttributesDict;
    NSMutableDictionary *_insertedSectionHeadersAttributesDict;
    NSMutableDictionary *_insertedSectionFootersAttributesDict;
    NSMutableDictionary *_deletedItemsAttributesDict;
    NSMutableDictionary *_deletedSectionHeadersAttributesDict;
    NSMutableDictionary *_deletedSectionFootersAttributesDict;
    long long _scrollDirection;
    NSDictionary *_rowAlignmentsOptionsDictionary;
    struct CGPoint _contentOffsetAdjustment;
    struct CGSize _contentSizeAdjustment;
    NSMutableArray *_indexPathsToValidate;
    NSMutableDictionary *_cachedItemAttributes;
    NSMutableDictionary *_cachedItemFrames;
    long long _sectionInsetReference;
}

@property (nonatomic) struct CGSize estimatedItemSize; // @synthesize estimatedItemSize=_estimatedItemSize;
@property (readonly, nonatomic, getter=_estimatesSizes) BOOL estimatesSizes;
@property (nonatomic) struct CGSize footerReferenceSize; // @synthesize footerReferenceSize=_footerReferenceSize;
@property (nonatomic) struct CGSize headerReferenceSize; // @synthesize headerReferenceSize=_headerReferenceSize;
@property (nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property (nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_interitemSpacing;
@property (nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_lineSpacing;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) BOOL sectionFootersPinToVisibleBounds;
@property (nonatomic) BOOL sectionHeadersPinToVisibleBounds;
@property (nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property (nonatomic) long long sectionInsetReference; // @synthesize sectionInsetReference=_sectionInsetReference;

+ (Class)invalidationContextClass;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_adjustedSectionInsetForSectionInset:(struct UIEdgeInsets)arg1 forAxis:(int)arg2;
- (BOOL)_boundsAndInsetsAreValidForReferenceDimension;
- (void)_calculateAttributesForRect:(struct CGRect)arg1;
- (BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
- (struct CGPoint)_contentOffsetForScrollingToSection:(long long)arg1;
- (double)_dimensionFromCollectionView;
- (struct CGSize)_effectiveEstimatedItemSize;
- (id)_existingLayoutAttributesForItemAtIndexPath:(id)arg1;
- (id)_fetchAndCacheNewLayoutAttributesForCellWithIndexPath:(id)arg1 frame:(struct CGRect)arg2;
- (void)_fetchItemsInfoForRect:(struct CGRect)arg1;
- (struct UIEdgeInsets)_focusFastScrollingIndexBarInsets;
- (BOOL)_footerFollowsSectionMargins;
- (struct CGRect)_frameForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (struct CGRect)_frameForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (struct CGRect)_frameForItem:(long long)arg1 inSection:(long long)arg2 usingData:(id)arg3;
- (void)_getSizingInfosWithExistingSizingDictionary:(id)arg1;
- (BOOL)_headerFollowsSectionMargins;
- (void)_invalidateButKeepAllInfo;
- (void)_invalidateButKeepDelegateInfo;
- (id)_layoutAttributesForItemsInRect:(struct CGRect)arg1;
- (void)_resetCachedItems;
- (BOOL)_roundsToScreenScale;
- (id)_rowAlignmentOptions;
- (long long)_sectionArrayIndexForIndexPath:(id)arg1;
- (void)_setCollectionView:(id)arg1;
- (void)_setFooterFollowsSectionMargins:(BOOL)arg1;
- (void)_setHeaderFollowsSectionMargins:(BOOL)arg1;
- (void)_setNeedsLayoutComputationWithoutInvalidation;
- (void)_setRoundsToScreenScale:(BOOL)arg1;
- (void)_setRowAlignmentsOptions:(id)arg1;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (void)_updateCollectionViewScrollableAxis;
- (void)_updateContentSizeScrollingDimensionWithDelta:(double)arg1;
- (void)_updateDelegateFlags;
- (void)_updateItemsLayoutForRect:(struct CGRect)arg1 allowsPartialUpdate:(BOOL)arg2;
- (struct CGSize)collectionViewContentSize;
- (long long)developmentLayoutDirection;
- (void)encodeWithCoder:(id)arg1;
- (id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForFooterInDeletedSection:(long long)arg1;
- (id)finalLayoutAttributesForHeaderInDeletedSection:(long long)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)indexesForSectionFootersInRect:(struct CGRect)arg1;
- (id)indexesForSectionFootersInRect:(struct CGRect)arg1 usingData:(id)arg2;
- (id)indexesForSectionHeadersInRect:(struct CGRect)arg1;
- (id)indexesForSectionHeadersInRect:(struct CGRect)arg1 usingData:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initialLayoutAttributesForFooterInInsertedSection:(long long)arg1;
- (id)initialLayoutAttributesForHeaderInInsertedSection:(long long)arg1;
- (id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForFooterInSection:(long long)arg1;
- (id)layoutAttributesForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (id)layoutAttributesForHeaderInSection:(long long)arg1;
- (id)layoutAttributesForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1 usingData:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (struct CGSize)synchronizeLayout;

@end

