//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PLImageCacheList, PLImageLoadingThread;

@interface PLImageCache : NSObject
{
    PLImageLoadingThread *_loader;
    PLImageCacheList *_cacheList;
}

- (void)_addImageToCache:(id)arg1;
- (id)_cachedImageFromSource:(id)arg1 asset:(id)arg2;
- (id)_imageLoader;
- (void)_uncacheImage:(id)arg1;
- (id)cachedImageFromSource:(id)arg1 asset:(id)arg2 loadIfNeeded:(BOOL)arg3 synchronously:(BOOL)arg4 priority:(int)arg5 forImageLoadingQueue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)cachedImageFromSource:(id)arg1 forAsset:(id)arg2 loadIfNeeded:(BOOL)arg3 synchronously:(BOOL)arg4 priority:(int)arg5 forImageLoadingQueue:(id)arg6;
- (void)cancelLoadFromSource:(id)arg1 asset:(id)arg2 imageLoadingQueue:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)invalidateCachedImageForSource:(id)arg1 asset:(id)arg2;
- (id)newCachedImageWithImageContents:(void *)arg1 orientation:(long long)arg2 metadata:(id)arg3 fromSource:(id)arg4 asset:(id)arg5;
- (id)newImageLoadingQueue;
- (void)pauseLoading;
- (void)removeImageLoadingQueue:(id)arg1;
- (void)resumeLoading;

@end
