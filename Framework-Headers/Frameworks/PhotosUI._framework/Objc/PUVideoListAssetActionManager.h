//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotoKitAssetActionManager.h>

@protocol PUVideoListAssetExpungeActionPerformerDelegate;

__attribute__((visibility("hidden")))
@interface PUVideoListAssetActionManager : PUPhotoKitAssetActionManager
{
    id<PUVideoListAssetExpungeActionPerformerDelegate> _actionPerformerDelegate;
}

@property (strong, nonatomic) id<PUVideoListAssetExpungeActionPerformerDelegate> actionPerformerDelegate; // @synthesize actionPerformerDelegate=_actionPerformerDelegate;

- (void).cxx_destruct;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (BOOL)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1;
- (BOOL)shouldEnableActionType:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;

@end

