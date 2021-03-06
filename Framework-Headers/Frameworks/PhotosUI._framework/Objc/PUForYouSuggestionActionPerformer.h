//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetActionPerformer.h>

@class PXForYouSuggestionDisplayAsset, PXPhotoKitAdjustedUIMediaProvider;
@protocol PUForYouSuggestionActionPerformerDelegate;

__attribute__((visibility("hidden")))
@interface PUForYouSuggestionActionPerformer : PUAssetActionPerformer
{
    PXForYouSuggestionDisplayAsset *_asset;
    PXPhotoKitAdjustedUIMediaProvider *_mediaProvider;
    id<PUForYouSuggestionActionPerformerDelegate> _statusDelegate;
}

@property (readonly, nonatomic) PXForYouSuggestionDisplayAsset *asset; // @synthesize asset=_asset;
@property (readonly, nonatomic) PXPhotoKitAdjustedUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (weak, nonatomic) id<PUForYouSuggestionActionPerformerDelegate> statusDelegate; // @synthesize statusDelegate=_statusDelegate;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAsset:(id)arg1;

@end

