//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class NSDictionary, NSSet, PUAssetExplorerReviewScreenViewController;
@protocol PUDisplayAsset, PUDisplayAssetCollection, UIViewControllerTransitionCoordinator;

@protocol PUAssetExplorerReviewScreenViewControllerDelegate <NSObject>
- (void)assetExplorerReviewScreenViewController:(PUAssetExplorerReviewScreenViewController *)arg1 didPerformCompletionAction:(unsigned long long)arg2 withSelectedAssetUUIDs:(NSSet *)arg3 livePhotoDisabledAssetUUIDs:(NSSet *)arg4 substituteAssetsByUUID:(NSDictionary *)arg5;
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(PUAssetExplorerReviewScreenViewController *)arg1;

@optional
- (BOOL)assetExplorerReviewScreenViewController:(PUAssetExplorerReviewScreenViewController *)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id<PUDisplayAsset>)arg3 inAssetCollection:(id<PUDisplayAssetCollection>)arg4;
- (BOOL)assetExplorerReviewScreenViewController:(PUAssetExplorerReviewScreenViewController *)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id<PUDisplayAsset>)arg3 inAssetCollection:(id<PUDisplayAssetCollection>)arg4;
- (void)assetExplorerReviewScreenViewController:(PUAssetExplorerReviewScreenViewController *)arg1 willTransitionToSize:(struct CGSize)arg2 withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)arg3;
- (void)assetExplorerReviewScreenViewControllerDidPressRetake:(PUAssetExplorerReviewScreenViewController *)arg1;
@end

