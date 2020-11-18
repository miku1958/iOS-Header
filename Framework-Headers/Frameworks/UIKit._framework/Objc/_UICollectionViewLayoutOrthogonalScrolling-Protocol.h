//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSIndexPath, NSIndexSet, NSString, UICollectionViewLayoutAttributes;

@protocol _UICollectionViewLayoutOrthogonalScrolling <NSObject>
- (NSArray *)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(struct CGRect)arg1;
- (BOOL)_hasOrthogonalScrollingSections;
- (struct CGPoint)_offsetForOrthogonalScrollingSection:(long long)arg1;
- (struct CGRect)_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 frame:(struct CGRect)arg2;
- (int)_orthogonalScrollingAxis;
- (struct NSDirectionalEdgeInsets)_orthogonalScrollingContentInsetsForSection:(long long)arg1;
- (struct CGRect)_orthogonalScrollingContentRectForSection:(long long)arg1;
- (double)_orthogonalScrollingDecelerationRateForSection:(long long)arg1;
- (BOOL)_orthogonalScrollingElementShouldAppearAboveForAttributes:(UICollectionViewLayoutAttributes *)arg1;
- (struct CGRect)_orthogonalScrollingLayoutRectForSection:(long long)arg1;
- (double)_orthogonalScrollingPagingDimensionForSection:(long long)arg1;
- (NSIndexSet *)_orthogonalScrollingSections;
- (BOOL)_orthogonalScrollingShouldCenterCustomPagingSizeForSection:(long long)arg1;
- (struct CGPoint)_orthogonalScrollingTargetContentOffsetForOffset:(struct CGPoint)arg1 section:(long long)arg2;
- (NSString *)_orthogonalScrollingTrace;
- (BOOL)_orthogonalScrollingUsesTargetContentOffsetForSection:(long long)arg1;
- (struct CGVector)_scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1;
- (void)_setOffset:(struct CGPoint)arg1 forOrthogonalScrollingSection:(long long)arg2;
- (BOOL)_shouldConfigureForPagingForOrthogonalScrollingSection:(long long)arg1;
- (BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(NSIndexPath *)arg1 elementKind:(NSString *)arg2;
- (BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(NSIndexPath *)arg1 elementKind:(NSString *)arg2;
@end
