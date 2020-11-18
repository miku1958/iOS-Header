//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetCollectionActionPerformer.h>

@interface PXPhotoKitAssetCollectionActionPerformer : PXAssetCollectionActionPerformer
{
}

+ (BOOL)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
+ (id)createBarButtonItemForAssetCollection:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
+ (id)createPreviewActionForAssetCollection:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
+ (id)createPreviewActionGroupForAssetCollection:(id)arg1 mutableActionTypeToPreviewActionMap:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollection:(id)arg2 person:(id)arg3;
- (id)_confirmationAlertTitleForBlacklistingAction:(id)arg1 viewSpec:(id)arg2;
- (id)_warningMessageForBlacklistingAction:(id)arg1 viewSpec:(id)arg2;
- (void)promptBlacklistingConfirmatonForUserAction:(id)arg1 viewSpec:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)promptDeleteMemoryConfirmatonWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
