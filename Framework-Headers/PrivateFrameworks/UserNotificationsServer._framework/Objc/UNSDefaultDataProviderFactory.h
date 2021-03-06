//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/BBObserverDelegate-Protocol.h>

@class BBDataProviderConnection, BBObserver, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UNSApplicationLauncher, UNSAttachmentsService, UNSDaemonLauncher, UNSLocalizationService, UNSNotificationCategoryRepository, UNSNotificationRepository, UNSNotificationTopicRepository, UNSSettingsGateway;
@protocol OS_dispatch_queue;

@interface UNSDefaultDataProviderFactory : NSObject <BBObserverDelegate>
{
    NSMutableDictionary *_bundleIdentifierToDataProvider;
    NSMutableSet *_authorizedBundleIdentifiers;
    NSMutableSet *_supportedBundleIdentifiers;
    NSMutableArray *_observers;
    UNSApplicationLauncher *_appLauncher;
    UNSDaemonLauncher *_daemonLauncher;
    UNSLocalizationService *_localizationService;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationTopicRepository *_topicRepository;
    UNSAttachmentsService *_attachmentsService;
    BBDataProviderConnection *_dataProviderConnection;
    BBObserver *_settingsObserver;
    UNSSettingsGateway *_settingsGateway;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_addObserver:(id)arg1;
- (void)_queue_createDataProviderWithNotificationSourceDescription:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_queue_createNewDefaultDataProviders:(id)arg1;
- (id)_queue_effectiveSectionInfoForBundleIdentifier:(id)arg1;
- (id)_queue_notificationSettingsForBundleIdentifier:(id)arg1;
- (id)_queue_notificationSettingsForTopicsWithBundleIdentifier:(id)arg1;
- (void)_queue_notificationSourceDidInstall:(id)arg1;
- (void)_queue_notificationSourceDidUninstall:(id)arg1;
- (void)_queue_notificationSourcesDidInstall:(id)arg1;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)_queue_removeDataProviderWithBundleIdentifier:(id)arg1;
- (void)_queue_removeObserver:(id)arg1;
- (void)_queue_sectionInfoDidChange:(id)arg1;
- (id)_queue_sectionInfoForBundleIdentifier:(id)arg1;
- (void)_queue_setCriticalAlertAuthorization:(BOOL)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_setSectionInfo:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_updateSettingsWithAuthorizationStatus:(long long)arg1 options:(unsigned long long)arg2 expirationDate:(id)arg3 lastUserGrantDate:(id)arg4 forNotificationSourceDescription:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_queue_updateSettingsWithAuthorizationStatus:(long long)arg1 options:(unsigned long long)arg2 forNotificationSourceDescription:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithApplicationLauncher:(id)arg1 daemonLauncher:(id)arg2 categoryRepository:(id)arg3 notificationRepository:(id)arg4 attachmentsService:(id)arg5 topicRepository:(id)arg6 localizationService:(id)arg7 settingsGateway:(id)arg8;
- (id)notificationSettingsForBundleIdentifier:(id)arg1;
- (id)notificationSettingsForTopicsWithBundleIdentifier:(id)arg1;
- (void)notificationSourcesDidInstall:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)observer:(id)arg1 removeSection:(id)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)requestAuthorizationStatus:(long long)arg1 withOptions:(unsigned long long)arg2 expirationDate:(id)arg3 lastUserGrantDate:(id)arg4 forNotificationSourceDescription:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)requestAuthorizationStatus:(long long)arg1 withOptions:(unsigned long long)arg2 forNotificationSourceDescription:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestRemoveAuthorizationforNotificationSourceDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setCriticalAlertAuthorization:(BOOL)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

