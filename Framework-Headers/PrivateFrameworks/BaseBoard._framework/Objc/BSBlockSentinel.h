//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BSAction;
@protocol OS_dispatch_queue;

@interface BSBlockSentinel : NSObject
{
    BSAction *_sentinelAction;
    CDUnknownBlockType _handler;
    unsigned long long _count;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_explicitQueue;
}

+ (id)sentinelWithExceptionReason:(id)arg1;
+ (id)sentinelWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)sentinelWithQueue:(id)arg1 signalCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)sentinelWithQueue:(id)arg1 signalCount:(unsigned long long)arg2 signalHandler:(CDUnknownBlockType)arg3;
+ (id)sentinelWithQueue:(id)arg1 signalHandler:(CDUnknownBlockType)arg2;
+ (id)sentinelWithSignalCount:(unsigned long long)arg1 exceptionReason:(id)arg2;
- (void)_performSynchronously:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithCount:(unsigned long long)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)signal;
- (BOOL)signalWithContext:(id)arg1;

@end

