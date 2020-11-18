//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXCloudQuotaControllerDelegate-Protocol.h>

@class NSString, PXAssetsDataSourceCountsController, PXCPLUIStatusProvider, PXCloudQuotaController, PXContentFilterFooterController, PXPhotosViewModel;
@protocol PXPhotosGridFooterStatusControllerDelegate;

@interface PXPhotosGridFooterStatusController : NSObject <PXChangeObserver, PXCloudQuotaControllerDelegate>
{
    PXPhotosViewModel *_viewModel;
    PXAssetsDataSourceCountsController *_countsController;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    PXCloudQuotaController *_cloudQuotaController;
    PXContentFilterFooterController *_filterFooterController;
    id<PXPhotosGridFooterStatusControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXPhotosGridFooterStatusControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createCPLUIStatusProvider;
- (void)_refreshCPLUIStatusProvider;
- (void)_systemPhotoLibraryDidChange;
- (void)_updateFooterViewModel;
- (void)_updateHasImportantInformation;
- (void)cloudQuotaController:(id)arg1 informationBannerDidChange:(id)arg2;
- (id)init;
- (id)initWithViewModel:(id)arg1 itemsCountsController:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)presentingViewControllerForCloudQuotaController:(id)arg1;
- (void)setCplUIStatusProvider:(id)arg1;
- (void)viewDidAppear;

@end
