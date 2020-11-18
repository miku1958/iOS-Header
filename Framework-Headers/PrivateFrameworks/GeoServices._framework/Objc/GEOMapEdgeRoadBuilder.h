//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapEdgeBuilder.h>

__attribute__((visibility("hidden")))
@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder
{
    struct deque<GEORoadEdge, std::__1::allocator<GEORoadEdge>> _edges;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildCompleteEdge;
- (unsigned long long)_connectionTypeForEdge:(CDStruct_91f75a7f *)arg1 points:(CDStruct_b2fbf00d *)arg2 connectingTilePoint:(Matrix_8746f91e)arg3;
- (BOOL)_findEdgeAheadInTile:(id)arg1;
- (BOOL)_findEdgeBehindInTile:(id)arg1;
- (Matrix_8746f91e)_firstPoint;
- (id)_firstTile;
- (Matrix_8746f91e)_lastPoint;
- (id)_lastTile;
- (unsigned long long)_maxTileCount;
- (BOOL)_shouldFindEdgeAhead;
- (BOOL)_shouldFindEdgeBehind;
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
- (void)dealloc;
- (id)initWithMap:(id)arg1 roadFeature:(CDStruct_2244da21 *)arg2 shouldFlip:(BOOL)arg3;

@end

