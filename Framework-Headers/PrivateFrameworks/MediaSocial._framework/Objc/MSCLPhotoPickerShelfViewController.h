//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaSocial/UICollectionViewDataSource-Protocol.h>
#import <MediaSocial/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, PHCachingImageManager, PHFetchResult, UICollectionView;
@protocol MSCLPhotoPickerDelegate;

@interface MSCLPhotoPickerShelfViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    PHFetchResult *_assets;
    UICollectionView *_collectionView;
    id<MSCLPhotoPickerDelegate> _delegate;
    PHCachingImageManager *_imageManager;
    NSMutableDictionary *_imageRequestsByAssetIDs;
    BOOL _isZoomed;
    NSMutableDictionary *_selectedAttachmentsByAssetID;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MSCLPhotoPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *selectedAttachments;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize)_desiredPixelSizeForAsset:(id)arg1;
- (void)_finishImageRequestForAssetIdentifier:(id)arg1 withImageData:(id)arg2 typeIdentifier:(id)arg3;
- (void)_loadFullImageForAsset:(id)arg1;
- (void)_reloadPreferredContentSize;
- (void)_sendDelegateSelectedAttachmentsDidChange;
- (id)_thumbnailImageRequestOptions;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;

@end
