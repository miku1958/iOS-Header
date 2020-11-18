//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/UICollectionViewDelegate-Protocol.h>

@class CKFeedCollectionViewLayout, NSIndexPath, NSIndexSet, UICollectionView;

@protocol CKFeedCollectionViewLayoutDelegate <UICollectionViewDelegate>
- (id)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 batchIDForTileAtIndexPath:(NSIndexPath *)arg3;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 captionSizeForTileAtIndexPath:(NSIndexPath *)arg3 proposedSize:(struct CGSize)arg4;
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 contentInsetsForSection:(long long)arg3;
- (id)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 groupIDForSection:(long long)arg3;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(struct CGSize)arg4;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 imageSizeForTileAtIndexPath:(NSIndexPath *)arg3;
- (struct CKFeedSeparatorMetrics)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 metricsForSeparatorBetweenRowAtIndexPath:(NSIndexPath *)arg3 andRowAtIndexPath:(NSIndexPath *)arg4 proposedMetrics:(struct CKFeedSeparatorMetrics)arg5;
- (struct CKFeedSeparatorMetrics)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 metricsForSeparatorBetweenSection:(long long)arg3 andSection:(long long)arg4 proposedMetrics:(struct CKFeedSeparatorMetrics)arg5;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 mininumSizeForTileAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 referenceMaximumLength:(double *)arg3 minimumNumberOfTilesToOmit:(long long *)arg4 forSection:(long long)arg5;
- (BOOL)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 shouldHideHeaderInSection:(long long)arg3;
- (BOOL)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 shouldHideSection:(long long)arg3;
- (BOOL)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 shouldJoinSection:(long long)arg3 withSection:(long long)arg4;
- (BOOL)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 shouldShowCaptionForTileAtIndexPath:(NSIndexPath *)arg3;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 sizeForFooterInSection:(long long)arg3 proposedSize:(struct CGSize)arg4;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 sizeForHeaderOfSections:(NSIndexSet *)arg3 proposedSize:(struct CGSize)arg4;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 sizeForRowAtIndexPath:(NSIndexPath *)arg3 proposedSize:(struct CGSize)arg4;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 sizeForThumbnailInSection:(long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 spacingBetweenSection:(long long)arg3 andHeaderForGroupID:(id)arg4;
- (long long)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 typeForSection:(long long)arg3;
@end

