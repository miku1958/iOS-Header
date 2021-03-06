//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CameraUI/CAMCameraReviewViewController-Protocol.h>
#import <CameraUI/PUAssetExplorerReviewScreenViewControllerDelegate-Protocol.h>

@class NSArray, NSString, PUAssetExplorerReviewScreenViewController, PUReviewAssetsDataSourceManager, PUReviewAssetsMediaProvider, PUReviewDataSource;
@protocol CAMCameraReviewDelegate;

@interface CAMReviewViewController : UIViewController <PUAssetExplorerReviewScreenViewControllerDelegate, CAMCameraReviewViewController>
{
    id<CAMCameraReviewDelegate> _reviewDelegate;
    NSArray *__initialAssets;
    PUReviewDataSource *__reviewDataSource;
    PUReviewAssetsDataSourceManager *__internalReviewDataSourceManager;
    PUReviewAssetsMediaProvider *__internalReviewMediaProvider;
    PUAssetExplorerReviewScreenViewController *__internalReviewViewController;
}

@property (readonly, nonatomic) NSArray *_initialAssets; // @synthesize _initialAssets=__initialAssets;
@property (readonly, nonatomic) PUReviewAssetsDataSourceManager *_internalReviewDataSourceManager; // @synthesize _internalReviewDataSourceManager=__internalReviewDataSourceManager;
@property (readonly, nonatomic) PUReviewAssetsMediaProvider *_internalReviewMediaProvider; // @synthesize _internalReviewMediaProvider=__internalReviewMediaProvider;
@property (readonly, nonatomic) PUAssetExplorerReviewScreenViewController *_internalReviewViewController; // @synthesize _internalReviewViewController=__internalReviewViewController;
@property (readonly, nonatomic) PUReviewDataSource *_reviewDataSource; // @synthesize _reviewDataSource=__reviewDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<CAMCameraReviewDelegate> reviewDelegate; // @synthesize reviewDelegate=_reviewDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (void)assetExplorerReviewScreenViewController:(id)arg1 didPerformCompletionAction:(unsigned long long)arg2 withSelectedAssetUUIDs:(id)arg3 livePhotoDisabledAssetUUIDs:(id)arg4 substituteAssetsByUUID:(id)arg5;
- (BOOL)assetExplorerReviewScreenViewController:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1;
- (void)assetExplorerReviewScreenViewControllerDidPressRetake:(id)arg1;
- (id)initWithAssets:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;

@end

