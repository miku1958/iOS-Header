//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOTileServerProxy.h>

#import <GeoServices/GEOProactiveTileDownloaderDelegate-Protocol.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEOTileDBDelegate-Protocol.h>

@class GEOProactiveTileDownloader, GEOTileDB, NSMapTable, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GEOTileServerLocalProxy : GEOTileServerProxy <GEOProactiveTileDownloaderDelegate, GEOResourceManifestTileGroupObserver, GEOTileDBDelegate>
{
    GEOTileDB *_tileCache;
    NSString *_cacheLocation;
    NSMapTable *_providers;
    NSMutableArray *_inProgress;
    struct os_unfair_lock_s _inProgressLock;
    NSObject<OS_dispatch_queue> *_workQueue;
    GEOProactiveTileDownloader *_proactiveTileDownloader;
    BOOL _updatingManifestForProactiveTileDownload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)enableCDSObserversIfNecessary;
- (void).cxx_destruct;
- (void)_deleteLocationSensitiveInformation:(id)arg1;
- (void)_forceDataSaverPreload:(id)arg1;
- (void)_initiateDataSaverPreloadIfPossible;
- (void)_registerBuiltInProviders;
- (void)_updateExpiringTilesets;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (void)calculateFreeableSize;
- (unsigned long long)calculateFreeableSizeSync;
- (void)cancel:(const struct _GEOTileKey *)arg1 batchID:(int)arg2;
- (void)close;
- (void)dealloc;
- (void)endPreloadSession;
- (void)flushPendingWrites;
- (void)generateRequestedFromTileLoaderBeginSignpost:(unsigned long long)arg1 tileKey:(const struct _GEOTileKey *)arg2 options:(unsigned long long)arg3;
- (void)generateRequestedFromTileLoaderEndSignpost:(unsigned long long)arg1;
- (id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 delegateQueue:(id)arg4 delegate:(id)arg5;
- (void)loadTiles:(id)arg1 batchID:(int)arg2 priorities:(const unsigned int *)arg3 hasAdditionalInfos:(const BOOL *)arg4 additionalInfos:(const struct GEOTileLoaderAdditionalInfo *)arg5 signpostIDs:(const unsigned long long *)arg6 createTimes:(const double *)arg7 reason:(unsigned char)arg8 options:(unsigned long long)arg9 client:(id)arg10;
- (void)open;
- (void)proactiveTileDownloaderDidFinish:(id)arg1;
- (void)registerProvider:(Class)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2 batchID:(int)arg3;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)shrinkDiskCacheToSizeSync:(unsigned long long)arg1;
- (void)tileDBDidDeleteExternalResource:(id)arg1;
- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSetDB:(unsigned int)arg4 tileSet:(id)arg5 etag:(id)arg6 forKey:(struct _GEOTileKey)arg7 userInfo:(id)arg8;
- (void)tileRequester:(id)arg1 receivedError:(id)arg2 forKey:(struct _GEOTileKey)arg3;
- (void)tileRequesterFinished:(id)arg1;
- (id)userInfoForRequesterUserInfo:(id)arg1 tileEdition:(unsigned int)arg2 tileSet:(unsigned int)arg3 eTag:(id)arg4 bundleIdentifier:(id)arg5 reason:(unsigned char)arg6;

@end

