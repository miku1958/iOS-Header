//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotoKitActionPerformer.h>

__attribute__((visibility("hidden")))
@interface PUPhotoKitFavoriteActionPerformer : PUPhotoKitActionPerformer
{
    BOOL _favorite;
}

@property (nonatomic) BOOL favorite; // @synthesize favorite=_favorite;

+ (BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
- (void)performBackgroundTask;

@end

