//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface FBSSerialQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_blocks;
    unsigned long long _enqueueID;
    unsigned long long _dequeueID;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSArray *_mainRunLoopModes;
    struct __CFRunLoopSource *_runLoopSource;
    BOOL _runLoopSourceHandlingBlock;
    NSObject<OS_dispatch_semaphore> *_synchronizingEnqueueSemaphore;
    unsigned long long _lastSynchronizingWorkspaceName;
}

+ (id)queueWithDispatchQueue:(id)arg1;
+ (id)queueWithMainRunLoopModes:(id)arg1;
- (BOOL)_hasNext;
- (id)_initWithDispatchQueue:(id)arg1 mainRunLoopModes:(id)arg2;
- (BOOL)_performNext;
- (void)_performNextFromRunLoopSource;
- (void)_queue_performAsync:(CDUnknownBlockType)arg1;
- (void)_setSynchronizingEnqueueSemaphore:(id)arg1 forWorkspaceWithName:(unsigned long long)arg2;
- (void)assertOnQueue;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)performAfter:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performAsync:(CDUnknownBlockType)arg1;

@end

