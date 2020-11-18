//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface _HKDelayedOperation : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    long long _mode;
    long long _clock;
    NSObject<OS_dispatch_source> *_timerSource;
    double _delay;
    double _lastExecution;
    double _nextScheduledExecution;
    NSString *_loggingName;
    NSObject<OS_os_log> *_loggingCategory;
}

- (void).cxx_destruct;
- (void)_queue_executeBlockIfScheduled;
- (void)disableLogging;
- (void)enableLoggingWithName:(id)arg1 category:(id)arg2;
- (void)execute;
- (void)executeWithDelay:(double)arg1;
- (id)initWithMode:(long long)arg1 clock:(long long)arg2 queue:(id)arg3 delay:(double)arg4 block:(CDUnknownBlockType)arg5;
- (id)initWithMode:(long long)arg1 queue:(id)arg2 delay:(double)arg3 block:(CDUnknownBlockType)arg4;
- (id)initWithQueue:(id)arg1 delay:(double)arg2 block:(CDUnknownBlockType)arg3;
- (void)invalidate;

@end

