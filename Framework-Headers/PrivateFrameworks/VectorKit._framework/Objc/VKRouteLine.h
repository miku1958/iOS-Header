//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet, VKPolylineOverlay, VKPolylineOverlayRenderRegion;
@protocol VKRouteLineObserverProtocol;

__attribute__((visibility("hidden")))
@interface VKRouteLine : NSObject
{
    BOOL _matchToRoads;
    BOOL _hasNewRoadMatches;
    Box_3d7e3c2c _bounds;
    Matrix_08d701e4 _inverseMatrix;
    VKPolylineOverlay *_overlay;
    double _boundsUnitsPerMeter;
    double _metersPerPoint;
    double _boundsInWorldUnit;
    double _simplificationEpsilonPoints;
    double _viewUnitsPerPoint;
    id<VKRouteLineObserverProtocol> _observer;
    vector_7b5b20f1 _sections;
    struct fast_shared_ptr<md::RouteLineSection> _userLocationSection;
    struct PolylineCoordinate _userLocationIndex;
    Matrix_8746f91e _userLocation;
    double _lastTrafficTimeStamp;
    NSSet *_retainedTiles;
    VKPolylineOverlayRenderRegion *_renderRegion;
    struct ManeuverArrowCoordinates _maneuverArrowCoordinates;
    double _builtViewUnitsPerPoint;
}

@property (readonly, nonatomic) Box_3d7e3c2c bounds; // @synthesize bounds=_bounds;
@property BOOL hasNewRoadMatches; // @synthesize hasNewRoadMatches=_hasNewRoadMatches;
@property (nonatomic) id<VKRouteLineObserverProtocol> observer; // @synthesize observer=_observer;
@property (readonly, nonatomic) VKPolylineOverlay *overlay; // @synthesize overlay=_overlay;
@property (readonly, nonatomic) vector_7b5b20f1 sections; // @synthesize sections=_sections;
@property (nonatomic) double simplificationEpsilonPoints; // @synthesize simplificationEpsilonPoints=_simplificationEpsilonPoints;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateBounds:(id)arg1;
- (void)_updateTilesCovered:(id)arg1;
- (double)boundsUnitsPerMeter;
- (BOOL)buildRouteLine:(id)arg1 tiles:(id)arg2 viewUnitsPerPoint:(double)arg3 force:(BOOL)arg4 selected:(BOOL)arg5 isNavMode:(BOOL)arg6;
- (void)createMeshIfNecessary:(long long)arg1;
- (void)dealloc;
- (void)forEachSection:(CDUnknownBlockType)arg1;
- (void)generateArrowsForManeuverDisplayMode:(int)arg1 routeLineWidth:(double)arg2;
- (id)initWithPolylineOverlay:(id)arg1;
- (Matrix_08d701e4)inverseManeuverTransform;
- (BOOL)isTrafficUpToDate;
- (BOOL)isTrafficUptoDate:(double)arg1;
- (vector_1a7ef145)maneuverPoints;
- (Matrix_08d701e4)maneuverTransform;
- (BOOL)needsUpdateForViewingScale:(double)arg1;
- (void)splitRouteLineAtAnnotation:(id)arg1;

@end

