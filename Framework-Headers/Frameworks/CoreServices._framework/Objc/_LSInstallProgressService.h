//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreServices/NSXPCListenerDelegate-Protocol.h>

@class LSInstallProgressList, NSArray, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSInstallProgressService : NSObject <NSXPCListenerDelegate>
{
    NSMutableSet *_observers;
    LSInstallProgressList *_progresses;
    NSMutableSet *_publishingStrings;
    NSMutableDictionary *_installIndexes;
    NSMutableOrderedSet *_orderedInstalls;
    NSMutableSet *_inactiveInstalls;
    NSMutableDictionary *_installTypes;
    NSObject<OS_dispatch_queue> *_installControlsQueue;
    NSObject<OS_dispatch_queue> *_observersQueue;
    NSArray *_journalledNotificationsToReplay;
    NSMutableArray *_startupJournalledNotifications;
    BOOL _replayingJournalToNewClients;
    BOOL _usingNetwork;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)beginListening;
+ (int)notificationTypeForOperation:(unsigned long long)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_LSFindPlaceholderApplications;
- (void)_placeholderIconUpdatedForApp:(id)arg1;
- (void)_placeholdersUninstalled:(id)arg1;
- (id)_prepareApplicationProxiesForNotification:(int)arg1 identifiers:(id)arg2 withPlugins:(BOOL)arg3 options:(id)arg4;
- (void)addObserver:(id)arg1;
- (void)addSendNotificationFenceWithTimeout:(double)arg1 fenceBlock:(CDUnknownBlockType)arg2;
- (void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)directlySendNotification:(int)arg1 withProxies:(id)arg2 toObserverProxy:(id)arg3;
- (void)dispatchJournalledNotificationsToConnectedClients;
- (void)dispatchJournalledNotificationsToObserver:(id)arg1;
- (id)init;
- (void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2;
- (void)installationFailedForApplication:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)loadJournalledNotificationsFromDisk;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (SEL)observerSelectorForNotification:(int)arg1;
- (id)parentProgressForApplication:(id)arg1 andPhase:(unsigned long long)arg2 isActive:(BOOL)arg3;
- (void)performJournalRecovery;
- (void)rebuildInstallIndexes;
- (void)removeObserver:(id)arg1;
- (void)restoreInactiveInstalls;
- (void)sendAppControlsNotificationForApp:(id)arg1 withName:(id)arg2;
- (void)sendNetworkUsageChangedNotification;
- (void)sendNotification:(id)arg1 ForPlugins:(id)arg2;
- (void)sendNotification:(int)arg1 forAppProxies:(id)arg2 Plugins:(BOOL)arg3;
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(BOOL)arg3;
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(BOOL)arg3 options:(id)arg4;

@end
