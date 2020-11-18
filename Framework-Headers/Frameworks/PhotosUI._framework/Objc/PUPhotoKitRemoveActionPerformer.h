//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotoKitActionPerformer.h>

#import <PhotosUI/PUAssetActionPerformerDelegate-Protocol.h>

@class NSDictionary, NSString, PUPhotoKitTrashActionPerformer;

__attribute__((visibility("hidden")))
@interface PUPhotoKitRemoveActionPerformer : PUPhotoKitActionPerformer <PUAssetActionPerformerDelegate>
{
    NSDictionary *_fetchResultsByAssetCollection;
    PUPhotoKitTrashActionPerformer *_trashActionPerformer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSDictionary *fetchResultsByAssetCollection; // @synthesize fetchResultsByAssetCollection=_fetchResultsByAssetCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) PUPhotoKitTrashActionPerformer *trashActionPerformer; // @synthesize trashActionPerformer=_trashActionPerformer;

+ (BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
- (void).cxx_destruct;
- (void)_performTrashTask;
- (BOOL)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (BOOL)shouldShowConfirmation;

@end

