//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSString;
@protocol OS_dispatch_queue;

@interface CPDistributedNotificationCenter : NSObject
{
    NSString *_centerName;
    NSLock *_lock;
    struct __CFRunLoopSource *_receiveNotificationSource;
    BOOL _isServer;
    struct __CFDictionary *_sendPorts;
    unsigned long long _startCount;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (struct __CFDictionary *)_serverPortToNotificationCenterMap;
+ (id)_serverPortToNotificationCenterMapDispatchQueue;
+ (id)centerForServerPort:(unsigned int)arg1;
+ (id)centerNamed:(id)arg1;
+ (void)setCenter:(id)arg1 forServerPort:(unsigned int)arg2;
- (void)_checkIn;
- (void)_checkOutAndRemoveSource;
- (void)_createReceiveSourceForRunLoop:(struct __CFRunLoop *)arg1;
- (id)_initWithServerName:(id)arg1;
- (void)_notificationServerWasRestarted;
- (void)_receivedCheckIn:(unsigned int)arg1 auditToken:(CDStruct_6ad76789 *)arg2;
- (void)dealloc;
- (void)deliverNotification:(id)arg1 userInfo:(id)arg2;
- (id)name;
- (void)postNotificationName:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (BOOL)postNotificationName:(id)arg1 userInfo:(id)arg2 toBundleIdentifier:(id)arg3;
- (void)runServer;
- (void)runServerOnCurrentThread;
- (void)startDeliveringNotificationsToMainThread;
- (void)startDeliveringNotificationsToRunLoop:(struct __CFRunLoop *)arg1;
- (void)stopDeliveringNotifications;

@end

