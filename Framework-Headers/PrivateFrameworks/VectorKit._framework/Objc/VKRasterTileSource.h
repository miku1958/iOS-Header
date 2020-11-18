//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKTileSetBackedTileSource.h>

@class NSMutableDictionary, VKTileKeyList;

__attribute__((visibility("hidden")))
@interface VKRasterTileSource : VKTileSetBackedTileSource
{
    NSMutableDictionary *_genericTextureCache;
    struct unordered_map<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D>, std::__1::hash<GEOGenericTileType>, std::__1::equal_to<GEOGenericTileType>, std::__1::allocator<std::__1::pair<const GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D>>>> _gglGenericRasterTextureCache;
    VKTileKeyList *_recentNoDataSourceKeys;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_fetchedTile:(id)arg1;
- (void)clearCaches;
- (void)dealloc;
- (void)decodeData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3 origin:(unsigned char)arg4;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 taskContext:(shared_ptr_e963992e)arg5;
- (struct VKTileKey)sourceKeyForRenderKey:(const struct VKTileKey *)arg1;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;

@end
