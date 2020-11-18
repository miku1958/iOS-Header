//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, PLImageCache, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLImageLoadingThread : NSObject
{
    BOOL _running;
    BOOL _paused;
    BOOL _canceled;
    NSMutableSet *_queues;
    NSMutableDictionary *_requestsByKey;
    NSObject<OS_dispatch_queue> *_isolation;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_highestPriorityQueue;
    NSMutableArray *_highestPriorityRequests;
    NSObject<OS_dispatch_queue> *_highPriorityQueue;
    NSMutableArray *_highPriorityRequests;
    NSObject<OS_dispatch_queue> *_normalPriorityQueue;
    NSMutableArray *_normalPriorityRequests;
    PLPhotoLibrary *_library;
    PLImageCache *_weak_cache;
}

- (void).cxx_destruct;
- (BOOL)_dequeueRequest:(id)arg1;
- (void)_enqueueRequest:(id)arg1;
- (id)_imageCache;
- (void)_requeueRequest:(id)arg1 oldPriority:(int)arg2;
- (void)_serviceRequest:(id)arg1;
- (void)_serviceRequestFrom:(id)arg1;
- (void)_setImageCache:(id)arg1;
- (void)_start;
- (void)addImageLoadingQueue:(id)arg1;
- (void)cacheWasDeallocated;
- (void)cancelLoadFromSource:(id)arg1 asset:(id)arg2 imageLoadingQueue:(id)arg3;
- (void)dealloc;
- (id)initWithImageCache:(id)arg1;
- (id)loadImageFromSource:(id)arg1 asset:(id)arg2 forImageLoadingQueue:(id)arg3 synchronously:(BOOL)arg4 priority:(int)arg5 completion:(CDUnknownBlockType)arg6;
- (void)pause;
- (void)removeImageLoadingQueue:(id)arg1;
- (void)resume;
- (void)stop;

@end

