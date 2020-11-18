//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UserNotificationServices/UNSNotificationSchedulerClientProtocol-Protocol.h>
#import <UserNotificationServices/UNSNotificationSchedulerServerProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface UNSNotificationSchedulerConnection : NSObject <UNSNotificationSchedulerClientProtocol, UNSNotificationSchedulerServerProtocol>
{
    NSMutableDictionary *_observersByBundleIdentifier;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *observersByBundleIdentifier; // @synthesize observersByBundleIdentifier=_observersByBundleIdentifier;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void)_invalidate;
- (void)_queue_addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_didChangeScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_didFireLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_ensureConnection;
- (void)_queue_interruptedConnection;
- (void)_queue_invalidatedConnection;
- (void)_queue_removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)addScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)cancelScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)didChangeScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)didFireLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)init;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)scheduleForBundleIdentifier:(id)arg1 fetchRequest:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)scheduledLocalNotificationsForBundleIdentifier:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)setObservingScheduledLocalNotifications:(BOOL)arg1 forBundleIdentifier:(id)arg2;
- (void)setScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)snoozeScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end

