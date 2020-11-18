//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class NSProgress;

@interface PXPhotoKitSelectVariationAssetActionPerformer : PXPhotoKitAssetActionPerformer
{
    NSProgress *_progress;
}

@property (strong, nonatomic) NSProgress *progress; // @synthesize progress=_progress;

+ (BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)editOperationManager;
+ (id)editOperationType;
- (void).cxx_destruct;
- (void)cancelActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performBackgroundTask;

@end

