//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotoKitActionPerformer.h>

@class PUDuplicateActionController;

__attribute__((visibility("hidden")))
@interface PUPhotoKitDuplicateActionPerformer : PUPhotoKitActionPerformer
{
    PUDuplicateActionController *_duplicateActionController;
    long long _action;
    CDStruct_1b6d18a9 _newStillImageTime;
}

@property (nonatomic) long long action; // @synthesize action=_action;
@property (strong, nonatomic) PUDuplicateActionController *duplicateActionController; // @synthesize duplicateActionController=_duplicateActionController;
@property (nonatomic) CDStruct_1b6d18a9 newStillImageTime; // @synthesize newStillImageTime=_newStillImageTime;

+ (BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
- (void).cxx_destruct;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end

