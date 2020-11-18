//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UserNotification/NSXPCListenerDelegate-Protocol.h>
#import <UserNotification/UNSNotificationSchedulerServerProtocol-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface UNNotificationSchedulerConnectionListener : NSObject <NSXPCListenerDelegate, UNSNotificationSchedulerServerProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableDictionary *_connectionsByBundleIdentifier;
    NSMapTable *_bundleIdentifiersByConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void)_addConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (BOOL)_isAllowedToScheduleForBundleIdentifier:(id)arg1;
- (void)_localNotificationDidFire:(id)arg1;
- (void)_localNotificationsDidChange:(id)arg1;
- (void)_queue_addConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_connectionsForBundleIdentifier:(id)arg1;
- (void)_queue_localNotificationDidFire:(id)arg1;
- (void)_queue_localNotificationsDidChange:(id)arg1;
- (void)_queue_removeConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_removeConnectionForAllBundleIdentifiers:(id)arg1;
- (void)_removeConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_removeConnectionForAllBundleIdentifiers:(id)arg1;
- (void)addScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)cancelScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)scheduleForBundleIdentifier:(id)arg1 fetchRequest:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)scheduledLocalNotificationsForBundleIdentifier:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)setObservingScheduledLocalNotifications:(BOOL)arg1 forBundleIdentifier:(id)arg2;
- (void)setScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)snoozeScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)snoozeScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end

