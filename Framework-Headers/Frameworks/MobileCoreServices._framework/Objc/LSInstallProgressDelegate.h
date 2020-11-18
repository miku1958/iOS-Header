//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MobileCoreServices/LSInstallProgressProtocol-Protocol.h>
#import <MobileCoreServices/NSXPCListenerDelegate-Protocol.h>

@class LSInstallProgressList, LSObserverTimer, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface LSInstallProgressDelegate : NSObject <NSXPCListenerDelegate, LSInstallProgressProtocol>
{
    NSMutableDictionary *_observers;
    LSInstallProgressList *_progresses;
    NSMutableOrderedSet *_orderedInstalls;
    NSMutableDictionary *_installIndexes;
    NSMutableSet *_inactiveInstalls;
    LSObserverTimer *installsStartedTimer;
    LSObserverTimer *iconsUpdatedTimer;
    LSObserverTimer *installsUpdatedTimer;
    LSObserverTimer *installsFinishedTimer;
    LSObserverTimer *didUninstallTimer;
    NSObject<OS_dispatch_queue> *_installControlsQueue;
    NSObject<OS_dispatch_queue> *_observersQueue;
    BOOL _usingNetwork;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)beginListening;
- (void)addObserver:(id)arg1 withUUID:(id)arg2;
- (void)beginObservingConnection;
- (void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3;
- (void)dealloc;
- (void)endObservingConnection;
- (void)handleCancelInstallationForApp:(id)arg1;
- (id)init;
- (void)installationEndedForApplication:(id)arg1;
- (void)installationFailedForApplication:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)parentProgressForApplication:(id)arg1 andPhase:(unsigned long long)arg2 isActive:(BOOL)arg3;
- (void)placeholderInstalledForApp:(id)arg1;
- (void)rebuildInstallIndexes;
- (void)removeObserverWithUUID:(id)arg1;
- (void)restoreInactiveInstalls;
- (void)sendAppControlsNotificationForApp:(id)arg1 withName:(id)arg2;
- (void)sendChangeNotificationForApp:(id)arg1;
- (void)sendFailedNotificationForApp:(id)arg1 isUninstall:(BOOL)arg2;
- (void)sendIconUpdatedNotificationForApp:(id)arg1;
- (void)sendInstalledNotificationForApp:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)sendInstalledNotificationForApps:(id)arg1 Plugins:(id)arg2;
- (void)sendNetworkUsageChangedNotification;
- (void)sendUninstalledNotificationForApp:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)sendUninstalledNotificationForApps:(id)arg1 Plugins:(id)arg2;
- (void)sendWillUninstallNotificationForApps:(id)arg1 Plugins:(id)arg2 isUpdate:(BOOL)arg3;

@end

