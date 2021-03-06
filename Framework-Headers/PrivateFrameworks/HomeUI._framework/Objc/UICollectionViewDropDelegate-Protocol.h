//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class NSIndexPath, UICollectionView, UICollectionViewDropProposal, UIDragPreviewParameters;
@protocol UICollectionViewDropCoordinator, UIDropSession;

@protocol UICollectionViewDropDelegate <NSObject>
- (void)collectionView:(UICollectionView *)arg1 performDropWithCoordinator:(id<UICollectionViewDropCoordinator>)arg2;

@optional
- (BOOL)collectionView:(UICollectionView *)arg1 canHandleDropSession:(id<UIDropSession>)arg2;
- (UIDragPreviewParameters *)collectionView:(UICollectionView *)arg1 dropPreviewParametersForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 dropSessionDidEnd:(id<UIDropSession>)arg2;
- (void)collectionView:(UICollectionView *)arg1 dropSessionDidEnter:(id<UIDropSession>)arg2;
- (void)collectionView:(UICollectionView *)arg1 dropSessionDidExit:(id<UIDropSession>)arg2;
- (UICollectionViewDropProposal *)collectionView:(UICollectionView *)arg1 dropSessionDidUpdate:(id<UIDropSession>)arg2 withDestinationIndexPath:(NSIndexPath *)arg3;
@end

