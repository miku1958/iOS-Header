//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/UICollectionViewDelegate-Protocol.h>
#import <ChatKit/UICollectionViewFocusDelegate_Legacy-Protocol.h>

@class NSArray, NSIndexPath, NSString, UICollectionView, UICollectionViewCell, UIContextMenuConfiguration, _UIContextMenuStyle, _UIFocusFastScrollingIndexBarEntry, _UIHorizontalIndexTitleBar;
@protocol UIContextMenuInteractionAnimating, UIContextMenuInteractionCommitAnimating, UISpringLoadedInteractionContext;

@protocol UICollectionViewDelegate_Private <UICollectionViewDelegate, UICollectionViewFocusDelegate_Legacy>

@optional
- (NSArray *)_collectionView:(UICollectionView *)arg1 accessoriesForContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 layoutAnchor:(CDStruct_4bcfbbae)arg3;
- (void)_collectionView:(UICollectionView *)arg1 horizontalIndexTitleBar:(_UIHorizontalIndexTitleBar *)arg2 selectedEntry:(_UIFocusFastScrollingIndexBarEntry *)arg3;
- (BOOL)_collectionView:(UICollectionView *)arg1 shouldApplyTransitionContentOffset:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3;
- (BOOL)_collectionView:(UICollectionView *)arg1 shouldSpringLoadItemAtIndexPath:(NSIndexPath *)arg2 withContext:(id<UISpringLoadedInteractionContext>)arg3;
- (_UIContextMenuStyle *)_collectionView:(UICollectionView *)arg1 styleForContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (struct CGPoint)_collectionView:(UICollectionView *)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
- (NSIndexPath *)_collectionView:(UICollectionView *)arg1 targetIndexPathForMoveFromItemAtIndexPath:(NSIndexPath *)arg2 toProposedIndexPath:(NSIndexPath *)arg3;
- (UICollectionViewCell *)_collectionView:(UICollectionView *)arg1 templateLayoutCellForCellsWithReuseIdentifier:(NSString *)arg2;
- (void)_collectionView:(UICollectionView *)arg1 willLayoutCell:(UICollectionViewCell *)arg2 usingTemplateLayoutCell:(UICollectionViewCell *)arg3 forItemAtIndexPath:(NSIndexPath *)arg4;
- (NSIndexPath *)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(UICollectionView *)arg1;
- (void)collectionView:(UICollectionView *)arg1 willCommitMenuWithAnimator:(id<UIContextMenuInteractionCommitAnimating>)arg2;
- (void)collectionView:(UICollectionView *)arg1 willDisplayContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id<UIContextMenuInteractionAnimating>)arg3;
- (void)collectionView:(UICollectionView *)arg1 willEndContextMenuInteractionWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id<UIContextMenuInteractionAnimating>)arg3;
@end
