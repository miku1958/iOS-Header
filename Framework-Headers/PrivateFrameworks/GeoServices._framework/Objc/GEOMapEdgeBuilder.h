//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapEdgeBuilder : GEOMapRequest
{
    BOOL _buildAhead;
    BOOL _buildBehind;
    Matrix_8746f91e _firstTilePoint;
    Matrix_8746f91e _lastTilePoint;
    GEOMapTileFinder *_currentTileFinder;
    CDUnknownBlockType _edgeHandler;
    unordered_set_4cb294f7 _tileKeysSeen;
    BOOL _searchDirection;
}

@property (copy, nonatomic) CDUnknownBlockType edgeHandler; // @synthesize edgeHandler=_edgeHandler;
@property (readonly, nonatomic) GEOMapAccess *map;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildCompleteEdge;
- (BOOL)_edgeStart:(const Matrix_8746f91e *)arg1 end:(const Matrix_8746f91e *)arg2 connectsTo:(const CDStruct_c3b9c2ee *)arg3 rect:(const CDStruct_90e2a262 *)arg4;
- (BOOL)_findEdgeAhead;
- (BOOL)_findEdgeAheadInTile:(id)arg1;
- (BOOL)_findEdgeBehind;
- (BOOL)_findEdgeBehindInTile:(id)arg1;
- (BOOL)_findNextEdge;
- (void)_findTilesAdjacentToTile:(const struct _GEOTileKey *)arg1 containingPoint:(const Matrix_8746f91e *)arg2 findAhead:(BOOL)arg3;
- (Matrix_8746f91e)_firstPoint;
- (id)_firstTile;
- (Matrix_8746f91e)_lastPoint;
- (id)_lastTile;
- (unsigned long long)_maxTileCount;
- (BOOL)_pointConnects:(const Matrix_8746f91e *)arg1 rect:(const CDStruct_90e2a262 *)arg2 to:(const CDStruct_c3b9c2ee *)arg3;
- (BOOL)_shouldFindEdgeAhead;
- (BOOL)_shouldFindEdgeBehind;
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
- (void)buildEdge:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithMap:(id)arg1;

@end
