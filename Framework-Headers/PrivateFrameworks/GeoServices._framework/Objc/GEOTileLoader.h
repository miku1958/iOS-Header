//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOExperimentConfigurationObserver-Protocol.h>
#import <GeoServices/GEOPListStateCapturing-Protocol.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEOTileServerProxyDelegate-Protocol.h>

@class GEOTileLoaderConfiguration, GEOTileLoaderInternal, GEOTileLoaderUsage, GEOTileServerProxy, NSHashTable, NSMutableArray, NSMutableSet, NSString, geo_isolater;
@protocol GEOTileLoaderInternalDelegate, OS_dispatch_queue;

@interface GEOTileLoader : NSObject <GEOPListStateCapturing, GEOTileServerProxyDelegate, GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver>
{
    geo_isolater *_isolater;
    NSObject<OS_dispatch_queue> *_loadQ;
    NSMutableSet *_openers;
    geo_isolater *_openersIsolater;
    CDStruct_34734122 _sortPoint;
    GEOTileServerProxy *_proxy;
    NSMutableArray *_tileDecoders;
    geo_isolater *_tileDecodersIsolater;
    BOOL _networkActive;
    id<GEOTileLoaderInternalDelegate> _internalDelegate;
    NSObject<OS_dispatch_queue> *_internalDelegateQ;
    GEOTileLoaderConfiguration *_config;
    int _rollingBatchId;
    GEOTileLoaderUsage *_usage;
    unsigned long long _stateCaptureHandle;
    BOOL _coalesceTimerEnabled;
    GEOTileLoaderInternal *_internal;
    NSHashTable *_observers;
    geo_isolater *_observersIsolater;
}

