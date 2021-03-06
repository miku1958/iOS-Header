//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AFWatchdogTimer : NSObject <NSCopying>
{
    double _interval;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _timeoutHandler;
    BOOL _isStopped;
    double _remainingInterval;
    double _startTime;
}

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)cancelIfNotAlreadyCanceled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(CDUnknownBlockType)arg3;
- (id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2;
- (BOOL)isStopped;
- (void)reset;
- (void)start;
- (void)stop;

@end

