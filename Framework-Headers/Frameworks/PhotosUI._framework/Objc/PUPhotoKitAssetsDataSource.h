//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetsDataSource.h>

@class NSCache, NSString, PXPhotosDataSource, PXPhotosDataSourceChange;

@interface PUPhotoKitAssetsDataSource : PUAssetsDataSource
{
    PXPhotosDataSource *_photosDataSource;
    PXPhotosDataSourceChange *_change;
    NSString *_changeFromDataSourceIdentifier;
    NSCache *__assetReferenceByIndexPathCache;
}

@property (readonly, nonatomic) NSCache *_assetReferenceByIndexPathCache; // @synthesize _assetReferenceByIndexPathCache=__assetReferenceByIndexPathCache;
@property (readonly, nonatomic) PXPhotosDataSourceChange *change; // @synthesize change=_change;
@property (readonly, nonatomic) NSString *changeFromDataSourceIdentifier; // @synthesize changeFromDataSourceIdentifier=_changeFromDataSourceIdentifier;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;

- (void).cxx_destruct;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (BOOL)couldAssetReferenceAppear:(id)arg1;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (id)initWithImmutablePhotosDataSource:(id)arg1 withChange:(id)arg2 fromDataSourceIdentifier:(id)arg3;
- (BOOL)isEmpty;
- (long long)numberOfAssetsWithMaximum:(long long)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)startingAssetReference;

@end

