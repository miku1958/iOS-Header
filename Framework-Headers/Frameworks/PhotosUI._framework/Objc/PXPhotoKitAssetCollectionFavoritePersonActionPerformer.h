//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>

@interface PXPhotoKitAssetCollectionFavoritePersonActionPerformer : PXPhotoKitAssetCollectionActionPerformer
{
}

+ (BOOL)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
+ (id)createPreviewActionForAssetCollection:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
+ (id)createPreviewActionGroupForAssetCollection:(id)arg1 mutableActionTypeToPreviewActionMap:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollection:(id)arg2 person:(id)arg3;
- (void)performUserInteractionTask;

@end

