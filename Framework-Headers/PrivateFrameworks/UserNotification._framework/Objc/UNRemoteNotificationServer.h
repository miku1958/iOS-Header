//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UserNotification/APSConnectionDelegate-Protocol.h>
#import <UserNotification/FBProcessManagerObserver-Protocol.h>
#import <UserNotification/FBProcessObserver-Protocol.h>
#import <UserNotification/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class BKSApplicationStateMonitor, LSApplicationWorkspace, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue, UNRemoteNotificationServerDelegate, UNSystemStateProviding;

@interface UNRemoteNotificationServer : NSObject <APSConnectionDelegate, LSApplicationWorkspaceObserverProtocol, FBProcessManagerObserver, FBProcessObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    BKSApplicationStateMonitor *_appStateMonitor;
    LSApplicationWorkspace *_appWorkspace;
    id<UNSystemStateProviding> _systemStateProvider;
    NSMutableDictionary *_bundleIdentifiersToClients;
    NSMutableDictionary *_environmentsToConnections;
    NSMutableSet *_bundleIdentifiersNeedingToken;
    NSMutableSet *_userNotificationEnabledBundleIdentifiers;
    NSMutableSet *_debuggingBundleIdentifiers;
    NSMutableSet *_foregroundBundleIdentifiers;
    NSMutableSet *_importantBundleIdentifiers;
    id<UNRemoteNotificationServerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<UNRemoteNotificationServerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong) id<UNSystemStateProviding> systemStateProvider; // @synthesize systemStateProvider=_systemStateProvider;

+ (id)_environmentFromAuditToken:(CDStruct_6ad76789 *)arg1;
+ (id)environmentFromAuditToken:(CDStruct_6ad76789 *)arg1;
- (id)_portNameForEnvironmentName:(id)arg1;
- (id)_queue_allTopicsForApplication:(id)arg1;
- (void)_queue_appDebugStateDidChange:(id)arg1;
- (void)_queue_appDidBecomeBackground:(id)arg1;
- (void)_queue_appDidBecomeForeground:(id)arg1;
- (void)_queue_appDidBecomeImportant:(id)arg1;
- (void)_queue_appDidBecomeUnimportant:(id)arg1;
- (void)_queue_appDidGetKilledByUser:(id)arg1;
- (void)_queue_appImportanceChanged:(id)arg1;
- (void)_queue_appStateDidChange:(id)arg1;
- (id)_queue_backgroundAppRefreshBundleIdentifierMapping;
- (void)_queue_calculateTopics;
- (id)_queue_cloudDatabaseTopicsForApplication:(id)arg1;
- (void)_queue_connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)_queue_connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)_queue_connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
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
- (void)_queue_moveTopicsForApp:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3;
- (void)_queue_registerApplicationWithBundleIdentifier:(id)arg1 forEnvironment:(id)arg2 appWantsPush:(BOOL)arg3;
- (unsigned long long)_queue_remoteNotificationTypesForBundleIdentifier:(id)arg1;
- (void)_queue_removeClientForBundleIdentifier:(id)arg1;
- (void)_queue_requestTokenForClient:(id)arg1;
- (void)_queue_setBackgroundAppRefreshAllowed:(BOOL)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_setBackgroundDeliveryDisabled:(BOOL)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_userNotificationSettingsDidChange:(id)arg1;
- (void)_queue_userNotificationsChangedStateForBundleIdentifier:(id)arg1 becameEnabled:(BOOL)arg2;
- (void)_userNotificationSettingsDidChange:(id)arg1;
- (void)allowsRemoteNotificationsForBundleIdentifier:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)applicationProcessDebuggingStateDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)backgroundAppRefreshBundleIdentifierMappingWithResult:(CDUnknownBlockType)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)dealloc;
- (id)initWithSystemStateProvider:(id)arg1;
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)remoteNotificationTypesForBundleIdentifier:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)requestRemoteNotificationTokenWithEnvironment:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setAllowsBackgroundRefresh:(BOOL)arg1 forBundleIdentifier:(id)arg2;

@end

