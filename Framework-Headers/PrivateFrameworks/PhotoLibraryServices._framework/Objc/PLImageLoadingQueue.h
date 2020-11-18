//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, PLImageCache;
@protocol PLImageLoadingQueueDelegate;

@interface PLImageLoadingQueue : NSObject
{
    id<PLImageLoadingQueueDelegate> _delegate;
    PLImageCache *_cache;
    NSLock *_lock;
}

@property (nonatomic) id<PLImageLoadingQueueDelegate> delegate; // @synthesize delegate=_delegate;

- (void)cancelLoadFromSource:(id)arg1 forAsset:(id)arg2;
- (void)dealloc;
- (void)imageIsAvailable:(id)arg1 forAsset:(id)arg2 fromSource:(id)arg3 completionBlocks:(id)arg4;
- (id)initWithImageCache:(id)arg1;
- (void)invalidateImageFromSource:(id)arg1 forAsset:(id)arg2;
- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3;
- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 loadIfNeeded:(BOOL)arg4;
- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 priority:(int)arg4;
- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 priority:(int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)pauseLoading;
- (void)resumeLoading;
- (void)stopLoading;

@end
