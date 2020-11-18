//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCAppListMonitorDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, br_pacer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCCloudDocsAppsMonitor : NSObject <BRCAppListMonitorDelegate>
{
    NSMutableDictionary *_cloudDocsAppLibrariesByAppID;
    NSMutableDictionary *_appIDsByAppLibraryID;
    NSMutableSet *_observers;
    br_pacer *_refetchPacer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_fetchInstalledAppsQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _hasFetchedInitialApps;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cloudDocsAppsMonitor;
- (void).cxx_destruct;
- (void)_refetchApps;
- (void)_start;
- (void)addObserver:(id)arg1;
- (id)allApplicationIdentifiers;
- (id)applicationIdentifiersForContainerID:(id)arg1;
- (id)containerIDsForApplicationIdentifier:(id)arg1;
- (void)dumpToContext:(id)arg1;
- (void)forceRefetchAppList;
- (BOOL)hasFetchedInitialApps;
- (id)init;
- (BOOL)isApplicationInstalledForContainerID:(id)arg1;
- (void)removeObserver:(id)arg1;

@end

