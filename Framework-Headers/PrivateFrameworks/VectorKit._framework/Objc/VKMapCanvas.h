//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKScreenCanvas.h>

#import <VectorKit/VKInteractiveMap-Protocol.h>
#import <VectorKit/VKMapModelDelegate-Protocol.h>

@class GEOResourceManifestConfiguration, NSArray, NSString, VKAnchorWrapper, VKCamera, VKMapModel, VKPolylineOverlayPainter, VKSceneConfiguration, VKTimedAnimation;
@protocol GEORoutePreloadSession, VKInteractiveMapDelegate, VKRouteMatchedAnnotationPresentation;

__attribute__((visibility("hidden")))
@interface VKMapCanvas : VKScreenCanvas <VKMapModelDelegate, VKInteractiveMap>
{
    VKMapModel *_map;
    struct CGSize _lastCanvasSize;
    VKCamera *_defaultTrackingCamera;
    float _lastValidCanvasSizeZoomLevel;
    BOOL _hasLastValidCanvasSizeZoomLevel;
    VKTimedAnimation *_horizontalOffsetAnimation;
    double _canonicalSkyHeight;
    id<VKInteractiveMapDelegate> _delegate;
}

@property (strong, nonatomic) GEOResourceManifestConfiguration *additionalManifestConfiguration;
@property (nonatomic) double canonicalSkyHeight; // @synthesize canonicalSkyHeight=_canonicalSkyHeight;
@property (strong, nonatomic) NSArray *customFeatureDataSources;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) VKCamera *defaultTrackingCamera; // @synthesize defaultTrackingCamera=_defaultTrackingCamera;
@property (nonatomic) id<VKInteractiveMapDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) VKAnchorWrapper *externalAnchors;
@property (strong, nonatomic) NSArray *externalTrafficIncidents;
@property (strong, nonatomic) VKPolylineOverlayPainter *focusedLabelsPolylinePainter;
@property (readonly, nonatomic, getter=isFullyDrawn) BOOL fullyDrawn;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL labelMarkerSelectionEnabled;
@property (nonatomic) unsigned char labelScaleFactor;
@property (nonatomic) BOOL localizeLabels;
@property (readonly, nonatomic) VKMapModel *map; // @synthesize map=_map;
@property (nonatomic) long long mapType;
@property (nonatomic) long long navigationShieldSize;
@property (readonly, nonatomic) NSArray *rasterOverlays;
@property (nonatomic) id<VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
@property (strong, nonatomic) id<GEORoutePreloadSession> routePreloadSession;
@property (nonatomic) struct PolylineCoordinate routeUserOffset;
@property (readonly, nonatomic) VKSceneConfiguration *sceneConfiguration;
@property (nonatomic) long long shieldIdiom;
@property (nonatomic) long long shieldSize;
@property (nonatomic) BOOL shouldLoadFallbackTiles;
@property (nonatomic) BOOL shouldLoadMapMargin;
@property (nonatomic) BOOL showsBuildings;
@property (nonatomic) BOOL showsPointsOfInterest;
@property (nonatomic) shared_ptr_a3c46825 styleManager;
@property (readonly) Class superclass;
@property (nonatomic) BOOL trafficEnabled;
@property (nonatomic) BOOL trafficIncidentsEnabled;
@property (readonly, nonatomic) NSArray *visibleTileSets;

