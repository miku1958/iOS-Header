//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppConduit/ACXDeviceConnectionDelegateProtocol-Protocol.h>

@class NSHashTable, NSString, NSXPCConnection;
@protocol ACXDeviceConnectionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ACXDeviceConnection : NSObject <ACXDeviceConnectionDelegateProtocol>
{
    id<ACXDeviceConnectionDelegate> _delegate;
    NSXPCConnection *_xpcConnection;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_observerReEstablishTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACXDeviceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property (strong) NSObject<OS_dispatch_source> *observerReEstablishTimer; // @synthesize observerReEstablishTimer=_observerReEstablishTimer;
@property (readonly) NSHashTable *observers; // @synthesize observers=_observers;
@property (readonly) Class superclass;
@property (strong) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

+ (id)sharedDeviceConnection;
- (void).cxx_destruct;
- (void)_invalidateXPCConnection;
- (BOOL)_onQueue_createXPCConnectionIfNecessary;
- (void)_onQueue_reEstablishObserverConnectionIfNeeded;
- (id)_proxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)activeComplicationsForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activeComplicationsWithErrorCompletion:(CDUnknownBlockType)arg1;
- (void)addObserver:(id)arg1;
- (void)cancelPendingInstallations;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchInstalledApplicationsForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledApplicationsWithErrorCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg1 withErrorCompletion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledComplicationsForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledComplicationsWithErrorCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInstalledGlancesForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledGlancesWithErrorCompletion:(CDUnknownBlockType)arg1;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchProvisioningProfilesForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchProvisioningProfilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAlwaysInstallForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAlwaysInstallWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)installAllApplications;
- (void)installApplication:(id)arg1 completionWithError:(CDUnknownBlockType)arg2;
- (void)installApplication:(id)arg1 onPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completionWithError:(CDUnknownBlockType)arg3;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)installProvisioningProfileWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installProvisioningProfileWithURL:(id)arg1 onPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeApplication:(id)arg1 fromPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeObserver:(id)arg1;
- (void)removeProvisioningProfileWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeProvisioningProfileWithID:(id)arg1 fromPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setAlwaysInstall:(id)arg1;
- (void)setAlwaysInstall:(id)arg1 forDevice:(id)arg2;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 forPairedDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updatedInstallStateForApplicationsWithInfo:(id)arg1;

@end

