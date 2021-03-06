//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WBSDistributedNotificationObserver : NSObject
{
    NSString *_notificationName;
    long long _notificationType;
    BOOL _observing;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    CDUnknownBlockType _notificationHandler;
    CDUnknownBlockType _timeoutHandler;
}

@property (copy) CDUnknownBlockType notificationHandler;
@property (copy) CDUnknownBlockType timeoutHandler;

- (void).cxx_destruct;
- (void)_didReceiveNotification:(id)arg1;
- (void)_didTimeOut;
- (void)_invalidateTimeoutTimer;
- (void)_scheduleTimeoutTimerWithTimeout:(double)arg1;
- (void)_startObserving;
- (void)_stopObserving;
- (id)init;
- (id)initWithNotificationName:(id)arg1;
- (id)initWithNotificationName:(id)arg1 type:(long long)arg2;
- (void)stopWaiting;
- (void)waitWithTimeout:(double)arg1;

@end

