//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUHorizontalCollectionViewLayout.h>

@class NSSet;
@protocol PUSelectableAssetCollectionViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUSelectableAssetCollectionViewLayout : PUHorizontalCollectionViewLayout
{
    NSSet *_floatingCellIndexPaths;
    struct UIOffset _sharingBadgeOffset;
    struct CGSize _layoutReferenceSize;
}

@property (weak, nonatomic) id<PUSelectableAssetCollectionViewLayoutDelegate> delegate; // @dynamic delegate;
@property (strong, nonatomic) NSSet *floatingCellIndexPaths; // @synthesize floatingCellIndexPaths=_floatingCellIndexPaths;
@property (nonatomic) struct CGSize layoutReferenceSize; // @synthesize layoutReferenceSize=_layoutReferenceSize;
@property (nonatomic) struct UIOffset sharingBadgeOffset; // @synthesize sharingBadgeOffset=_sharingBadgeOffset;

- (void).cxx_destruct;
- (id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1;
- (struct CGRect)_floatingSelectionBadgeFrameForItemFrame:(struct CGRect)arg1 visibleItemFrame:(struct CGRect)arg2 atIndexPath:(id)arg3;
- (BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect)arg1;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (struct CGRect)collectionViewBounds;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end
