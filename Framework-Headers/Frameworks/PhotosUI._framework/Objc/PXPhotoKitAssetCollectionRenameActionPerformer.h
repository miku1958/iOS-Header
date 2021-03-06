//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>

@class UIAlertAction;

@interface PXPhotoKitAssetCollectionRenameActionPerformer : PXPhotoKitAssetCollectionActionPerformer
{
    UIAlertAction *_renameAction;
}

@property (strong, nonatomic) UIAlertAction *renameAction; // @synthesize renameAction=_renameAction;

+ (BOOL)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
- (void).cxx_destruct;
- (void)_handleRenameConfirmedWithAlert:(id)arg1;
- (void)_updateRenameActionWithTextField:(id)arg1;
- (void)performUserInteractionTask;

@end

