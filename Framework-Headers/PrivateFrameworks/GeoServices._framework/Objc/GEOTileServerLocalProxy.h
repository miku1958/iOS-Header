//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOTileServerProxy.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>

@class GEODBReader, GEODBWriter, NSLock, NSMapTable, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GEOTileServerLocalProxy : GEOTileServerProxy <GEOResourceManifestTileGroupObserver>
{
    GEODBWriter *_dbWriter;
    GEODBReader *_dbReader;
    NSString *_cacheLocation;
    NSMapTable *_providers;
    NSMutableArray *_inProgress;
    NSLock *_inProgressLock;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_registerBuiltInProviders;
- (void)_updateExpiringTilesets;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(BOOL)arg2;
- (void)calculateFreeableSize;
- (void)cancel:(const struct _GEOTileKey *)arg1;
- (void)close;
- (void)dealloc;
- (void)endPreloadSession;
- (void)flushPendingWrites;
- (id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 delegateQueue:(id)arg4 delegate:(id)arg5;
- (void)loadTiles:(id)arg1 priorities:(const unsigned int *)arg2 hasAdditionalInfos:(const BOOL *)arg3 additionalInfos:(const CDStruct_58878026 *)arg4 options:(unsigned long long)arg5 client:(id)arg6;
- (void)open;
- (void)registerProvider:(Class)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 etag:(id)arg5 forKey:(struct _GEOTileKey)arg6 userInfo:(id)arg7;
- (void)tileRequester:(id)arg1 receivedError:(id)arg2;
- (void)tileRequesterFinished:(id)arg1;
- (id)userInfoForRequesterUserInfo:(id)arg1 tileEdition:(unsigned int)arg2 tileSet:(unsigned int)arg3 eTag:(id)arg4 bundleIdentifier:(id)arg5;

@end

