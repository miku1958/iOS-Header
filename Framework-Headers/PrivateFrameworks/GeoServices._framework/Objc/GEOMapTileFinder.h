//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess;

__attribute__((visibility("hidden")))
@interface GEOMapTileFinder : GEOMapRequest
{
    unsigned long long _zoomLevel;
    int _tileSize;
    int _tileScale;
    int _tileStyle;
    CDStruct_2c43369c _center;
    double _radius;
    CDUnknownBlockType _tileHandler;
    BOOL _isCanceling;
}

@property (readonly, nonatomic) GEOMapAccess *map;
@property (copy, nonatomic) CDUnknownBlockType tileHandler; // @synthesize tileHandler=_tileHandler;
@property (readonly, nonatomic) int tileScale; // @synthesize tileScale=_tileScale;
@property (readonly, nonatomic) int tileSize; // @synthesize tileSize=_tileSize;
@property (readonly, nonatomic) int tileStyle; // @synthesize tileStyle=_tileStyle;
@property (readonly, nonatomic) unsigned long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;

+ (id)buildingsTileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
+ (id)detailedTransitTileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
+ (id)realisticTileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
+ (id)transitGeometryTileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
- (void).cxx_destruct;
- (struct _GEOTileKey)_adjacentTileKey:(const struct _GEOTileKey *)arg1 dirX:(int)arg2 dirY:(int)arg3;
- (void)_fetchDataForKeys:(const unordered_set_deaadd3a *)arg1;
- (id)_initWithMap:(id)arg1 zoomLevel:(unsigned long long)arg2 tileSize:(int)arg3 tileScale:(int)arg4 tileStyle:(int)arg5 center:(CDStruct_c3b9c2ee)arg6 radius:(double)arg7;
- (void)cancel;
- (void)dealloc;
- (void)findTiles:(CDUnknownBlockType)arg1;
- (void)findTiles:(CDUnknownBlockType)arg1 excludingKey:(const struct _GEOTileKey *)arg2;
- (void)findTilesAdjacentToTile:(const struct _GEOTileKey *)arg1 containingPoint:(const Matrix_8746f91e *)arg2 tileHandler:(CDUnknownBlockType)arg3;

@end

