//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetExplorerReviewScreenActionPerformer.h>

@protocol PUPhotoMarkupViewControllerObserver, PUReviewAssetProvider;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenMarkupActionPerformer : PUAssetExplorerReviewScreenActionPerformer
{
    id<PUReviewAssetProvider> _reviewAssetProvider;
    id<PUPhotoMarkupViewControllerObserver> _markupObserver;
}

@property (weak, nonatomic) id<PUPhotoMarkupViewControllerObserver> markupObserver; // @synthesize markupObserver=_markupObserver;
@property (strong, nonatomic) id<PUReviewAssetProvider> reviewAssetProvider; // @synthesize reviewAssetProvider=_reviewAssetProvider;

+ (BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (BOOL)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;
- (void).cxx_destruct;
- (void)_presentMarkupViewControllerForReviewAsset:(id)arg1;
- (void)performUserInteractionTask;

@end

