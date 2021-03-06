//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/SCNCameraControllerDelegate-Protocol.h>
#import <SceneKit/SCNEventHandler-Protocol.h>

@class MISSING_TYPE, NSDictionary, NSString, SCNCameraController, SCNNode, SCNView, UIGestureRecognizer;
@protocol SCNCameraNavigationControllerDelegate;

@interface SCNCameraNavigationController : NSObject <SCNEventHandler, SCNCameraControllerDelegate>
{
    UIGestureRecognizer *_pressGesture;
    UIGestureRecognizer *_tapGesture;
    UIGestureRecognizer *_pinchGesture;
    UIGestureRecognizer *_panGesture;
    UIGestureRecognizer *_rotateGesture;
    BOOL _isDraggingWithOneFinger;
    long long _lastGestureFingerCount;
    long long _browseMode;
    float _cameraOriginalFieldOfView;
    float _fieldOfViewZoomFactor;
    float _originalOrthoScale;
    float _orthographicZoomFactor;
    BOOL _enabled;
    BOOL _translationAllowed;
    BOOL _didEverFocusNode;
    BOOL _isSceneBoundingSphereComputed;
    BOOL _cameraTargetComputed;
    BOOL _pinchShouldMoveCamera;
    BOOL _shouldUpdateTarget;
    BOOL _shouldIgnoreMomentumEvents;
    BOOL _isOrbiting;
    BOOL _recordingPointOfViewEvents;
    BOOL _mouseDown;
    CDUnion_915c2b1f _sceneBoundingSphere;
    MISSING_TYPE *_translationOrigin;
    float _initialZoom;
    MISSING_TYPE *_initialPointOfViewWorldPosition;
    double _lastKeyInputTime;
    double _flyModeVelocity;
    double _panSensitivity;
    double _truckSensitivity;
    double _rotationSensitivity;
    struct CGPoint _initialInputLocation;
    struct CGPoint _lastInputLocation;
    struct CGPoint _accumulatedDrag;
    double _lastRotationAngle;
    struct os_unfair_lock_s _drawAtTimeLock;
    struct {
        BOOL stickyMoveEnabled;
        unsigned long long direction__pickedAxis;
        unsigned long long userStickyAxis;
    } _stickyAxis;
    struct {
        BOOL automaticLocationUpToDate;
        BOOL hasAutomatic;
    } _target;
    struct {
        struct CGPoint lastDragLocation;
        struct CGPoint velocity;
        double lastDragTime;
    } _inertia;
    struct {
        struct os_unfair_lock_s lock;
        NSDictionary *keyCodeConfiguration;
        struct set<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short>> keyDown;
        struct vector<unsigned short, std::__1::allocator<unsigned short>> forward;
        struct vector<unsigned short, std::__1::allocator<unsigned short>> backward;
        struct vector<unsigned short, std::__1::allocator<unsigned short>> left;
        struct vector<unsigned short, std::__1::allocator<unsigned short>> right;
    } _keyboard;
    struct {
        BOOL hasShift;
        BOOL hasOption;
    } _scrollWheelModifiers;
    BOOL _enableFreeCamera;
    BOOL _autoSwitchToFreeCamera;
    SCNCameraController *_cameraController;
    id<SCNCameraNavigationControllerDelegate> _delegate;
    SCNView *_view;
    SCNNode *_freeViewCameraNode;
}

