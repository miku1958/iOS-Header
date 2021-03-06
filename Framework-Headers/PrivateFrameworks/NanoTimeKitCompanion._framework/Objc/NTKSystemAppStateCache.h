//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/LSApplicationWorkspaceObserverProtocol-Protocol.h>
#import <NanoTimeKitCompanion/NTKSystemAppStateCache-Protocol.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface NTKSystemAppStateCache : NSObject <LSApplicationWorkspaceObserverProtocol, NTKSystemAppStateCache>
{
    NSMutableSet *_restrictedSystemApps;
    NSMutableSet *_removedSystemApps;
    NSMutableSet *_cachedAppStateBundleId;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_tinCanBundleID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_deviceDidPair;
- (void)_queue_applicationsDidChange:(id)arg1 state:(unsigned long long)arg2;
- (id)_queue_cachedAppStateBundleId;
- (void)_queue_deviceDidPair;
- (void)_queue_initializeRemovedSystemApps;
- (void)_queue_initializeRestrictedSystemApps;
- (id)_queue_removedSystemApps;
- (id)_queue_restrictedSystemApps;
- (void)_queue_tinCanSettingsChanged;
- (void)_queue_verifyStateForAppBundleId:(id)arg1;
- (void)_tinCanSettingsChanged;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isRemovedSystemApp:(id)arg1;
- (BOOL)isRestrictedSystemApp:(id)arg1;
- (void)prewarmGizmoDaemon;
- (id)removedSystemApps;
- (id)restrictedSystemApps;

@end

