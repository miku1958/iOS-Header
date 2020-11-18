//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/UNUserNotificationServiceConnectionObserver-Protocol.h>

@class NSMutableArray, NSString;
@protocol UNUserNotificationCenterDelegate;

@interface UNUserNotificationCenter : NSObject <UNUserNotificationServiceConnectionObserver>
{
    id<UNUserNotificationCenterDelegate> _delegate;
    NSString *_bundleIdentifier;
    NSMutableArray *_observers;
}

@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UNUserNotificationCenterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsContentExtensions;

+ (id)currentNotificationCenter;
+ (BOOL)supportsContentExtensions;
- (void).cxx_destruct;
- (void)addNotificationRequest:(id)arg1;
- (void)addNotificationRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)addNotificationRequests:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)addObserver:(id)arg1;
- (void)didChangePendingNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)didDeliverNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)getBadgeNumberWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getDeliveredNotificationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getNotificationCategoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getNotificationSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getPendingNotificationRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleProxy:(id)arg1;
- (void)removeAllDeliveredNotifications;
- (void)removeAllPendingNotificationRequests;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1;
- (void)removeSimilarNotificationRequests:(id)arg1;
- (void)removeSimilarNotificationRequests:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setBadgeNumber:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setBadgeString:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setNotificationCategories:(id)arg1;
- (void)setNotificationRequests:(id)arg1;
- (void)setNotificationRequests:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

