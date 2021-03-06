//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFooterViewModel.h>

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXCloudQuotaControllerDelegate-Protocol.h>

@class NSArray, NSString, PXCPLUIStatusProvider, PXCloudQuotaController, PXPhotoKitAssetsDataSourceManager;
@protocol PXPhotosLibraryFooterViewModelPresentationDelegate;

@interface PXPhotosLibraryFooterViewModel : PXFooterViewModel <PXCloudQuotaControllerDelegate, PXAssetsDataSourceManagerObserver>
{
    NSArray *_syncProgressAlbums;
    id<PXPhotosLibraryFooterViewModelPresentationDelegate> _presentingDelegate;
    PXPhotoKitAssetsDataSourceManager *_assetsDataSourceManager;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    PXCloudQuotaController *_cloudQuotaController;
}

@property (readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *assetsDataSourceManager; // @synthesize assetsDataSourceManager=_assetsDataSourceManager;
@property (strong, nonatomic) PXCloudQuotaController *cloudQuotaController; // @synthesize cloudQuotaController=_cloudQuotaController;
@property (strong, nonatomic) PXCPLUIStatusProvider *cplUIStatusProvider; // @synthesize cplUIStatusProvider=_cplUIStatusProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<PXPhotosLibraryFooterViewModelPresentationDelegate> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *syncProgressAlbums; // @synthesize syncProgressAlbums=_syncProgressAlbums;

- (void).cxx_destruct;
- (void)_updateExposedProperties;
- (void)cloudQuotaController:(id)arg1 informationBannerDidChange:(id)arg2;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)presentingViewControllerForCloudQuotaController:(id)arg1;

@end

