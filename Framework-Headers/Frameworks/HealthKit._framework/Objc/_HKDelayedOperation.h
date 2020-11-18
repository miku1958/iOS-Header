//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _HKDelayedOperation : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    long long _mode;
    int _blockEnqueued;
    double _lastExecution;
    NSObject<OS_dispatch_source> *_timerSource;
    double _delay;
}

- (void).cxx_destruct;
- (void)_queue_executeBlock;
- (void)_queue_updateLastExecution;
- (void)execute;
- (id)initWithMode:(long long)arg1 queue:(id)arg2 delay:(double)arg3 block:(CDUnknownBlockType)arg4;
- (id)initWithQueue:(id)arg1 delay:(double)arg2 block:(CDUnknownBlockType)arg3;
- (void)invalidate;

@end

