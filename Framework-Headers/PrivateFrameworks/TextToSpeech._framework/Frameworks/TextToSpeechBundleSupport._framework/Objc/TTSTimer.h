//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TTSTimer : NSObject
{
    NSMutableArray *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSLock *_timerLock;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _paused;
}

- (void)_createTimer;
- (void)_handleTimerFired;
- (void)_startTimer:(id)arg1;
- (void)clearQueue;
- (void)continueQueue;
- (void)dealloc;
- (void)enqueueBlock:(CDUnknownBlockType)arg1 withDelay:(double)arg2 withId:(long long)arg3;
- (id)initWithDispatchQueue:(id)arg1;
- (void)pauseQueue;

@end
