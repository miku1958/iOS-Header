//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOTileLoader.h>

#import <GeoServices/GEOExperimentConfigurationObserver-Protocol.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEOTileServerProxyDelegate-Protocol.h>

@class GEOTileLoaderConfiguration, GEOTilePool, GEOTileServerProxy, NSMutableArray, NSMutableSet, NSObject, NSString;
@protocol GEOTileLoaderInternalDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOTileLoaderInternal : GEOTileLoader <GEOTileServerProxyDelegate, GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver>
{
    struct list<LoadItem, std::__1::allocator<LoadItem>> _loadItems;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    GEOTilePool *_cache;
    GEOTilePool *_expiringCache;
    struct unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer>> _timer;
    NSObject<OS_dispatch_queue> *_loadQ;
    NSMutableSet *_openers;
    CDStruct_34734122 _sortPoint;
    GEOTileServerProxy *_proxy;
    _Atomic int _memoryHits;
    _Atomic int _diskHits;
    _Atomic int _networkHits;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)>>> _shrinkCacheRequesters;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)>>> _freeableSizeRequesters;
    NSMutableArray *_tileDecoders;
    BOOL _networkActive;
    id<GEOTileLoaderInternalDelegate> _internalDelegate;
    NSObject<OS_dispatch_queue> *_internalDelegateQ;
    GEOTileLoaderConfiguration *_config;
    NSObject<OS_dispatch_queue> *_usageIsolation;
    struct unordered_map<_GEOTileKey, UsageData, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<std::__1::pair<const _GEOTileKey, UsageData>>> _usageData;
    struct unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer>> _usageTimer;
    BOOL _isUsageTimerScheduled;
    int _rollingBatchId;
    struct deque<ErrorInfo, std::__1::allocator<ErrorInfo>> _recentErrors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_activeTileGroupChanged:(id)arg1;
- (void)_cancel:(__list_iterator_aef25af4 *)arg1 err:(id)arg2;
- (BOOL)_cancelIfNeeded:(__list_iterator_aef25af4 *)arg1;
- (id)_findInCache:(const struct _GEOTileKey *)arg1;
- (void)_loadedTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 fromOfflinePack:(id)arg3;
- (void)_loadedTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 info:(id)arg3;
- (void)_loadedTileForLocalKey:(struct _GEOTileKey)arg1 preliminary:(BOOL)arg2 quickly:(BOOL)arg3 tileDecoder:(id)arg4 data:(id)arg5 disburseTile:(CDUnknownBlockType)arg6;
- (void)_localeChanged:(id)arg1;
- (void)_requestOnlineTiles;
- (void)_tileEditionChanged:(id)arg1;
- (void)_timerFired;
- (void)_updateNetworkActive;
- (void)_usageTimerFired;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 exclusive:(BOOL)arg3;
- (id)cachedTileForKey:(const struct _GEOTileKey *)arg1;
- (void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)cancelAllForClient:(id)arg1;
- (void)cancelKey:(const struct _GEOTileKey *)arg1 forClient:(id)arg2;
- (void)clearAllCaches;
- (void)closeForClient:(id)arg1;
- (void)dealloc;
- (id)descriptionDictionaryRepresentation;
- (int)diskHits;
- (void)endPreloadSessionForClient:(id)arg1;
- (void)experimentConfigurationDidChange:(id)arg1;
- (void)expireTilesWithPredicate:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)internalDelegate;
- (id)internalDelegateQ;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 callbackQ:(id)arg5 beginNetwork:(CDUnknownBlockType)arg6 callback:(CDUnknownBlockType)arg7;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 proxyClient:(id)arg4 options:(unsigned long long)arg5 callbackQ:(id)arg6 beginNetwork:(CDUnknownBlockType)arg7 callback:(CDUnknownBlockType)arg8;
- (int)memoryHits;
- (int)networkHits;
- (void)openForClient:(id)arg1;
- (id)proxy;
- (void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(id)arg1 didShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2;
- (void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3;
- (void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const struct _GEOTileKey *)arg3 info:(id)arg4;
- (void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2;
- (void)proxyDidDownloadRegionalResources:(id)arg1;
- (void)registerTileDecoder:(id)arg1;
- (void)registerTileLoader:(Class)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (BOOL)reprioritizeKey:(const struct _GEOTileKey *)arg1 forClient:(id)arg2 newPriority:(unsigned int)arg3;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)setInternalDelegateQ:(id)arg1;
- (void)setSortPoint:(const CDStruct_c3b9c2ee *)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(CDUnknownBlockType)arg3;

@end

