//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetExplorerReviewScreenActionPerformer.h>

@class PUReviewScreenBarsModel;
@protocol PUFunEffectsViewControllerObserver, PUReviewAssetProvider;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenFunEffectsActionPerformer : PUAssetExplorerReviewScreenActionPerformer
{
    id<PUReviewAssetProvider> _reviewAssetProvider;
    id<PUFunEffectsViewControllerObserver> _funEffectsObserver;
    PUReviewScreenBarsModel *_reviewBarsModel;
}

@property (weak, nonatomic) id<PUFunEffectsViewControllerObserver> funEffectsObserver; // @synthesize funEffectsObserver=_funEffectsObserver;
@property (strong, nonatomic) id<PUReviewAssetProvider> reviewAssetProvider; // @synthesize reviewAssetProvider=_reviewAssetProvider;
@property (strong, nonatomic) PUReviewScreenBarsModel *reviewBarsModel; // @synthesize reviewBarsModel=_reviewBarsModel;

+ (BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (BOOL)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;
- (void).cxx_destruct;
- (void)_presentFunEffectsViewControllerForAsset:(id)arg1;
- (void)performUserInteractionTask;

@end
