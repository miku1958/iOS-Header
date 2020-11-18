//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBUIActiveOrientationObserver-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SBAppSwitcherSettings, SBApplicationController, SBIconController, SBOrientationLockManager;
@protocol BSInvalidatable, OS_dispatch_queue, SBAppSwitcherSnapshotImageCacheDelegate;

@interface SBAppSwitcherSnapshotImageCache : NSObject <SBUIActiveOrientationObserver>
{
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    NSObject<OS_dispatch_queue> *_controlQueue;
    NSMutableDictionary *_cachedSnapshots;
    NSMutableDictionary *_cacheEntryUpdateObservers;
    NSMutableDictionary *_snapshotRequestsCurrentlyBeingLoaded;
    unsigned long long _snapshotRequestSequenceID;
    NSArray *_appLayoutsInPriorityOrder;
    NSArray *_appLayoutsRequiringFullSizeSnapshots;
    NSArray *_defaultAppLayouts;
    long long _lastKnownInterfaceOrientation;
    long long _lastKnownUserInterfaceStyle;
    SBAppSwitcherSettings *_settings;
    id<BSInvalidatable> _stateCaptureInvalidatable;
    struct _NSRange _lastVisibleRange;
    NSArray *_lastHighPriorityAppLayouts;
    NSArray *_lastAllAppLayouts;
    BOOL _lastPriorityBiasedForward;
    BOOL _shouldPurgeNilEntries;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBOrientationLockManager *_orientationLockManager;
    BOOL _cachingEnabled;
    BOOL _reloadsSnapshotsForActiveInterfaceOrientationChange;
    id<SBAppSwitcherSnapshotImageCacheDelegate> _delegate;
    NSString *_debugName;
    unsigned long long _atomicNumberOfAppLayoutsToCache;
}

@property unsigned long long atomicNumberOfAppLayoutsToCache; // @synthesize atomicNumberOfAppLayoutsToCache=_atomicNumberOfAppLayoutsToCache;
@property (readonly, nonatomic) BOOL cachingEnabled; // @synthesize cachingEnabled=_cachingEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
@property (weak, nonatomic) id<SBAppSwitcherSnapshotImageCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL reloadsSnapshotsForActiveInterfaceOrientationChange; // @synthesize reloadsSnapshotsForActiveInterfaceOrientationChange=_reloadsSnapshotsForActiveInterfaceOrientationChange;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addCacheEntryForImage:(id)arg1 fromRequest:(id)arg2;
- (void)_addObserver:(id)arg1 forDisplayItem:(id)arg2;
- (id)_allAppLayouts;
- (id)_appLayoutsInPriorityOrder;
- (void)_asynchronouslyLoadSnapshotFromRequest:(id)arg1;
- (BOOL)_biasForwardLoading;
- (id)_cachableAppLayouts;
- (id)_cachableAppLayoutsForTesting;
- (id)_cachableAppLayoutsRequiringFullSizeSnapshots;
- (void)_cacheSnapshotForRequest:(id)arg1 withDisplayItem:(id)arg2 inAppLayout:(id)arg3;
- (struct CGImage *)_createDecodedImageIfPossible:(struct CGImage *)arg1;
- (void)_createDownscaledVariantForRequest:(id)arg1 snapshot:(id)arg2 displayItem:(id)arg3 sceneHandle:(id)arg4 application:(id)arg5;
- (id)_createSnapshotRequestWithDisplayItem:(id)arg1 inAppLayout:(id)arg2 forFullSizeSnapshot:(BOOL)arg3;
- (id)_defaultAppLayouts;
- (void)_enqueueNextSnapshotRequestIfNecessary;
- (void)_enqueueSnapshotRequestsForCachableAppLayouts:(id)arg1 forFullSizeSnapshots:(BOOL)arg2;
- (id)_fullSizeSnapshotAppLayouts;
- (id)_highPriorityAppLayouts;
- (id)_initWithDelegate:(id)arg1 iconController:(id)arg2 applicationController:(id)arg3 orientationLockManager:(id)arg4 settings:(id)arg5;
- (BOOL)_isLoadingForDefaultDisplayItem:(id)arg1;
- (BOOL)_isValidAppLayout:(id)arg1 withSnapshot:(id)arg2 givenCachableAppLayouts:(id)arg3;
- (BOOL)_isValidSnapshotRequest:(id)arg1;
- (BOOL)_keepGoingForRequest:(id)arg1;
- (void)_loadSnapshotForRequest:(id)arg1 withDisplayItem:(id)arg2 inAppLayout:(id)arg3;
- (long long)_orientationForAppLayout:(id)arg1;
- (void)_purgeAllSnapshotRequests;
- (void)_purgeAllSnapshots;
- (void)_purgeLowPriorityFullSizeSnapshotRequests;
- (void)_purgeLowPriorityFullSizeSnapshots;
- (void)_purgeLowPrioritySnapshotRequests;
- (void)_purgeLowPrioritySnapshots;
- (void)_purgeSnapshotRequest:(id)arg1 withReason:(id)arg2;
- (void)_purgeSnapshotRequestsForDisplayItem:(id)arg1 withReason:(id)arg2;
- (void)_purgeSnapshotsForDisplayItem:(id)arg1;
- (id)_representedApplicationSceneEntityForDisplayItem:(id)arg1;
- (void)_resetLastCachedValues;
- (double)_scaleForDownscaledSnapshots;
- (void)_setCachingEnabled:(BOOL)arg1 numberOfAppLayoutsToCache:(unsigned long long)arg2;
- (void)_setShouldPurgeNilEntry:(BOOL)arg1;
- (void)_setSnapshotNeedsUpdateForDisplayItem:(id)arg1;
- (void)_snapshotChanged:(id)arg1;
- (void)_snapshotImage:(id)arg1 finishedLoadingForRequest:(id)arg2;
- (id)_uiImageForCGImage:(struct CGImage *)arg1 forSnapshotRequest:(id)arg2;
- (void)_updateActiveOrientationObservingIfNeeded;
- (void)_updateAppLayoutPriorityList;
- (void)_updateCacheForDisplayItem:(id)arg1;
- (void)_updateObserversForDisplayItem:(id)arg1 withCacheEntry:(id)arg2;
- (struct _NSRange)_visibleAppLayoutRange;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)addSnapshotUpdateObserver:(id)arg1 forDisplayItem:(id)arg2 inAppLayout:(id)arg3;
- (void)dealloc;
- (void)disableCaching;
- (void)enableCachingWithMaximumNumberOfAppLayoutsToCache:(unsigned long long)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)reloadSnapshotsForInterfaceStyleChange:(long long)arg1;
- (void)removeSnapshotObserver:(id)arg1;
- (void)updateCacheWithMaximumNumberOfAppLayoutsToCache:(unsigned long long)arg1;

@end
