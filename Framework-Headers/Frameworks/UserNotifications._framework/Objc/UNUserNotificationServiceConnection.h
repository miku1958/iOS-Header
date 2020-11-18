//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/UNUserNotificationClientProtocol-Protocol.h>
#import <UserNotifications/UNUserNotificationServerProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface UNUserNotificationServiceConnection : NSObject <UNUserNotificationClientProtocol, UNUserNotificationServerProtocol>
{
    NSMutableDictionary *_observersByBundleIdentifier;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue; // @synthesize callOutQueue=_callOutQueue;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *observersByBundleIdentifier; // @synthesize observersByBundleIdentifier=_observersByBundleIdentifier;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)_queue_addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_ensureConnection;
- (void)_queue_interruptedConnection;
- (void)_queue_invalidatedConnection;
- (void)_queue_removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)addNotificationRequest:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)badgeNumberForBundleIdentifier:(id)arg1;
- (id)clearedInfoForBundleIdentifier:(id)arg1;
- (id)deliveredNotificationsForBundleIdentifier:(id)arg1;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getDeliveredNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getNotificationCategoriesForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getNotificationSettingsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getNotificationTopicsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getPendingNotificationRequestsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)notificationCategoriesForBundleIdentifier:(id)arg1;
- (id)notificationSettingsForBundleIdentifier:(id)arg1;
- (id)notificationSettingsForTopicsWithBundleIdentifier:(id)arg1;
- (id)notificationTopicsForBundleIdentifier:(id)arg1;
- (id)pendingNotificationRequestsForBundleIdentifier:(id)arg1;
- (void)performBlockOnConnectionQueue:(CDUnknownBlockType)arg1;
- (void)removeAllDeliveredNotificationsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeSimilarNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)replaceContentForRequestWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 replacementContent:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestRemoveAuthorizationForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setNotificationCategories:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setNotificationTopics:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setObservingUserNotifications:(BOOL)arg1 forBundleIdentifier:(id)arg2;

@end
