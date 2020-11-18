//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKVariableDelayTapRecognizerDelegate-Protocol.h>
#import <MapKit/UIGestureRecognizerDelegate-Protocol.h>
#import <MapKit/_MKUserInteractionGestureRecognizerTouchObserver-Protocol.h>

@class MKBasicMapView, MKCompassView, MKRotationFilter, MKScaleView, MKTiltGestureRecognizer, MKVariableDelayTapRecognizer, NSString, UIGestureRecognizer, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer, UITraitCollection, VKCompoundAnimation, VKDynamicAnimation, VKTimedAnimation, _MKConditionalPanRotationGestureRecognizer, _MKConditionalPanTiltGestureRecognizer, _MKConditionalPanZoomGestureRecognizer, _MKDirectionalArrowRecognizer, _MKOneHandedZoomGestureRecognizer, _MKUserInteractionGestureRecognizer, _MKZoomingGestureControlConfiguration, _UIInterruptScrollDecelerationGestureRecognizer;
@protocol MKMapGestureControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKMapGestureController : NSObject <MKVariableDelayTapRecognizerDelegate, _MKUserInteractionGestureRecognizerTouchObserver, UIGestureRecognizerDelegate>
{
    MKBasicMapView *_mapView;
    id<MKMapGestureControllerDelegate> _delegate;
    MKScaleView *_scaleView;
    MKCompassView *_compassView;
    MKRotationFilter *_rotationFilter;
    BOOL _rotationSnappingEnabled;
    MKVariableDelayTapRecognizer *_doubleTapGestureRecognizer;
    UITapGestureRecognizer *_twoFingerTapGestureRecognizer;
    UILongPressGestureRecognizer *_twoFingerLongPressGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    _MKOneHandedZoomGestureRecognizer *_oneHandedZoomGestureRecognizer;
    _MKZoomingGestureControlConfiguration *_zoomConfiguration;
    struct CGPoint _panRotateStartPoint;
    struct CGPoint _panZoomStartPoint;
    UIPanGestureRecognizer *_scaleDragGestureRecognizer;
    _MKConditionalPanRotationGestureRecognizer *_conditionalPanRotationGestureRecognizer;
    _MKConditionalPanZoomGestureRecognizer *_conditionalPanZoomGestureRecognizer;
    _MKConditionalPanTiltGestureRecognizer *_conditionalPanTiltGestureRecognizer;
    _UIInterruptScrollDecelerationGestureRecognizer *_gestureInterruptionRecognizer;
    _MKDirectionalArrowRecognizer *_activeArrowGestureRecognizer;
    _MKDirectionalArrowRecognizer *_arrowZoomGestureRecognizer;
    _MKDirectionalArrowRecognizer *_arrowRotateGestureRecognizer;
    _MKDirectionalArrowRecognizer *_arrowPanGestureRecognizer;
    VKTimedAnimation *_currentArrowAnimation;
    double _arrowZoomSpeed;
    double _arrowZoomStartTimestamp;
    double _pinchFactorAverageInGesture;
    double _lastPinchUpdateTimestamp;
    double _lastScale;
    VKDynamicAnimation *_pinchDecelerationAnimation;
    VKCompoundAnimation *_panDecelerationAnimationGroup;
    long long _gestureCount;
    BOOL _panWithMomentum;
    _MKUserInteractionGestureRecognizer *_touchGestureRecognizer;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    VKDynamicAnimation *_rotationDecelerationAnimation;
    MKTiltGestureRecognizer *_tiltGestureRecognizer;
    VKDynamicAnimation *_tiltDecelerationAnimation;
    BOOL _didStartLongPress;
    BOOL _isPanning;
    BOOL _isPinching;
    UITraitCollection *_traitCollection;
    double _lastZoomPanTranslation;
    struct CGPoint _scrollTranslation;
    struct CGPoint _lastArrowScrollTranslationDelta;
    BOOL _isFullRotatingFromArrows;
    double _lastRotationInGestureDelta;
    double _lastRotation;
}

@property (strong, nonatomic) MKCompassView *compassView; // @synthesize compassView=_compassView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MKMapGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MKBasicMapView *mapView; // @synthesize mapView=_mapView;
@property (readonly, nonatomic) UIGestureRecognizer *oneHandedZoomGestureRecognizer;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property (nonatomic) BOOL panWithMomentum; // @synthesize panWithMomentum=_panWithMomentum;
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property (nonatomic, getter=isRotationEnabled) BOOL rotationEnabled;
@property (strong, nonatomic) MKRotationFilter *rotationFilter; // @synthesize rotationFilter=_rotationFilter;
@property (readonly, nonatomic) UIRotationGestureRecognizer *rotationGestureRecognizer; // @synthesize rotationGestureRecognizer=_rotationGestureRecognizer;
@property (strong, nonatomic) MKScaleView *scaleView; // @synthesize scaleView=_scaleView;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTiltEnabled) BOOL tiltEnabled;
@property (readonly, nonatomic) UILongPressGestureRecognizer *twoFingerLongPressGestureRecognizer; // @synthesize twoFingerLongPressGestureRecognizer=_twoFingerLongPressGestureRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *twoFingerTapGestureRecognizer; // @synthesize twoFingerTapGestureRecognizer=_twoFingerTapGestureRecognizer;
@property (nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;

- (void).cxx_destruct;
- (void)_clearGesture:(id)arg1;
- (void)_handleInterrupt:(id)arg1;
- (void)_handleRotationPan:(id)arg1;
- (void)_handleStandardTilt:(id)arg1;
- (void)_handleZoomPan:(id)arg1;
- (void)_setOneHandedZoomGestureConfiguration:(id)arg1;
- (void)_setTraitCollection:(id)arg1;
- (struct CGPoint)_snapPointToDevicePixels:(struct CGPoint)arg1;
- (void)_updateRotationGestureForState:(long long)arg1 focusPoint:(struct CGPoint)arg2 rotation:(double)arg3 velocity:(double)arg4;
- (void)_updateZoomGestureForState:(long long)arg1 focusPoint:(struct CGPoint)arg2 scale:(double)arg3 velocity:(double)arg4 gestureType:(long long)arg5 configuration:(id)arg6;
- (void)beginGesturing;
- (void)cancelZoomInOrOut;
- (void)clearGestureRecognizersInFlight;
- (void)dealloc;
- (void)endGesturing;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)gestureRecognizerTouchesBegan:(id)arg1;
- (void)gestureRecognizerTouchesCanceled:(id)arg1;
- (void)gestureRecognizerTouchesEnded:(id)arg1;
- (void)handleArrowPan:(id)arg1;
- (void)handleArrowRotate:(id)arg1;
- (void)handleArrowZoom:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handlePanZoom:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)handleRotation:(id)arg1;
- (void)handleTilt:(id)arg1;
- (void)handleTouch:(id)arg1;
- (void)handleTwoFingerLongPress:(id)arg1;
- (void)handleTwoFingerTap:(id)arg1;
- (void)handleZoomArrowMask:(long long)arg1 speed:(double)arg2;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 doubleTapTargetView:(id)arg3;
- (void)startUserInteractionFromExternalGesture;
- (void)stopDynamicAnimations;
- (void)stopUserInteractionFromExternalGesture;
- (BOOL)tiltGestureRecognizerShouldBegin:(id)arg1;
- (double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;
- (void)zoomIn;
- (void)zoomOut;

@end
