//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUAlbumListTransitionContext, PUSectionedGridLayout, UICollectionView, UICollectionViewLayout;

@protocol PUStackedAlbumControllerTransition <NSObject>
- (UICollectionView *)collectionView;
- (PUSectionedGridLayout *)gridLayout;
- (void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2;
- (BOOL)isEmpty;
- (void)setAlbumListTransitionContext:(PUAlbumListTransitionContext *)arg1;
- (void)setAlbumListTransitionLayout:(UICollectionViewLayout *)arg1 animated:(BOOL)arg2;
@end
