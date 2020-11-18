//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GEOMapFeatureAccess : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _allowNetworkTileLoad;
    BOOL _flipNegativeTravelDirectionRoads;
    BOOL _visitDoubleTravelDirectionRoadsTwice;
}

@property (nonatomic) BOOL allowNetworkTileLoad; // @synthesize allowNetworkTileLoad=_allowNetworkTileLoad;
@property (nonatomic) BOOL flipNegativeTravelDirectionRoads; // @synthesize flipNegativeTravelDirectionRoads=_flipNegativeTravelDirectionRoads;
@property (nonatomic) BOOL visitDoubleTravelDirectionRoadsTwice; // @synthesize visitDoubleTravelDirectionRoadsTwice=_visitDoubleTravelDirectionRoadsTwice;

+ (unsigned long long)zoomLevelForStyle:(int)arg1 scale:(int)arg2;
- (void).cxx_destruct;
- (id)_findChildrenOfTransitPoint:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_findParentOfTransitPoint:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_findTransitPointsOfType:(unsigned long long)arg1 nearCoordinate:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3 handler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (CDUnknownBlockType)_openTileLoaderWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_preloadTilesNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 tileSetStyle:(int)arg3 tileSize:(int)arg4 tileScale:(int)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)findBuildingsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findRoadsFromJunction:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findRoadsFromNextIntersectionOf:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findRoadsFromPreviousIntersectionOf:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findRoadsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findRoadsToJunction:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findRoadsToNextIntersectionOf:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findRoadsToPreviousIntersectionOf:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findTransitAccessPointsForStation:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findTransitGeometryForPoint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findTransitHallForStop:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findTransitHallsForStation:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findTransitHallsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitLinksNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitPointWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 pointHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitStationForHall:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findTransitStationsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitStopsForHall:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findTransitStopsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)preloadBuildingTilesNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)preloadRoadTilesNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)preloadTransitTilesNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

