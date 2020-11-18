//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetBadgeManager.h>

#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>

@class NSSet, NSString, PHFetchResult, PXMiroMovieProvider, PXPhotosDataSource;

@interface PXDebugAssetBadgeManager : PXAssetBadgeManager <PXPhotosDataSourceChangeObserver>
{
    PXPhotosDataSource *_curatedPhotosDataSource;
    PXMiroMovieProvider *_miroMovieProvider;
    PXPhotosDataSource *_photosDataSource;
    PHFetchResult *__photosGraphCurationAssets;
    NSSet *__miroCurationAssets;
}

@property (strong, nonatomic, setter=_setMiroCurationAssets:) NSSet *_miroCurationAssets; // @synthesize _miroCurationAssets=__miroCurationAssets;
@property (strong, nonatomic, setter=_setPhotosGraphCurationAssets:) PHFetchResult *_photosGraphCurationAssets; // @synthesize _photosGraphCurationAssets=__photosGraphCurationAssets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_isAssetContainedInMiroCuration:(id)arg1;
- (BOOL)_isAssetContainedInPhotosGraphCuration:(id)arg1;
- (void)_updateAssets;
- (unsigned long long)badgeTypeForAsset:(id)arg1;
- (void)dealloc;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;

@end

