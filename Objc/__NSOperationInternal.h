//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, NSOperation, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface __NSOperationInternal : NSObject
{
    struct os_unfair_lock_s __lock;
    NSOperation *__prevOp;
    NSOperation *__nextOp;
    NSOperation *__nextPriOp;
    NSOperationQueue *__queue;
    NSMutableArray *__dependencies;
    NSHashTable *__down_dependencies;
    long long __unfinished_deps;
    CDUnknownBlockType __completion;
    void *__obsInfo;
    void *__implicitObsInfo;
    double __thread_prio;
    _Atomic unsigned char __state;
    BOOL __prio;
    _Atomic BOOL __cached_isReady;
    _Atomic BOOL __isCancelled;
    _Atomic unsigned char __propertyQoS;
    struct _opaque_pthread_mutex_t __wait_mutex;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } __wait_cond;
    char *__nameBuffer;
    id __activity;
    _Atomic unsigned char __isExecutingObserverCount;
    _Atomic unsigned char __isFinishedObserverCount;
    _Atomic unsigned char __isReadyObserverCount;
    _Atomic unsigned char __isCancelledObserverCount;
}

+ (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void *)arg7;
- (id)_activity;
- (void)_addDependency:(id)arg1 outer:(id)arg2;
- (void)_cancel:(id)arg1;
- (CDUnknownBlockType)_completionBlock;
- (CDUnknownBlockType)_copyCompletionBlock;
- (id)_dependencies;
- (void)_invalidate;
- (BOOL)_isCancelled;
- (BOOL)_isExecuting;
- (BOOL)_isFinished;
- (BOOL)_isReady;
- (id)_name;
- (long long)_queuePriority;
- (void)_removeDependency:(id)arg1 outer:(id)arg2;
- (void)_setCompletionBlock:(CDUnknownBlockType)arg1 outer:(id)arg2;
- (void)_setName:(id)arg1 outer:(id)arg2;
- (void)_setQueuePriority:(long long)arg1 outer:(id)arg2;
- (void)_setThreadPriority:(double)arg1 outer:(id)arg2;
- (void)_start:(id)arg1;
- (double)_threadPriority;
- (void)_waitUntilFinished:(id)arg1;
- (void)_waitUntilFinishedOrTimeout:(double)arg1 outer:(id)arg2;
- (void)dealloc;
- (id)init:(id)arg1;

@end

