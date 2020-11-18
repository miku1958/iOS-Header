//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXActionMenuController.h>

@class NSArray, PXPhotoKitAssetCollectionActionManager;

@interface PXPhotosGridActionMenuController : PXActionMenuController
{
    PXPhotoKitAssetCollectionActionManager *_assetCollectionActionManager;
    NSArray *_additionalActionTypes;
    PXPhotoKitAssetCollectionActionManager *_assetActionManager;
}

@property (copy, nonatomic) NSArray *additionalActionTypes; // @synthesize additionalActionTypes=_additionalActionTypes;
@property (readonly, nonatomic) PXPhotoKitAssetCollectionActionManager *assetActionManager; // @synthesize assetActionManager=_assetActionManager;
@property (readonly, nonatomic) PXPhotoKitAssetCollectionActionManager *assetCollectionActionManager; // @synthesize assetCollectionActionManager=_assetCollectionActionManager;

- (void).cxx_destruct;
- (id)_defaultActionTypes;
- (id)availableActionTypes;
- (id)initWithActionManagers:(id)arg1;
- (id)initWithActionManagers:(id)arg1 selectionManager:(id)arg2;
- (BOOL)shouldAllowPerformanceOfActionType:(id)arg1;

@end
