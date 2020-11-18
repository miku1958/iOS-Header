//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMMessageContext, NSArray, NSMutableArray, NSProtocolChecker, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface IMLocalObjectInternal : NSObject
{
    IMMessageContext *_currentMessageContext;
    NSRecursiveLock *_lock;
    id _target;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_portName;
    NSString *_processName;
    NSProtocolChecker *_protocolChecker;
    NSArray *_whitelistedClasses;
    struct __CFRunLoopSource *_runloopSource;
    NSRecursiveLock *_componentQueueProcessingLock;
    NSMutableArray *_componentQueue;
    struct os_unfair_lock_s _componentQueueLock;
    BOOL _pendingComponentQueueProcessing;
    BOOL _busyForwarding;
    BOOL _offMainThread;
    BOOL _wasInterrupted;
}

- (void)dealloc;

@end
