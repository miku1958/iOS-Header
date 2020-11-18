//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@class NSMutableSet, PXAssetsSceneSettings, PXDiagnosticsSettings, PXKitSettings, PXMemoriesFeedSettings, PXMemoriesRelatedSettings, PXModelSettings, PXPeopleDetailSettings, PXPhotosDataSourceSettings, PXPhotosDetailsHeaderTileSettings, PXPhotosDetailsSettings, PXRelatedSettings, PXSnapBackSettings, PXTilingSettings, PXViewControllerTransitionSettings;

@interface PXRootSettings : PXSettings
{
    NSMutableSet *_archivedSettings;
    PXDiagnosticsSettings *_diagnostics;
    PXPhotosDetailsSettings *_photosDetails;
    PXPhotosDetailsHeaderTileSettings *_photosDetailsHeaderTile;
    PXRelatedSettings *_related;
    PXMemoriesFeedSettings *_memoryFeed;
    PXMemoriesRelatedSettings *_memoriesRelated;
    PXAssetsSceneSettings *_assetsScene;
    PXPhotosDataSourceSettings *_photosDataSource;
    PXTilingSettings *_tiling;
    PXModelSettings *_model;
    PXKitSettings *_kit;
    PXViewControllerTransitionSettings *_viewControllerTransition;
    PXSnapBackSettings *_snapBack;
    PXPeopleDetailSettings *_peopleDetail;
}

@property (strong, nonatomic) PXAssetsSceneSettings *assetsScene; // @synthesize assetsScene=_assetsScene;
@property (strong, nonatomic) PXDiagnosticsSettings *diagnostics; // @synthesize diagnostics=_diagnostics;
@property (strong, nonatomic) PXKitSettings *kit; // @synthesize kit=_kit;
@property (strong, nonatomic) PXMemoriesRelatedSettings *memoriesRelated; // @synthesize memoriesRelated=_memoriesRelated;
@property (strong, nonatomic) PXMemoriesFeedSettings *memoryFeed; // @synthesize memoryFeed=_memoryFeed;
@property (strong, nonatomic) PXModelSettings *model; // @synthesize model=_model;
@property (strong, nonatomic) PXPeopleDetailSettings *peopleDetail; // @synthesize peopleDetail=_peopleDetail;
@property (strong, nonatomic) PXPhotosDataSourceSettings *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
@property (strong, nonatomic) PXPhotosDetailsSettings *photosDetails; // @synthesize photosDetails=_photosDetails;
@property (strong, nonatomic) PXPhotosDetailsHeaderTileSettings *photosDetailsHeaderTile; // @synthesize photosDetailsHeaderTile=_photosDetailsHeaderTile;
@property (strong, nonatomic) PXRelatedSettings *related; // @synthesize related=_related;
@property (strong, nonatomic) PXSnapBackSettings *snapBack; // @synthesize snapBack=_snapBack;
@property (strong, nonatomic) PXTilingSettings *tiling; // @synthesize tiling=_tiling;
@property (strong, nonatomic) PXViewControllerTransitionSettings *viewControllerTransition; // @synthesize viewControllerTransition=_viewControllerTransition;

+ (id)archiveKey;
+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)archiveValueForKey:(id)arg1;
- (void)save;

@end

