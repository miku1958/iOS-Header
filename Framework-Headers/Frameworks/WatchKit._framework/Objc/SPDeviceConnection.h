//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchKit/SPLocalApplicationProtocol-Protocol.h>

@class NSHashTable, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, SPDeviceConnectionDelegate;

@interface SPDeviceConnection : NSObject <SPLocalApplicationProtocol>
{
    id<SPDeviceConnectionDelegate> _delegate;
    NSXPCConnection *_serverConnection;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SPDeviceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSHashTable *observers; // @synthesize observers=_observers;
@property (strong) NSXPCConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedDeviceConnection;
- (void).cxx_destruct;
- (void)_enumerateObserversSafely:(CDUnknownBlockType)arg1;
- (void)activeComplicationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)addObserver:(id)arg1;
- (void)cancelPendingInstallations;
- (id)connectionProxy:(CDUnknownBlockType)arg1 caller:(const char *)arg2;
- (void)createXPCConnectionIfNecessary;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInfoForApplicationWithContainingApplicationBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledApplicationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledComplicationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInstalledGlancesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchProvisioningProfilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAlwaysInstallWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)hasEntitlement:(CDUnknownBlockType)arg1 caller:(const char *)arg2;
- (void)hideUserNotification;
- (id)init;
- (void)installAllApplications;
- (void)installApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installApplication:(id)arg1 completionWithError:(CDUnknownBlockType)arg2;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completionWithError:(CDUnknownBlockType)arg3;
- (void)installProvisioningProfileWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidateXPCConnection;
- (id)localeForUserNotification;
- (void)receiveData:(id)arg1;
- (void)removeApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1;
- (void)removeProvisioningProfileWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAlwaysInstall:(id)arg1;
- (void)setLogLevel:(id)arg1;
- (void)showUserNotification:(long long)arg1 applicationName:(id)arg2 extensionBundleID:(id)arg3;
- (void)showUserNotification:(long long)arg1 bundleID:(id)arg2;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)wakeExtensionForWatchApp:(id)arg1;

@end

