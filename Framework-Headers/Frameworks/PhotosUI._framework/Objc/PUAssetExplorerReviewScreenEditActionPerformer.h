//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetExplorerReviewScreenActionPerformer.h>

@protocol PUPhotoEditViewControllerSessionDelegate, PUReviewAssetProvider, PUVideoEditViewControllerSessionDelegate;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenEditActionPerformer : PUAssetExplorerReviewScreenActionPerformer
{
    id<PUReviewAssetProvider> _reviewAssetProvider;
    id<PUPhotoEditViewControllerSessionDelegate> _photoDelegate;
    id<PUVideoEditViewControllerSessionDelegate> _videoDelegate;
}

@property (weak, nonatomic) id<PUPhotoEditViewControllerSessionDelegate> photoDelegate; // @synthesize photoDelegate=_photoDelegate;
@property (strong, nonatomic) id<PUReviewAssetProvider> reviewAssetProvider; // @synthesize reviewAssetProvider=_reviewAssetProvider;
@property (weak, nonatomic) id<PUVideoEditViewControllerSessionDelegate> videoDelegate; // @synthesize videoDelegate=_videoDelegate;

+ (BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (BOOL)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;
- (void).cxx_destruct;
- (void)_presentEditViewControllerForReviewAsset:(id)arg1;
- (void)performUserInteractionTask;

@end

