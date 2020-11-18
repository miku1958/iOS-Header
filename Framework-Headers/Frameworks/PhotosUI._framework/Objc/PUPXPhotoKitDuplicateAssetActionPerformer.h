//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class PUDuplicateActionController;

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitDuplicateAssetActionPerformer : PXPhotoKitAssetActionPerformer
{
    PUDuplicateActionController *_duplicateActionController;
    long long _action;
}

@property (nonatomic) long long action; // @synthesize action=_action;
@property (strong, nonatomic) PUDuplicateActionController *duplicateActionController; // @synthesize duplicateActionController=_duplicateActionController;

+ (BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
- (void).cxx_destruct;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end