@property (nonatomic) BOOL allowsTranslation;
@property (nonatomic) BOOL autoSwitchToFreeCamera; // @synthesize autoSwitchToFreeCamera=_autoSwitchToFreeCamera;
@property (nonatomic) BOOL automaticCameraTarget;
@property (readonly, nonatomic) SCNCameraController *cameraController; // @synthesize cameraController=_cameraController;
@property (nonatomic) struct SCNVector3 cameraTarget;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<SCNCameraNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableFreeCamera; // @synthesize enableFreeCamera=_enableFreeCamera;
@property (nonatomic) BOOL enableInertia;
@property (nonatomic) BOOL enabled;
@property (nonatomic) double flyModeVelocity; // @synthesize flyModeVelocity=_flyModeVelocity;
@property (readonly, nonatomic) SCNNode *freeCamera; // @synthesize freeCamera=_freeViewCameraNode;
@property (nonatomic) double friction;
@property (nonatomic) BOOL gimbalLockMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) double panSensitivity; // @synthesize panSensitivity=_panSensitivity;
@property (nonatomic) double rotationSensitivity; // @synthesize rotationSensitivity=_rotationSensitivity;
@property (nonatomic) unsigned long long stickyAxis;
@property (readonly) Class superclass;
@property (nonatomic) double truckSensitivity; // @synthesize truckSensitivity=_truckSensitivity;
@property (nonatomic) SCNView *view; // @synthesize view=_view;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)__didChangePointOfView;
- (void)__willChangePointOfView;
- (float)_cappedTranslationDelta:(float)arg1;
- (void)_computeAutomaticTargetPointIfNeeded;
- (BOOL)_computeBoundingSphereOmittingFloorsForNode:(struct __C3DNode *)arg1 sphere:(struct C3DSphere *)arg2;
- (void)_computeStickyAxisIfNeeded:(struct CGPoint)arg1;
- (void)_computeTranslationOrigin3DFromPoint:(struct CGPoint)arg1;
- (MISSING_TYPE *)_defaultTargetForScene:(id)arg1;
- (unsigned long long)_effectiveStickyAxis;
- (BOOL)_freeCameraActivated;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_handlePress:(id)arg1;
- (void)_handleRotation:(id)arg1;
- (void)_installFreeViewCameraIfNeeded;
- (double)_modeSensitivity;
- (float)_orthographicScaleForZoomFactor:(float)arg1;
- (float)_orthographicZoomFactorForProposedZoomFactor:(float)arg1;
- (float)_pointOfViewOrthographicScale;
- (BOOL)_pointOfViewUsesOrthographicProjection;
- (void)_prepareFreeViewCamera;
- (void)_resetFreeViewCamera;
- (CDUnion_915c2b1f)_sceneBoundingSphere;
- (void)_setPointOfViewOrthographicScale:(float)arg1;
- (void)_setupUpVector;
- (void)_startBrowsingIfNeeded:(struct CGPoint)arg1;
- (void)_stopInertia;
- (void)_switchToFreeViewCamera;
- (float)_targetDistance;
- (void)_translateToViewPoint:(struct CGPoint)arg1;
- (float)_translationCoef;
- (void)_willBeginInteraction;
- (void)activateFreeCamera;
- (void)beginGesture:(id)arg1;
- (struct SCNVector3)cameraAutomaticTargetPoint;
- (void)cameraDidChange;
- (void)cameraInertiaDidEndForController:(id)arg1;
- (void)cameraInertiaWillStartForController:(id)arg1;
- (void)cameraWillChange;
- (void)dealloc;
- (void)focusNode:(id)arg1;
- (void)focusNodes:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureRecognizers;
- (struct SCNVector3)gimbalLockVector;
- (id)initWithView:(id)arg1;
- (void)invalidateCameraTarget;
- (void)panWithGestureRecognizer:(id)arg1;
- (void)pinchWithGestureRecognizer:(id)arg1;
- (id)pointOfView;
- (void)rotateOf:(double)arg1;
- (void)rotateWithGestureRecognizer:(id)arg1;
- (void)sceneDidChange;
- (void)sceneWillChange;
- (void)setGimbalLockVector:(struct SCNVector3)arg1;
- (void)setZoomFactor:(double)arg1;
- (void)translateByX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)viewDidDrawAtTime:(double)arg1;
- (void)viewWillDrawAtTime:(double)arg1;
- (BOOL)wantsRedraw;
- (MISSING_TYPE *)worldFront;
- (void)zoomBy:(float)arg1;
- (void)zoomBy:(float)arg1 animate:(BOOL)arg2;
- (double)zoomFactor;

@end

