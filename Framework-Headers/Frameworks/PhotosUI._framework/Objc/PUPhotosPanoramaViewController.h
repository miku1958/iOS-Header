//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotosGridViewController.h>

@class PHAssetCollection, PUPhotosPanoramaViewControllerSpec, PUSectionedGridLayout;

@interface PUPhotosPanoramaViewController : PUPhotosGridViewController
{
    PUPhotosPanoramaViewControllerSpec *_panoramaSpec;
    PHAssetCollection *_userPanoAlbum;
}

@property (readonly, nonatomic) PUSectionedGridLayout *mainGridLayout; // @dynamic mainGridLayout;
@property (strong, nonatomic) PUPhotosPanoramaViewControllerSpec *panoramaSpec; // @synthesize panoramaSpec=_panoramaSpec;
@property (strong, nonatomic) PHAssetCollection *userPanoAlbum; // @synthesize userPanoAlbum=_userPanoAlbum;

- (void).cxx_destruct;
- (void)_configureCollectionViewGridLayout:(id)arg1;
- (void)_updatePhotoDecorationForCell:(id)arg1 animated:(BOOL)arg2;
- (BOOL)canBeginStackCollapseTransition;
- (long long)cellFillMode;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (id)imageRequestOptionsForAsset:(id)arg1 pixelSize:(inout struct CGSize *)arg2;
- (id)initWithSpec:(id)arg1;
- (id)newGridLayout;
- (void)rotatePhotoViewToHorizontalIfNeeded:(id)arg1 withAsset:(id)arg2;
- (void)updateLayoutMetrics;
- (void)updatePhotoViewContent:(id)arg1 withThumbnailImage:(id)arg2;
- (BOOL)updateSpec;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)wantsGlobalFooter;

@end

