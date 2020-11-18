//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PXPhotosDataSourceChangeObserver-Protocol.h>

@class NSMutableArray, NSString, PUCollectionViewIntermediateDataSource, PUSessionInfo, PUZoomableGridViewControllerSpec, PXPhotosDataSource;

@interface PUMomentsZoomLevelManager : NSObject <PXPhotosDataSourceChangeObserver>
{
    NSMutableArray *_allLevelInfos;
    PXPhotosDataSource *_momentsDataSource;
    BOOL _isInvalidatingLayoutOfZoomLevels;
    PUZoomableGridViewControllerSpec *_zoomableGridSpec;
    PUSessionInfo *_sessionInfo;
    PUCollectionViewIntermediateDataSource *_sharedIntermediateDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long highestZoomLevel;
@property (readonly, nonatomic) unsigned long long lowestZoomLevel;
@property (readonly, nonatomic) unsigned long long preferredDefaultZoomLevel;
@property (strong, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property (readonly, nonatomic) PUCollectionViewIntermediateDataSource *sharedIntermediateDataSource; // @synthesize sharedIntermediateDataSource=_sharedIntermediateDataSource;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PUZoomableGridViewControllerSpec *zoomableGridSpec; // @synthesize zoomableGridSpec=_zoomableGridSpec;

- (void).cxx_destruct;
- (void)_defaultsDidChange:(id)arg1;
- (void)_updateSummarizeSectionsOnZoomLevelInfos;
- (void)dealloc;
- (id)existingViewControllerForZoomLevel:(unsigned long long)arg1 inNavigationController:(id)arg2;
- (id)initWithSpec:(id)arg1;
- (id)jumpToZoomLevel:(unsigned long long)arg1 inNavigationController:(id)arg2 usingTopControllerConfigurationBlock:(CDUnknownBlockType)arg3;
- (void)markZoomInfosInvalidWithWidth:(double)arg1;
- (id)momentsDataSource;
- (id)newViewControllerForZoomLevel:(unsigned long long)arg1;
- (void)photosDataSource:(id)arg1 didReceivePhotoLibraryChange:(id)arg2;
- (void)updateZoomableGridSpecForTraitCollection:(id)arg1 referenceSize:(struct CGSize)arg2;
- (BOOL)zoomLevel:(unsigned long long)arg1 isHigherThanZoomLevel:(unsigned long long)arg2;
- (unsigned long long)zoomLevelAboveZoomLevel:(unsigned long long)arg1;
- (unsigned long long)zoomLevelBelowZoomLevel:(unsigned long long)arg1;
- (void)zoomLevelInfo:(id)arg1 didInvalidateLayoutWithContext:(id)arg2;
- (id)zoomLevelInfoForZoomLevel:(unsigned long long)arg1;

@end

