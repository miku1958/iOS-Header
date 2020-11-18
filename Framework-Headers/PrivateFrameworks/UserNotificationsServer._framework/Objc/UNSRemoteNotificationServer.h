//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/APSConnectionDelegate-Protocol.h>
#import <UserNotificationsServer/FBProcessManagerObserver-Protocol.h>
#import <UserNotificationsServer/FBProcessObserver-Protocol.h>

@class BKSApplicationStateMonitor, NSMutableDictionary, NSMutableSet, NSSet, NSString, UNSApplicationLauncher, UNSAttachmentsService, UNSNotificationRepository, UNSNotificationSettingsService;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, UNSRemoteNotificationServerObserver, UNSSystemStateProviding;

@interface UNSRemoteNotificationServer : NSObject <APSConnectionDelegate, FBProcessManagerObserver, FBProcessObserver>
{
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationSettingsService *_notificationSettingsService;
    id<UNSSystemStateProviding> _systemStateProvider;
    UNSAttachmentsService *_attachmentsService;
    UNSApplicationLauncher *_applicationLauncher;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_extensionQueue;
    NSObject<OS_dispatch_semaphore> *_extensionSemaphore;
    NSObject<OS_dispatch_queue> *_apsQueue;
    NSMutableSet *_debuggingBundleIdentifiers;
    NSMutableSet *_foregroundBundleIdentifiers;
    NSMutableSet *_importantBundleIdentifiers;
    NSMutableSet *_userNotificationEnabledBundleIdentifiers;
    NSSet *_backgroundAppRefreshBlackList;
    NSMutableDictionary *_bundleIdentifiersToClients;
    NSMutableDictionary *_bundleIdentifiersToAppDescriptions;
    NSMutableDictionary *_environmentsToConnections;
    BKSApplicationStateMonitor *_appStateMonitor;
    NSMutableSet *_bundleIdentifiersNeedingToken;
    id<UNSRemoteNotificationServerObserver> _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) id<UNSRemoteNotificationServerObserver> observer; // @synthesize observer=_observer;
@property (readonly) Class superclass;
@property (strong) id<UNSSystemStateProviding> systemStateProvider; // @synthesize systemStateProvider=_systemStateProvider;

+ (id)_environmentFromAuditToken:(CDStruct_6ad76789 *)arg1;
+ (id)environmentFromAuditToken:(CDStruct_6ad76789 *)arg1;
- (void).cxx_destruct;
- (id)_initWithSettingsService:(id)arg1 notificationRepository:(id)arg2 systemStateProvider:(id)arg3 attachmentsService:(id)arg4 applicationLauncher:(id)arg5 queue:(id)arg6 extensionQueue:(id)arg7 apsQueue:(id)arg8 applicationStateMonitor:(id)arg9;
- (id)_portNameForEnvironmentName:(id)arg1;
- (void)_queue_addAppDescriptions:(id)arg1;
- (id)_queue_allTopicsForApplication:(id)arg1;
- (void)_queue_appDebugStateDidChange:(id)arg1;
- (void)_queue_appDidBecomeBackground:(id)arg1;
- (void)_queue_appDidBecomeForeground:(id)arg1;
- (void)_queue_appDidBecomeImportant:(id)arg1;
- (void)_queue_appDidBecomeUnimportant:(id)arg1;
- (void)_queue_appDidGetKilledByUser:(id)arg1;
- (void)_queue_appImportanceChanged:(id)arg1;
- (void)_queue_appStateDidChange:(id)arg1;
- (void)_queue_applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)_queue_applicationsDidDenyNotificationSettings:(id)arg1;
- (void)_queue_backgroundRefreshApplicationsDidChange;
- (void)_queue_calculateTopics;
- (BOOL)_queue_canDeliverMessageToBundle:(id)arg1;
- (void)_queue_connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)_queue_connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)_queue_deliverBackgroundContentAvailablePushForNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_queue_deliverNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3;
- (void)_queue_didReceiveIncomingMessage:(id)arg1;
- (void)_queue_invalidateTokenForBundleIdentifier:(id)arg1;
- (BOOL)_queue_isAppDebugging:(id)arg1;
- (BOOL)_queue_isAppForeground:(id)arg1;
- (BOOL)_queue_isAppImportant:(id)arg1;
- (BOOL)_queue_isBackgroundAppRefreshAllowedForBundleIdentifier:(id)arg1;
- (BOOL)_queue_isBackgroundAppRefreshSupportedForApplication:(id)arg1;
- (BOOL)_queue_isNewsstandApplication:(id)arg1;
- (BOOL)_queue_isNewsstandContentBackgroundModeSupportedForApplication:(id)arg1;
- (BOOL)_queue_isNewsstandPushEnabledForApplication:(id)arg1;
- (BOOL)_queue_isPushedEnabledForApplication:(id)arg1;
- (BOOL)_queue_isUserNotificationEnabled:(id)arg1;
- (BOOL)_queue_isUserNotificationEnabledForApplication:(id)arg1;
- (void)_queue_modifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 extensionWrapper:(id)arg4;
- (void)_queue_moveTopicsForApp:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3;
- (void)_queue_registerApplicationWithBundleIdentifier:(id)arg1 forEnvironment:(id)arg2 appWantsPush:(BOOL)arg3;
- (void)_queue_reloadBackgroundAppRefreshBlackList;
- (void)_queue_removeAppDescriptionForBundleIdentifier:(id)arg1;
- (void)_queue_removeClientForBundleIdentifier:(id)arg1;
- (void)_queue_requestTokenForClient:(id)arg1;
- (void)_queue_setBackgroundAppRefreshAllowed:(BOOL)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_setBackgroundDeliveryDisabled:(BOOL)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_tryToModifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3;
- (void)_queue_userNotificationsChangedStateForBundleIdentifier:(id)arg1 becameEnabled:(BOOL)arg2;
- (void)allowsRemoteNotificationsForBundleIdentifier:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)applicationProcessDebuggingStateDidChange:(id)arg1;
- (void)applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)applicationsDidDenyNotificationSettings:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)backgroundRefreshApplicationsDidChange;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)dealloc;
- (id)initWithSettingsService:(id)arg1 notificationRepository:(id)arg2 systemStateProvider:(id)arg3 attachmentsService:(id)arg4 applicationLauncher:(id)arg5;
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)requestRemoteNotificationTokenWithEnvironment:(id)arg1 forBundleIdentifier:(id)arg2;

@end
