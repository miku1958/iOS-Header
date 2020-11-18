//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IMMessageContext, NSLock, NSMutableArray, NSProtocolChecker, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_xpc_object;

@interface IMLocalObjectInternal : NSObject
{
    IMMessageContext *_currentMessageContext;
    NSRecursiveLock *_lock;
    id _target;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_deathLock;
    NSString *_portName;
    NSString *_processName;
    NSProtocolChecker *_protocolChecker;
    NSMutableArray *_componentQueue;
    NSLock *_componentQueueLock;
    NSRecursiveLock *_componentQueueProcessingLock;
    struct __CFRunLoopSource *_runloopSource;
    BOOL _pendingComponentQueueProcessing;
    BOOL _busyForwarding;
    BOOL _offMainThread;
}

- (void)dealloc;

@end

