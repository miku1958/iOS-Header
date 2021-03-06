//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/UNUserNotificationCenterDelegateConnectionListenerDelegate-Protocol.h>
#import <UserNotifications/UNUserNotificationServiceConnectionObserver-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, UNUserNotificationCenterDelegate, UNUserNotificationCenterDelegatePrivate;

@interface UNUserNotificationCenter : NSObject <UNUserNotificationServiceConnectionObserver, UNUserNotificationCenterDelegateConnectionListenerDelegate>
{
    id<UNUserNotificationCenterDelegate> _delegate;
    NSString *_bundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    id<UNUserNotificationCenterDelegatePrivate> _privateDelegate;
}

@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UNUserNotificationCenterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<UNUserNotificationCenterDelegatePrivate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsContentExtensions;

+ (id)currentNotificationCenter;
+ (BOOL)supportsContentExtensions;
- (void).cxx_destruct;
- (void)addNotificationRequest:(id)arg1;
- (void)addNotificationRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)badgeNumber;
- (id)clearedInfoForDataProviderMigration;
- (id)deliveredNotifications;
- (void)didChangeSettings:(id)arg1;
- (void)didOpenApplicationForResponse:(id)arg1;
- (void)didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getBadgeNumberWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getDeliveredNotificationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getNotificationCategoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getNotificationSettingsForTopicsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getNotificationSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getNotificationTopicsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getPendingNotificationRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 queue:(id)arg2;
- (id)notificationCategories;
- (id)notificationSettings;
- (id)notificationSettingsForTopics;
- (id)notificationTopics;
- (id)pendingNotificationRequests;
- (void)removeAllDeliveredNotifications;
- (void)removeAllPendingNotificationRequests;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1;
- (void)removeSimilarNotificationRequests:(id)arg1;
- (void)replaceContentForRequestWithIdentifier:(id)arg1 replacementContent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestRemoveAuthorizationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setBadgeNumber:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setBadgeString:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setNotificationCategories:(id)arg1;
- (void)setNotificationRequests:(id)arg1;
- (void)setNotificationTopics:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setWantsNotificationResponsesDelivered;

@end

