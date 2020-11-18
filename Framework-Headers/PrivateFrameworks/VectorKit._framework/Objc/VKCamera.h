//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VKCameraRegionRestriction, VKFootprint, VKViewVolume;

__attribute__((visibility("hidden")))
@interface VKCamera : NSObject
{
    struct RunLoopController *_runLoopController;
    CDStruct_7a7719de _frustum;
    double _minHeight;
    double _maxHeight;
    double _maxPitch;
    double _terrainHeight;
    double _maxFarClipDistance;
    BOOL _needsUpdate;
    BOOL _updating;
    VKViewVolume *_viewVolume;
    VKFootprint *_footprint;
    double _tanHalfHorizFOV;
    double _tanHalfVerticalFOV;
    Matrix_6e1d3589 _forward;
    Matrix_6e1d3589 _right;
    Matrix_6e1d3589 _up;
    double _fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
    double _distanceToGroundAndFarClipPlaneIntersection;
    double _screenHeightOfGroundAndFarClipPlaneIntersection;
    BOOL _allowDatelineWraparound;
    double _canonicalPitch;
    double _horizontalOffset;
    double _ndcZNear;
    double _aspectRatio;
    Unit_3d259e8a _verticalFieldOfView;
    double _near;
    double _far;
    double _width;
    double _height;
    RigidTransform_b9386d13 _transform;
    Matrix_08d701e4 _scaledViewMatrix;
    Matrix_08d701e4 _scaledProjectionMatrix;
    Matrix_08d701e4 _scaledViewProjectionMatrix;
    Matrix_08d701e4 _unscaledViewMatrix;
    Matrix_08d701e4 _unscaledProjectionMatrix;
    Matrix_08d701e4 _worldMatrix;
    double _maxHeightNoPitch;
    VKCameraRegionRestriction *_regionRestriction;
    optional_76e85d3d _minDistanceToGroundRestriction;
    optional_76e85d3d _maxDistanceToGroundRestriction;
}

@property (nonatomic) BOOL allowDatelineWraparound; // @synthesize allowDatelineWraparound=_allowDatelineWraparound;
@property (nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property (nonatomic) struct VKCameraState cameraState;
@property (nonatomic) double canonicalPitch; // @synthesize canonicalPitch=_canonicalPitch;
@property (readonly, nonatomic) double distanceToGroundAndFarClipPlaneIntersection; // @synthesize distanceToGroundAndFarClipPlaneIntersection=_distanceToGroundAndFarClipPlaneIntersection;
@property (readonly, nonatomic) double farClipDistance;
@property (readonly, nonatomic) VKFootprint *footprint;
@property (readonly, nonatomic) Matrix_6e1d3589 forwardVector;
@property (nonatomic) double fractionOfScreenAboveFarClipPlaneAtCanonicalPitch; // @synthesize fractionOfScreenAboveFarClipPlaneAtCanonicalPitch=_fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
@property (readonly, nonatomic) CDStruct_7a7719de frustum;
@property (readonly, nonatomic) Matrix_6e1d3589 groundPoint;
@property (readonly, nonatomic) Unit_3d259e8a horizontalFieldOfView;
@property (nonatomic) double horizontalOffset; // @synthesize horizontalOffset=_horizontalOffset;
@property (nonatomic) optional_76e85d3d maxDistanceToGroundRestriction; // @synthesize maxDistanceToGroundRestriction=_maxDistanceToGroundRestriction;
@property (nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property (nonatomic) double maxHeightNoPitch; // @synthesize maxHeightNoPitch=_maxHeightNoPitch;
@property (nonatomic) double maxPitch; // @synthesize maxPitch=_maxPitch;
@property (nonatomic) optional_76e85d3d minDistanceToGroundRestriction; // @synthesize minDistanceToGroundRestriction=_minDistanceToGroundRestriction;
@property (nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property (nonatomic) double ndcZNear; // @synthesize ndcZNear=_ndcZNear;
@property (readonly, nonatomic) double nearClipDistance;
@property (nonatomic) const Quaternion_febf9140 *orientation;
@property (readonly, nonatomic) double pitch;
@property (nonatomic) const Matrix_6e1d3589 *position;
@property (strong, nonatomic) VKCameraRegionRestriction *regionRestriction; // @synthesize regionRestriction=_regionRestriction;
@property (readonly, nonatomic) Matrix_6e1d3589 rightVector;
@property (readonly, nonatomic) const Matrix_08d701e4 *scaledProjectionMatrix;
@property (readonly, nonatomic) const Matrix_08d701e4 *scaledViewMatrix;
@property (readonly, nonatomic) const Matrix_08d701e4 *scaledViewProjectionMatrix;
@property (readonly, nonatomic) double screenHeightOfGroundAndFarClipPlaneIntersection; // @synthesize screenHeightOfGroundAndFarClipPlaneIntersection=_screenHeightOfGroundAndFarClipPlaneIntersection;
@property (readonly, nonatomic) double tanHalfHorizFOV;
@property (readonly, nonatomic) double tanHalfVerticalFOV;
@property (nonatomic) double terrainHeight; // @synthesize terrainHeight=_terrainHeight;
@property (readonly, nonatomic) const Matrix_08d701e4 *unscaledProjectionMatrix;
@property (readonly, nonatomic) const Matrix_08d701e4 *unscaledViewMatrix;
@property (readonly, nonatomic) Matrix_6e1d3589 upVector;
@property (nonatomic) Unit_3d259e8a verticalFieldOfView;
@property (readonly, nonatomic) VKViewVolume *viewVolume;
@property (readonly, nonatomic) double yaw;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setPosition:(const Matrix_6e1d3589 *)arg1;
- (void)adjustClipPlanes;
- (CDUnknownBlockType)annotationCoordinateTest;
- (CDUnknownBlockType)annotationRectTest;
- (CameraFrame_406dbd31)cameraFrame;
- (void)dealloc;
- (double)depthForViewWidth:(double)arg1;
- (id)description;
- (id)descriptionDictionaryRepresentation;
- (id)detailedDescription;
- (double)displayZoomLevel;
- (Matrix_6e1d3589)groundPlaneIntersectionPoint;
- (Matrix_6e1d3589)groundPointFromScreenPoint:(struct CGPoint)arg1;
- (Matrix_6e1d3589)groundPointFromScreenPoint:(struct CGPoint)arg1 atGroundLevel:(double)arg2;
- (id)initWithRunLoopController:(struct RunLoopController *)arg1;
- (BOOL)isOuterWorldBoundsVisible;
- (BOOL)isWorldSpaceRectVisible:(const Box_3d7e3c2c *)arg1;
- (float)maximumStyleZForRect:(const Box_3d7e3c2c *)arg1;
- (Mercator3_d8bb135c)mercatorPosition;
- (void)setMercatorPosition:(const Mercator3_d8bb135c *)arg1;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;
- (View_a667aa2f)view:(struct ViewSize)arg1;
- (double)widthOfViewAtDepth:(double)arg1;
- (float)zoomAtCentrePoint;
- (float)zoomAtPoint:(struct CGPoint)arg1;

@end
