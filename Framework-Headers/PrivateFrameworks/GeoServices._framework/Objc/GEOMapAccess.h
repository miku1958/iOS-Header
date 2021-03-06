//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapRequestManager.h>

@class NSObject;
@protocol GEOMapAccessRestrictions, OS_dispatch_queue;

@interface GEOMapAccess : GEOMapRequestManager
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id<GEOMapAccessRestrictions> _restrictions;
    CDUnknownBlockType _tileErrorHandler;
    BOOL _useMapMatchingTilesetForRoads;
}

@property (readonly, nonatomic) BOOL allowsNetworkTileLoad;
@property (readonly, nonatomic) unsigned long long buildingsZoomLevel;
@property (readonly, nonatomic) unsigned int maxTransitZoomLevel;
@property (readonly, nonatomic) unsigned int maxZoomLevel;
@property (readonly, nonatomic) unsigned int minZoomLevel;
@property (weak, nonatomic) id<GEOMapAccessRestrictions> restrictions; // @synthesize restrictions=_restrictions;
@property (readonly, nonatomic) unsigned long long roadsZoomLevel;
@property (copy, nonatomic) CDUnknownBlockType tileErrorHandler; // @synthesize tileErrorHandler=_tileErrorHandler;
@property (readonly, nonatomic) unsigned long long transitZoomLevel;
@property (nonatomic) BOOL useMapMatchingTilesetForRoads; // @synthesize useMapMatchingTilesetForRoads=_useMapMatchingTilesetForRoads;
@property (nonatomic) unsigned int zoomLevel;

+ (id)map;
+ (id)realisticMap;
+ (BOOL)supportsBuildingMapAccess;
+ (BOOL)supportsRealisticMap;
+ (BOOL)supportsRoadMapAccess;
+ (BOOL)supportsTransitMap;
+ (BOOL)supportsTransitMapAccess;
+ (id)transitMap;
- (void).cxx_destruct;
- (id)_findTransitPointWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 type:(unsigned long long)arg3 pointHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_findTransitPointsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 type:(unsigned long long)arg3 pointHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)_hasLoadedTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 zoomLevel:(unsigned long long)arg3 tileStyle:(int)arg4 tileSize:(int)arg5 tileScale:(int)arg6;
- (id)_transitPointForTransitMapNode:(shared_ptr_52e51bdf)arg1;
- (id)buildMapEdgeTransitFrom:(const struct TransitEdgePiece *)arg1 edgeHandler:(CDUnknownBlockType)arg2;
- (id)callbackQueue;
- (id)findBuildingsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 buildingHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findClosestNamedFeaturesAtCoordinate:(CDStruct_c3b9c2ee)arg1 roadHandler:(CDUnknownBlockType)arg2 pointHandler:(CDUnknownBlockType)arg3 polygonHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)findClosestRoadAtCoordinate:(CDStruct_c3b9c2ee)arg1 roadHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findRoadEdgesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 edgeHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findRoadTilesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 tileHander:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findRoadsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitEdgesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 edgeHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitHallWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 hallHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitHallsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 hallHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitLinksWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 linkHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitNodeWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 nodeHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitNodesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 nodeHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitPointWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 pointHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitPointWithParentID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 type:(unsigned long long)arg3 pointHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)findTransitPointsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 pointHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitStationWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 stationHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitStationsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 stationHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitStopWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 stopHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitStopsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 stopHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)hasLoadedBuildingTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
- (BOOL)hasLoadedRoadTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
- (BOOL)hasLoadedTransitTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
- (id)init;
- (void)preloadBuildingTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)preloadRoadTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)preloadTransitTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setCallbackQueue:(id)arg1;

@end