@property (nonatomic, setter=_setCoalesceTimerEnabled:) BOOL _coalesceTimerEnabled; // @synthesize _coalesceTimerEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int diskHits;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int memoryHits;
@property (readonly, nonatomic) int networkHits;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)diskCacheLocation;
+ (id)modernLoader;
+ (id)modernLoaderForResourceManifestConfiguration:(id)arg1 locale:(id)arg2;
+ (id)modernLoaderForTileGroupIdentifier:(unsigned int)arg1 locale:(id)arg2;
+ (void)setDiskCacheLocation:(id)arg1;
+ (void)setMemoryCacheCountLimit:(unsigned long long)arg1;
+ (void)setMemoryCacheTotalCostLimit:(unsigned long long)arg1;
+ (void)setServerProxyClass:(Class)arg1;
+ (id)singletonConfiguration;
+ (id)tileLoaderWithConfiguration:(id)arg1 serverProxy:(id)arg2;
+ (void)useLocalLoader;
+ (void)useRemoteLoader;
- (void).cxx_destruct;
- (void)_cancel:(__list_iterator_aef25af4 *)arg1 err:(id)arg2;
- (void)_cancelAllForClientOnLoadQueue:(id)arg1;
- (BOOL)_cancelIfNeeded:(__list_iterator_aef25af4 *)arg1;
- (id)_findInCache:(const struct _GEOTileKey *)arg1;
- (void)_issuePendingRequests;
- (void)_loadedTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 info:(id)arg3;
- (void)_loadedTileForLocalKey:(struct _GEOTileKey)arg1 preliminary:(BOOL)arg2 quickly:(BOOL)arg3 tileDecoder:(id)arg4 data:(id)arg5 disburseTile:(CDUnknownBlockType)arg6;
- (void)_localeChanged:(id)arg1;
- (void)_notifyObserversOfFailure:(const struct _GEOTileKey *)arg1 error:(id)arg2 options:(unsigned long long)arg3;
- (void)_notifyObserversOfSuccess:(const struct _GEOTileKey *)arg1 source:(long long)arg2 options:(unsigned long long)arg3;
- (void)_performOnServerProxyDelegateQueue:(CDUnknownBlockType)arg1;
- (void)_requestOnlineTiles;
- (id)_tileDecoderForTileKey:(const struct _GEOTileKey *)arg1 quickly:(BOOL *)arg2;
- (void)_tileEditionChanged:(id)arg1;
- (void)_timerFired;
- (void)addObserver:(id)arg1;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2;
- (id)cachedTileForKey:(const struct _GEOTileKey *)arg1;
- (unsigned long long)calculateFreeableSizeSync;
- (void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)cancelAllForClient:(id)arg1;
- (void)cancelAllForClientSynchronous:(id)arg1;
- (void)cancelKey:(const struct _GEOTileKey *)arg1 forClient:(id)arg2;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;
- (void)clearAllCaches;
- (void)closeForClient:(id)arg1;
- (void)dealloc;
- (id)descriptionDictionaryRepresentation;
- (void)endPreloadSessionForClient:(id)arg1;
- (void)experimentConfigurationDidChange:(id)arg1;
- (void)expireTilesWithPredicate:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 serverProxy:(id)arg2;
- (id)internalDelegate;
- (id)internalDelegateQ;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 callbackQ:(id)arg7 beginNetwork:(CDUnknownBlockType)arg8 callback:(CDUnknownBlockType)arg9;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 callbackQ:(id)arg8 beginNetwork:(CDUnknownBlockType)arg9 callback:(CDUnknownBlockType)arg10;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 signpostID:(unsigned long long)arg8 auditToken:(id)arg9 callbackQ:(id)arg10 beginNetwork:(CDUnknownBlockType)arg11 callback:(CDUnknownBlockType)arg12;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 signpostID:(unsigned long long)arg8 auditToken:(id)arg9 createTime:(double)arg10 callbackQ:(id)arg11 beginNetwork:(CDUnknownBlockType)arg12 callback:(CDUnknownBlockType)arg13;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 signpostID:(unsigned long long)arg8 callbackQ:(id)arg9 beginNetwork:(CDUnknownBlockType)arg10 callback:(CDUnknownBlockType)arg11;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 signpostID:(unsigned long long)arg8 createTime:(double)arg9 callbackQ:(id)arg10 beginNetwork:(CDUnknownBlockType)arg11 callback:(CDUnknownBlockType)arg12;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(CDUnknownBlockType)arg9 callback:(CDUnknownBlockType)arg10;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 proxyClient:(id)arg5 options:(unsigned long long)arg6 reason:(unsigned char)arg7 qos:(unsigned int)arg8 signpostID:(unsigned long long)arg9 createTime:(double)arg10 callbackQ:(id)arg11 beginNetwork:(CDUnknownBlockType)arg12 callback:(CDUnknownBlockType)arg13;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 auditToken:(id)arg6 callbackQ:(id)arg7 beginNetwork:(CDUnknownBlockType)arg8 callback:(CDUnknownBlockType)arg9;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 callbackQ:(id)arg6 beginNetwork:(CDUnknownBlockType)arg7 callback:(CDUnknownBlockType)arg8;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 callbackQ:(id)arg7 beginNetwork:(CDUnknownBlockType)arg8 callback:(CDUnknownBlockType)arg9;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(unsigned long long)arg7 auditToken:(id)arg8 callbackQ:(id)arg9 beginNetwork:(CDUnknownBlockType)arg10 callback:(CDUnknownBlockType)arg11;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(unsigned long long)arg7 auditToken:(id)arg8 createTime:(double)arg9 callbackQ:(id)arg10 beginNetwork:(CDUnknownBlockType)arg11 callback:(CDUnknownBlockType)arg12;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(CDUnknownBlockType)arg9 callback:(CDUnknownBlockType)arg10;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(unsigned long long)arg7 createTime:(double)arg8 callbackQ:(id)arg9 beginNetwork:(CDUnknownBlockType)arg10 callback:(CDUnknownBlockType)arg11;
- (void)openForClient:(id)arg1;
- (id)proxy;
- (void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2;
- (void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3;
- (void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const struct _GEOTileKey *)arg3 info:(id)arg4;
- (void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2;
- (void)proxyDidDeleteExternalTileData:(id)arg1;
- (void)proxyDidDownloadRegionalResources:(id)arg1;
- (void)registerTileDecoder:(id)arg1;
- (void)registerTileLoader:(Class)arg1;
- (void)removeObserver:(id)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (BOOL)reprioritizeKey:(const struct _GEOTileKey *)arg1 forClient:(id)arg2 newPriority:(unsigned int)arg3;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)setInternalDelegateQ:(id)arg1;
- (void)setSortPoint:(const CDStruct_c3b9c2ee *)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (unsigned long long)shrinkDiskCacheToSizeSync:(unsigned long long)arg1;

@end
