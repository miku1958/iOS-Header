//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetActionPerformer.h>

#import <PhotosUI/PUDeletePhotosActionControllerDelegate-Protocol.h>

@class NSString;
@protocol PUVideoListAssetExpungeActionPerformerDelegate;

__attribute__((visibility("hidden")))
@interface PUVideoListAssetExpungeActionPerformer : PUAssetActionPerformer <PUDeletePhotosActionControllerDelegate>
{
    id<PUVideoListAssetExpungeActionPerformerDelegate> _actionPerformerDelegate;
}

@property (weak, nonatomic) id<PUVideoListAssetExpungeActionPerformerDelegate> actionPerformerDelegate; // @synthesize actionPerformerDelegate=_actionPerformerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (BOOL)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;
- (void).cxx_destruct;
- (void)_performUserInteractionTask;
- (void)deletePhotosActionController:(id)arg1 dismissConfirmationViewController:(id)arg2;
- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end

