//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKTileSetBackedTileSource.h>

__attribute__((visibility("hidden")))
@interface VKRealisticTileSource : VKTileSetBackedTileSource
{
}

- (long long)defaultMaximumZoomLevel;
- (long long)defaultMinimumZoomLevel;
- (unsigned long long)mapLayerForZoomLevelRange;
- (BOOL)minimumZoomLevelBoundsCamera;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;

@end

