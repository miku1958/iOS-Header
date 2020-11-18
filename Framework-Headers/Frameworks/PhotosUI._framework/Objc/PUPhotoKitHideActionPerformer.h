//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotoKitActionPerformer.h>

@class PUAssetHidingHelper;

__attribute__((visibility("hidden")))
@interface PUPhotoKitHideActionPerformer : PUPhotoKitActionPerformer
{
    BOOL _isHiding;
    PUAssetHidingHelper *_assetHidingHelper;
}

@property (strong, nonatomic) PUAssetHidingHelper *assetHidingHelper; // @synthesize assetHidingHelper=_assetHidingHelper;
@property (nonatomic) BOOL isHiding; // @synthesize isHiding=_isHiding;

+ (BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
- (void).cxx_destruct;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end

