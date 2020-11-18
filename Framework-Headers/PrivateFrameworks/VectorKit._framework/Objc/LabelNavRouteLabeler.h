//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, VKLabelNavRoadGraph, VKPolylineOverlay;

__attribute__((visibility("hidden")))
@interface LabelNavRouteLabeler : NSObject
{
    BOOL _needsLayout;
    BOOL _drawRoadSigns;
    VKPolylineOverlay *_route;
    NSString *_currentLocationText;
    BOOL _isOnRoute;
    struct PolylineCoordinate _routeUserOffset;
    unsigned long long _stepIndex;
    BOOL _checkOnRouteLabelsAlignment;
    BOOL _disableTileParseForOneLayout;
    unordered_set_975bb0ed _tiles;
    unordered_set_975bb0ed _pendingTiles;
    NSMutableArray *_junctions;
    VKLabelNavRoadGraph *_roadGraph;
    vector_e3e87145 _activeSigns;
    NSMutableArray *_fadingLabels;
    NSMutableDictionary *_visibleLabelsByName;
    NSMutableArray *_visibleLabels;
    NSMutableSet *_visibleShieldGroups;
    unsigned long long _countVisibleOnRouteRoadSigns;
    unsigned long long _countVisibleOffRouteRoadSigns;
    unsigned long long _countVisibleRoadSigns;
    unsigned long long _maxVisibleOnRouteRoadSigns;
    unsigned long long _maxVisibleOffRouteRoadSigns;
    unsigned long long _maxVisibleRoadSigns;
    unsigned long long _maxOnRoadGraphRoadSigns;
    unsigned long long _minVisibleOffRoadGraphRoadSigns;
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
    BOOL _regenerateRoadSigns;
    BOOL _isStylesheetAnimating;
    struct PolylineCoordinate _routeSubrangeStart;
    struct PolylineCoordinate _routeSubrangeEnd;
    struct VKLabelNavArtworkCache *_artworkCache;
    struct shared_ptr<md::NavCurrentRoadSign> _currentRoadSign;
    BOOL _debugDisableRoadSignLimit;
    unsigned long long _debugCachedMaxVisibleOffRouteRoadSigns;
    unsigned long long _debugCachedMaxVisibleOnRouteRoadSigns;
    BOOL _debugEnableShieldsOnRouteLine;
    shared_ptr_a3c46825 _styleManager;
    BOOL _shouldLabelOppositeCarriageways;
    vector_fac3c691 _avoidanceRects;
    BOOL _hasPendingTilesInSnappingRegion;
    BOOL _needsDebugConsoleClear;
    struct range_map<geo::Unit<RadianUnitDescription, float>, md::OrientationAction, std::__1::less<geo::Unit<RadianUnitDescription, float>>, std::__1::allocator<std::__1::pair<const gm::Range<geo::Unit<RadianUnitDescription, float>>, md::OrientationAction>>> _onRouteOrientations;
    struct range_map<geo::Unit<RadianUnitDescription, float>, md::OrientationAction, std::__1::less<geo::Unit<RadianUnitDescription, float>>, std::__1::allocator<std::__1::pair<const gm::Range<geo::Unit<RadianUnitDescription, float>>, md::OrientationAction>>> _relatedRouteOrientations;
}

@property (readonly, nonatomic) const vector_e3e87145 *activeSigns; // @synthesize activeSigns=_activeSigns;
@property (nonatomic) struct VKLabelNavArtworkCache *artworkCache; // @synthesize artworkCache=_artworkCache;
@property (strong, nonatomic) NSString *currentLocationText; // @synthesize currentLocationText=_currentLocationText;
@property (strong, nonatomic) NSString *currentRoadName; // @synthesize currentRoadName=_currentRoadName;
@property (readonly, nonatomic) struct NavCurrentRoadSign *currentRoadSign;
@property (readonly, nonatomic) float currentRoadSignPixelHeight;
@property (strong, nonatomic) NSString *currentShieldGroup; // @synthesize currentShieldGroup=_currentShieldGroup;
@property (nonatomic) BOOL debugDisableRoadSignLimit; // @synthesize debugDisableRoadSignLimit=_debugDisableRoadSignLimit;
@property (nonatomic) BOOL debugEnableShieldsOnRouteLine; // @synthesize debugEnableShieldsOnRouteLine=_debugEnableShieldsOnRouteLine;
@property (nonatomic) BOOL drawRoadSigns; // @synthesize drawRoadSigns=_drawRoadSigns;
@property (readonly, nonatomic) BOOL needsLayout; // @synthesize needsLayout=_needsLayout;
@property (strong, nonatomic) VKPolylineOverlay *route; // @synthesize route=_route;
@property (nonatomic) struct PolylineCoordinate routeUserOffset; // @synthesize routeUserOffset=_routeUserOffset;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_addJunctionsForTile:(const shared_ptr_702c344d *)arg1;
- (void)_addLabelsAtJunctions:(id)arg1 withContext:(struct NavContext *)arg2 maxLabelsToAdd:(unsigned long long)arg3;
- (void)_addLabelsForJunctions:(id)arg1 withContext:(struct NavContext *)arg2 maxLabelsToAdd:(unsigned long long)arg3 useAllJunctions:(BOOL)arg4 placeShieldsFrontToBack:(BOOL)arg5;
- (BOOL)_collideLabel:(id)arg1 activeLabel:(id)arg2 labelsToRemove:(id)arg3;
- (void)_createOrUpdateLabelForRoad:(id)arg1 isShield:(BOOL)arg2 navContext:(struct NavContext *)arg3;
- (BOOL)_findRouteOverlappingJunctionFrom:(long long)arg1 routeJunctions:(vector_397bdcab *)arg2 lookBackward:(BOOL)arg3 firstOverlap:(long long *)arg4 secondOverlap:(long long *)arg5;
- (void)_generateCurrentRoadSignWithContext:(struct NavContext *)arg1;
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
- (optional_49d759ff)createRoadSignOrientationResolver:(id)arg1 navContext:(struct NavContext *)arg2;
- (void)dealloc;
- (void)debugDraw:(id)arg1 overlayConsole:(struct DebugConsole *)arg2 navContext:(struct NavContext *)arg3;
- (void)drawNavOverlayDebugView:(struct DebugConsole *)arg1 navContext:(struct NavContext *)arg2;
- (void)drawRoadSignOrientationDebugView:(struct DebugConsole *)arg1 navContext:(struct NavContext *)arg2;
- (void)grabTilesFromScene:(const struct SceneContext *)arg1;
- (id)init;
- (BOOL)isNavMode;
- (void)layoutWithNavContext:(struct NavContext *)arg1 avoidanceRects:(const vector_fac3c691 *)arg2;
- (BOOL)needsDebugDraw;
- (unsigned char)orientationForRoadSign:(id)arg1 roadLabel:(id)arg2 navContext:(struct NavContext *)arg3;
- (unsigned char)resolveOrientation:(struct NavContext *)arg1 road:(id)arg2 currentOrientation:(unsigned char)arg3;
- (void)setMaxVisibleRoadsigns:(unsigned int)arg1;
- (void)setStyleManager:(shared_ptr_a3c46825)arg1;
- (void)styleManagerDidChange:(BOOL)arg1;
- (void)styleManagerDidFinishAnimating;
- (void)styleManagerDidStartAnimating;

@end
