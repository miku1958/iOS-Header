//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKVectorTileSource.h>

__attribute__((visibility("hidden")))
@interface VKRoadTileSource : VKVectorTileSource
{
}

- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4;
- (unsigned long long)mapLayerForZoomLevelRange;
- (BOOL)minimumZoomLevelBoundsCamera;
- (void)releaseTraffic;
- (BOOL)shouldObeyHybridUnavailableRegions;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;

@end

