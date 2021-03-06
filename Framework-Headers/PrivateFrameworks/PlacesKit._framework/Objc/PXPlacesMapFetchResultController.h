//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXPlacesMapController, PXPlacesMapPipeline, PXPlacesMapView, PXPlacesPhotoAssetsStore;
@protocol OS_dispatch_queue, PXPlacesMapControllerAccess, PXPlacesMapGeotaggableInfoDelegate;

@interface PXPlacesMapFetchResultController : NSObject
{
    id<PXPlacesMapControllerAccess> _mapViewController;
    unsigned long long _contentMode;
    id<PXPlacesMapGeotaggableInfoDelegate> _geotaggableInfoDelegate;
    PXPlacesPhotoAssetsStore *_providedAssetStore;
    PXPlacesMapPipeline *_providedPipeline;
    PXPlacesPhotoAssetsStore *_albumAssetStore;
    PXPlacesMapPipeline *_albumPipeline;
    PXPlacesMapPipeline *_currentPipeline;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (strong, nonatomic) PXPlacesPhotoAssetsStore *albumAssetStore; // @synthesize albumAssetStore=_albumAssetStore;
@property (strong, nonatomic) PXPlacesMapPipeline *albumPipeline; // @synthesize albumPipeline=_albumPipeline;
@property (nonatomic) unsigned long long contentMode; // @synthesize contentMode=_contentMode;
@property (strong, nonatomic) PXPlacesMapPipeline *currentPipeline; // @synthesize currentPipeline=_currentPipeline;
@property (weak, nonatomic) id<PXPlacesMapGeotaggableInfoDelegate> geotaggableInfoDelegate; // @synthesize geotaggableInfoDelegate=_geotaggableInfoDelegate;
@property (readonly, nonatomic) PXPlacesMapController *mapController;
@property (readonly, nonatomic) PXPlacesMapView *mapView;
@property (strong, nonatomic) id<PXPlacesMapControllerAccess> mapViewController; // @synthesize mapViewController=_mapViewController;
@property (strong) PXPlacesPhotoAssetsStore *providedAssetStore; // @synthesize providedAssetStore=_providedAssetStore;
@property (strong) PXPlacesMapPipeline *providedPipeline; // @synthesize providedPipeline=_providedPipeline;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;

- (void).cxx_destruct;
- (id)currentAssetStore;
- (void)focusOnGeotaggablesAnimated:(BOOL)arg1;
- (void)focusOnMapRect:(CDStruct_02837cd9)arg1 animated:(BOOL)arg2;
- (void)focusOnProvidedAssetsAnimated:(BOOL)arg1;
- (void)focusOnProvidedAssetsImmediately;
- (id)initWithGeotaggableInfoDelegate:(id)arg1 andMapViewController:(id)arg2;
- (void)loadFetchResult:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)loadFetchResults:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)loadProvidedAssetStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadContentModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)resumeWithCompletion:(CDUnknownBlockType)arg1;
- (id)visibleGeotaggables;

@end

