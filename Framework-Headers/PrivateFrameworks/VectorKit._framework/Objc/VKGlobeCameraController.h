//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKScreenCameraController.h>

#import <VectorKit/VKInteractiveCameraController-Protocol.h>

@class GEOMapRegion, NSString;

__attribute__((visibility("hidden")))
@interface VKGlobeCameraController : VKScreenCameraController <VKInteractiveCameraController>
{
    struct GlobeView *_globeView;
    struct CameraManager _cameraManager;
    double _currentDoublePanPitch;
    BOOL _isPitching;
    BOOL _isRotating;
    BOOL _wasPitched;
    BOOL _couldEnter3DMode;
    int _flyoverMode;
}

@property (readonly, nonatomic) CDStruct_071ac149 centerCoordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int flyoverMode; // @synthesize flyoverMode=_flyoverMode;
@property (nonatomic) struct GlobeView *globeView; // @synthesize globeView=_globeView;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) GEOMapRegion *mapRegionOfInterest;
@property (readonly, nonatomic) double pitch;
@property (readonly, nonatomic) double presentationYaw;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double yaw;

- (id).cxx_construct;
- (void).cxx_destruct;
- (CDStruct_c3b9c2ee)_centerCoordinateForMapRegion:(id)arg1;
- (struct CGPoint)_centerScreenPoint;
- (struct Vector2i)_cursorFromScreenPoint:(struct CGPoint)arg1;
- (void)_rotateAroundTargetWithDuration:(double)arg1 rotations:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGPoint)_scaledScreenPointForPoint:(struct CGPoint)arg1;
- (void)_updateCanEnter3DMode;
- (void)_updateGlobeFromCamera;
- (void)_updateIsPitched;
- (void)adjustLoadingForAnimation:(float)arg1 progressFactor:(float)arg2;
- (double)altitude;
- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (struct PositionGeo3d)cameraPosition;
- (BOOL)canEnter3DMode;
- (BOOL)currentZoomLevelAllowsRotation;
- (void)dealloc;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (double)earthRadiusAt:(double)arg1;
- (void)enter3DMode;
- (void)exit3DMode;
- (void)flyoverTourAnimation:(id)arg1 animateToStart:(BOOL)arg2 labelChanged:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;
- (double)geocAngleBetween:(CDStruct_c3b9c2ee)arg1 andCoordinate:(CDStruct_c3b9c2ee)arg2;
- (double)greatCircleMidPointLatitude:(double)arg1 deltaLongitude:(double)arg2;
- (id)init;
- (void)interruptFlyoverTourAnimation;
- (BOOL)isFlyoverTourStarted;
- (BOOL)isFullyPitched;
- (BOOL)isPitched;
- (long long)maximumNormalizedZoomLevel;
- (long long)minimumNormalizedZoomLevel;
- (void)moveTo:(CDStruct_c3b9c2ee)arg1 height:(double)arg2 useHeight:(BOOL)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (void)moveTo:(CDStruct_c3b9c2ee)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)moveToZoomOutZoomInTransition:(CDStruct_c3b9c2ee)arg1 height:(double)arg2 useHeight:(BOOL)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)pauseFlyoverTourAnimation;
- (void)pitch:(struct CGPoint)arg1 translation:(double)arg2;
- (BOOL)restoreViewportFromInfo:(id)arg1;
- (void)resumeFlyoverTourAnimation;
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)rotateTo:(double)arg1 animated:(BOOL)arg2;
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)setGesturing:(BOOL)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setYaw:(double)arg1 animated:(BOOL)arg2;
- (void)showSearchResultAnimationAtCoordinate:(CDStruct_c3b9c2ee)arg1 withZoom:(double)arg2;
- (float)slowDownFactorFromLoadProgress;
- (BOOL)snapMapIfNecessary:(const struct VKPoint *)arg1 animated:(BOOL)arg2;
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(BOOL)arg2;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
- (void)stopFlyoverTourAnimation;
- (void)stopGlobeAnimations;
- (void)stopPanningAtPoint:(struct CGPoint)arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopSearchResultAnimation;
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)tileSize;
- (void)tiltTo:(double)arg1 animated:(BOOL)arg2 exaggerate:(BOOL)arg3;
- (void)transitionToFlyoverMode:(int)arg1 animated:(BOOL)arg2;
- (void)updateCameraManager;
- (void)updateFlyoverMode;
- (void)updatePanWithTranslation:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (id)viewportInfo;
- (double)widestLatitudeForMapRegion:(id)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (double)zoomForMapRegion:(id)arg1;
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3;
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

