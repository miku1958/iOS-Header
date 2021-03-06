//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFDispatchQueue.h>

#import <PhotoFoundation/PFDispatchQueueRunBlock-Protocol.h>

@class PFDispatchQueueExtensionManager, PFSerialQueue;

@interface PFExtendedDispatchQueue : PFDispatchQueue <PFDispatchQueueRunBlock>
{
    PFDispatchQueue *_queue;
    PFSerialQueue *_requestSerializer;
    PFDispatchQueueExtensionManager *_extensionManager;
    unsigned long long _suspendCount;
}

- (void).cxx_destruct;
- (id)_dispatchQueueForSetTargetQueue;
- (id)_extensionManager;
- (id)_extensionsForTargetingQueue;
- (void)_invoke:(CDUnknownBlockType)arg1 extensionDataArray:(id)arg2;
- (void)_performAsyncNotify:(id)arg1 enqueueBlock:(CDUnknownBlockType)arg2;
- (void)addExtensions:(id)arg1;
- (BOOL)assertNotOnQueue;
- (BOOL)assertOnQueue;
- (BOOL)assertQueueBarrier;
- (id)description;
- (void)disableExtension:(id)arg1;
- (void)dispatchAfter:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchAfterDelay:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchAfterInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)dispatchAsyncWithQOS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchBarrierAsync:(CDUnknownBlockType)arg1;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchBarrierSync:(CDUnknownBlockType)arg1;
- (id)dispatchCancellable:(CDUnknownBlockType)arg1;
- (id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)dispatchCancellableAfterInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)dispatchCancellableGroup:(id)arg1 notify:(CDUnknownBlockType)arg2;
- (void)dispatchGroup:(id)arg1 async:(CDUnknownBlockType)arg2;
- (void)dispatchGroup:(id)arg1 notify:(CDUnknownBlockType)arg2;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)enableExtension:(id)arg1;
- (id)extensionMatching:(CDUnknownBlockType)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void *)getSpecific:(void *)arg1;
- (id)initWithQueue:(id)arg1;
- (const char *)label;
- (BOOL)onQueue;
- (unsigned int)qualityOfService;
- (void)removeAllQueuedBlocks;
- (void)removeAllQueuedBlocksAndWait;
- (void)resume;
- (void)resumeRequests;
- (void)runBlock:(CDUnknownBlockType)arg1;
- (void)setSpecific:(void *)arg1 forKey:(void *)arg2;
- (void)setTargetQueue:(id)arg1;
- (void)suspend;
- (void)suspendRequests;
- (id)wrappedQueue;

@end

