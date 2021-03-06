//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface GKLeaderboardScoreFlowLayout : UICollectionViewFlowLayout
{
    BOOL _isInsertingItemsAbove;
    double _heightOfInsertedItems;
    double _initialContentOffset;
    struct CGSize _contentSizeBeforeInsertingItemsAbove;
}

@property (nonatomic) struct CGSize contentSizeBeforeInsertingItemsAbove; // @synthesize contentSizeBeforeInsertingItemsAbove=_contentSizeBeforeInsertingItemsAbove;
@property (nonatomic) double heightOfInsertedItems; // @synthesize heightOfInsertedItems=_heightOfInsertedItems;
@property (nonatomic) double initialContentOffset; // @synthesize initialContentOffset=_initialContentOffset;
@property (nonatomic) BOOL isInsertingItemsAbove; // @synthesize isInsertingItemsAbove=_isInsertingItemsAbove;

- (void)prepareForCollectionViewUpdates:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;

@end

