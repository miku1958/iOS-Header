//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, UNSBundleLibrarian, UNSKeyedDataStoreRepository, UNSKeyedObservable;
@protocol OS_dispatch_queue, UNSNotificationRepositoryDelegate, UNSNotificationRepositorySettingsProvider;

@interface UNSNotificationRepository : NSObject
{
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSMutableSet *_unlimitedBodyBundleIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
    UNSBundleLibrarian *_librarian;
    id<UNSNotificationRepositoryDelegate> _delegate;
    id<UNSNotificationRepositorySettingsProvider> _settingsProvider;
}

@property (nonatomic) id<UNSNotificationRepositoryDelegate> delegate; // @synthesize delegate=_delegate;
@property (weak, nonatomic) id<UNSNotificationRepositorySettingsProvider> settingsProvider; // @synthesize settingsProvider=_settingsProvider;

- (void).cxx_destruct;
- (void)_logNotification:(id)arg1 forBundleIdentifier:(id)arg2;
- (long long)_maxObjectsPerKey;
- (id)_notificationsForObjects:(id)arg1;
- (id)_queue_badgeNumberForBundleIdentifier:(id)arg1;
- (id)_queue_notificationRecordForForIdentifier:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_notificationRecordsForBundleIdentifier:(id)arg1;
- (void)_queue_notifyObserversNotificationsDidAddNotifications:(id)arg1 replaceNotifications:(id)arg2 replacementNotifications:(id)arg3 removedNotifications:(id)arg4 shouldRepost:(BOOL)arg5 forBundleIdentifier:(id)arg6;
- (void)_queue_performMigration;
- (void)_queue_performMigrationForBundleIdentifier:(id)arg1;
- (void)_queue_performMigrationForPushStore;
- (void)_queue_performMigrationForPushStoreAtPath:(id)arg1;
- (void)_queue_performMigrationForUserNotificationsStore;
- (void)_queue_performValidation;
- (void)_queue_removeAllNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)_queue_removeInvalidNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)_queue_removeNotificationRecordsPassingTest:(CDUnknownBlockType)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_saveNotificationRecord:(id)arg1 shouldRepost:(BOOL)arg2 withOptions:(unsigned long long)arg3 forBundleIdentifier:(id)arg4;
- (void)_queue_setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_setBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_triggerInvalidationForFirstUnlock;
- (BOOL)_shouldPersistNotificationRecord:(id)arg1 forBundleSettings:(id)arg2 perTopicSettings:(id)arg3;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)allBundleIdentifiers;
- (id)badgeNumberForBundleIdentifier:(id)arg1;
- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg1;
- (id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2 librarian:(id)arg3;
- (id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3;
- (id)notificationRecordForForIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
- (id)notificationRecordsForBundleIdentifier:(id)arg1;
- (void)notificationSourcesDidInstall:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)performMigration;
- (void)performValidation;
- (void)removeAllNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)removeInvalidNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)removeNotificationRecordsPassingTest:(CDUnknownBlockType)arg1 forBundleIdentifier:(id)arg2;
- (void)removeNotificationRepository;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removeStoreForBundleIdentifier:(id)arg1;
- (void)saveNotificationRecord:(id)arg1 shouldRepost:(BOOL)arg2 forBundleIdentifier:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end

