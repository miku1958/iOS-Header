//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>

@class NSObject, NSString, PXAssetsDataSource, PXAssetsDataSourceManager, PXUpdater, PXZoomableInlineHeaderSectionInfoMetaDataStore, PXZoomableInlineHeadersDataSource;
@protocol OS_dispatch_queue;

@interface PXZoomableInlineHeadersDataSourceManager : PXSectionedDataSourceManager <PXAssetsDataSourceManagerObserver>
{
    PXAssetsDataSourceManager *_assetsDataSourceManager;
    PXAssetsDataSource *_previousAssetsDataSource;
    PXZoomableInlineHeaderSectionInfoMetaDataStore *_metaDataStore;
    BOOL _isPreparingMetadataInBackground;
    NSObject<OS_dispatch_queue> *_prepareQueue;
    PXZoomableInlineHeadersDataSource *_monthsDataSource;
    PXZoomableInlineHeadersDataSource *_yearsDataSource;
    PXUpdater *_updater;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PXZoomableInlineHeadersDataSource *monthsDataSource; // @synthesize monthsDataSource=_monthsDataSource;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property (readonly, nonatomic) PXZoomableInlineHeadersDataSource *yearsDataSource; // @synthesize yearsDataSource=_yearsDataSource;

+ (BOOL)supportsAssetsDataSourceManager:(id)arg1;
- (void).cxx_destruct;
- (void)_didFinishBackgroundPreparationWithResult:(id)arg1 forDataSource:(id)arg2;
- (id)_fetchResultForDataSource:(id)arg1;
- (void)_invalidateDataSource;
- (void)_prepareInBackgroundWithDataSource:(id)arg1;
- (id)_prepareQueue_createMetaDataStoreForAlbumWithDataSource:(id)arg1;
- (void)_prepareQueue_prepareInBackroundWithDataSource:(id)arg1;
- (void)_updateDataSource;
- (id)dataSourceForLevel:(unsigned long long)arg1;
- (void)didPerformChanges;
- (id)initWithAssetsDataSourceManager:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)setNeedsUpdate;

@end

