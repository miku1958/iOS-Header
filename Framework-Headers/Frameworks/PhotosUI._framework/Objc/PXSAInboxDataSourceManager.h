//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXInboxModelDataSourceManager.h>

#import <PhotosUICore/PXFeedSectionInfosManagerDelegate-Protocol.h>
#import <PhotosUICore/PXInboxModelMediaProvider-Protocol.h>
#import <PhotosUICore/PXInboxProviderSource-Protocol.h>

@class NSString, PXFeedSectionInfosManager, PXSAInboxDataSource, PXSAInboxDetailViewControllerProvider, PXSAInboxTitleProvider;
@protocol PXInboxModelDetailViewControllerProvider, PXInboxModelMediaProvider, PXInboxModelTitleProvider;

@interface PXSAInboxDataSourceManager : PXInboxModelDataSourceManager <PXFeedSectionInfosManagerDelegate, PXInboxProviderSource, PXInboxModelMediaProvider>
{
    PXFeedSectionInfosManager *_feedSectionInfosManager;
    PXSAInboxTitleProvider *_sharedAlbumTitleProvider;
    PXSAInboxDetailViewControllerProvider *_sharedAlbumDetailViewControllerProvider;
}

@property (readonly, nonatomic) PXSAInboxDataSource *dataSource; // @dynamic dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<PXInboxModelDetailViewControllerProvider> detailViewControllerProvider;
@property (strong, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager; // @synthesize feedSectionInfosManager=_feedSectionInfosManager;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<PXInboxModelMediaProvider> mediaProvider;
@property (strong, nonatomic) PXSAInboxDetailViewControllerProvider *sharedAlbumDetailViewControllerProvider; // @synthesize sharedAlbumDetailViewControllerProvider=_sharedAlbumDetailViewControllerProvider;
@property (strong, nonatomic) PXSAInboxTitleProvider *sharedAlbumTitleProvider; // @synthesize sharedAlbumTitleProvider=_sharedAlbumTitleProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<PXInboxModelTitleProvider> titleProvider;

- (void).cxx_destruct;
- (id)_dataSourceSnapshot;
- (id)_sectionInfosForDataSource;
- (void)_updateDataSource;
- (id)createInitialDataSource;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (id)init;
- (id)providerSource;
- (int)requestImageForPreviewItem:(id)arg1 targetSize:(struct CGSize)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end

