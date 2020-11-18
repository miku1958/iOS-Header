//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, VKLabelNavRoadGraph, VKPolylineOverlayPainter;

__attribute__((visibility("hidden")))
@interface VKLabelNavSupport : NSObject
{
    BOOL _needsLayout;
    BOOL _drawRoadSigns;
    VKPolylineOverlayPainter *_route;
    NSString *_currentLocationText;
    BOOL _isOnRoute;
    struct PolylineCoordinate _routeUserOffset;
    unsigned long long _stepIndex;
    BOOL _checkOnRouteLabelsAlignment;
    BOOL _disableTileParseForOneLayout;
    NSMutableSet *_tiles;
    NSMutableSet *_pendingTiles;
    NSMutableArray *_junctions;
    VKLabelNavRoadGraph *_roadGraph;
    vector_4ea116aa _activeSigns;
    NSMutableArray *_fadingLabels;
    NSMutableDictionary *_visibleLabelsByName;
    NSMutableArray *_visibleLabels;
    unsigned long long _countVisibleRoadSigns;
    unsigned long long _countVisibleOnRouteRoadSigns;
    unsigned long long _maxVisibleRoadSigns;
    unsigned long long _minVisibleOnRouteRoadSigns;
    unsigned long long _maxOnRoadGraphRoadSigns;
    unsigned long long _minVisibleRoadSigns;
    unsigned long long _minVisibleProceedToRouteRoadSigns;
    BOOL _preferRightSideLabelPlacement;
    float _minSignOffsetDistance;
    NSMutableSet *_roadNamesInGuidance;
    NSMutableArray *_guidanceStepInfos;
    NSMutableArray *_routeRoadInfos;
    NSString *_currentRoadName;
    long long _currentRoadNameIndex;
    NSString *_currentShieldGroup;
    BOOL _checkIfRouteSubrangeChanged;
    BOOL _useRouteSubrange;
    struct PolylineCoordinate _routeSubrangeStart;
    struct PolylineCoordinate _routeSubrangeEnd;
}

@property (readonly, nonatomic) const vector_4ea116aa *activeSigns; // @synthesize activeSigns=_activeSigns;
@property (strong, nonatomic) NSString *currentLocationText; // @synthesize currentLocationText=_currentLocationText;
@property (strong, nonatomic) NSString *currentRoadName; // @synthesize currentRoadName=_currentRoadName;
@property (strong, nonatomic) NSString *currentShieldGroup; // @synthesize currentShieldGroup=_currentShieldGroup;
@property (nonatomic) BOOL drawRoadSigns; // @synthesize drawRoadSigns=_drawRoadSigns;
@property (readonly, nonatomic) BOOL needsLayout; // @synthesize needsLayout=_needsLayout;
@property (strong, nonatomic) VKPolylineOverlayPainter *route; // @synthesize route=_route;
@property (nonatomic) struct PolylineCoordinate routeUserOffset; // @synthesize routeUserOffset=_routeUserOffset;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_addJunctionsForTile:(id)arg1;
- (void)_addLabelsAtJunctions:(id)arg1 withContext:(struct NavContext *)arg2 maxVisibleLabels:(unsigned long long)arg3 minOnRouteVisibleLabels:(unsigned long long)arg4;
- (void)_addLabelsForJunctions:(id)arg1 withContext:(struct NavContext *)arg2 maxVisibleLabels:(unsigned long long)arg3 minOnRouteVisibleLabels:(unsigned long long)arg4 useAllJunctions:(BOOL)arg5 placeShieldsFrontToBack:(BOOL)arg6;
- (BOOL)_collideLabel:(id)arg1 activeLabel:(id)arg2 labelsToRemove:(id)arg3;
- (void)_createOrUpdateLabelForRoad:(id)arg1 isShield:(BOOL)arg2 navContext:(struct NavContext *)arg3;
- (BOOL)_findRouteOverlappingJunctionFrom:(long long)arg1 routeJunctions:(vector_682a2c99 *)arg2 lookBackward:(BOOL)arg3 firstOverlap:(long long *)arg4 secondOverlap:(long long *)arg5;
- (void)_initalizeCurrentRoadInfo;
- (void)_refreshGuidanceRoadNames;
- (void)_reloadRouteJunctions;
- (void)_tryAddLabel:(id)arg1 navContext:(struct NavContext *)arg2 labelCollisionEnabled:(BOOL)arg3;
- (void)_tryAddRoadSignForJunction:(id)arg1 navContext:(struct NavContext *)arg2 labelCollisionEnabled:(BOOL)arg3;
- (void)_tryAddRoadSignForRoad:(id)arg1 isShield:(BOOL)arg2 navContext:(struct NavContext *)arg3 labelCollisionEnabled:(BOOL)arg4;
- (BOOL)_updateActiveRouteRange;
- (void)_updateCurrentRoadInfo;
- (void)_updatePreferredLabelPlacements;
- (void)_updateRoadStarts;
- (void)_updateRoadsInGuidance;
- (void)_updateUniqueOffRouteRoads;
- (void)clearSceneIsMemoryWarning:(BOOL)arg1;
- (unsigned char)computeRoutePositionForPOIAtPixel:(const Matrix_8746f91e *)arg1 currentPosition:(unsigned char)arg2 context:(struct NavContext *)arg3;
- (void)dealloc;
- (void)grabTilesFromScene:(id)arg1;
- (id)init;
- (BOOL)isNavMode;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
- (void)setStyleManager:(shared_ptr_f06afc6c)arg1;

@end

