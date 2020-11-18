//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, NSOperationQueue, NSString;
@protocol OS_voucher;

@interface NSOperation : NSObject
{
    struct {
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
        char *__nameBuffer;
        NSObject<OS_voucher> *_voucher;
        CDUnknownBlockType __schedule;
        struct _opaque_pthread_mutex_t __wait_mutex;
        struct _opaque_pthread_cond_t {
            long long __sig;
            char __opaque[40];
        } __wait_cond;
        struct os_unfair_lock_s __lock;
        BOOL _shouldRemoveDependenciesAfterFinish;
        _Atomic unsigned char __state;
        char __prio;
        _Atomic BOOL __cached_isReady;
        _Atomic BOOL __isCancelled;
        _Atomic unsigned char __propertyQoS;
        _Atomic unsigned char __isExecutingObserverCount;
        _Atomic unsigned char __isFinishedObserverCount;
        _Atomic unsigned char __isReadyObserverCount;
        _Atomic unsigned char __isCancelledObserverCount;
    } _iop;
}

@property (readonly, getter=isAsynchronous) BOOL asynchronous;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (copy) CDUnknownBlockType completionBlock;
@property (readonly, getter=isConcurrent) BOOL concurrent;
@property (readonly, copy) NSArray *dependencies;
@property (readonly, getter=isExecuting) BOOL executing;
@property (readonly, getter=isFinished) BOOL finished;
@property (copy) NSString *name;
@property long long qualityOfService;
@property long long queuePriority;
@property (readonly, getter=isReady) BOOL ready;
@property double threadPriority;

+ (BOOL)_removesDependenciesAfterFinish;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentOperation;
+ (id)keyPathsForValuesAffectingCancelled;
+ (id)keyPathsForValuesAffectingExecuting;
+ (id)keyPathsForValuesAffectingFinished;
+ (id)keyPathsForValuesAffectingIsCancelled;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;
+ (id)keyPathsForValuesAffectingReady;
- (id)__graphDescription:(unsigned long long)arg1;
- (CDUnknownBlockType)_copyCompletionBlock;
- (id)_implicitObservationInfo;
- (void)addDependency:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)cancel;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void)main;
- (void *)observationInfo;
- (void)removeAllDependencies;
- (void)removeDependency:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)setObservationInfo:(void *)arg1;
- (void)start;
- (void)waitUntilFinished;
- (void)waitUntilFinishedOrTimeout:(double)arg1;

@end
