//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/UNSNotificationSchedulerDelegate-Protocol.h>

@class NSArray, NSHashTable, NSMutableArray, NSString, ObjectUpdates, UNSNotificationScheduler;

@interface ClockManager : NSObject <UNSNotificationSchedulerDelegate>
{
    BOOL _performingUpgrade;
    NSMutableArray *_scheduledLocalNotifications;
    ObjectUpdates *_localNotificationUpdates;
    BOOL runningInAssistantPlugin;
    BOOL ignoringNotificationPostRequests;
    UNSNotificationScheduler *_notificationScheduler;
    NSHashTable *_notificationObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isIgnoringNotificationPostRequests) BOOL ignoringNotificationPostRequests; // @synthesize ignoringNotificationPostRequests;
@property (strong, nonatomic) NSHashTable *notificationObservers; // @synthesize notificationObservers=_notificationObservers;
@property (strong, nonatomic) UNSNotificationScheduler *notificationScheduler; // @synthesize notificationScheduler=_notificationScheduler;
@property (nonatomic, getter=isRunningInAssistantPlugin) BOOL runningInAssistantPlugin; // @synthesize runningInAssistantPlugin;
@property (readonly, nonatomic) NSArray *scheduledLocalNotificationsCache;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ObjectUpdates *updatesToLocalNotificationsCache;

+ (void)loadUserPreferences;
+ (void)saveAndNotifyForUserPreferences:(BOOL)arg1 localNotifications:(BOOL)arg2;
+ (int)sectionFromClockAppURL:(id)arg1;
+ (id)sharedManager;
+ (id)urlForClockAppSection:(int)arg1;
- (void).cxx_destruct;
- (void)_refreshScheduledLocalNotificationsCacheWithNotifications:(id)arg1;
- (void)addNotificationObserver:(id)arg1;
- (void)cancelAllNotifications;
- (void)cancelLocalNotification:(id)arg1;
- (void)cancelLocalNotifications:(id)arg1;
- (BOOL)containsRemovedNotification:(id)arg1;
- (BOOL)discardOldVersion;
- (id)init;
- (void)notificationScheduler:(id)arg1 didChangeScheduledLocalNotifications:(id)arg2;
- (void)notificationScheduler:(id)arg1 didFireLocalNotifications:(id)arg2;
- (void)postUserPreferencesChangedNotification;
- (void)refreshScheduledLocalNotificationsCache;
- (void)refreshScheduledLocalNotificationsCacheAsynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeNotificationObserver:(id)arg1;
- (void)resetUpdatesToLocalNotificationsCache;
- (void)scheduleLocalNotification:(id)arg1;
- (void)scheduleLocalNotifications:(id)arg1;
- (BOOL)upgrade;
- (BOOL)upgradeIfNeverAttempted;

@end
