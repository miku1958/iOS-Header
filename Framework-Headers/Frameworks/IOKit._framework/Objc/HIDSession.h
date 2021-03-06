//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HIDSession : NSObject
{
    struct {
        struct __IOHIDEventSystem *client;
        CDUnknownFunctionPointerType callback;
        void *refCon;
        struct __IOHIDSessionQueueContext *queueContext;
        struct _opaque_pthread_cond_t {
            long long __sig;
            char __opaque[40];
        } stateCondition;
        unsigned int state;
        unsigned int stateBusy;
        NSObject<OS_dispatch_queue> *eventDispatchQueueSession;
        NSObject<OS_dispatch_source> *eventDispatchSource;
        struct __CFArray *eventDipsatchPending;
        struct __CFDictionary *properties;
        unsigned int logLevel;
        struct __CFSet *serviceSet;
        struct __CFArray *simpleSessionFilters;
        struct __CFArray *sessionFilters;
        struct __CFArray *pendingSessionFilters;
        unsigned long long activityLastTimestamp;
        struct timeval activityLastTime;
        struct __CFSet *activityNotificationSet;
    } _session;
}

- (unsigned long long)_cfTypeID;
- (void)dealloc;

@end

