//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperation;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __NSOperationQueueInternal : NSObject
{
    struct _opaque_pthread_mutex_t __queueLock;
    NSOperation *__firstOperation;
    NSOperation *__lastOperation;
    NSOperation *__pendingFirstOperation;
    NSOperation *__pendingLastOperation;
    NSOperation *__firstPriOperation[5];
    NSOperation *__lastPriOperation[5];
    NSObject<OS_dispatch_queue> *__pending_barrier;
    long long __maxNumOps;
    int __actualMaxNumOps;
    int __numExecOps;
    unsigned int __unused2;
    unsigned char __mainQ;
    unsigned char __suspended;
    unsigned char __overcommit;
    BOOL __propertyQOS;
    NSObject<OS_dispatch_queue> *__dispatch_queue;
    char __nameBuffer[160];
}

- (void)dealloc;
- (void)finalize;
- (id)init;

@end

