//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AFWatchdogTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    double _interval;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_source> *_timerSource;
    unsigned long long _timerState;
    NSDate *_startTime;
    double _remainingTimeInterval;
}

- (void).cxx_destruct;
- (void)_scheduleTimer;
- (void)_scheduleTimerWithInterval:(double)arg1;
- (void)cancel;
- (BOOL)cancelIfNotAlreadyCanceled;
- (void)dealloc;
- (id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(CDUnknownBlockType)arg3;
- (id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2;
- (void)pause;
- (void)reset;
- (void)resume;
- (void)start;
- (void)stop;

@end

