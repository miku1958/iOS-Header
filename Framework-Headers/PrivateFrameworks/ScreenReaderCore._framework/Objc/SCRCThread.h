//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCRCStackQueue;

@interface SCRCThread : NSObject
{
    SCRCStackQueue *_queue;
    SCRCStackQueue *_waitingQueue;
    id _queueLock;
    struct __CFRunLoopSource *_source;
    struct __CFRunLoop *_runLoop;
    BOOL _isInvalid;
    BOOL _isRegistered;
    BOOL _isTimerSet;
    BOOL _shouldStop;
    BOOL _isWaitingForStoppingThread;
    id __key;
    double _lastStartTime;
}

@property (strong, nonatomic, setter=_setKey:) id _key; // @synthesize _key=__key;
@property (nonatomic, setter=_setLastStartTime:) double lastStartTime; // @synthesize lastStartTime=_lastStartTime;

+ (BOOL)_addThreadToRegisteredThreads:(id)arg1 withThreadKey:(id)arg2;
+ (double)_performSelector:(SEL)arg1 withThreadKey:(id)arg2 onTarget:(id)arg3 waitTime:(double)arg4 cancelMask:(unsigned int)arg5 count:(unsigned int)arg6 firstObject:(id)arg7 moreObjects:(struct __va_list_tag [1])arg8;
+ (BOOL)_removeThreadFromRegisteredThreads:(id)arg1 withThreadKey:(id)arg2;
+ (long long)activeThreadCount;
+ (id)activity;
+ (id)currentThreadTaskCache;
+ (long long)defaultThreadPriority;
+ (void)initialize;
+ (void)invalidateForKey:(id)arg1;
+ (double)lastStartTimeForKey:(id)arg1;
+ (void)postStopNotification;
+ (void)setDefaultThreadPriority:(long long)arg1;
- (void).cxx_destruct;
- (void)_assignThreadPriority;
- (BOOL)_debug_currentlyRunningOnThisThread;
- (void)_enqueueImmediateTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double *)arg3;
- (void)_enqueueTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double *)arg3;
- (void)_enqueueWaitingTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double *)arg3;
- (id)_initWithKey:(id)arg1 task:(id)arg2;
- (BOOL)_isWaitingForStoppingThread;
- (double)_performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 firstObject:(id)arg5 moreObjects:(struct __va_list_tag [1])arg6;
- (void)_processQueue;
- (void)_processQueueFromTimer;
- (void)_runThread:(id)arg1;
- (void)_setIsWaitingForStoppingThread:(BOOL)arg1;
- (BOOL)_shouldStop;
- (void)_threadDidStop;
- (void)dealloc;
- (id)init;
- (BOOL)isInvalid;
- (double)performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 objects:(id)arg5;
- (double)performSelector:(SEL)arg1 onTarget:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;
- (void)setIsInvalid:(BOOL)arg1;
- (void)setName:(id)arg1;

@end

