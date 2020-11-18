//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/ACDAccountStoreDelegate-Protocol.h>
#import <AccountsDaemon/NSXPCListenerDelegate-Protocol.h>

@class ACDAccessPluginManager, ACDAuthenticationDialogManager, ACDAuthenticationPluginManager, ACDDataclassOwnersManager, ACRemoteDeviceProxy, NSMutableArray, NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ACDServer : NSObject <NSXPCListenerDelegate, ACDAccountStoreDelegate>
{
    NSXPCListener *_accountStoreListener;
    NSXPCListener *_oauthSignerListener;
    NSXPCListener *_authenticationDialogListener;
    NSMutableArray *_accountStoreClients;
    NSMutableArray *_oauthSignerClients;
    NSMutableArray *_authenticationDialogManagerClients;
    NSMutableDictionary *_entitlementsByConnection;
    NSMutableDictionary *_clientsByConnection;
    NSObject<OS_dispatch_queue> *_deferredConnectionResumeQueue;
    NSObject<OS_dispatch_semaphore> *_deferredConnectionResumeQueueSemaphore;
    NSObject<OS_dispatch_queue> *_performMigrationQueue;
    ACDAuthenticationPluginManager *_authenticationPluginManager;
    ACDAccessPluginManager *_accessPluginManager;
    ACDDataclassOwnersManager *_dataclassOwnersManager;
    ACDAuthenticationDialogManager *_authenticationDialogManager;
    ACRemoteDeviceProxy *_remoteDeviceProxy;
}

@property (strong, nonatomic) ACDAccessPluginManager *accessPluginManager; // @synthesize accessPluginManager=_accessPluginManager;
@property (strong, nonatomic) ACDAuthenticationDialogManager *authenticationDialogManager; // @synthesize authenticationDialogManager=_authenticationDialogManager;
@property (strong, nonatomic) ACDAuthenticationPluginManager *authenticationPluginManager; // @synthesize authenticationPluginManager=_authenticationPluginManager;
@property (strong, nonatomic) ACDDataclassOwnersManager *dataclassOwnersManager; // @synthesize dataclassOwnersManager=_dataclassOwnersManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) ACRemoteDeviceProxy *remoteDeviceProxy; // @synthesize remoteDeviceProxy=_remoteDeviceProxy;
@property (readonly) Class superclass;

+ (id)sharedServer;
- (void).cxx_destruct;
- (void)_beginObservingIDSProxyNotifications;
- (void)_beginObservingLanguageChangeNotfication;
- (void)_beginObservingLaunchNotifications;
- (id)_enumerateAllEntitlementForConnection:(id)arg1;
- (id)_keyForConnection:(id)arg1;
- (id)_newDaemonAccountStoreFilterForClient:(id)arg1;
- (id)_newOAuthSignerForClient:(id)arg1;
- (void)_signalDeferredConnectionResumeQueueSemaphore;
- (void)_stopObservingLanguageChangeNotification;
- (void)accountStoreDidSaveAccounts:(id)arg1;
- (id)clientForConnection:(id)arg1;
- (id)createClientForConnection:(id)arg1;
- (void)credentialsDidChangeForAccountWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)entitlementsForConnection:(id)arg1;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setUpWithAccountStoreConnectionListener:(id)arg1 oauthSignerConnectionListener:(id)arg2 authenticationDialogConnectionListener:(id)arg3;
- (void)shutdown;

@end
