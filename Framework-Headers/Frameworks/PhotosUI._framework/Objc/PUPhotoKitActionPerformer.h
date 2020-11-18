//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetActionPerformer.h>

@class PUPhotoKitDataSourceManager;

__attribute__((visibility("hidden")))
@interface PUPhotoKitActionPerformer : PUAssetActionPerformer
{
    PUPhotoKitDataSourceManager *_photoKitDataSourceManager;
}

@property (strong, nonatomic) PUPhotoKitDataSourceManager *photoKitDataSourceManager; // @synthesize photoKitDataSourceManager=_photoKitDataSourceManager;

+ (BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (BOOL)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;
- (void).cxx_destruct;
- (id)_indexPathsInPhotosDataSource:(id)arg1;
- (id)_photosDataSourceFromDataSourceManager:(id)arg1;
- (void)forceIncludeAssetsInDataSource;
- (void)instantlyExcludeAssetsFromDataSource;
- (void)instantlyInvalidateAssetsInDataSource;
- (void)stopExcludingAssetsFromDataSource;

@end