+ (BOOL)supportsMapType:(long long)arg1 scale:(int)arg2 manifestConfiguration:(id)arg3;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(struct DisplayStyle)arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (void)_updateViewTransform;
- (void)addAnnotationMarker:(id)arg1;
- (void)addCustomFeatureDataSource:(id)arg1;
- (void)addExternalAnchor:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (CDUnknownBlockType)annotationCoordinateTest;
- (id)annotationMarkers;
- (CDUnknownBlockType)annotationRectTest;
- (unsigned char)applicationUILayout;
- (id)attributionsForCurrentRegion;
- (void)beginStyleAnimationGroup;
- (id)boundsForSelectedTransitLines;
- (shared_ptr_430519ce)buildingMarkerAtScreenPoint:(struct CGPoint)arg1;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 canZoomInDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)cameraController:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)cameraControllerDidFinishInitialTrackingAnimation:(id)arg1;
- (void)cameraControllerRequestsLayout:(id)arg1;
- (void)clearScene;
- (void)clearSceneIsEffectivelyHidden:(BOOL)arg1;
- (shared_ptr_27db7edb)closestRoadMarkerForSelectionAtPoint:(struct CGPoint)arg1;
- (id)consoleString:(BOOL)arg1;
- (struct CGPoint)convertCoordinateToCameraModelPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertCoordinateToPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertMapPointToPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)convertPointToCoordinate:(struct CGPoint)arg1;
- (CDStruct_c3b9c2ee)convertPointToMapPoint:(struct CGPoint)arg1;
- (long long)currentMapMode;
- (BOOL)currentSceneRequiresMSAA;
- (void)dealloc;
- (void)debugHighlightFeatureMarker:(const shared_ptr_430519ce *)arg1;
- (void)debugHighlightObjectAtPoint:(struct CGPoint)arg1 highlightTarget:(unsigned char)arg2;
- (void)deselectLabelMarker;
- (void)deselectTransitLineMarker;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (void)didBeginTransitionToTransit;
- (void)endStyleAnimationGroup;
- (shared_ptr_430519ce)featureMarkerAtScreenPoint:(struct CGPoint)arg1;
- (void)finishStyleBlend;
- (void)forceSceneLoad;
- (void)gglWillDrawWithTimestamp;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (id)initWithTarget:(id)arg1 inBackground:(BOOL)arg2 manifestConfiguration:(id)arg3 locale:(id)arg4;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (BOOL)isPointValidForGesturing:(struct CGPoint)arg1;
- (BOOL)isShowingNoDataPlaceholders;
- (shared_ptr_2d33c5e4)labelMarkerForCustomFeatureAnnotation:(id)arg1 dataSource:(id)arg2;
- (shared_ptr_2d33c5e4)labelMarkerForSelectionAtPoint:(struct CGPoint)arg1 selectableLabelsOnly:(BOOL)arg2;
- (vector_af4a736d)labelMarkers;
- (void)mapModel:(id)arg1 didUpdateContainsOverlay:(BOOL)arg2;
- (id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapModel:(id)arg1 selectedLabelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg2;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg2;
- (void)mapModel:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidReloadStylesheet:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;
- (void)mapModelLabelsDidLayout:(id)arg1;
- (void)mapModelStylesheetDidChange:(id)arg1;
- (void)mapModelWillBecomeFullyDrawn:(id)arg1;
- (id)overlays;
- (id)persistentOverlays;
- (void)preloadNavigationSceneResourcesWithDevice:(const shared_ptr_807ec9ac *)arg1;
- (void)reloadStylesheet;
- (void)removeAnnotationMarker:(id)arg1;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)removeExternalAnchor:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (void)removeRasterOverlay:(id)arg1;
- (void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(struct DisplayStyle)arg2 setupHandler:(CDUnknownBlockType)arg3;
- (void)resetRenderQueue:(shared_ptr_06328420)arg1;
- (void)resetTileContainers;
- (vector_8bf6b0e5)roadMarkersForSelectionAtScreenPoint:(struct CGPoint)arg1;
- (void)selectLabelMarker:(const shared_ptr_2d33c5e4 *)arg1;
- (void)selectTransitLineMarker:(id)arg1;
- (shared_ptr_2d33c5e4)selectedLabelMarker;
- (id)selectedTransitLineIDs;
- (void)setApplicationState:(unsigned char)arg1;
- (void)setApplicationUILayout:(unsigned char)arg1;
- (void)setCameraHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3;
- (void)setContentsScale:(double)arg1;
- (void)setCurrentLocationText:(id)arg1;
- (void)setDesiredMapMode:(long long)arg1 immediate:(BOOL)arg2;
- (void)setHidden:(BOOL)arg1;
- (void)setMapType:(long long)arg1 animated:(BOOL)arg2;
- (void)setNeedsDisplay;
- (void)setRouteContext:(id)arg1;
- (void)setShouldLimitTrackingCameraHeight:(BOOL)arg1;
- (void)setStylesheetMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)setStylesheetName:(const basic_string_805fe43b *)arg1;
- (void)setTargetDisplay:(unsigned char)arg1;
- (void)setVehicleState:(struct VehicleState)arg1;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (struct DisplayStyle)sourceMapDisplayStyle;
- (shared_ptr_144c31f6)styleAtScreenPoint:(struct CGPoint)arg1;
- (shared_ptr_144c31f6)styleForFeature:(const shared_ptr_430519ce *)arg1;
- (shared_ptr_664b6d77)stylesheet;
- (void)stylesheetAnimationDidEnd:(BOOL)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(struct DisplayStyle)arg1 toStyle:(struct DisplayStyle)arg2;
- (BOOL)supportsMapDisplayStyle:(struct DisplayStyle)arg1;
- (unsigned char)targetDisplay;
- (void)transferStateFromCanvas:(id)arg1;
- (id)transitLineMarkersForSelectionAtPoint:(struct CGPoint)arg1;
- (id)transitLineMarkersInCurrentViewport;
- (void)transitionToTracking:(BOOL)arg1 mapMode:(long long)arg2 cameraController:(id)arg3 pounceCompletionHandler:(CDUnknownBlockType)arg4;
- (void)updateCameraForFrameResize;
- (struct VehicleState)vehicleState;

@end

