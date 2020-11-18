//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKTileSetBackedTileSource.h>

#import <VectorKit/VKTileSourceClient-Protocol.h>

@class NSString, VKRoadTileSource, VKTileCache, VKTileKeyList, VKTrafficDynamicTileSource;

__attribute__((visibility("hidden")))
@interface VKTrafficTileSource : VKTileSetBackedTileSource <VKTileSourceClient>
{
    VKTileKeyList *_building;
    VKRoadTileSource *_roadTileSource;
    VKTrafficDynamicTileSource *_dynamicTileSource;
    VKTileCache *_recentTrafficTiles;
    struct map<VKTileKey, geo::_retain_ptr<VKTile *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, bool (*)(const VKTileKey &, const VKTileKey &), std::__1::allocator<std::__1::pair<const VKTileKey, geo::_retain_ptr<VKTile *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>>> *_incompleteTiles;
    BOOL _buildTrafficTexture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) VKTrafficDynamicTileSource *dynamicTileSource; // @synthesize dynamicTileSource=_dynamicTileSource;
@property (readonly) unsigned long long hash;
@property (nonatomic) VKRoadTileSource *roadTileSource; // @synthesize roadTileSource=_roadTileSource;
@property (readonly) Class superclass;

- (void)_acceptPendingTilesIfCompletedWithTile:(id)arg1;
- (void)_acceptTileIfComplete:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (void)_constructTile:(id)arg1 forKey:(struct VKTileKey)arg2;
- (void)_fetchedTile:(id)arg1;
- (BOOL)_shouldDecodeTile:(const struct VKTileKey *)arg1;
- (BOOL)canFetchTrafficTileForKey:(const struct VKTileKey *)arg1;
- (void)clearCaches;
- (void)dealloc;
- (id)detailedDescription;
- (void)didFailToLoadTileKey:(const struct _GEOTileKey *)arg1 error:(id)arg2;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)dirtyTilesFromTileSource:(id)arg1;
- (void)expireTilesForTileSource:(id)arg1;
- (void)failedToDecodeSourceKey:(const struct VKTileKey *)arg1;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1 sourceKey:(const struct VKTileKey *)arg2;
- (id)initWithSkeletonTileSet:(id)arg1 dynamicTileSet:(id)arg2 resourceManifestConfiguration:(id)arg3 locale:(id)arg4 sharedResources:(id)arg5 taskContext:(shared_ptr_e963992e)arg6;
- (void)invalidateTilesFromTileSource:(id)arg1;
- (long long)maximumZoomLevel;
- (long long)maximumZoomLevelWithoutOverride;
- (BOOL)minimumZoomLevelBoundsCamera;
- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;
- (void)setContentScale:(double)arg1;
- (void)setMapType:(long long)arg1;
- (void)setSharedResources:(id)arg1;
- (void)setStyleManager:(shared_ptr_a3c46825)arg1;
- (BOOL)shouldObeyHybridUnavailableRegions;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (void)tileSource:(id)arg1 didFailToDecodeTileForKey:(const struct VKTileKey *)arg2;
- (void)tileSource:(id)arg1 didFailToLoadTileForKey:(const struct VKTileKey *)arg2 error:(id)arg3;
- (void)tileSource:(id)arg1 didFetchTile:(id)arg2 forKey:(const struct VKTileKey *)arg3;
- (void)tileSource:(id)arg1 dirtyTilesWithinRect:(const Box_3d7e3c2c *)arg2 level:(long long)arg3;
- (void)tileSource:(id)arg1 invalidateKey:(const struct VKTileKey *)arg2;
- (void)tileSource:(id)arg1 invalidateKeys:(id)arg2;
- (void)tileSource:(id)arg1 invalidateTilesWithState:(unsigned long long)arg2;
- (BOOL)tileSource:(id)arg1 keyIsNeeded:(const struct VKTileKey *)arg2;
- (long long)tileSource:(id)arg1 overrideForMaximumZoomLevel:(long long)arg2;
- (void)willStartLoadingTiles;

@end

