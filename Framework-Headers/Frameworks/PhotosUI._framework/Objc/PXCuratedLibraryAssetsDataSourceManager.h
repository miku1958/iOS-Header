//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetsDataSourceManager.h>

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryMutableAssetsDataSourceManager-Protocol.h>

@class NSDictionary, NSPredicate, NSString, PXAssetsDataSource, PXCuratedLibraryAssetsDataSourceManagerConfiguration, PXPhotoKitAssetsDataSourceManager, PXUpdater, PXVisualPositionsChangeDetails;
@protocol PXCuratedLibraryAssetsDataSourceManagerDelegate;

@interface PXCuratedLibraryAssetsDataSourceManager : PXAssetsDataSourceManager <PXCuratedLibraryMutableAssetsDataSourceManager, PXAssetsDataSourceManagerObserver>
{
    struct {
        BOOL isSelectingAssets;
        BOOL visibleAssetCollections;
        BOOL willTransitionFromZoomLevelToZoomLevel;
        BOOL didTransitionFromZoomLevelToZoomLevel;
        BOOL dominantAssetCollectionReferenceForZoomLevel;
        BOOL transitionTypeFromZoomLevelToZoomLevel;
    } _delegateRespondsTo;
    NSDictionary *_dataSourceManagerByZoomLevel;
    BOOL _isForcingSections;
    BOOL _canLoadData;
    BOOL _wantsCuration;
    id<PXCuratedLibraryAssetsDataSourceManagerDelegate> _delegate;
    long long _zoomLevel;
    NSPredicate *_allPhotosFilterPredicate;
    PXUpdater *_updater;
    PXCuratedLibraryAssetsDataSourceManagerConfiguration *_configuration;
    long long _zoomLevelForCurrentDataSourceManager;
    PXAssetsDataSource *_currentDataSource;
    long long _currentDataSourceZoomLevel;
    PXVisualPositionsChangeDetails *_lastVisualPositionsChangeDetails;
    long long _lastTransitionType;
    unsigned long long _lastVisualPositionsChangeFromDataSourceIdentifier;
    unsigned long long _lastVisualPositionsChangeToDataSourceIdentifier;
}

@property (readonly, nonatomic) NSPredicate *allPhotosFilterPredicate; // @synthesize allPhotosFilterPredicate=_allPhotosFilterPredicate;
@property (nonatomic) long long backgroundFetchOriginSection;
@property (nonatomic) BOOL canLoadData; // @synthesize canLoadData=_canLoadData;
@property (readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManagerConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, nonatomic) PXAssetsDataSourceManager *currentAssetsDataSourceManager;
@property (strong, nonatomic) PXAssetsDataSource *currentDataSource; // @synthesize currentDataSource=_currentDataSource;
@property (nonatomic) long long currentDataSourceZoomLevel; // @synthesize currentDataSourceZoomLevel=_currentDataSourceZoomLevel;
@property (readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *currentPhotoKitAssetsDataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXCuratedLibraryAssetsDataSourceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSPredicate *filterPredicate;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lastTransitionType; // @synthesize lastTransitionType=_lastTransitionType;
@property (strong, nonatomic) PXVisualPositionsChangeDetails *lastVisualPositionsChangeDetails; // @synthesize lastVisualPositionsChangeDetails=_lastVisualPositionsChangeDetails;
@property (nonatomic) unsigned long long lastVisualPositionsChangeFromDataSourceIdentifier; // @synthesize lastVisualPositionsChangeFromDataSourceIdentifier=_lastVisualPositionsChangeFromDataSourceIdentifier;
@property (nonatomic) unsigned long long lastVisualPositionsChangeToDataSourceIdentifier; // @synthesize lastVisualPositionsChangeToDataSourceIdentifier=_lastVisualPositionsChangeToDataSourceIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property (nonatomic) BOOL wantsCuration; // @synthesize wantsCuration=_wantsCuration;
@property (readonly, nonatomic) long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property (nonatomic) long long zoomLevelForCurrentDataSourceManager; // @synthesize zoomLevelForCurrentDataSourceManager=_zoomLevelForCurrentDataSourceManager;

- (void).cxx_destruct;
- (void)_invalidateCuration;
- (void)_invalidateDataSource;
- (void)_invalidateDataSourceManagers;
- (void)_invalidatePropertiesDerivedFromZoomLevel;
- (id)_photosDataSourceForZoomLevel:(long long)arg1;
- (void)_updateCuration;
- (void)_updateDataSource;
- (void)_updateDataSourceManagers;
- (void)_updatePropertiesDerivedFromZoomLevel;
- (id)assetCollectionReferencesInDataSourceForZoomLevel:(long long)arg1 withParentAssetCollectionReference:(id)arg2;
- (id)assetCollectionReferencesInDataSourceForZoomLevel:(long long)arg1 withParentAssetCollectionReference:(id)arg2 assetCollectionReferenceWithSameKeyAssetAsParent:(id *)arg3;
- (id)assetsInAssetCollection:(id)arg1;
- (id)createInitialDataSource;
- (id)dataSourceForZoomLevel:(long long)arg1;
- (id)dataSourceManagerForZoomLevel:(long long)arg1;
- (void)didPerformChanges;
- (id)firstAssetCollectionReferenceInDataSourceForZoomLevel:(long long)arg1 withParent:(id)arg2;
- (BOOL)forceAccurateAllSectionsIfNeeded;
- (BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (BOOL)forceAccurateSectionsIfNeeded:(id)arg1;
- (BOOL)forceAccurateSectionsIfNeeded:(id)arg1 inZoomLevel:(long long)arg2;
- (BOOL)forceAllPhotosAccurateIfNeeded;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (unsigned long long)libraryStateForZoomLevel:(long long)arg1;
- (void)loadIfNeeded;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1;
- (void)resumeChangeDelivery:(id)arg1;
- (void)setAllPhotosFilterPredicate:(id)arg1;
- (void)setCurationEnabled:(BOOL)arg1 forAssetCollection:(id)arg2;
- (void)setNeedsUpdate;
- (void)setTransientKeyAsset:(id)arg1 forAssetCollection:(id)arg2 zoomLevel:(long long)arg3;
- (void)setZoomLevel:(long long)arg1;
- (long long)transitionTypeFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2;
- (id)visualPositionsChangeDetailsFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2;

@end

