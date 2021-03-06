//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXAssetEditOperationManager;
@protocol PXDisplayAsset;

@protocol PXAssetEditOperationManagerObserver <NSObject>

@optional
- (void)assetEditOperationManager:(PXAssetEditOperationManager *)arg1 didChangeEditOperationStatusForAsset:(id<PXDisplayAsset>)arg2 context:(void *)arg3;
- (void)assetEditOperationManager:(PXAssetEditOperationManager *)arg1 didChangeEditOperationsPerformedOnAsset:(id<PXDisplayAsset>)arg2 context:(void *)arg3;
@end

