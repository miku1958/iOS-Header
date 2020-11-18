//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetCollectionViewLayout.h>

@protocol PUHorizontalAlbumListGadgetLayoutDelegate;

@interface PUHorizontalAlbumListGadgetLayout : PXGadgetCollectionViewLayout
{
    id<PUHorizontalAlbumListGadgetLayoutDelegate> _horizontalLayoutDelegate;
}

@property (readonly, nonatomic) struct CGSize albumCellSize;
@property (weak, nonatomic) id<PUHorizontalAlbumListGadgetLayoutDelegate> horizontalLayoutDelegate; // @synthesize horizontalLayoutDelegate=_horizontalLayoutDelegate;

- (void).cxx_destruct;
- (unsigned long long)_numberOfAlbums;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)init;
- (id)initWithHorizontalLayoutDelegate:(id)arg1;

@end
