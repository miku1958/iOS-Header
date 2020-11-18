//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOResourceManifestConfiguration, GEOTileKeyList, NSError, NSLocale, NSString, VKSharedResources, VKTileKeyList, VKTileKeyMap, VKTilePool;
@protocol VKTileSourceClient;

__attribute__((visibility("hidden")))
@interface VKTileSource : NSObject
{
    id<VKTileSourceClient> _client;
    VKTilePool *_tilePool;
    VKTilePool *_preliminaryTilePool;
    VKTileKeyMap *_pendingLoads;
    GEOTileKeyList *_pendingDownloadRequests;
    VKTileKeyList *_decoding;
    VKTileKeyList *_decodingPreliminary;
    VKTileKeyList *_failedTiles;
    shared_ptr_a3c46825 _styleManager;
    double _contentScale;
    VKSharedResources *_sharedResources;
    int _loadingTilesFromNetwork;
    NSError *_recentError;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    NSString *_tileLoaderClientIdentifier;
    BOOL _preloadOnly;
    BOOL _requireWiFi;
    BOOL _enablePreliminary;
    long long _mapType;
    unsigned char _targetDisplay;
    shared_ptr_e963992e _taskContext;
}

@property (readonly, nonatomic) BOOL allowPreliminaryTiles;
@property (nonatomic) id<VKTileSourceClient> client; // @synthesize client=_client;
@property (nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property (readonly, nonatomic) struct Device *device;
@property (nonatomic) BOOL enablePreliminary; // @synthesize enablePreliminary=_enablePreliminary;
@property (nonatomic) long long mapType; // @synthesize mapType=_mapType;
@property (readonly, nonatomic) unsigned int maximumDownloadZoomLevel;
@property (readonly, nonatomic) long long maximumZoomLevel;
@property (readonly, nonatomic) BOOL maximumZoomLevelBoundsCamera;
@property (readonly, nonatomic) long long maximumZoomLevelWithoutOverride;
@property (readonly, nonatomic) unsigned int minimumDownloadZoomLevel;
@property (readonly, nonatomic) long long minimumZoomLevel;
@property (readonly, nonatomic) BOOL minimumZoomLevelBoundsCamera;
@property (nonatomic) BOOL preloadOnly; // @synthesize preloadOnly=_preloadOnly;
@property (nonatomic) BOOL requireWiFi; // @synthesize requireWiFi=_requireWiFi;
@property (strong, nonatomic) VKSharedResources *sharedResources; // @synthesize sharedResources=_sharedResources;
@property (nonatomic) shared_ptr_a3c46825 styleManager; // @synthesize styleManager=_styleManager;
@property (nonatomic) unsigned char targetDisplay; // @synthesize targetDisplay=_targetDisplay;
@property (readonly, nonatomic) long long tileSize;
@property (readonly, nonatomic) long long zEquivalenceClass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_extraInfoForPendingSourceKey:(const struct VKTileKey *)arg1;
- (void)_failedToLoadSourceKey:(const struct VKTileKey *)arg1 downloadKey:(const struct _GEOTileKey *)arg2 error:(id)arg3;
- (void)_fetchedTile:(id)arg1 isPreliminary:(BOOL)arg2;
- (BOOL)_shouldDecodeTile:(const struct VKTileKey *)arg1;
- (BOOL)_shouldUseDecodedTile:(id)arg1 extraInfo:(id)arg2;
- (BOOL)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (void)cancelAllDownloads;
- (void)cancelDownload:(const struct _GEOTileKey *)arg1;
- (BOOL)cancelFetchForKey:(const struct VKTileKey *)arg1;
- (BOOL)cancelFetchForKey:(const struct VKTileKey *)arg1 sourceKey:(const struct VKTileKey *)arg2;
- (void)clearCaches;
- (void)dealloc;
- (void)decodeData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3 isPreliminary:(BOOL)arg4 userInfo:(id)arg5;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (void)didFailToLoadTileKey:(const struct _GEOTileKey *)arg1 error:(id)arg2;
- (void)didFetchData:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 isPreliminary:(BOOL)arg3 userInfo:(id)arg4;
- (void)didFinishWithNetwork;
- (void)didLoadTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (struct _GEOTileKey)downloadKeyForSourceKey:(const struct VKTileKey *)arg1;
- (void)failedToDecodeSourceKey:(const struct VKTileKey *)arg1;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1 isPrefetch:(BOOL)arg2;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1 sourceKey:(const struct VKTileKey *)arg2 isPrefetch:(BOOL)arg3;
- (void)fetchedTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (void)forceDownload;
- (id)initWithResourceManifestConfiguration:(id)arg1 locale:(id)arg2 sharedResources:(id)arg3 taskContext:(shared_ptr_e963992e)arg4;
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1;
- (struct VKTileKey)nativeKeyForRenderKey:(const struct VKTileKey *)arg1;
- (void)performDownload:(const struct _GEOTileKey *)arg1 isPrefetch:(BOOL)arg2 requestPreliminary:(BOOL)arg3;
- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;
- (struct VKTileKey)sourceKeyForDownloadKey:(const struct _GEOTileKey *)arg1;
- (struct VKTileKey)sourceKeyForRenderKey:(const struct VKTileKey *)arg1;
- (id)stateDescriptionForRenderKey:(const struct VKTileKey *)arg1;
- (void)tileAvailabilityChanged:(id)arg1;
- (struct TaskQueue *)tileDecodeQueue;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3 userInfo:(id)arg4;
- (id)tileForKey:(const struct VKTileKey *)arg1;
- (id)tileForSourceKey:(const struct VKTileKey *)arg1 renderKey:(const struct VKTileKey *)arg2;
- (BOOL)tileHasLoadingIssue:(const struct VKTileKey *)arg1;
- (id)tileLoader;
- (void)willGoToNetwork;

@end

