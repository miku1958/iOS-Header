//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSConditionLock, NSMutableArray, UIKeyboardTaskExecutionContext;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskQueue : NSObject
{
    BOOL _executingOnMainThread;
    NSConditionLock *_lock;
    NSMutableArray *_tasks;
    NSMutableArray *_deferredTasks;
    UIKeyboardTaskExecutionContext *_executionContext;
    CDUnknownBlockType _mainThreadContinuation;
}

@property (strong, nonatomic) UIKeyboardTaskExecutionContext *executionContext; // @synthesize executionContext=_executionContext;

- (void)addDeferredTask:(CDUnknownBlockType)arg1;
- (void)addTask:(CDUnknownBlockType)arg1;
- (void)continueExecutionOnMainThread;
- (void)dealloc;
- (void)finishExecution;
- (id)init;
- (BOOL)isMainThreadExecutingTask;
- (void)lock;
- (void)lockWhenReadyForMainThread;
- (void)performDeferredTaskIfIdle;
- (void)performTask:(CDUnknownBlockType)arg1;
- (void)performTaskOnMainThread:(CDUnknownBlockType)arg1 waitUntilDone:(BOOL)arg2;
- (void)promoteDeferredTaskIfIdle;
- (id)scheduleTask:(CDUnknownBlockType)arg1 timeInterval:(double)arg2 repeats:(BOOL)arg3;
- (BOOL)tryLockWhenReadyForMainThread;
- (void)unlock;
- (void)waitUntilAllTasksAreFinished;

@end

