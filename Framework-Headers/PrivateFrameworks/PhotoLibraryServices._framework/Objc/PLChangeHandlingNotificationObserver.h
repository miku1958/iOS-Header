//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PLChangeHandlingNotificationObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSObject<OS_dispatch_queue> *_lowNotifyQueue;
    NSObject<OS_dispatch_queue> *_highNotifyQueue;
    int _notifyTokenLow;
    int _notifyTokenHigh;
    CDUnknownBlockType _notificationBlock;
    double _throttleInterval;
}

- (void).cxx_destruct;
- (void)_inq_handleHighPriorityNotification;
- (void)_inq_handleLowPriorityNotification;
- (void)_inq_handleThrottleTimer;
- (void)_inq_startObservingRemoteNotificationsWithBlock:(CDUnknownBlockType)arg1;
- (void)_inq_stopObservingRemoteNotifications;
- (void)_inq_suspendIfThrottling;
- (void)dealloc;
- (id)initWithLowPriorityThrottleInterval:(double)arg1;
- (void)startObservingRemoteNotificationsWithBlock:(CDUnknownBlockType)arg1;
- (void)stopObservingRemoteNotifications;

@end

