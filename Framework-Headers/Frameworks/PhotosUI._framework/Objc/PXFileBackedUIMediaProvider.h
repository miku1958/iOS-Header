//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXUIMediaProvider.h>

@class NSCache, NSOperationQueue;

@interface PXFileBackedUIMediaProvider : PXUIMediaProvider
{
    NSOperationQueue *_queue;
    NSCache *_cache;
}

- (void).cxx_destruct;
- (void)_handleImageCreated:(id)arg1 forAsset:(id)arg2 targetSize:(struct CGSize)arg3 imageKey:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)init;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;

@end
