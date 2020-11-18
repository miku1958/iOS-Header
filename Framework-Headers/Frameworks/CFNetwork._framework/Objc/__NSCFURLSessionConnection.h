//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>

@class NSURLResponse, NSURLSessionTask;
@protocol OS_dispatch_data, OS_dispatch_queue, SessionConnectionDelegate;

__attribute__((visibility("hidden")))
@interface __NSCFURLSessionConnection : NSObject <NSCopying>
{
    NSURLSessionTask *_task;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<SessionConnectionDelegate> _delegate;
    NSURLResponse *_cacheResponse;
    NSObject<OS_dispatch_data> *_cacheData;
    unsigned long long _cacheDataMax;
    long long _maxCacheEntrySize;
}

@property (strong) id<SessionConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy) NSURLSessionTask *task; // @synthesize task=_task;

- (void)_appendDataToCache:(id)arg1;
- (id)_cachedResponse;
- (void)_setupForCache:(BOOL)arg1 expectedLength:(long long)arg2 response:(id)arg3;
- (void)_storeCachedResponse:(id)arg1;
- (void)_tossCache;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)resume;
- (void)setBytesPerSecondLimit:(long long)arg1;
- (void)setIsDownload:(BOOL)arg1;
- (void)setPoolPriority:(long long)arg1;
- (void)setPriorityHint:(float)arg1;
- (void)suspend;
- (void)withWorkQueueAsync:(CDUnknownBlockType)arg1;

@end

