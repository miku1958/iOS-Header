//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUMediaProvider.h>

@class PXUIMediaProvider;

__attribute__((visibility("hidden")))
@interface PUPXMediaProvider : PUMediaProvider
{
    PXUIMediaProvider *_underlyingMediaProvider;
}

@property (readonly, nonatomic) PXUIMediaProvider *underlyingMediaProvider; // @synthesize underlyingMediaProvider=_underlyingMediaProvider;

- (void).cxx_destruct;
- (void)cancelImageRequest:(int)arg1;
- (id)init;
- (id)initWithUnderlyingMediaProvider:(id)arg1;
- (int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end

